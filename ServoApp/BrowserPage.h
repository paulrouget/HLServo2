#pragma once

#include "BrowserPage.g.h"
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
        Windows::Foundation::IAsyncAction Loop();
        Windows::Foundation::IAsyncAction mRenderLoop;

        EGLSurface mRenderSurface;
        Servo* mServo;

        // FIXME: move to App.cpp? Pass as arg to BrowserPage ctor?
        static OpenGLES mOpenGLES;
    };
}

namespace winrt::ServoApp::factory_implementation
{
    struct BrowserPage : BrowserPageT<BrowserPage, implementation::BrowserPage>
    {
    };
}
