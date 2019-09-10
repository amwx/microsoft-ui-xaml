// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class NavigationViewProperties
{
public:
    NavigationViewProperties();

    void AllowMultipleExpandedItemGroups(bool value);
    bool AllowMultipleExpandedItemGroups();

    void AlwaysShowHeader(bool value);
    bool AlwaysShowHeader();

    void AutoSuggestBox(winrt::AutoSuggestBox const& value);
    winrt::AutoSuggestBox AutoSuggestBox();

    void CompactModeThresholdWidth(double value);
    double CompactModeThresholdWidth();

    void CompactPaneLength(double value);
    double CompactPaneLength();

    void ContentOverlay(winrt::UIElement const& value);
    winrt::UIElement ContentOverlay();

    void DisplayMode(winrt::NavigationViewDisplayMode const& value);
    winrt::NavigationViewDisplayMode DisplayMode();

    void ExpandedModeThresholdWidth(double value);
    double ExpandedModeThresholdWidth();

    void Header(winrt::IInspectable const& value);
    winrt::IInspectable Header();

    void HeaderTemplate(winrt::DataTemplate const& value);
    winrt::DataTemplate HeaderTemplate();

    void IsBackButtonVisible(winrt::NavigationViewBackButtonVisible const& value);
    winrt::NavigationViewBackButtonVisible IsBackButtonVisible();

    void IsBackEnabled(bool value);
    bool IsBackEnabled();

    void IsPaneOpen(bool value);
    bool IsPaneOpen();

    void IsPaneToggleButtonVisible(bool value);
    bool IsPaneToggleButtonVisible();

    void IsPaneVisible(bool value);
    bool IsPaneVisible();

    void IsSettingsVisible(bool value);
    bool IsSettingsVisible();

    void IsTitleBarAutoPaddingEnabled(bool value);
    bool IsTitleBarAutoPaddingEnabled();

    void MenuItemContainerStyle(winrt::Style const& value);
    winrt::Style MenuItemContainerStyle();

    void MenuItemContainerStyleSelector(winrt::StyleSelector const& value);
    winrt::StyleSelector MenuItemContainerStyleSelector();

    void MenuItems(winrt::IVector<winrt::IInspectable> const& value);
    winrt::IVector<winrt::IInspectable> MenuItems();

    void MenuItemsSource(winrt::IInspectable const& value);
    winrt::IInspectable MenuItemsSource();

    void MenuItemTemplate(winrt::DataTemplate const& value);
    winrt::DataTemplate MenuItemTemplate();

    void MenuItemTemplateSelector(winrt::DataTemplateSelector const& value);
    winrt::DataTemplateSelector MenuItemTemplateSelector();

    void OpenPaneLength(double value);
    double OpenPaneLength();

    void OverflowLabelMode(winrt::NavigationViewOverflowLabelMode const& value);
    winrt::NavigationViewOverflowLabelMode OverflowLabelMode();

    void PaneCustomContent(winrt::UIElement const& value);
    winrt::UIElement PaneCustomContent();

    void PaneDisplayMode(winrt::NavigationViewPaneDisplayMode const& value);
    winrt::NavigationViewPaneDisplayMode PaneDisplayMode();

    void PaneFooter(winrt::UIElement const& value);
    winrt::UIElement PaneFooter();

    void PaneHeader(winrt::UIElement const& value);
    winrt::UIElement PaneHeader();

    void PaneTitle(winrt::hstring const& value);
    winrt::hstring PaneTitle();

    void PaneToggleButtonStyle(winrt::Style const& value);
    winrt::Style PaneToggleButtonStyle();

    void SelectedItem(winrt::IInspectable const& value);
    winrt::IInspectable SelectedItem();

    void SelectionFollowsFocus(winrt::NavigationViewSelectionFollowsFocus const& value);
    winrt::NavigationViewSelectionFollowsFocus SelectionFollowsFocus();

    void SettingsItem(winrt::IInspectable const& value);
    winrt::IInspectable SettingsItem();

    void ShoulderNavigationEnabled(winrt::NavigationViewShoulderNavigationEnabled const& value);
    winrt::NavigationViewShoulderNavigationEnabled ShoulderNavigationEnabled();

    void TemplateSettings(winrt::NavigationViewTemplateSettings const& value);
    winrt::NavigationViewTemplateSettings TemplateSettings();

    static winrt::DependencyProperty AllowMultipleExpandedItemGroupsProperty() { return s_AllowMultipleExpandedItemGroupsProperty; }
    static winrt::DependencyProperty AlwaysShowHeaderProperty() { return s_AlwaysShowHeaderProperty; }
    static winrt::DependencyProperty AutoSuggestBoxProperty() { return s_AutoSuggestBoxProperty; }
    static winrt::DependencyProperty CompactModeThresholdWidthProperty() { return s_CompactModeThresholdWidthProperty; }
    static winrt::DependencyProperty CompactPaneLengthProperty() { return s_CompactPaneLengthProperty; }
    static winrt::DependencyProperty ContentOverlayProperty() { return s_ContentOverlayProperty; }
    static winrt::DependencyProperty DisplayModeProperty() { return s_DisplayModeProperty; }
    static winrt::DependencyProperty ExpandedModeThresholdWidthProperty() { return s_ExpandedModeThresholdWidthProperty; }
    static winrt::DependencyProperty HeaderProperty() { return s_HeaderProperty; }
    static winrt::DependencyProperty HeaderTemplateProperty() { return s_HeaderTemplateProperty; }
    static winrt::DependencyProperty IsBackButtonVisibleProperty() { return s_IsBackButtonVisibleProperty; }
    static winrt::DependencyProperty IsBackEnabledProperty() { return s_IsBackEnabledProperty; }
    static winrt::DependencyProperty IsPaneOpenProperty() { return s_IsPaneOpenProperty; }
    static winrt::DependencyProperty IsPaneToggleButtonVisibleProperty() { return s_IsPaneToggleButtonVisibleProperty; }
    static winrt::DependencyProperty IsPaneVisibleProperty() { return s_IsPaneVisibleProperty; }
    static winrt::DependencyProperty IsSettingsVisibleProperty() { return s_IsSettingsVisibleProperty; }
    static winrt::DependencyProperty IsTitleBarAutoPaddingEnabledProperty() { return s_IsTitleBarAutoPaddingEnabledProperty; }
    static winrt::DependencyProperty MenuItemContainerStyleProperty() { return s_MenuItemContainerStyleProperty; }
    static winrt::DependencyProperty MenuItemContainerStyleSelectorProperty() { return s_MenuItemContainerStyleSelectorProperty; }
    static winrt::DependencyProperty MenuItemsProperty() { return s_MenuItemsProperty; }
    static winrt::DependencyProperty MenuItemsSourceProperty() { return s_MenuItemsSourceProperty; }
    static winrt::DependencyProperty MenuItemTemplateProperty() { return s_MenuItemTemplateProperty; }
    static winrt::DependencyProperty MenuItemTemplateSelectorProperty() { return s_MenuItemTemplateSelectorProperty; }
    static winrt::DependencyProperty OpenPaneLengthProperty() { return s_OpenPaneLengthProperty; }
    static winrt::DependencyProperty OverflowLabelModeProperty() { return s_OverflowLabelModeProperty; }
    static winrt::DependencyProperty PaneCustomContentProperty() { return s_PaneCustomContentProperty; }
    static winrt::DependencyProperty PaneDisplayModeProperty() { return s_PaneDisplayModeProperty; }
    static winrt::DependencyProperty PaneFooterProperty() { return s_PaneFooterProperty; }
    static winrt::DependencyProperty PaneHeaderProperty() { return s_PaneHeaderProperty; }
    static winrt::DependencyProperty PaneTitleProperty() { return s_PaneTitleProperty; }
    static winrt::DependencyProperty PaneToggleButtonStyleProperty() { return s_PaneToggleButtonStyleProperty; }
    static winrt::DependencyProperty SelectedItemProperty() { return s_SelectedItemProperty; }
    static winrt::DependencyProperty SelectionFollowsFocusProperty() { return s_SelectionFollowsFocusProperty; }
    static winrt::DependencyProperty SettingsItemProperty() { return s_SettingsItemProperty; }
    static winrt::DependencyProperty ShoulderNavigationEnabledProperty() { return s_ShoulderNavigationEnabledProperty; }
    static winrt::DependencyProperty TemplateSettingsProperty() { return s_TemplateSettingsProperty; }

    static GlobalDependencyProperty s_AllowMultipleExpandedItemGroupsProperty;
    static GlobalDependencyProperty s_AlwaysShowHeaderProperty;
    static GlobalDependencyProperty s_AutoSuggestBoxProperty;
    static GlobalDependencyProperty s_CompactModeThresholdWidthProperty;
    static GlobalDependencyProperty s_CompactPaneLengthProperty;
    static GlobalDependencyProperty s_ContentOverlayProperty;
    static GlobalDependencyProperty s_DisplayModeProperty;
    static GlobalDependencyProperty s_ExpandedModeThresholdWidthProperty;
    static GlobalDependencyProperty s_HeaderProperty;
    static GlobalDependencyProperty s_HeaderTemplateProperty;
    static GlobalDependencyProperty s_IsBackButtonVisibleProperty;
    static GlobalDependencyProperty s_IsBackEnabledProperty;
    static GlobalDependencyProperty s_IsPaneOpenProperty;
    static GlobalDependencyProperty s_IsPaneToggleButtonVisibleProperty;
    static GlobalDependencyProperty s_IsPaneVisibleProperty;
    static GlobalDependencyProperty s_IsSettingsVisibleProperty;
    static GlobalDependencyProperty s_IsTitleBarAutoPaddingEnabledProperty;
    static GlobalDependencyProperty s_MenuItemContainerStyleProperty;
    static GlobalDependencyProperty s_MenuItemContainerStyleSelectorProperty;
    static GlobalDependencyProperty s_MenuItemsProperty;
    static GlobalDependencyProperty s_MenuItemsSourceProperty;
    static GlobalDependencyProperty s_MenuItemTemplateProperty;
    static GlobalDependencyProperty s_MenuItemTemplateSelectorProperty;
    static GlobalDependencyProperty s_OpenPaneLengthProperty;
    static GlobalDependencyProperty s_OverflowLabelModeProperty;
    static GlobalDependencyProperty s_PaneCustomContentProperty;
    static GlobalDependencyProperty s_PaneDisplayModeProperty;
    static GlobalDependencyProperty s_PaneFooterProperty;
    static GlobalDependencyProperty s_PaneHeaderProperty;
    static GlobalDependencyProperty s_PaneTitleProperty;
    static GlobalDependencyProperty s_PaneToggleButtonStyleProperty;
    static GlobalDependencyProperty s_SelectedItemProperty;
    static GlobalDependencyProperty s_SelectionFollowsFocusProperty;
    static GlobalDependencyProperty s_SettingsItemProperty;
    static GlobalDependencyProperty s_ShoulderNavigationEnabledProperty;
    static GlobalDependencyProperty s_TemplateSettingsProperty;

    winrt::event_token BackRequested(winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewBackRequestedEventArgs> const& value);
    void BackRequested(winrt::event_token const& token);
    winrt::event_token Collapsed(winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewCollapsedEventArgs> const& value);
    void Collapsed(winrt::event_token const& token);
    winrt::event_token DisplayModeChanged(winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewDisplayModeChangedEventArgs> const& value);
    void DisplayModeChanged(winrt::event_token const& token);
    winrt::event_token Expanding(winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewExpandingEventArgs> const& value);
    void Expanding(winrt::event_token const& token);
    winrt::event_token ItemInvoked(winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewItemInvokedEventArgs> const& value);
    void ItemInvoked(winrt::event_token const& token);
    winrt::event_token PaneClosed(winrt::TypedEventHandler<winrt::NavigationView, winrt::IInspectable> const& value);
    void PaneClosed(winrt::event_token const& token);
    winrt::event_token PaneClosing(winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewPaneClosingEventArgs> const& value);
    void PaneClosing(winrt::event_token const& token);
    winrt::event_token PaneOpened(winrt::TypedEventHandler<winrt::NavigationView, winrt::IInspectable> const& value);
    void PaneOpened(winrt::event_token const& token);
    winrt::event_token PaneOpening(winrt::TypedEventHandler<winrt::NavigationView, winrt::IInspectable> const& value);
    void PaneOpening(winrt::event_token const& token);
    winrt::event_token SelectionChanged(winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewSelectionChangedEventArgs> const& value);
    void SelectionChanged(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewBackRequestedEventArgs>> m_backRequestedEventSource;
    event_source<winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewCollapsedEventArgs>> m_collapsedEventSource;
    event_source<winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewDisplayModeChangedEventArgs>> m_displayModeChangedEventSource;
    event_source<winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewExpandingEventArgs>> m_expandingEventSource;
    event_source<winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewItemInvokedEventArgs>> m_itemInvokedEventSource;
    event_source<winrt::TypedEventHandler<winrt::NavigationView, winrt::IInspectable>> m_paneClosedEventSource;
    event_source<winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewPaneClosingEventArgs>> m_paneClosingEventSource;
    event_source<winrt::TypedEventHandler<winrt::NavigationView, winrt::IInspectable>> m_paneOpenedEventSource;
    event_source<winrt::TypedEventHandler<winrt::NavigationView, winrt::IInspectable>> m_paneOpeningEventSource;
    event_source<winrt::TypedEventHandler<winrt::NavigationView, winrt::NavigationViewSelectionChangedEventArgs>> m_selectionChangedEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnAlwaysShowHeaderPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnAutoSuggestBoxPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnCompactModeThresholdWidthPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnCompactPaneLengthPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnDisplayModePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnExpandedModeThresholdWidthPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnHeaderPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnHeaderTemplatePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsBackButtonVisiblePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsBackEnabledPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsPaneOpenPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsPaneToggleButtonVisiblePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsPaneVisiblePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsSettingsVisiblePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsTitleBarAutoPaddingEnabledPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMenuItemContainerStylePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMenuItemContainerStyleSelectorPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMenuItemsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMenuItemsSourcePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMenuItemTemplatePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMenuItemTemplateSelectorPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnOpenPaneLengthPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnOverflowLabelModePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPaneDisplayModePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPaneFooterPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPaneTitlePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPaneToggleButtonStylePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSelectedItemPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSelectionFollowsFocusPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSettingsItemPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnShoulderNavigationEnabledPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
