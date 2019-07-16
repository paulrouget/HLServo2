#pragma once

#include "BrowserPage.g.h"


namespace winrt::ServoApp::implementation
{
  struct BrowserPage : BrowserPageT<BrowserPage>
  {
    BrowserPage();

    void OnImmersiveButtonClicked(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);

  };
}

namespace winrt::ServoApp::factory_implementation
{
  struct BrowserPage : BrowserPageT<BrowserPage, implementation::BrowserPage>
  {
  };
}
