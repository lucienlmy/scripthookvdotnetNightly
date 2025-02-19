#pragma once

// flutter/src/animation/animation.dart

enum AnimationStatus
{
	AnimationStatus_dismissed,
	AnimationStatus_forward,
	AnimationStatus_reverse,
	AnimationStatus_completed
};

// flutter/src/animation/animation_controller.dart

enum AnimationBehavior
{
	AnimationBehavior_normal,
	AnimationBehavior_preserve
};

// flutter/src/cupertino/date_picker.dart

enum CupertinoTimerPickerMode
{
	CupertinoTimerPickerMode_hm,
	CupertinoTimerPickerMode_ms,
	CupertinoTimerPickerMode_hms
};

enum CupertinoDatePickerMode
{
	CupertinoDatePickerMode_time,
	CupertinoDatePickerMode_date,
	CupertinoDatePickerMode_dateAndTime,
	CupertinoDatePickerMode_monthYear
};

// flutter/src/cupertino/interface_level.dart

enum CupertinoUserInterfaceLevelData
{
	CupertinoUserInterfaceLevelData_base,
	CupertinoUserInterfaceLevelData_elevated
};

// flutter/src/cupertino/list_section.dart

enum CupertinoListSectionType
{
	CupertinoListSectionType_base,
	CupertinoListSectionType_insetGrouped
};

// flutter/src/cupertino/localizations.dart

enum DatePickerDateOrder
{
	DatePickerDateOrder_dmy,
	DatePickerDateOrder_mdy,
	DatePickerDateOrder_ymd,
	DatePickerDateOrder_ydm
};

enum DatePickerDateTimeOrder
{
	DatePickerDateTimeOrder_date_time_dayPeriod,
	DatePickerDateTimeOrder_date_dayPeriod_time,
	DatePickerDateTimeOrder_time_dayPeriod_date,
	DatePickerDateTimeOrder_dayPeriod_time_date
};

// flutter/src/cupertino/refresh.dart

enum RefreshIndicatorMode
{
	RefreshIndicatorMode_inactive,
	RefreshIndicatorMode_drag,
	RefreshIndicatorMode_armed,
	RefreshIndicatorMode_refresh,
	RefreshIndicatorMode_done
};

// flutter/src/cupertino/text_field.dart

enum OverlayVisibilityMode
{
	OverlayVisibilityMode_never,
	OverlayVisibilityMode_editing,
	OverlayVisibilityMode_notEditing,
	OverlayVisibilityMode_always
};

// flutter/src/foundation/diagnostics.dart

enum DiagnosticLevel
{
	DiagnosticLevel_hidden,
	DiagnosticLevel_fine,
	DiagnosticLevel_debug,
	DiagnosticLevel_info,
	DiagnosticLevel_warning,
	DiagnosticLevel_hint,
	DiagnosticLevel_summary,
	DiagnosticLevel_error,
	DiagnosticLevel_off
};

enum DiagnosticsTreeStyle
{
	DiagnosticsTreeStyle_none,
	DiagnosticsTreeStyle_sparse,
	DiagnosticsTreeStyle_offstage,
	DiagnosticsTreeStyle_dense,
	DiagnosticsTreeStyle_transition,
	DiagnosticsTreeStyle_error,
	DiagnosticsTreeStyle_whitespace,
	DiagnosticsTreeStyle_flat,
	DiagnosticsTreeStyle_singleLine,
	DiagnosticsTreeStyle_errorProperty,
	DiagnosticsTreeStyle_shallow,
	DiagnosticsTreeStyle_truncateChildren
};

// flutter/src/foundation/platform.dart

enum TargetPlatform
{
	TargetPlatform_android,
	TargetPlatform_fuchsia,
	TargetPlatform_iOS,
	TargetPlatform_linux,
	TargetPlatform_macOS,
	TargetPlatform_windows
};

// flutter/src/foundation/service_extensions.dart

enum FoundationServiceExtensions
{
	FoundationServiceExtensions_reassemble,
	FoundationServiceExtensions_exit,
	FoundationServiceExtensions_connectedVmServiceUri,
	FoundationServiceExtensions_activeDevToolsServerAddress,
	FoundationServiceExtensions_platformOverride,
	FoundationServiceExtensions_brightnessOverride
};

// flutter/src/gestures/arena.dart

enum GestureDisposition
{
	GestureDisposition_accepted,
	GestureDisposition_rejected
};

// flutter/src/gestures/recognizer.dart

enum DragStartBehavior
{
	DragStartBehavior_down,
	DragStartBehavior_start
};

enum GestureRecognizerState
{
	GestureRecognizerState_ready,
	GestureRecognizerState_possible,
	GestureRecognizerState_defunct
};

// flutter/src/material/app.dart

enum ThemeMode
{
	ThemeMode_system,
	ThemeMode_light,
	ThemeMode_dark
};

// flutter/src/material/banner.dart

enum MaterialBannerClosedReason
{
	MaterialBannerClosedReason_dismiss,
	MaterialBannerClosedReason_swipe,
	MaterialBannerClosedReason_hide,
	MaterialBannerClosedReason_remove
};

// flutter/src/material/bottom_navigation_bar.dart

enum BottomNavigationBarLandscapeLayout
{
	BottomNavigationBarLandscapeLayout_spread,
	BottomNavigationBarLandscapeLayout_centered,
	BottomNavigationBarLandscapeLayout_linear
};

enum BottomNavigationBarType
{
	BottomNavigationBarType_fixed,
	BottomNavigationBarType_shifting
};

// flutter/src/material/button_theme.dart

enum ButtonBarLayoutBehavior
{
	ButtonBarLayoutBehavior_constrained,
	ButtonBarLayoutBehavior_padded
};

enum ButtonTextTheme
{
	ButtonTextTheme_normal,
	ButtonTextTheme_accent,
	ButtonTextTheme_primary
};

// flutter/src/material/date.dart

enum DatePickerEntryMode
{
	DatePickerEntryMode_calendar,
	DatePickerEntryMode_input,
	DatePickerEntryMode_calendarOnly,
	DatePickerEntryMode_inputOnly
};

enum DatePickerMode
{
	DatePickerMode_day,
	DatePickerMode_year
};

// flutter/src/material/drawer.dart

enum DrawerAlignment
{
	DrawerAlignment_start,
	DrawerAlignment_end
};

// flutter/src/material/flexible_space_bar.dart

enum CollapseMode
{
	CollapseMode_parallax,
	CollapseMode_pin,
	CollapseMode_none
};

enum StretchMode
{
	StretchMode_zoomBackground,
	StretchMode_blurBackground,
	StretchMode_fadeTitle
};

// flutter/src/material/input_decorator.dart

enum FloatingLabelBehavior
{
	FloatingLabelBehavior_never,
	FloatingLabelBehavior_auto,
	FloatingLabelBehavior_always
};

// flutter/src/material/list_tile.dart

enum ListTileTitleAlignment
{
	ListTileTitleAlignment_threeLine,
	ListTileTitleAlignment_titleHeight,
	ListTileTitleAlignment_top,
	ListTileTitleAlignment_center,
	ListTileTitleAlignment_bottom
};

enum ListTileControlAffinity
{
	ListTileControlAffinity_leading,
	ListTileControlAffinity_trailing,
	ListTileControlAffinity_platform
};

enum ListTileStyle
{
	ListTileStyle_list,
	ListTileStyle_drawer
};

// flutter/src/material/material.dart

enum MaterialType
{
	MaterialType_canvas,
	MaterialType_card,
	MaterialType_circle,
	MaterialType_button,
	MaterialType_transparency
};

// flutter/src/material/material_state.dart

enum MaterialState
{
	MaterialState_hovered,
	MaterialState_focused,
	MaterialState_pressed,
	MaterialState_dragged,
	MaterialState_selected,
	MaterialState_scrolledUnder,
	MaterialState_disabled,
	MaterialState_error
};

// flutter/src/material/navigation_bar.dart

enum NavigationDestinationLabelBehavior
{
	NavigationDestinationLabelBehavior_alwaysShow,
	NavigationDestinationLabelBehavior_alwaysHide,
	NavigationDestinationLabelBehavior_onlyShowSelected
};

// flutter/src/material/navigation_rail.dart

enum NavigationRailLabelType
{
	NavigationRailLabelType_none,
	NavigationRailLabelType_selected,
	NavigationRailLabelType_all
};

// flutter/src/material/popup_menu_theme.dart

enum PopupMenuPosition
{
	PopupMenuPosition_over,
	PopupMenuPosition_under
};

// flutter/src/material/refresh_indicator.dart

enum RefreshIndicatorTriggerMode
{
	RefreshIndicatorTriggerMode_anywhere,
	RefreshIndicatorTriggerMode_onEdge
};

// flutter/src/material/slider.dart

enum SliderInteraction
{
	SliderInteraction_tapAndSlide,
	SliderInteraction_tapOnly,
	SliderInteraction_slideOnly,
	SliderInteraction_slideThumb
};

// flutter/src/material/slider_theme.dart

enum ShowValueIndicator
{
	ShowValueIndicator_onlyForDiscrete,
	ShowValueIndicator_onlyForContinuous,
	ShowValueIndicator_always,
	ShowValueIndicator_never
};

enum Thumb
{
	Thumb_start,
	Thumb_end
};

// flutter/src/material/snack_bar.dart

enum SnackBarClosedReason
{
	SnackBarClosedReason_action,
	SnackBarClosedReason_dismiss,
	SnackBarClosedReason_swipe,
	SnackBarClosedReason_hide,
	SnackBarClosedReason_remove,
	SnackBarClosedReason_timeout
};

// flutter/src/material/snack_bar_theme.dart

enum SnackBarBehavior
{
	SnackBarBehavior_fixed,
	SnackBarBehavior_floating
};

// flutter/src/material/stepper.dart

enum StepperType
{
	StepperType_vertical,
	StepperType_horizontal
};

enum StepState
{
	StepState_indexed,
	StepState_editing,
	StepState_complete,
	StepState_disabled,
	StepState_error
};

// flutter/src/material/tabs.dart

enum TabBarIndicatorSize
{
	TabBarIndicatorSize_tab,
	TabBarIndicatorSize_label
};

enum TabAlignment
{
	TabAlignment_start,
	TabAlignment_startOffset,
	TabAlignment_fill,
	TabAlignment_center
};

// flutter/src/material/theme_data.dart

enum MaterialTapTargetSize
{
	MaterialTapTargetSize_padded,
	MaterialTapTargetSize_shrinkWrap
};

// flutter/src/material/time.dart

enum HourFormat
{
	HourFormat_HH,
	HourFormat_H,
	HourFormat_h
};

enum DayPeriod
{
	DayPeriod_am,
	DayPeriod_pm
};

enum TimeOfDayFormat
{
	TimeOfDayFormat_HH_colon_mm,
	TimeOfDayFormat_HH_dot_mm,
	TimeOfDayFormat_frenchCanadian,
	TimeOfDayFormat_H_colon_mm,
	TimeOfDayFormat_h_colon_mm_space_a,
	TimeOfDayFormat_a_space_h_colon_mm
};

// flutter/src/material/time_picker.dart

enum TimePickerEntryMode
{
	TimePickerEntryMode_dial,
	TimePickerEntryMode_input,
	TimePickerEntryMode_dialOnly,
	TimePickerEntryMode_inputOnly
};

// flutter/src/material/tooltip_theme.dart

enum TooltipTriggerMode
{
	TooltipTriggerMode_manual,
	TooltipTriggerMode_longPress,
	TooltipTriggerMode_tap
};

// flutter/src/material/typography.dart

enum ScriptCategory
{
	ScriptCategory_englishLike,
	ScriptCategory_dense,
	ScriptCategory_tall
};

// flutter/src/painting/basic_types.dart

enum RenderComparison
{
	RenderComparison_identical,
	RenderComparison_metadata,
	RenderComparison_paint,
	RenderComparison_layout
};

enum Axis
{
	Axis_horizontal,
	Axis_vertical
};

enum AxisDirection
{
	AxisDirection_up,
	AxisDirection_right,
	AxisDirection_down,
	AxisDirection_left
};

enum VerticalDirection
{
	VerticalDirection_up,
	VerticalDirection_down
};

// flutter/src/painting/borders.dart

enum BorderStyle
{
	BorderStyle_none,
	BorderStyle_solid
};

// flutter/src/painting/box_border.dart

enum BoxShape
{
	BoxShape_rectangle,
	BoxShape_circle
};

// flutter/src/painting/box_fit.dart

enum BoxFit
{
	BoxFit_fill,
	BoxFit_contain,
	BoxFit_cover,
	BoxFit_fitWidth,
	BoxFit_fitHeight,
	BoxFit_none,
	BoxFit_scaleDown
};

// flutter/src/painting/decoration_image.dart

enum ImageRepeat
{
	ImageRepeat_repeat,
	ImageRepeat_repeatX,
	ImageRepeat_repeatY,
	ImageRepeat_noRepeat
};

// flutter/src/painting/flutter_logo.dart

enum FlutterLogoStyle
{
	FlutterLogoStyle_markOnly,
	FlutterLogoStyle_horizontal,
	FlutterLogoStyle_stacked
};

// flutter/src/painting/image_provider.dart

enum ResizeImagePolicy
{
	ResizeImagePolicy_exact,
	ResizeImagePolicy_fit
};

// flutter/src/painting/text_painter.dart

enum TextOverflow
{
	TextOverflow_clip,
	TextOverflow_fade,
	TextOverflow_ellipsis,
	TextOverflow_visible
};

enum TextWidthBasis
{
	TextWidthBasis_parent,
	TextWidthBasis_longestLine
};

// flutter/src/physics/spring_simulation.dart

enum SpringType
{
	SpringType_criticallyDamped,
	SpringType_underDamped,
	SpringType_overDamped
};

// flutter/src/rendering/animated_size.dart

enum RenderAnimatedSizeState
{
	RenderAnimatedSizeState_start,
	RenderAnimatedSizeState_stable,
	RenderAnimatedSizeState_changed,
	RenderAnimatedSizeState_unstable
};

// flutter/src/rendering/flex.dart

enum FlexFit
{
	FlexFit_tight,
	FlexFit_loose
};

enum CrossAxisAlignment
{
	CrossAxisAlignment_start,
	CrossAxisAlignment_end,
	CrossAxisAlignment_center,
	CrossAxisAlignment_stretch,
	CrossAxisAlignment_baseline
};

enum MainAxisAlignment
{
	MainAxisAlignment_start,
	MainAxisAlignment_end,
	MainAxisAlignment_center,
	MainAxisAlignment_spaceBetween,
	MainAxisAlignment_spaceAround,
	MainAxisAlignment_spaceEvenly
};

enum MainAxisSize
{
	MainAxisSize_min,
	MainAxisSize_max
};

// flutter/src/rendering/performance_overlay.dart

enum PerformanceOverlayOption
{
	PerformanceOverlayOption_displayRasterizerStatistics,
	PerformanceOverlayOption_visualizeRasterizerStatistics,
	PerformanceOverlayOption_displayEngineStatistics,
	PerformanceOverlayOption_visualizeEngineStatistics
};

// flutter/src/rendering/platform_view.dart

enum PlatformViewHitTestBehavior
{
	PlatformViewHitTestBehavior_opaque,
	PlatformViewHitTestBehavior_translucent,
	PlatformViewHitTestBehavior_transparent
};

// flutter/src/rendering/proxy_box.dart

enum DecorationPosition
{
	DecorationPosition_background,
	DecorationPosition_foreground
};

enum HitTestBehavior
{
	HitTestBehavior_deferToChild,
	HitTestBehavior_opaque,
	HitTestBehavior_translucent
};

// flutter/src/rendering/selection.dart

enum SelectionEventType
{
	SelectionEventType_startEdgeUpdate,
	SelectionEventType_endEdgeUpdate,
	SelectionEventType_clear,
	SelectionEventType_selectAll,
	SelectionEventType_selectWord,
	SelectionEventType_granularlyExtendSelection,
	SelectionEventType_directionallyExtendSelection
};

enum SelectionExtendDirection
{
	SelectionExtendDirection_previousLine,
	SelectionExtendDirection_nextLine,
	SelectionExtendDirection_forward,
	SelectionExtendDirection_backward
};

enum TextSelectionHandleType
{
	TextSelectionHandleType_left,
	TextSelectionHandleType_right,
	TextSelectionHandleType_collapsed
};

enum TextGranularity
{
	TextGranularity_character,
	TextGranularity_word,
	TextGranularity_line,
	TextGranularity_document
};

enum SelectionStatus
{
	SelectionStatus_uncollapsed,
	SelectionStatus_collapsed,
	SelectionStatus_none
};

enum SelectionResult
{
	SelectionResult_next,
	SelectionResult_previous,
	SelectionResult_end,
	SelectionResult_pending,
	SelectionResult_none
};

// flutter/src/rendering/service_extensions.dart

enum RenderingServiceExtensions
{
	RenderingServiceExtensions_invertOversizedImages,
	RenderingServiceExtensions_debugPaint,
	RenderingServiceExtensions_debugPaintBaselinesEnabled,
	RenderingServiceExtensions_repaintRainbow,
	RenderingServiceExtensions_debugDumpLayerTree,
	RenderingServiceExtensions_debugDisableClipLayers,
	RenderingServiceExtensions_debugDisablePhysicalShapeLayers,
	RenderingServiceExtensions_debugDisableOpacityLayers,
	RenderingServiceExtensions_debugDumpRenderTree,
	RenderingServiceExtensions_debugDumpSemanticsTreeInTraversalOrder,
	RenderingServiceExtensions_debugDumpSemanticsTreeInInverseHitTestOrder,
	RenderingServiceExtensions_profileRenderObjectPaints,
	RenderingServiceExtensions_profileRenderObjectLayouts
};

// flutter/src/rendering/sliver.dart

enum GrowthDirection
{
	GrowthDirection_forward,
	GrowthDirection_reverse
};

// flutter/src/rendering/stack.dart

enum StackFit
{
	StackFit_loose,
	StackFit_expand,
	StackFit_passthrough
};

// flutter/src/rendering/table.dart

enum TableCellVerticalAlignment
{
	TableCellVerticalAlignment_top,
	TableCellVerticalAlignment_middle,
	TableCellVerticalAlignment_bottom,
	TableCellVerticalAlignment_baseline,
	TableCellVerticalAlignment_fill
};

// flutter/src/rendering/viewport.dart

enum CacheExtentStyle
{
	CacheExtentStyle_pixel,
	CacheExtentStyle_viewport
};

// flutter/src/rendering/viewport_offset.dart

enum ScrollDirection
{
	ScrollDirection_idle,
	ScrollDirection_forward,
	ScrollDirection_reverse
};

// flutter/src/rendering/wrap.dart

enum WrapAlignment
{
	WrapAlignment_start,
	WrapAlignment_end,
	WrapAlignment_center,
	WrapAlignment_spaceBetween,
	WrapAlignment_spaceAround,
	WrapAlignment_spaceEvenly
};

enum WrapCrossAlignment
{
	WrapCrossAlignment_start,
	WrapCrossAlignment_end,
	WrapCrossAlignment_center
};

// flutter/src/scheduler/binding.dart

enum SchedulerPhase
{
	SchedulerPhase_idle,
	SchedulerPhase_transientCallbacks,
	SchedulerPhase_midFrameMicrotasks,
	SchedulerPhase_persistentCallbacks,
	SchedulerPhase_postFrameCallbacks
};

// flutter/src/scheduler/service_extensions.dart

enum SchedulerServiceExtensions
{
	SchedulerServiceExtensions_timeDilation
};

// flutter/src/semantics/semantics.dart

enum DebugSemanticsDumpOrder
{
	DebugSemanticsDumpOrder_inverseHitTest,
	DebugSemanticsDumpOrder_traversalOrder
};

// flutter/src/semantics/semantics_event.dart

enum Assertiveness
{
	Assertiveness_polite,
	Assertiveness_assertive
};

// flutter/src/services/hardware_keyboard.dart

enum KeyboardLockMode
{
	KeyboardLockMode_logicalKey,
	KeyboardLockMode__knownLockModes,
	KeyboardLockMode_numLock,
	KeyboardLockMode_scrollLock,
	KeyboardLockMode_capsLock
};

enum KeyDataTransitMode
{
	KeyDataTransitMode_rawKeyData,
	KeyDataTransitMode_keyDataThenRawKeyData
};

// flutter/src/services/raw_keyboard.dart

enum KeyboardSide
{
	KeyboardSide_any,
	KeyboardSide_left,
	KeyboardSide_right,
	KeyboardSide_all
};

enum ModifierKey
{
	ModifierKey_controlModifier,
	ModifierKey_shiftModifier,
	ModifierKey_altModifier,
	ModifierKey_metaModifier,
	ModifierKey_capsLockModifier,
	ModifierKey_numLockModifier,
	ModifierKey_scrollLockModifier,
	ModifierKey_functionModifier,
	ModifierKey_symbolModifier
};

// flutter/src/services/service_extensions.dart

enum ServicesServiceExtensions
{
	ServicesServiceExtensions_evict
};

// flutter/src/services/system_chrome.dart

enum SystemUiMode
{
	SystemUiMode_leanBack,
	SystemUiMode_immersive,
	SystemUiMode_immersiveSticky,
	SystemUiMode_edgeToEdge,
	SystemUiMode_manual
};

enum DeviceOrientation
{
	DeviceOrientation_portraitUp,
	DeviceOrientation_landscapeLeft,
	DeviceOrientation_portraitDown,
	DeviceOrientation_landscapeRight
};

enum SystemUiOverlay
{
	SystemUiOverlay_top,
	SystemUiOverlay_bottom
};

// flutter/src/services/system_sound.dart

enum SystemSoundType
{
	SystemSoundType_click,
	SystemSoundType_alert
};

// flutter/src/services/text_formatter.dart

enum MaxLengthEnforcement
{
	MaxLengthEnforcement_none,
	MaxLengthEnforcement_enforced,
	MaxLengthEnforcement_truncateAfterCompositionEnds
};

// flutter/src/services/text_input.dart

enum SelectionChangedCause
{
	SelectionChangedCause_tap,
	SelectionChangedCause_doubleTap,
	SelectionChangedCause_longPress,
	SelectionChangedCause_forcePress,
	SelectionChangedCause_keyboard,
	SelectionChangedCause_toolbar,
	SelectionChangedCause_drag,
	SelectionChangedCause_scribble
};

enum TextInputAction
{
	TextInputAction_none,
	TextInputAction_unspecified,
	TextInputAction_done,
	TextInputAction_go,
	TextInputAction_search,
	TextInputAction_send,
	TextInputAction_next,
	TextInputAction_previous,
	TextInputAction_continueAction,
	TextInputAction_join,
	TextInputAction_route,
	TextInputAction_emergencyCall,
	TextInputAction_newline
};

enum FloatingCursorDragState
{
	FloatingCursorDragState_Start,
	FloatingCursorDragState_Update,
	FloatingCursorDragState_End
};

enum SmartQuotesType
{
	SmartQuotesType_disabled,
	SmartQuotesType_enabled
};

enum TextCapitalization
{
	TextCapitalization_words,
	TextCapitalization_sentences,
	TextCapitalization_characters,
	TextCapitalization_none
};

enum SmartDashesType
{
	SmartDashesType_disabled,
	SmartDashesType_enabled
};

// flutter/src/services/undo_manager.dart

enum UndoDirection
{
	UndoDirection_undo,
	UndoDirection_redo
};

// flutter/src/widgets/animated_cross_fade.dart

enum CrossFadeState
{
	CrossFadeState_showFirst,
	CrossFadeState_showSecond
};

// flutter/src/widgets/async.dart

enum ConnectionState
{
	ConnectionState_none,
	ConnectionState_waiting,
	ConnectionState_active,
	ConnectionState_done
};

// flutter/src/widgets/autofill.dart

enum AutofillContextAction
{
	AutofillContextAction_commit,
	AutofillContextAction_cancel
};

// flutter/src/widgets/banner.dart

enum BannerLocation
{
	BannerLocation_topStart,
	BannerLocation_topEnd,
	BannerLocation_bottomStart,
	BannerLocation_bottomEnd
};

// flutter/src/widgets/context_menu_button_item.dart

enum ContextMenuButtonType
{
	ContextMenuButtonType_cut,
	ContextMenuButtonType_copy,
	ContextMenuButtonType_paste,
	ContextMenuButtonType_selectAll,
	ContextMenuButtonType_delete,
	ContextMenuButtonType_liveTextInput,
	ContextMenuButtonType_custom
};

// flutter/src/widgets/dismissible.dart

enum DismissDirection
{
	DismissDirection_vertical,
	DismissDirection_horizontal,
	DismissDirection_endToStart,
	DismissDirection_startToEnd,
	DismissDirection_up,
	DismissDirection_down,
	DismissDirection_none
};

// flutter/src/widgets/focus_manager.dart

enum FocusHighlightStrategy
{
	FocusHighlightStrategy_automatic,
	FocusHighlightStrategy_alwaysTouch,
	FocusHighlightStrategy_alwaysTraditional
};

enum KeyEventResult
{
	KeyEventResult_handled,
	KeyEventResult_ignored,
	KeyEventResult_skipRemainingHandlers
};

enum FocusHighlightMode
{
	FocusHighlightMode_touch,
	FocusHighlightMode_traditional
};

enum UnfocusDisposition
{
	UnfocusDisposition_scope,
	UnfocusDisposition_previouslyFocusedChild
};

// flutter/src/widgets/focus_traversal.dart

enum TraversalDirection
{
	TraversalDirection_up,
	TraversalDirection_right,
	TraversalDirection_down,
	TraversalDirection_left
};

enum TraversalEdgeBehavior
{
	TraversalEdgeBehavior_closedLoop,
	TraversalEdgeBehavior_leaveFlutterView
};

// flutter/src/widgets/form.dart

enum AutovalidateMode
{
	AutovalidateMode_disabled,
	AutovalidateMode_always,
	AutovalidateMode_onUserInteraction
};

// flutter/src/widgets/heroes.dart

enum HeroFlightDirection
{
	HeroFlightDirection_push,
	HeroFlightDirection_pop
};

// flutter/src/widgets/interactive_viewer.dart

enum PanAxis
{
	PanAxis_horizontal,
	PanAxis_vertical,
	PanAxis_aligned,
	PanAxis_free
};

// flutter/src/widgets/media_query.dart

enum NavigationMode
{
	NavigationMode_traditional,
	NavigationMode_directional
};

enum Orientation
{
	Orientation_portrait,
	Orientation_landscape
};

// flutter/src/widgets/navigator.dart

enum RoutePopDisposition
{
	RoutePopDisposition_pop,
	RoutePopDisposition_doNotPop,
	RoutePopDisposition_bubble
};

// flutter/src/widgets/overflow_bar.dart

enum OverflowBarAlignment
{
	OverflowBarAlignment_start,
	OverflowBarAlignment_end,
	OverflowBarAlignment_center
};

// flutter/src/widgets/platform_menu_bar.dart

enum PlatformProvidedMenuItemType
{
	PlatformProvidedMenuItemType_about,
	PlatformProvidedMenuItemType_quit,
	PlatformProvidedMenuItemType_servicesSubmenu,
	PlatformProvidedMenuItemType_hide,
	PlatformProvidedMenuItemType_hideOtherApplications,
	PlatformProvidedMenuItemType_showAllApplications,
	PlatformProvidedMenuItemType_startSpeaking,
	PlatformProvidedMenuItemType_stopSpeaking,
	PlatformProvidedMenuItemType_toggleFullScreen,
	PlatformProvidedMenuItemType_minimizeWindow,
	PlatformProvidedMenuItemType_zoomWindow,
	PlatformProvidedMenuItemType_arrangeWindowsInFront
};

// flutter/src/widgets/router.dart

enum RouteInformationReportingType
{
	RouteInformationReportingType_none,
	RouteInformationReportingType_neglect,
	RouteInformationReportingType_navigate
};

// flutter/src/widgets/scroll_configuration.dart

enum AndroidOverscrollIndicator
{
	AndroidOverscrollIndicator_stretch,
	AndroidOverscrollIndicator_glow
};

// flutter/src/widgets/scroll_physics.dart

enum ScrollDecelerationRate
{
	ScrollDecelerationRate_normal,
	ScrollDecelerationRate_fast
};

// flutter/src/widgets/scroll_position.dart

enum ScrollPositionAlignmentPolicy
{
	ScrollPositionAlignmentPolicy_explicit,
	ScrollPositionAlignmentPolicy_keepVisibleAtEnd,
	ScrollPositionAlignmentPolicy_keepVisibleAtStart
};

// flutter/src/widgets/scroll_view.dart

enum ScrollViewKeyboardDismissBehavior
{
	ScrollViewKeyboardDismissBehavior_manual,
	ScrollViewKeyboardDismissBehavior_onDrag
};

// flutter/src/widgets/scrollable.dart

enum DiagonalDragBehavior
{
	DiagonalDragBehavior_none,
	DiagonalDragBehavior_weightedEvent,
	DiagonalDragBehavior_weightedContinuous,
	DiagonalDragBehavior_free
};

// flutter/src/widgets/scrollable_helpers.dart

enum ScrollIncrementType
{
	ScrollIncrementType_line,
	ScrollIncrementType_page
};

// flutter/src/widgets/scrollbar.dart

enum ScrollbarOrientation
{
	ScrollbarOrientation_left,
	ScrollbarOrientation_right,
	ScrollbarOrientation_top,
	ScrollbarOrientation_bottom
};

// flutter/src/widgets/service_extensions.dart

enum WidgetInspectorServiceExtensions
{
	WidgetInspectorServiceExtensions_structuredErrors,
	WidgetInspectorServiceExtensions_show,
	WidgetInspectorServiceExtensions_trackRebuildDirtyWidgets,
	WidgetInspectorServiceExtensions_trackRepaintWidgets,
	WidgetInspectorServiceExtensions_disposeAllGroups,
	WidgetInspectorServiceExtensions_disposeGroup,
	WidgetInspectorServiceExtensions_isWidgetTreeReady,
	WidgetInspectorServiceExtensions_disposeId,
	WidgetInspectorServiceExtensions_setPubRootDirectories,
	WidgetInspectorServiceExtensions_addPubRootDirectories,
	WidgetInspectorServiceExtensions_removePubRootDirectories,
	WidgetInspectorServiceExtensions_getPubRootDirectories,
	WidgetInspectorServiceExtensions_setSelectionById,
	WidgetInspectorServiceExtensions_getParentChain,
	WidgetInspectorServiceExtensions_getProperties,
	WidgetInspectorServiceExtensions_getChildren,
	WidgetInspectorServiceExtensions_getChildrenSummaryTree,
	WidgetInspectorServiceExtensions_getChildrenDetailsSubtree,
	WidgetInspectorServiceExtensions_getRootWidget,
	WidgetInspectorServiceExtensions_getRootWidgetSummaryTree,
	WidgetInspectorServiceExtensions_getRootWidgetSummaryTreeWithPreviews,
	WidgetInspectorServiceExtensions_getDetailsSubtree,
	WidgetInspectorServiceExtensions_getSelectedWidget,
	WidgetInspectorServiceExtensions_getSelectedSummaryWidget,
	WidgetInspectorServiceExtensions_isWidgetCreationTracked,
	WidgetInspectorServiceExtensions_screenshot,
	WidgetInspectorServiceExtensions_getLayoutExplorerNode,
	WidgetInspectorServiceExtensions_setFlexFit,
	WidgetInspectorServiceExtensions_setFlexFactor,
	WidgetInspectorServiceExtensions_setFlexProperties
};

enum WidgetsServiceExtensions
{
	WidgetsServiceExtensions_debugDumpApp,
	WidgetsServiceExtensions_debugDumpFocusTree,
	WidgetsServiceExtensions_showPerformanceOverlay,
	WidgetsServiceExtensions_didSendFirstFrameEvent,
	WidgetsServiceExtensions_didSendFirstFrameRasterizedEvent,
	WidgetsServiceExtensions_fastReassemble,
	WidgetsServiceExtensions_profileWidgetBuilds,
	WidgetsServiceExtensions_profileUserWidgetBuilds,
	WidgetsServiceExtensions_debugAllowBanner
};

// flutter/src/widgets/snapshot_widget.dart

enum SnapshotMode
{
	SnapshotMode_permissive,
	SnapshotMode_normal,
	SnapshotMode_forced
};

// flutter/src/widgets/text_selection.dart

enum LiveTextInputStatus
{
	LiveTextInputStatus_enabled,
	LiveTextInputStatus_unknown,
	LiveTextInputStatus_disabled
};

enum ClipboardStatus
{
	ClipboardStatus_pasteable,
	ClipboardStatus_unknown,
	ClipboardStatus_notPasteable
};

// flutter/ui/ui.dart

enum StrokeCap
{
	StrokeCap_butt,
	StrokeCap_round,
	StrokeCap_square
};

enum TextLeadingDistribution
{
	TextLeadingDistribution_proportional,
	TextLeadingDistribution_even
};

enum BlurStyle
{
	BlurStyle_normal,
	BlurStyle_solid,
	BlurStyle_outer,
	BlurStyle_inner
};

enum PixelFormat
{
	PixelFormat_rgba8888,
	PixelFormat_bgra8888,
	PixelFormat_rgbaFloat32
};

enum TextDirection
{
	TextDirection_rtl,
	TextDirection_ltr
};

enum DisplayFeatureState
{
	DisplayFeatureState_unknown,
	DisplayFeatureState_postureFlat,
	DisplayFeatureState_postureHalfOpened
};

enum BoxHeightStyle
{
	BoxHeightStyle_tight,
	BoxHeightStyle_max,
	BoxHeightStyle_includeLineSpacingMiddle,
	BoxHeightStyle_includeLineSpacingTop,
	BoxHeightStyle_includeLineSpacingBottom,
	BoxHeightStyle_strut
};

enum Brightness
{
	Brightness_dark,
	Brightness_light
};

enum KeyEventType
{
	KeyEventType_down,
	KeyEventType_up,
	KeyEventType_repeat
};

enum TileMode
{
	TileMode_clamp,
	TileMode_repeated,
	TileMode_mirror,
	TileMode_decal
};

enum ClipOp
{
	ClipOp_difference,
	ClipOp_intersect
};

enum PointerDeviceKind
{
	PointerDeviceKind_touch,
	PointerDeviceKind_mouse,
	PointerDeviceKind_stylus,
	PointerDeviceKind_invertedStylus,
	PointerDeviceKind_trackpad,
	PointerDeviceKind_unknown
};

enum TextAlign
{
	TextAlign_left,
	TextAlign_right,
	TextAlign_center,
	TextAlign_justify,
	TextAlign_start,
	TextAlign_end
};

enum AppLifecycleState
{
	AppLifecycleState_detached,
	AppLifecycleState_resumed,
	AppLifecycleState_inactive,
	AppLifecycleState_hidden,
	AppLifecycleState_paused
};

enum VertexMode
{
	VertexMode_triangles,
	VertexMode_triangleStrip,
	VertexMode_triangleFan
};

enum BlendMode
{
	BlendMode_clear,
	BlendMode_src,
	BlendMode_dst,
	BlendMode_srcOver,
	BlendMode_dstOver,
	BlendMode_srcIn,
	BlendMode_dstIn,
	BlendMode_srcOut,
	BlendMode_dstOut,
	BlendMode_srcATop,
	BlendMode_dstATop,
	BlendMode_xor,
	BlendMode_plus,
	BlendMode_modulate,
	BlendMode_screen,
	BlendMode_overlay,
	BlendMode_darken,
	BlendMode_lighten,
	BlendMode_colorDodge,
	BlendMode_colorBurn,
	BlendMode_hardLight,
	BlendMode_softLight,
	BlendMode_difference,
	BlendMode_exclusion,
	BlendMode_multiply,
	BlendMode_hue,
	BlendMode_saturation,
	BlendMode_color,
	BlendMode_luminosity
};

enum PaintingStyle
{
	PaintingStyle_fill,
	PaintingStyle_stroke
};

enum PointMode
{
	PointMode_points,
	PointMode_lines,
	PointMode_polygon
};

enum FontStyle
{
	FontStyle_normal,
	FontStyle_italic
};

enum PathOperation
{
	PathOperation_difference,
	PathOperation_intersect,
	PathOperation_union,
	PathOperation_xor,
	PathOperation_reverseDifference
};

enum Clip
{
	Clip_none,
	Clip_hardEdge,
	Clip_antiAlias,
	Clip_antiAliasWithSaveLayer
};

enum TextDecorationStyle
{
	TextDecorationStyle_solid,
	TextDecorationStyle_double,
	TextDecorationStyle_dotted,
	TextDecorationStyle_dashed,
	TextDecorationStyle_wavy
};

enum TextBaseline
{
	TextBaseline_alphabetic,
	TextBaseline_ideographic
};

enum PlaceholderAlignment
{
	PlaceholderAlignment_baseline,
	PlaceholderAlignment_aboveBaseline,
	PlaceholderAlignment_belowBaseline,
	PlaceholderAlignment_top,
	PlaceholderAlignment_bottom,
	PlaceholderAlignment_middle
};

enum BoxWidthStyle
{
	BoxWidthStyle_tight,
	BoxWidthStyle_max
};

enum FilterQuality
{
	FilterQuality_none,
	FilterQuality_low,
	FilterQuality_medium,
	FilterQuality_high
};

enum DartPerformanceMode
{
	DartPerformanceMode_balanced,
	DartPerformanceMode_latency,
	DartPerformanceMode_throughput,
	DartPerformanceMode_memory
};

enum ColorSpace
{
	ColorSpace_sRGB,
	ColorSpace_extendedSRGB
};

enum AppExitType
{
	AppExitType_cancelable,
	AppExitType_required
};

enum StrokeJoin
{
	StrokeJoin_miter,
	StrokeJoin_round,
	StrokeJoin_bevel
};

enum AppExitResponse
{
	AppExitResponse_exit,
	AppExitResponse_cancel
};

enum TextAffinity
{
	TextAffinity_upstream,
	TextAffinity_downstream
};

enum PointerChange
{
	PointerChange_cancel,
	PointerChange_add,
	PointerChange_remove,
	PointerChange_hover,
	PointerChange_down,
	PointerChange_move,
	PointerChange_up,
	PointerChange_panZoomStart,
	PointerChange_panZoomUpdate,
	PointerChange_panZoomEnd
};

enum DisplayFeatureType
{
	DisplayFeatureType_unknown,
	DisplayFeatureType_fold,
	DisplayFeatureType_hinge,
	DisplayFeatureType_cutout
};

enum PointerSignalKind
{
	PointerSignalKind_none,
	PointerSignalKind_scroll,
	PointerSignalKind_scrollInertiaCancel,
	PointerSignalKind_scale,
	PointerSignalKind_unknown
};

enum FramePhase
{
	FramePhase_vsyncStart,
	FramePhase_buildStart,
	FramePhase_buildFinish,
	FramePhase_rasterStart,
	FramePhase_rasterFinish,
	FramePhase_rasterFinishWallTime
};

enum ImageByteFormat
{
	ImageByteFormat_rawRgba,
	ImageByteFormat_rawStraightRgba,
	ImageByteFormat_rawUnmodified,
	ImageByteFormat_rawExtendedRgba128,
	ImageByteFormat_png
};

enum PathFillType
{
	PathFillType_nonZero,
	PathFillType_evenOdd
};

