// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "NavigationViewItem.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(NavigationViewItem)
}

#include "NavigationViewItem.g.cpp"

GlobalDependencyProperty NavigationViewItemProperties::s_CompactPaneLengthProperty{ nullptr };
GlobalDependencyProperty NavigationViewItemProperties::s_HasUnrealizedChildrenProperty{ nullptr };
GlobalDependencyProperty NavigationViewItemProperties::s_IconProperty{ nullptr };
GlobalDependencyProperty NavigationViewItemProperties::s_IsChildSelectedProperty{ nullptr };
GlobalDependencyProperty NavigationViewItemProperties::s_IsExpandedProperty{ nullptr };
GlobalDependencyProperty NavigationViewItemProperties::s_MenuItemsProperty{ nullptr };
GlobalDependencyProperty NavigationViewItemProperties::s_MenuItemsSourceProperty{ nullptr };
GlobalDependencyProperty NavigationViewItemProperties::s_SelectsOnInvokedProperty{ nullptr };

NavigationViewItemProperties::NavigationViewItemProperties()
{
    EnsureProperties();
}

void NavigationViewItemProperties::EnsureProperties()
{
    NavigationViewItemBase::EnsureProperties();
    if (!s_CompactPaneLengthProperty)
    {
        s_CompactPaneLengthProperty =
            InitializeDependencyProperty(
                L"CompactPaneLength",
                winrt::name_of<double>(),
                winrt::name_of<winrt::NavigationViewItem>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(48.0),
                nullptr);
    }
    if (!s_HasUnrealizedChildrenProperty)
    {
        s_HasUnrealizedChildrenProperty =
            InitializeDependencyProperty(
                L"HasUnrealizedChildren",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::NavigationViewItem>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                winrt::PropertyChangedCallback(&OnHasUnrealizedChildrenPropertyChanged));
    }
    if (!s_IconProperty)
    {
        s_IconProperty =
            InitializeDependencyProperty(
                L"Icon",
                winrt::name_of<winrt::IconElement>(),
                winrt::name_of<winrt::NavigationViewItem>(),
                false /* isAttached */,
                ValueHelper<winrt::IconElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnIconPropertyChanged));
    }
    if (!s_IsChildSelectedProperty)
    {
        s_IsChildSelectedProperty =
            InitializeDependencyProperty(
                L"IsChildSelected",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::NavigationViewItem>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                winrt::PropertyChangedCallback(&OnIsChildSelectedPropertyChanged));
    }
    if (!s_IsExpandedProperty)
    {
        s_IsExpandedProperty =
            InitializeDependencyProperty(
                L"IsExpanded",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::NavigationViewItem>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                winrt::PropertyChangedCallback(&OnIsExpandedPropertyChanged));
    }
    if (!s_MenuItemsProperty)
    {
        s_MenuItemsProperty =
            InitializeDependencyProperty(
                L"MenuItems",
                winrt::name_of<winrt::IVector<winrt::IInspectable>>(),
                winrt::name_of<winrt::NavigationViewItem>(),
                false /* isAttached */,
                ValueHelper<winrt::IVector<winrt::IInspectable>>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_MenuItemsSourceProperty)
    {
        s_MenuItemsSourceProperty =
            InitializeDependencyProperty(
                L"MenuItemsSource",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::NavigationViewItem>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnMenuItemsSourcePropertyChanged));
    }
    if (!s_SelectsOnInvokedProperty)
    {
        s_SelectsOnInvokedProperty =
            InitializeDependencyProperty(
                L"SelectsOnInvoked",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::NavigationViewItem>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                nullptr);
    }
}

void NavigationViewItemProperties::ClearProperties()
{
    s_CompactPaneLengthProperty = nullptr;
    s_HasUnrealizedChildrenProperty = nullptr;
    s_IconProperty = nullptr;
    s_IsChildSelectedProperty = nullptr;
    s_IsExpandedProperty = nullptr;
    s_MenuItemsProperty = nullptr;
    s_MenuItemsSourceProperty = nullptr;
    s_SelectsOnInvokedProperty = nullptr;
    NavigationViewItemBase::ClearProperties();
}

void NavigationViewItemProperties::OnHasUnrealizedChildrenPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::NavigationViewItem>();
    winrt::get_self<NavigationViewItem>(owner)->OnHasUnrealizedChildrenPropertyChanged(args);
}

void NavigationViewItemProperties::OnIconPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::NavigationViewItem>();
    winrt::get_self<NavigationViewItem>(owner)->OnIconPropertyChanged(args);
}

void NavigationViewItemProperties::OnIsChildSelectedPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::NavigationViewItem>();
    winrt::get_self<NavigationViewItem>(owner)->OnIsChildSelectedPropertyChanged(args);
}

void NavigationViewItemProperties::OnIsExpandedPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::NavigationViewItem>();
    winrt::get_self<NavigationViewItem>(owner)->OnIsExpandedPropertyChanged(args);
}

void NavigationViewItemProperties::OnMenuItemsSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::NavigationViewItem>();
    winrt::get_self<NavigationViewItem>(owner)->OnMenuItemsSourcePropertyChanged(args);
}

void NavigationViewItemProperties::CompactPaneLength(double value)
{
    static_cast<NavigationViewItem*>(this)->SetValue(s_CompactPaneLengthProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double NavigationViewItemProperties::CompactPaneLength()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<NavigationViewItem*>(this)->GetValue(s_CompactPaneLengthProperty));
}

void NavigationViewItemProperties::HasUnrealizedChildren(bool value)
{
    static_cast<NavigationViewItem*>(this)->SetValue(s_HasUnrealizedChildrenProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool NavigationViewItemProperties::HasUnrealizedChildren()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<NavigationViewItem*>(this)->GetValue(s_HasUnrealizedChildrenProperty));
}

void NavigationViewItemProperties::Icon(winrt::IconElement const& value)
{
    static_cast<NavigationViewItem*>(this)->SetValue(s_IconProperty, ValueHelper<winrt::IconElement>::BoxValueIfNecessary(value));
}

winrt::IconElement NavigationViewItemProperties::Icon()
{
    return ValueHelper<winrt::IconElement>::CastOrUnbox(static_cast<NavigationViewItem*>(this)->GetValue(s_IconProperty));
}

void NavigationViewItemProperties::IsChildSelected(bool value)
{
    static_cast<NavigationViewItem*>(this)->SetValue(s_IsChildSelectedProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool NavigationViewItemProperties::IsChildSelected()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<NavigationViewItem*>(this)->GetValue(s_IsChildSelectedProperty));
}

void NavigationViewItemProperties::IsExpanded(bool value)
{
    static_cast<NavigationViewItem*>(this)->SetValue(s_IsExpandedProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool NavigationViewItemProperties::IsExpanded()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<NavigationViewItem*>(this)->GetValue(s_IsExpandedProperty));
}

void NavigationViewItemProperties::MenuItems(winrt::IVector<winrt::IInspectable> const& value)
{
    static_cast<NavigationViewItem*>(this)->SetValue(s_MenuItemsProperty, ValueHelper<winrt::IVector<winrt::IInspectable>>::BoxValueIfNecessary(value));
}

winrt::IVector<winrt::IInspectable> NavigationViewItemProperties::MenuItems()
{
    return ValueHelper<winrt::IVector<winrt::IInspectable>>::CastOrUnbox(static_cast<NavigationViewItem*>(this)->GetValue(s_MenuItemsProperty));
}

void NavigationViewItemProperties::MenuItemsSource(winrt::IInspectable const& value)
{
    static_cast<NavigationViewItem*>(this)->SetValue(s_MenuItemsSourceProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable NavigationViewItemProperties::MenuItemsSource()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<NavigationViewItem*>(this)->GetValue(s_MenuItemsSourceProperty));
}

void NavigationViewItemProperties::SelectsOnInvoked(bool value)
{
    static_cast<NavigationViewItem*>(this)->SetValue(s_SelectsOnInvokedProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool NavigationViewItemProperties::SelectsOnInvoked()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<NavigationViewItem*>(this)->GetValue(s_SelectsOnInvokedProperty));
}
