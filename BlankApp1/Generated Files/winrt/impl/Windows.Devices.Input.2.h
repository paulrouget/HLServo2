// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190620.2

#ifndef WINRT_Windows_Devices_Input_2_H
#define WINRT_Windows_Devices_Input_2_H
#include "winrt/impl/Windows.Devices.Input.1.h"
namespace winrt::Windows::Devices::Input
{
    struct MouseDelta
    {
        int32_t X;
        int32_t Y;
    };
    inline bool operator==(MouseDelta const& left, MouseDelta const& right) noexcept
    {
        return left.X == right.X && left.Y == right.Y;
    }
    inline bool operator!=(MouseDelta const& left, MouseDelta const& right) noexcept
    {
        return !(left == right);
    }
    struct PointerDeviceUsage
    {
        uint32_t UsagePage;
        uint32_t Usage;
        int32_t MinLogical;
        int32_t MaxLogical;
        int32_t MinPhysical;
        int32_t MaxPhysical;
        uint32_t Unit;
        float PhysicalMultiplier;
    };
    inline bool operator==(PointerDeviceUsage const& left, PointerDeviceUsage const& right) noexcept
    {
        return left.UsagePage == right.UsagePage && left.Usage == right.Usage && left.MinLogical == right.MinLogical && left.MaxLogical == right.MaxLogical && left.MinPhysical == right.MinPhysical && left.MaxPhysical == right.MaxPhysical && left.Unit == right.Unit && left.PhysicalMultiplier == right.PhysicalMultiplier;
    }
    inline bool operator!=(PointerDeviceUsage const& left, PointerDeviceUsage const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) KeyboardCapabilities : Windows::Devices::Input::IKeyboardCapabilities
    {
        KeyboardCapabilities(std::nullptr_t) noexcept {}
        KeyboardCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::IKeyboardCapabilities(ptr, take_ownership_from_abi) {}
        KeyboardCapabilities();
    };
    struct __declspec(empty_bases) MouseCapabilities : Windows::Devices::Input::IMouseCapabilities
    {
        MouseCapabilities(std::nullptr_t) noexcept {}
        MouseCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::IMouseCapabilities(ptr, take_ownership_from_abi) {}
        MouseCapabilities();
    };
    struct __declspec(empty_bases) MouseDevice : Windows::Devices::Input::IMouseDevice
    {
        MouseDevice(std::nullptr_t) noexcept {}
        MouseDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::IMouseDevice(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) MouseEventArgs : Windows::Devices::Input::IMouseEventArgs
    {
        MouseEventArgs(std::nullptr_t) noexcept {}
        MouseEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::IMouseEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PenDevice : Windows::Devices::Input::IPenDevice
    {
        PenDevice(std::nullptr_t) noexcept {}
        PenDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::IPenDevice(ptr, take_ownership_from_abi) {}
        static auto GetFromPointerId(uint32_t pointerId);
    };
    struct __declspec(empty_bases) PointerDevice : Windows::Devices::Input::IPointerDevice,
        impl::require<PointerDevice, Windows::Devices::Input::IPointerDevice2>
    {
        PointerDevice(std::nullptr_t) noexcept {}
        PointerDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::IPointerDevice(ptr, take_ownership_from_abi) {}
        static auto GetPointerDevice(uint32_t pointerId);
        static auto GetPointerDevices();
    };
    struct __declspec(empty_bases) TouchCapabilities : Windows::Devices::Input::ITouchCapabilities
    {
        TouchCapabilities(std::nullptr_t) noexcept {}
        TouchCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Input::ITouchCapabilities(ptr, take_ownership_from_abi) {}
        TouchCapabilities();
    };
}
#endif
