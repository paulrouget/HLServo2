// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.190620.2

#ifndef WINRT_Windows_UI_Xaml_Navigation_0_H
#define WINRT_Windows_UI_Xaml_Navigation_0_H
namespace winrt::Windows::Foundation
{
    struct HResult;
    struct Uri;
}
namespace winrt::Windows::UI::Xaml
{
    struct DependencyProperty;
}
namespace winrt::Windows::UI::Xaml::Interop
{
    struct TypeName;
}
namespace winrt::Windows::UI::Xaml::Media::Animation
{
    struct NavigationTransitionInfo;
}
namespace winrt::Windows::UI::Xaml::Navigation
{
    enum class NavigationCacheMode : int32_t
    {
        Disabled = 0,
        Required = 1,
        Enabled = 2,
    };
    enum class NavigationMode : int32_t
    {
        New = 0,
        Back = 1,
        Forward = 2,
        Refresh = 3,
    };
    struct IFrameNavigationOptions;
    struct IFrameNavigationOptionsFactory;
    struct INavigatingCancelEventArgs;
    struct INavigatingCancelEventArgs2;
    struct INavigationEventArgs;
    struct INavigationEventArgs2;
    struct INavigationFailedEventArgs;
    struct IPageStackEntry;
    struct IPageStackEntryFactory;
    struct IPageStackEntryStatics;
    struct FrameNavigationOptions;
    struct NavigatingCancelEventArgs;
    struct NavigationEventArgs;
    struct NavigationFailedEventArgs;
    struct PageStackEntry;
    struct LoadCompletedEventHandler;
    struct NavigatedEventHandler;
    struct NavigatingCancelEventHandler;
    struct NavigationFailedEventHandler;
    struct NavigationStoppedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Navigation::IFrameNavigationOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::IFrameNavigationOptionsFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::INavigationEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::INavigationEventArgs2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::INavigationFailedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::IPageStackEntry>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::IPageStackEntryFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::IPageStackEntryStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::FrameNavigationOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::NavigationEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::PageStackEntry>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::NavigationCacheMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::NavigationMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::NavigatedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct category<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler>
    {
        using type = delegate_category;
    };
    template <> struct name<Windows::UI::Xaml::Navigation::IFrameNavigationOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.IFrameNavigationOptions" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::IFrameNavigationOptionsFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.IFrameNavigationOptionsFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.INavigatingCancelEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.INavigatingCancelEventArgs2" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::INavigationEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.INavigationEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::INavigationEventArgs2>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.INavigationEventArgs2" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::INavigationFailedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.INavigationFailedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::IPageStackEntry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.IPageStackEntry" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::IPageStackEntryFactory>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.IPageStackEntryFactory" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::IPageStackEntryStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.IPageStackEntryStatics" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::FrameNavigationOptions>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.FrameNavigationOptions" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigatingCancelEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::NavigationEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationFailedEventArgs" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::PageStackEntry>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.PageStackEntry" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::NavigationCacheMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationCacheMode" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::NavigationMode>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationMode" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.LoadCompletedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::NavigatedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigatedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigatingCancelEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationFailedEventHandler" };
    };
    template <> struct name<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler>
    {
        static constexpr auto & value{ L"Windows.UI.Xaml.Navigation.NavigationStoppedEventHandler" };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::IFrameNavigationOptions>
    {
        static constexpr guid value{ 0xB539AD2A,0x9FB7,0x520A,{ 0x8F,0x41,0x57,0xA5,0x0C,0x59,0xCF,0x92 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::IFrameNavigationOptionsFactory>
    {
        static constexpr guid value{ 0xD4681E41,0x7E6D,0x5C7C,{ 0xAC,0xA0,0x47,0x86,0x81,0xCC,0x6F,0xCE } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>
    {
        static constexpr guid value{ 0xFD1D67AE,0xEAFB,0x4079,{ 0xBE,0x80,0x6D,0xC9,0x2A,0x03,0xAE,0xDF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>
    {
        static constexpr guid value{ 0x5407B704,0x8147,0x4343,{ 0x83,0x8F,0xDD,0x1E,0xE9,0x08,0xC1,0x37 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::INavigationEventArgs>
    {
        static constexpr guid value{ 0xB6AA9834,0x6691,0x44D1,{ 0xBD,0xF7,0x58,0x82,0x0C,0x27,0xB0,0xD0 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::INavigationEventArgs2>
    {
        static constexpr guid value{ 0xDBFF71D9,0x979A,0x4B2E,{ 0xA4,0x9B,0x3B,0xB1,0x7F,0xDE,0xF5,0x74 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::INavigationFailedEventArgs>
    {
        static constexpr guid value{ 0x11C1DFF7,0x36C2,0x4102,{ 0xB2,0xEF,0x02,0x17,0xA9,0x72,0x89,0xB3 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::IPageStackEntry>
    {
        static constexpr guid value{ 0xEF8814A6,0x9388,0x4ACA,{ 0x85,0x72,0x40,0x51,0x94,0x06,0x90,0x80 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::IPageStackEntryFactory>
    {
        static constexpr guid value{ 0x4454048A,0xA8B9,0x4F78,{ 0x9B,0x84,0x1F,0x51,0xF5,0x88,0x51,0xFF } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::IPageStackEntryStatics>
    {
        static constexpr guid value{ 0xACEFF8E3,0x246C,0x4033,{ 0x9F,0x01,0x01,0xCB,0x0D,0xA5,0x25,0x4E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler>
    {
        static constexpr guid value{ 0xAEBAF785,0x43FC,0x4E2C,{ 0x95,0xC3,0x97,0xAE,0x84,0xEA,0xBC,0x8E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::NavigatedEventHandler>
    {
        static constexpr guid value{ 0x7BD1CF54,0x23CF,0x4CCE,{ 0xB2,0xF5,0x4C,0xE7,0x8D,0x96,0x89,0x6E } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler>
    {
        static constexpr guid value{ 0x75D6A78F,0xA302,0x4489,{ 0x98,0x98,0x24,0xEA,0x49,0x18,0x29,0x10 } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler>
    {
        static constexpr guid value{ 0x4DAB4671,0x12B2,0x43C7,{ 0xB8,0x92,0x9B,0xE2,0xDC,0xD3,0xE8,0x8D } };
    };
    template <> struct guid_storage<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler>
    {
        static constexpr guid value{ 0xF0117DDB,0x12FA,0x4D8D,{ 0x8B,0x26,0xB3,0x83,0xD0,0x9C,0x2B,0x3C } };
    };
    template <> struct default_interface<Windows::UI::Xaml::Navigation::FrameNavigationOptions>
    {
        using type = Windows::UI::Xaml::Navigation::IFrameNavigationOptions;
    };
    template <> struct default_interface<Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>
    {
        using type = Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Navigation::NavigationEventArgs>
    {
        using type = Windows::UI::Xaml::Navigation::INavigationEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>
    {
        using type = Windows::UI::Xaml::Navigation::INavigationFailedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Xaml::Navigation::PageStackEntry>
    {
        using type = Windows::UI::Xaml::Navigation::IPageStackEntry;
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::IFrameNavigationOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsNavigationStackEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsNavigationStackEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransitionInfoOverride(void**) noexcept = 0;
            virtual int32_t __stdcall put_TransitionInfoOverride(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::IFrameNavigationOptionsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Cancel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Cancel(bool) noexcept = 0;
            virtual int32_t __stdcall get_NavigationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Parameter(void**) noexcept = 0;
            virtual int32_t __stdcall get_NavigationTransitionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::INavigationEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Content(void**) noexcept = 0;
            virtual int32_t __stdcall get_Parameter(void**) noexcept = 0;
            virtual int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
            virtual int32_t __stdcall get_NavigationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::INavigationEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NavigationTransitionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::INavigationFailedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Exception(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::IPageStackEntry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourcePageType(struct struct_Windows_UI_Xaml_Interop_TypeName*) noexcept = 0;
            virtual int32_t __stdcall get_Parameter(void**) noexcept = 0;
            virtual int32_t __stdcall get_NavigationTransitionInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::IPageStackEntryFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(struct struct_Windows_UI_Xaml_Interop_TypeName, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::IPageStackEntryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourcePageTypeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::LoadCompletedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::NavigatedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::NavigatingCancelEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::NavigationFailedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Navigation::NavigationStoppedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Navigation_IFrameNavigationOptions
    {
        [[nodiscard]] auto IsNavigationStackEnabled() const;
        auto IsNavigationStackEnabled(bool value) const;
        [[nodiscard]] auto TransitionInfoOverride() const;
        auto TransitionInfoOverride(Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Navigation::IFrameNavigationOptions>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Navigation_IFrameNavigationOptions<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Navigation_IFrameNavigationOptionsFactory
    {
        auto CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Navigation::IFrameNavigationOptionsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Navigation_IFrameNavigationOptionsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs
    {
        [[nodiscard]] auto Cancel() const;
        auto Cancel(bool value) const;
        [[nodiscard]] auto NavigationMode() const;
        [[nodiscard]] auto SourcePageType() const;
    };
    template <> struct consume<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs2
    {
        [[nodiscard]] auto Parameter() const;
        [[nodiscard]] auto NavigationTransitionInfo() const;
    };
    template <> struct consume<Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Navigation_INavigatingCancelEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Navigation_INavigationEventArgs
    {
        [[nodiscard]] auto Content() const;
        [[nodiscard]] auto Parameter() const;
        [[nodiscard]] auto SourcePageType() const;
        [[nodiscard]] auto NavigationMode() const;
        [[nodiscard]] auto Uri() const;
        auto Uri(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Navigation::INavigationEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Navigation_INavigationEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Navigation_INavigationEventArgs2
    {
        [[nodiscard]] auto NavigationTransitionInfo() const;
    };
    template <> struct consume<Windows::UI::Xaml::Navigation::INavigationEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Navigation_INavigationEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs
    {
        [[nodiscard]] auto Exception() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
        [[nodiscard]] auto SourcePageType() const;
    };
    template <> struct consume<Windows::UI::Xaml::Navigation::INavigationFailedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Navigation_INavigationFailedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Navigation_IPageStackEntry
    {
        [[nodiscard]] auto SourcePageType() const;
        [[nodiscard]] auto Parameter() const;
        [[nodiscard]] auto NavigationTransitionInfo() const;
    };
    template <> struct consume<Windows::UI::Xaml::Navigation::IPageStackEntry>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Navigation_IPageStackEntry<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Navigation_IPageStackEntryFactory
    {
        auto CreateInstance(Windows::UI::Xaml::Interop::TypeName const& sourcePageType, Windows::Foundation::IInspectable const& parameter, Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& navigationTransitionInfo) const;
    };
    template <> struct consume<Windows::UI::Xaml::Navigation::IPageStackEntryFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Navigation_IPageStackEntryFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Navigation_IPageStackEntryStatics
    {
        [[nodiscard]] auto SourcePageTypeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Navigation::IPageStackEntryStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Navigation_IPageStackEntryStatics<D>;
    };
}
#endif
