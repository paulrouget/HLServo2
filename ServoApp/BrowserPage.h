#pragma once

#include "BrowserPage.g.h"
#include "ImmersiveView.h"
#include "OpenGLES.h"
#include "Servo.h"

namespace winrt::ServoApp::implementation
{
  struct BrowserPage : BrowserPageT<BrowserPage>
  {
  public:
    BrowserPage();

    void OnImmersiveButtonClicked(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);

  private:
    void OnVisibilityChanged(bool);
    void OnPageLoaded();

    void CreateRenderSurface();
    void DestroyRenderSurface();
    void RecoverFromLostDevice();

    void StartRenderLoop();
    void StopRenderLoop();
    void Loop(Concurrency::cancellation_token);
    bool IsLoopRunning();

    Concurrency::cancellation_token_source mLoopCancel;
    std::unique_ptr<Concurrency::task<void>> mLoopTask;
    winrt::ServoApp::ImmersiveViewSource mImmersiveViewSource;
    EGLSurface mRenderSurface{ EGL_NO_SURFACE };
    std::unique_ptr<Servo> mServo;

    OpenGLES mOpenGLES; // FIXME: shared pointer
  };
}

namespace winrt::ServoApp::factory_implementation
{
  struct BrowserPage : BrowserPageT<BrowserPage, implementation::BrowserPage>
  {
  };
}
