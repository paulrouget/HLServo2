#pragma once

#include "BrowserPage.g.h"
#include "ImmersiveView.h"
#include "OpenGLES.h"
#include "Servo.h"

namespace winrt::ServoApp::implementation
{
  struct BrowserPage : BrowserPageT<BrowserPage>
  {
    BrowserPage();

    void OnImmersiveButtonClicked(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);

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
    std::optional<Concurrency::task<void>> mLoopTask{};

    winrt::ServoApp::ImmersiveViewSource mImmersiveViewSource;

    EGLSurface mRenderSurface{ EGL_NO_SURFACE };
    Servo* mServo;

    // FIXME:OGL OpenGLES mOpenGLES;
  };
}

namespace winrt::ServoApp::factory_implementation
{
  struct BrowserPage : BrowserPageT<BrowserPage, implementation::BrowserPage>
  {
  };
}
