﻿#include "pch.h"
#include "logs.h"
#include "BrowserPage.h"
#include "BrowserPage.g.cpp"
#include "ImmersiveView.h"

// FIXME: necessary for ApplicationView::GetForCurrentView() to work.
// https://devblogs.microsoft.com/oldnewthing/20190530-00/?p=102529
#include "winrt/Windows.UI.ViewManagement.h"

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::ViewManagement;
using namespace Windows::Foundation;
using namespace Windows::Graphics::Holographic;

namespace winrt::BlankApp1::implementation
{
    BrowserPage::BrowserPage()
    {
        InitializeComponent();
    }

    int32_t BrowserPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void BrowserPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void BrowserPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        if (HolographicSpace::IsAvailable())
        {
          log("Holographic space available");
          auto v = winrt::Windows::ApplicationModel::Core::CoreApplication::CreateNewView(Foobar::ImmersiveViewSource());
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
}