// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190620.2

#ifndef WINRT_Windows_Gaming_Input_Custom_1_H
#define WINRT_Windows_Gaming_Input_Custom_1_H
#include "winrt/impl/Windows.Gaming.Input.Custom.0.h"
namespace winrt::Windows::Gaming::Input::Custom
{
    struct __declspec(empty_bases) ICustomGameControllerFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICustomGameControllerFactory>
    {
        ICustomGameControllerFactory(std::nullptr_t = nullptr) noexcept {}
        ICustomGameControllerFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGameControllerFactoryManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameControllerFactoryManagerStatics>
    {
        IGameControllerFactoryManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IGameControllerFactoryManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGameControllerFactoryManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameControllerFactoryManagerStatics2>,
        impl::require<Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>
    {
        IGameControllerFactoryManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IGameControllerFactoryManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGameControllerInputSink :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameControllerInputSink>
    {
        IGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
        IGameControllerInputSink(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGameControllerProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGameControllerProvider>
    {
        IGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
        IGameControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGipFirmwareUpdateResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGipFirmwareUpdateResult>
    {
        IGipFirmwareUpdateResult(std::nullptr_t = nullptr) noexcept {}
        IGipFirmwareUpdateResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGipGameControllerInputSink :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGipGameControllerInputSink>,
        impl::require<Windows::Gaming::Input::Custom::IGipGameControllerInputSink, Windows::Gaming::Input::Custom::IGameControllerInputSink>
    {
        IGipGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
        IGipGameControllerInputSink(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGipGameControllerProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGipGameControllerProvider>,
        impl::require<Windows::Gaming::Input::Custom::IGipGameControllerProvider, Windows::Gaming::Input::Custom::IGameControllerProvider>
    {
        IGipGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
        IGipGameControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHidGameControllerInputSink :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHidGameControllerInputSink>,
        impl::require<Windows::Gaming::Input::Custom::IHidGameControllerInputSink, Windows::Gaming::Input::Custom::IGameControllerInputSink>
    {
        IHidGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
        IHidGameControllerInputSink(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHidGameControllerProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHidGameControllerProvider>,
        impl::require<Windows::Gaming::Input::Custom::IHidGameControllerProvider, Windows::Gaming::Input::Custom::IGameControllerProvider>
    {
        IHidGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
        IHidGameControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IXusbGameControllerInputSink :
        Windows::Foundation::IInspectable,
        impl::consume_t<IXusbGameControllerInputSink>,
        impl::require<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink, Windows::Gaming::Input::Custom::IGameControllerInputSink>
    {
        IXusbGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
        IXusbGameControllerInputSink(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IXusbGameControllerProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IXusbGameControllerProvider>,
        impl::require<Windows::Gaming::Input::Custom::IXusbGameControllerProvider, Windows::Gaming::Input::Custom::IGameControllerProvider>
    {
        IXusbGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
        IXusbGameControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
