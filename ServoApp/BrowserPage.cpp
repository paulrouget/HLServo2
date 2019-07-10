#include "pch.h"
#include "logs.h"
#include "BrowserPage.h"
#include "BrowserPage.g.cpp"
#include "ImmersiveView.h"
#include "OpenGLES.h"

// FIXME: necessary for ApplicationView::GetForCurrentView() to work.
// https://devblogs.microsoft.com/oldnewthing/20190530-00/?p=102529
#include "winrt/Windows.UI.ViewManagement.h"

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Core;
using namespace Windows::UI::ViewManagement;
using namespace Windows::Foundation;
using namespace Windows::Graphics::Holographic;
using namespace Concurrency;

static char sWakeupEvent[] = "SIGNAL_WAKEUP";

namespace winrt::ServoApp::implementation
{
    BrowserPage::BrowserPage()
    {
      InitializeComponent();
      auto window = Window::Current().CoreWindow();

      // FIXME:
      //window.VisibilityChanged([this](CoreWindow const& sender, VisibilityChangedEventArgs const& args) {
      //  OnVisibilityChanged(args.Visible());
      //});
      Loaded([this]() {
        OnPageLoaded();
      });
    }

    void BrowserPage::OnPageLoaded()
    {
      CreateRenderSurface();
      StartRenderLoop();
    }

    void BrowserPage::OnImmersiveButtonClicked(IInspectable const&, RoutedEventArgs const& args)
    {
        if (HolographicSpace::IsAvailable())
        {
          log("Holographic space available");
          auto v = winrt::Windows::ApplicationModel::Core::CoreApplication::CreateNewView(ServoApp::ImmersiveViewSource());
            int parentId = ApplicationView::GetForCurrentView().Id();
            v.Dispatcher().RunAsync(Windows::UI::Core::CoreDispatcherPriority::Low, [parentId]() {
            int winId = ApplicationView::GetForCurrentView().Id();
            ApplicationViewSwitcher::TryShowAsStandaloneAsync(winId, ViewSizePreference::Default, parentId, ViewSizePreference::Default);
            log("Immersive view started");
          });
        }
        else {
          log("Holographic space not available");
        }
    }

    void BrowserPage::OnVisibilityChanged(bool visible)
    {
        if (visible && mRenderSurface != EGL_NO_SURFACE) {
          StartRenderLoop();
        }
        else {
          StopRenderLoop();
        }
    }

    void BrowserPage::CreateRenderSurface()
    {
      if (/*mOpenGLES &&*/ mRenderSurface == EGL_NO_SURFACE) {
        mRenderSurface = mOpenGLES.CreateSurface(swapChainPanel());
      }
    }

    void BrowserPage::DestroyRenderSurface()
    {
      // FIXME if (mOpenGLES) {
        mOpenGLES.DestroySurface(mRenderSurface);
      // }
      mRenderSurface = EGL_NO_SURFACE;
    }

    void BrowserPage::RecoverFromLostDevice()
    {
      StopRenderLoop();
      DestroyRenderSurface();
      mOpenGLES.Reset();
      CreateRenderSurface();
      StartRenderLoop();
    }

    IAsyncAction BrowserPage::Loop()
    {

      HANDLE hEvent = ::CreateEventA(nullptr, FALSE, FALSE, sWakeupEvent);

      // Called by Servo
      Servo::sMakeCurrent = [this]() {
        /* EGLint panelWidth = 0; */
        /* EGLint panelHeight = 0; */
        /* mOpenGLES->GetSurfaceDimensions(mRenderSurface, &panelWidth, &panelHeight); */
        /* glViewport(0, 0, panelWidth, panelHeight); */
        /* mServo->SetSize(panelWidth, panelHeight); */
        mOpenGLES.MakeCurrent(mRenderSurface);
      };

      // Called by Servo
      Servo::sFlush = [this]() {
        if (mOpenGLES.SwapBuffers(mRenderSurface) != GL_TRUE) {
          // The call to eglSwapBuffers might not be successful (i.e. due to Device Lost)
          // If the call fails, then we must reinitialize EGL and the GL resources.
          swapChainPanel().Dispatcher().RunAsync(Windows::UI::Core::CoreDispatcherPriority::High, [this]() {
            RecoverFromLostDevice();
          });
        }
      };

      mOpenGLES.MakeCurrent(mRenderSurface);

      EGLint panelWidth = 0;
      EGLint panelHeight = 0;
      mOpenGLES.GetSurfaceDimensions(mRenderSurface, &panelWidth, &panelHeight);
      glViewport(0, 0, panelWidth, panelHeight);
      mServo = new Servo(panelWidth, panelHeight);

      while (mRenderLoop.Status() == Windows::Foundation::AsyncStatus::Started) {
        // Block until Servo::sWakeUp is called.
        // Or run full speed if animating (see on_animating_changed),
        // it will endup blocking on SwapBuffers to limit rendering to 60FPS
        if (!Servo::sAnimating) {
          ::WaitForSingleObject(hEvent, INFINITE);
        }
        mServo->PerformUpdates();
      }
    }

    void BrowserPage::StartRenderLoop()
    {
      if (mRenderLoop != nullptr && mRenderLoop.Status() == AsyncStatus::Started) {
        return;
      }

      Servo::sWakeUp = []() {
        HANDLE hEvent = ::OpenEventA(EVENT_ALL_ACCESS, FALSE, sWakeupEvent);
        ::SetEvent(hEvent);
      };

      mRenderLoop = Loop();
    }

    void BrowserPage::StopRenderLoop()
    {
      if (mRenderLoop) {
        mRenderLoop.Cancel();
        mRenderLoop = nullptr;
      }
    }

}
