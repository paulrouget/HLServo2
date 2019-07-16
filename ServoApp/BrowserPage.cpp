#include "pch.h"
#include "BrowserPage.h"
#include "BrowserPage.g.cpp"
#include "ImmersiveView.h"

// FIXME: necessary for ApplicationView::GetForCurrentView() to work.
// https://devblogs.microsoft.com/oldnewthing/20190530-00/?p=102529
#include "winrt/Windows.UI.ViewManagement.h"

using namespace winrt;
using namespace winrt::Windows::UI::Xaml;
using namespace winrt::Windows::UI::Core;
using namespace winrt::Windows::UI::ViewManagement;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Graphics::Holographic;
using namespace Concurrency;

static char sWakeupEvent[] = "SIGNAL_WAKEUP";

namespace winrt::ServoApp::implementation
{
  BrowserPage::BrowserPage()
  {
    InitializeComponent();
  }

  void BrowserPage::OnImmersiveButtonClicked(IInspectable const&, RoutedEventArgs const& args)
  {
    if (HolographicSpace::IsAvailable())
    {
      int parentId = ApplicationView::GetForCurrentView().Id();
      auto v = winrt::Windows::ApplicationModel::Core::CoreApplication::CreateNewView(ServoApp::ImmersiveViewSource());
      v.Dispatcher().RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal, [parentId]() {
        int winId = ApplicationView::GetForCurrentView().Id();
        // ApplicationViewSwitcher::TryShowAsStandaloneAsync(winId, ViewSizePreference::Default, parentId, ViewSizePreference::Default);
        ApplicationViewSwitcher::SwitchAsync(winId, parentId);
      });
    }
  }

}