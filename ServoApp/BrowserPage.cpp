#include "pch.h"
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

namespace winrt::ServoApp::implementation
{
    BrowserPage::BrowserPage()
    {
        InitializeComponent();
    }

    void BrowserPage::OnImmersiveButtonClicked(IInspectable const&, RoutedEventArgs const&)
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
}
