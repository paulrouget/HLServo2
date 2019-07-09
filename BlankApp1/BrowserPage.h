#pragma once

#include "BrowserPage.g.h"

namespace winrt::BlankApp1::implementation
{
    struct BrowserPage : BrowserPageT<BrowserPage>
    {
        BrowserPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::BlankApp1::factory_implementation
{
    struct BrowserPage : BrowserPageT<BrowserPage, implementation::BrowserPage>
    {
    };
}