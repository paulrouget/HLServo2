// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190620.2

#ifndef WINRT_Windows_Phone_ApplicationModel_H
#define WINRT_Windows_Phone_ApplicationModel_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.Phone.ApplicationModel.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Phone_ApplicationModel_IApplicationProfileStatics<D>::Modes() const
    {
        Windows::Phone::ApplicationModel::ApplicationProfileModes value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Phone::ApplicationModel::IApplicationProfileStatics)->get_Modes(put_abi(value)));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::Phone::ApplicationModel::IApplicationProfileStatics> : produce_base<D, Windows::Phone::ApplicationModel::IApplicationProfileStatics>
    {
        int32_t __stdcall get_Modes(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Phone::ApplicationModel::ApplicationProfileModes>(this->shim().Modes());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Phone::ApplicationModel
{
    constexpr auto operator|(ApplicationProfileModes const left, ApplicationProfileModes const right) noexcept
    {
        return static_cast<ApplicationProfileModes>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(ApplicationProfileModes& left, ApplicationProfileModes const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(ApplicationProfileModes const left, ApplicationProfileModes const right) noexcept
    {
        return static_cast<ApplicationProfileModes>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(ApplicationProfileModes& left, ApplicationProfileModes const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(ApplicationProfileModes const value) noexcept
    {
        return static_cast<ApplicationProfileModes>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(ApplicationProfileModes const left, ApplicationProfileModes const right) noexcept
    {
        return static_cast<ApplicationProfileModes>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(ApplicationProfileModes& left, ApplicationProfileModes const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto ApplicationProfile::Modes()
    {
        return impl::call_factory<ApplicationProfile, Windows::Phone::ApplicationModel::IApplicationProfileStatics>([&](auto&& f) { return f.Modes(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Phone::ApplicationModel::IApplicationProfileStatics> : winrt::impl::hash_base<winrt::Windows::Phone::ApplicationModel::IApplicationProfileStatics> {};
    template<> struct hash<winrt::Windows::Phone::ApplicationModel::ApplicationProfile> : winrt::impl::hash_base<winrt::Windows::Phone::ApplicationModel::ApplicationProfile> {};
}
#endif
