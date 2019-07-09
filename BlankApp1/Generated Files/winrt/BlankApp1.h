// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190620.2

#ifndef WINRT_BlankApp1_H
#define WINRT_BlankApp1_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Markup.2.h"
#include "winrt/impl/BlankApp1.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_BlankApp1_IMainPage<D>::MyProperty() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(BlankApp1::IMainPage)->get_MyProperty(&value));
        return value;
    }
    template <typename D> auto consume_BlankApp1_IMainPage<D>::MyProperty(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(BlankApp1::IMainPage)->put_MyProperty(value));
    }
    template <typename D>
    struct produce<D, BlankApp1::IMainPage> : produce_base<D, BlankApp1::IMainPage>
    {
        int32_t __stdcall get_MyProperty(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MyProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MyProperty(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MyProperty(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::BlankApp1
{
}
namespace std
{
    template<> struct hash<winrt::BlankApp1::IMainPage> : winrt::impl::hash_base<winrt::BlankApp1::IMainPage> {};
    template<> struct hash<winrt::BlankApp1::MainPage> : winrt::impl::hash_base<winrt::BlankApp1::MainPage> {};
    template<> struct hash<winrt::BlankApp1::XamlMetaDataProvider> : winrt::impl::hash_base<winrt::BlankApp1::XamlMetaDataProvider> {};
}
#endif
