// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190620.2

#ifndef WINRT_Windows_ApplicationModel_Preview_Holographic_2_H
#define WINRT_Windows_ApplicationModel_Preview_Holographic_2_H
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Holographic.1.h"
namespace winrt::Windows::ApplicationModel::Preview::Holographic
{
    struct HolographicApplicationPreview
    {
        HolographicApplicationPreview() = delete;
        static auto IsCurrentViewPresentedOnHolographicDisplay();
        static auto IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs);
    };
    struct __declspec(empty_bases) HolographicKeyboardPlacementOverridePreview : Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview
    {
        HolographicKeyboardPlacementOverridePreview(std::nullptr_t) noexcept {}
        HolographicKeyboardPlacementOverridePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Preview::Holographic::IHolographicKeyboardPlacementOverridePreview(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
}
#endif
