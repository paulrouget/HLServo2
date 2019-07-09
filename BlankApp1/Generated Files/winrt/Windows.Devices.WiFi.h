// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190620.2

#ifndef WINRT_Windows_Devices_WiFi_H
#define WINRT_Windows_Devices_WiFi_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.Connectivity.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Devices.WiFi.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapter<D>::NetworkAdapter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->get_NetworkAdapter(&value));
        return Windows::Networking::Connectivity::NetworkAdapter{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapter<D>::ScanAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->ScanAsync(&value));
        return Windows::Foundation::IAsyncAction{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapter<D>::NetworkReport() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->get_NetworkReport(&value));
        return Windows::Devices::WiFi::WiFiNetworkReport{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapter<D>::AvailableNetworksChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::Foundation::IInspectable> const& args) const
    {
        winrt::event_token eventCookie;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->add_AvailableNetworksChanged(*(void**)(&args), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Devices_WiFi_IWiFiAdapter<D>::AvailableNetworksChanged_revoker consume_Windows_Devices_WiFi_IWiFiAdapter<D>::AvailableNetworksChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::Foundation::IInspectable> const& args) const
    {
        return impl::make_event_revoker<D, AvailableNetworksChanged_revoker>(this, AvailableNetworksChanged(args));
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapter<D>::AvailableNetworksChanged(winrt::event_token const& eventCookie) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->remove_AvailableNetworksChanged(impl::bind_in(eventCookie)));
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapter<D>::ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->ConnectAsync(*(void**)(&availableNetwork), static_cast<int32_t>(reconnectionKind), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapter<D>::ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, Windows::Security::Credentials::PasswordCredential const& passwordCredential) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->ConnectWithPasswordCredentialAsync(*(void**)(&availableNetwork), static_cast<int32_t>(reconnectionKind), *(void**)(&passwordCredential), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapter<D>::ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, Windows::Security::Credentials::PasswordCredential const& passwordCredential, param::hstring const& ssid) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->ConnectWithPasswordCredentialAndSsidAsync(*(void**)(&availableNetwork), static_cast<int32_t>(reconnectionKind), *(void**)(&passwordCredential), *(void**)(&ssid), &value));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapter<D>::Disconnect() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->Disconnect());
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapter2<D>::GetWpsConfigurationAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapter2)->GetWpsConfigurationAsync(*(void**)(&availableNetwork), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiWpsConfigurationResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapter2<D>::ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, Windows::Security::Credentials::PasswordCredential const& passwordCredential, param::hstring const& ssid, Windows::Devices::WiFi::WiFiConnectionMethod const& connectionMethod) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapter2)->ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync(*(void**)(&availableNetwork), static_cast<int32_t>(reconnectionKind), *(void**)(&passwordCredential), *(void**)(&ssid), static_cast<int32_t>(connectionMethod), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapterStatics<D>::FindAllAdaptersAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapterStatics)->FindAllAdaptersAsync(&value));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapterStatics<D>::GetDeviceSelector() const
    {
        void* deviceSelector{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapterStatics)->GetDeviceSelector(&deviceSelector));
        return hstring{ deviceSelector, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapterStatics<D>::FromIdAsync(param::hstring const& deviceId) const
    {
        void* asyncOp{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapterStatics)->FromIdAsync(*(void**)(&deviceId), &asyncOp));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter>{ asyncOp, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAdapterStatics<D>::RequestAccessAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAdapterStatics)->RequestAccessAsync(&value));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAccessStatus>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::Uptime() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_Uptime(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::Ssid() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_Ssid(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::Bssid() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_Bssid(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::ChannelCenterFrequencyInKilohertz() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_ChannelCenterFrequencyInKilohertz(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::NetworkRssiInDecibelMilliwatts() const
    {
        double value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_NetworkRssiInDecibelMilliwatts(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::SignalBars() const
    {
        uint8_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_SignalBars(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::NetworkKind() const
    {
        Windows::Devices::WiFi::WiFiNetworkKind value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_NetworkKind(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::PhyKind() const
    {
        Windows::Devices::WiFi::WiFiPhyKind value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_PhyKind(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::SecuritySettings() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_SecuritySettings(&value));
        return Windows::Networking::Connectivity::NetworkSecuritySettings{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::BeaconInterval() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_BeaconInterval(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::IsWiFiDirect() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_IsWiFiDirect(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiConnectionResult<D>::ConnectionStatus() const
    {
        Windows::Devices::WiFi::WiFiConnectionStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiConnectionResult)->get_ConnectionStatus(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiNetworkReport<D>::Timestamp() const
    {
        Windows::Foundation::DateTime value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiNetworkReport)->get_Timestamp(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiNetworkReport<D>::AvailableNetworks() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiNetworkReport)->get_AvailableNetworks(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiWpsConfigurationResult<D>::Status() const
    {
        Windows::Devices::WiFi::WiFiWpsConfigurationStatus value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiWpsConfigurationResult)->get_Status(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_WiFi_IWiFiWpsConfigurationResult<D>::SupportedWpsKinds() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::WiFi::IWiFiWpsConfigurationResult)->get_SupportedWpsKinds(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiWpsKind>{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Devices::WiFi::IWiFiAdapter> : produce_base<D, Windows::Devices::WiFi::IWiFiAdapter>
    {
        int32_t __stdcall get_NetworkAdapter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkAdapter>(this->shim().NetworkAdapter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ScanAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ScanAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NetworkReport(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFi::WiFiNetworkReport>(this->shim().NetworkReport());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_AvailableNetworksChanged(void* args, winrt::event_token* eventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<winrt::event_token>(this->shim().AvailableNetworksChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::Foundation::IInspectable> const*>(&args)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AvailableNetworksChanged(winrt::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailableNetworksChanged(*reinterpret_cast<winrt::event_token const*>(&eventCookie));
            return 0;
        }
        int32_t __stdcall ConnectAsync(void* availableNetwork, int32_t reconnectionKind, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Devices::WiFi::WiFiAvailableNetwork const*>(&availableNetwork), *reinterpret_cast<Windows::Devices::WiFi::WiFiReconnectionKind const*>(&reconnectionKind)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConnectWithPasswordCredentialAsync(void* availableNetwork, int32_t reconnectionKind, void* passwordCredential, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Devices::WiFi::WiFiAvailableNetwork const*>(&availableNetwork), *reinterpret_cast<Windows::Devices::WiFi::WiFiReconnectionKind const*>(&reconnectionKind), *reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConnectWithPasswordCredentialAndSsidAsync(void* availableNetwork, int32_t reconnectionKind, void* passwordCredential, void* ssid, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Devices::WiFi::WiFiAvailableNetwork const*>(&availableNetwork), *reinterpret_cast<Windows::Devices::WiFi::WiFiReconnectionKind const*>(&reconnectionKind), *reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential), *reinterpret_cast<hstring const*>(&ssid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Disconnect() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disconnect();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::WiFi::IWiFiAdapter2> : produce_base<D, Windows::Devices::WiFi::IWiFiAdapter2>
    {
        int32_t __stdcall GetWpsConfigurationAsync(void* availableNetwork, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiWpsConfigurationResult>>(this->shim().GetWpsConfigurationAsync(*reinterpret_cast<Windows::Devices::WiFi::WiFiAvailableNetwork const*>(&availableNetwork)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync(void* availableNetwork, int32_t reconnectionKind, void* passwordCredential, void* ssid, int32_t connectionMethod, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Devices::WiFi::WiFiAvailableNetwork const*>(&availableNetwork), *reinterpret_cast<Windows::Devices::WiFi::WiFiReconnectionKind const*>(&reconnectionKind), *reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential), *reinterpret_cast<hstring const*>(&ssid), *reinterpret_cast<Windows::Devices::WiFi::WiFiConnectionMethod const*>(&connectionMethod)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::WiFi::IWiFiAdapterStatics> : produce_base<D, Windows::Devices::WiFi::IWiFiAdapterStatics>
    {
        int32_t __stdcall FindAllAdaptersAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>>>(this->shim().FindAllAdaptersAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceSelector(void** deviceSelector) noexcept final try
        {
            clear_abi(deviceSelector);
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_from<hstring>(this->shim().GetDeviceSelector());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromIdAsync(void* deviceId, void** asyncOp) noexcept final try
        {
            clear_abi(asyncOp);
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAccessStatus>>(this->shim().RequestAccessAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::WiFi::IWiFiAvailableNetwork> : produce_base<D, Windows::Devices::WiFi::IWiFiAvailableNetwork>
    {
        int32_t __stdcall get_Uptime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Uptime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ssid(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ssid());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Bssid(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Bssid());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ChannelCenterFrequencyInKilohertz(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ChannelCenterFrequencyInKilohertz());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NetworkRssiInDecibelMilliwatts(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NetworkRssiInDecibelMilliwatts());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SignalBars(uint8_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SignalBars());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NetworkKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFi::WiFiNetworkKind>(this->shim().NetworkKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhyKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFi::WiFiPhyKind>(this->shim().PhyKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecuritySettings(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkSecuritySettings>(this->shim().SecuritySettings());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BeaconInterval(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().BeaconInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsWiFiDirect(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWiFiDirect());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::WiFi::IWiFiConnectionResult> : produce_base<D, Windows::Devices::WiFi::IWiFiConnectionResult>
    {
        int32_t __stdcall get_ConnectionStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFi::WiFiConnectionStatus>(this->shim().ConnectionStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::WiFi::IWiFiNetworkReport> : produce_base<D, Windows::Devices::WiFi::IWiFiNetworkReport>
    {
        int32_t __stdcall get_Timestamp(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AvailableNetworks(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork>>(this->shim().AvailableNetworks());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::WiFi::IWiFiWpsConfigurationResult> : produce_base<D, Windows::Devices::WiFi::IWiFiWpsConfigurationResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFi::WiFiWpsConfigurationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedWpsKinds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiWpsKind>>(this->shim().SupportedWpsKinds());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::WiFi
{
    inline auto WiFiAdapter::FindAllAdaptersAsync()
    {
        return impl::call_factory<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapterStatics>([&](auto&& f) { return f.FindAllAdaptersAsync(); });
    }
    inline auto WiFiAdapter::GetDeviceSelector()
    {
        return impl::call_factory<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapterStatics>([&](auto&& f) { return f.GetDeviceSelector(); });
    }
    inline auto WiFiAdapter::FromIdAsync(param::hstring const& deviceId)
    {
        return impl::call_factory<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapterStatics>([&](auto&& f) { return f.FromIdAsync(deviceId); });
    }
    inline auto WiFiAdapter::RequestAccessAsync()
    {
        return impl::call_factory<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapterStatics>([&](auto&& f) { return f.RequestAccessAsync(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiAdapter> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiAdapter> {};
    template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiAdapter2> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiAdapter2> {};
    template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiAdapterStatics> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiAdapterStatics> {};
    template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork> {};
    template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiConnectionResult> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiConnectionResult> {};
    template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiNetworkReport> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiNetworkReport> {};
    template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult> {};
    template<> struct hash<winrt::Windows::Devices::WiFi::WiFiAdapter> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::WiFiAdapter> {};
    template<> struct hash<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork> {};
    template<> struct hash<winrt::Windows::Devices::WiFi::WiFiConnectionResult> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::WiFiConnectionResult> {};
    template<> struct hash<winrt::Windows::Devices::WiFi::WiFiNetworkReport> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::WiFiNetworkReport> {};
    template<> struct hash<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationResult> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationResult> {};
}
#endif
