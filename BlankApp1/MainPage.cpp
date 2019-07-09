#include "pch.h"
#include "logs.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
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
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
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