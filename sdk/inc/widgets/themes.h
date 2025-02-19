#pragma once

class Theme : public StatelessWidget
{
public:
	shptr<class ThemeData> /*var-non-null*/ data();
	shptr<class Widget> /*var-non-null*/ child();
	static shptr<class ThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Theme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Theme> Theme(Theme::_ctorMain p = {}) {
	return Theme::ctorMain(p);
}

class ThemeData : public ObjBase
{
public:
	bool /*var-non-null*/ applyElevationOverlayColor();
	shptr<class NoDefaultCupertinoThemeData> /*var-nullable*/ cupertinoOverrideTheme();
	shptr<class InputDecorationTheme> /*var-non-null*/ inputDecorationTheme();
	MaterialTapTargetSize /*var-non-null*/ materialTapTargetSize();
	shptr<class PageTransitionsTheme> /*var-non-null*/ pageTransitionsTheme();
	TargetPlatform /*var-non-null*/ platform();
	shptr<class ScrollbarThemeData> /*var-non-null*/ scrollbarTheme();
	shptr<class InteractiveInkFeatureFactory> /*var-non-null*/ splashFactory();
	bool /*var-non-null*/ useMaterial3();
	shptr<class VisualDensity> /*var-non-null*/ visualDensity();
	shptr<class Color> /*var-non-null*/ canvasColor();
	shptr<class Color> /*var-non-null*/ cardColor();
	shptr<class ColorScheme> /*var-non-null*/ colorScheme();
	shptr<class Color> /*var-non-null*/ dialogBackgroundColor();
	shptr<class Color> /*var-non-null*/ disabledColor();
	shptr<class Color> /*var-non-null*/ dividerColor();
	shptr<class Color> /*var-non-null*/ focusColor();
	shptr<class Color> /*var-non-null*/ highlightColor();
	shptr<class Color> /*var-non-null*/ hintColor();
	shptr<class Color> /*var-non-null*/ hoverColor();
	shptr<class Color> /*var-non-null*/ indicatorColor();
	shptr<class Color> /*var-non-null*/ primaryColor();
	shptr<class Color> /*var-non-null*/ primaryColorDark();
	shptr<class Color> /*var-non-null*/ primaryColorLight();
	shptr<class Color> /*var-non-null*/ scaffoldBackgroundColor();
	shptr<class Color> /*var-non-null*/ secondaryHeaderColor();
	shptr<class Color> /*var-non-null*/ shadowColor();
	shptr<class Color> /*var-non-null*/ splashColor();
	shptr<class Color> /*var-non-null*/ unselectedWidgetColor();
	shptr<class IconThemeData> /*var-non-null*/ iconTheme();
	shptr<class IconThemeData> /*var-non-null*/ primaryIconTheme();
	shptr<class TextTheme> /*var-non-null*/ primaryTextTheme();
	shptr<class TextTheme> /*var-non-null*/ textTheme();
	shptr<class Typography> /*var-non-null*/ typography();
	shptr<class ActionIconThemeData> /*var-nullable*/ actionIconTheme();
	shptr<class AppBarTheme> /*var-non-null*/ appBarTheme();
	shptr<class BadgeThemeData> /*var-non-null*/ badgeTheme();
	shptr<class MaterialBannerThemeData> /*var-non-null*/ bannerTheme();
	shptr<class BottomAppBarTheme> /*var-non-null*/ bottomAppBarTheme();
	shptr<class BottomNavigationBarThemeData> /*var-non-null*/ bottomNavigationBarTheme();
	shptr<class BottomSheetThemeData> /*var-non-null*/ bottomSheetTheme();
	shptr<class ButtonBarThemeData> /*var-non-null*/ buttonBarTheme();
	shptr<class ButtonThemeData> /*var-non-null*/ buttonTheme();
	shptr<class CardTheme> /*var-non-null*/ cardTheme();
	shptr<class CheckboxThemeData> /*var-non-null*/ checkboxTheme();
	shptr<class ChipThemeData> /*var-non-null*/ chipTheme();
	shptr<class DataTableThemeData> /*var-non-null*/ dataTableTheme();
	shptr<class DatePickerThemeData> /*var-non-null*/ datePickerTheme();
	shptr<class DialogTheme> /*var-non-null*/ dialogTheme();
	shptr<class DividerThemeData> /*var-non-null*/ dividerTheme();
	shptr<class DrawerThemeData> /*var-non-null*/ drawerTheme();
	shptr<class DropdownMenuThemeData> /*var-non-null*/ dropdownMenuTheme();
	shptr<class ElevatedButtonThemeData> /*var-non-null*/ elevatedButtonTheme();
	shptr<class ExpansionTileThemeData> /*var-non-null*/ expansionTileTheme();
	shptr<class FilledButtonThemeData> /*var-non-null*/ filledButtonTheme();
	shptr<class FloatingActionButtonThemeData> /*var-non-null*/ floatingActionButtonTheme();
	shptr<class IconButtonThemeData> /*var-non-null*/ iconButtonTheme();
	shptr<class ListTileThemeData> /*var-non-null*/ listTileTheme();
	shptr<class MenuBarThemeData> /*var-non-null*/ menuBarTheme();
	shptr<class MenuButtonThemeData> /*var-non-null*/ menuButtonTheme();
	shptr<class MenuThemeData> /*var-non-null*/ menuTheme();
	shptr<class NavigationBarThemeData> /*var-non-null*/ navigationBarTheme();
	shptr<class NavigationDrawerThemeData> /*var-non-null*/ navigationDrawerTheme();
	shptr<class NavigationRailThemeData> /*var-non-null*/ navigationRailTheme();
	shptr<class OutlinedButtonThemeData> /*var-non-null*/ outlinedButtonTheme();
	shptr<class PopupMenuThemeData> /*var-non-null*/ popupMenuTheme();
	shptr<class ProgressIndicatorThemeData> /*var-non-null*/ progressIndicatorTheme();
	shptr<class RadioThemeData> /*var-non-null*/ radioTheme();
	shptr<class SearchBarThemeData> /*var-non-null*/ searchBarTheme();
	shptr<class SearchViewThemeData> /*var-non-null*/ searchViewTheme();
	shptr<class SegmentedButtonThemeData> /*var-non-null*/ segmentedButtonTheme();
	shptr<class SliderThemeData> /*var-non-null*/ sliderTheme();
	shptr<class SnackBarThemeData> /*var-non-null*/ snackBarTheme();
	shptr<class SwitchThemeData> /*var-non-null*/ switchTheme();
	shptr<class TabBarTheme> /*var-non-null*/ tabBarTheme();
	shptr<class TextButtonThemeData> /*var-non-null*/ textButtonTheme();
	shptr<class TextSelectionThemeData> /*var-non-null*/ textSelectionTheme();
	shptr<class TimePickerThemeData> /*var-non-null*/ timePickerTheme();
	shptr<class ToggleButtonsThemeData> /*var-non-null*/ toggleButtonsTheme();
	shptr<class TooltipThemeData> /*var-non-null*/ tooltipTheme();
	stdop<AndroidOverscrollIndicator> /*var-nullable*/ androidOverscrollIndicator();
	Brightness /*get-non-null*/ brightness();
	shptr<class Color> /*get-non-null*/ bottomAppBarColor();
	shptr<class Color> /*get-non-null*/ selectedRowColor();
	shptr<class Color> /*get-non-null*/ errorColor();
	shptr<class Color> /*get-non-null*/ backgroundColor();
	shptr<class Color> /*get-non-null*/ toggleableActiveColor();
	struct _copyWith
	{
		/*nullable*/ stdop<bool> applyElevationOverlayColor;
		/*nullable*/ shptr<class NoDefaultCupertinoThemeData> cupertinoOverrideTheme;
//		/*nullable*/ shptr<class Iterable<shptr<class ThemeExtension<shptr<class ObjBase>>>>> extensions;
		/*nullable*/ shptr<class InputDecorationTheme> inputDecorationTheme;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class PageTransitionsTheme> pageTransitionsTheme;
		/*nullable*/ stdop<TargetPlatform> platform;
		/*nullable*/ shptr<class ScrollbarThemeData> scrollbarTheme;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*nullable*/ stdop<bool> useMaterial3;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ shptr<class Color> canvasColor;
		/*nullable*/ shptr<class Color> cardColor;
		/*nullable*/ shptr<class ColorScheme> colorScheme;
		/*nullable*/ shptr<class Color> dialogBackgroundColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> dividerColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> hintColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ shptr<class Color> primaryColor;
		/*nullable*/ shptr<class Color> primaryColorDark;
		/*nullable*/ shptr<class Color> primaryColorLight;
		/*nullable*/ shptr<class Color> scaffoldBackgroundColor;
		/*nullable*/ shptr<class Color> secondaryHeaderColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class Color> unselectedWidgetColor;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
		/*nullable*/ shptr<class IconThemeData> primaryIconTheme;
		/*nullable*/ shptr<class TextTheme> primaryTextTheme;
		/*nullable*/ shptr<class TextTheme> textTheme;
		/*nullable*/ shptr<class Typography> typography;
		/*nullable*/ shptr<class ActionIconThemeData> actionIconTheme;
		/*nullable*/ shptr<class AppBarTheme> appBarTheme;
		/*nullable*/ shptr<class BadgeThemeData> badgeTheme;
		/*nullable*/ shptr<class MaterialBannerThemeData> bannerTheme;
		/*nullable*/ shptr<class BottomAppBarTheme> bottomAppBarTheme;
		/*nullable*/ shptr<class BottomNavigationBarThemeData> bottomNavigationBarTheme;
		/*nullable*/ shptr<class BottomSheetThemeData> bottomSheetTheme;
		/*nullable*/ shptr<class ButtonBarThemeData> buttonBarTheme;
		/*nullable*/ shptr<class ButtonThemeData> buttonTheme;
		/*nullable*/ shptr<class CardTheme> cardTheme;
		/*nullable*/ shptr<class CheckboxThemeData> checkboxTheme;
		/*nullable*/ shptr<class ChipThemeData> chipTheme;
		/*nullable*/ shptr<class DataTableThemeData> dataTableTheme;
		/*nullable*/ shptr<class DatePickerThemeData> datePickerTheme;
		/*nullable*/ shptr<class DialogTheme> dialogTheme;
		/*nullable*/ shptr<class DividerThemeData> dividerTheme;
		/*nullable*/ shptr<class DrawerThemeData> drawerTheme;
		/*nullable*/ shptr<class DropdownMenuThemeData> dropdownMenuTheme;
		/*nullable*/ shptr<class ElevatedButtonThemeData> elevatedButtonTheme;
		/*nullable*/ shptr<class ExpansionTileThemeData> expansionTileTheme;
		/*nullable*/ shptr<class FilledButtonThemeData> filledButtonTheme;
		/*nullable*/ shptr<class FloatingActionButtonThemeData> floatingActionButtonTheme;
		/*nullable*/ shptr<class IconButtonThemeData> iconButtonTheme;
		/*nullable*/ shptr<class ListTileThemeData> listTileTheme;
		/*nullable*/ shptr<class MenuBarThemeData> menuBarTheme;
		/*nullable*/ shptr<class MenuButtonThemeData> menuButtonTheme;
		/*nullable*/ shptr<class MenuThemeData> menuTheme;
		/*nullable*/ shptr<class NavigationBarThemeData> navigationBarTheme;
		/*nullable*/ shptr<class NavigationDrawerThemeData> navigationDrawerTheme;
		/*nullable*/ shptr<class NavigationRailThemeData> navigationRailTheme;
		/*nullable*/ shptr<class OutlinedButtonThemeData> outlinedButtonTheme;
		/*nullable*/ shptr<class PopupMenuThemeData> popupMenuTheme;
		/*nullable*/ shptr<class ProgressIndicatorThemeData> progressIndicatorTheme;
		/*nullable*/ shptr<class RadioThemeData> radioTheme;
		/*nullable*/ shptr<class SearchBarThemeData> searchBarTheme;
		/*nullable*/ shptr<class SearchViewThemeData> searchViewTheme;
		/*nullable*/ shptr<class SegmentedButtonThemeData> segmentedButtonTheme;
		/*nullable*/ shptr<class SliderThemeData> sliderTheme;
		/*nullable*/ shptr<class SnackBarThemeData> snackBarTheme;
		/*nullable*/ shptr<class SwitchThemeData> switchTheme;
		/*nullable*/ shptr<class TabBarTheme> tabBarTheme;
		/*nullable*/ shptr<class TextButtonThemeData> textButtonTheme;
		/*nullable*/ shptr<class TextSelectionThemeData> textSelectionTheme;
		/*nullable*/ shptr<class TimePickerThemeData> timePickerTheme;
		/*nullable*/ shptr<class ToggleButtonsThemeData> toggleButtonsTheme;
		/*nullable*/ shptr<class TooltipThemeData> tooltipTheme;
		/*nullable*/ stdop<AndroidOverscrollIndicator> androidOverscrollIndicator;
		/*nullable*/ shptr<class Color> toggleableActiveColor;
		/*nullable*/ shptr<class Color> selectedRowColor;
		/*nullable*/ shptr<class Color> errorColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> bottomAppBarColor;
	};
	shptr<class ThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class ThemeData> /*non-null*/ localize(/*non-null*/ shptr<class ThemeData> baseTheme, /*non-null*/ shptr<class TextTheme> localTextGeometry);
	static Brightness /*non-null*/ estimateBrightnessForColor(/*non-null*/ shptr<class Color> color);
	static shptr<class ThemeData> /*non-null*/ lerp(/*non-null*/ shptr<class ThemeData> a, /*non-null*/ shptr<class ThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _raw
	{
		/*non-null*/ bool applyElevationOverlayColor;
		/*nullable*/ shptr<class NoDefaultCupertinoThemeData> cupertinoOverrideTheme;
//		/*non-null*/ shptr<class Map<shptr<class ObjBase>, shptr<class ThemeExtension<shptr<class ObjBase>>>>> extensions;
		/*non-null*/ shptr<class InputDecorationTheme> inputDecorationTheme;
		/*non-null*/ MaterialTapTargetSize materialTapTargetSize;
		/*non-null*/ shptr<class PageTransitionsTheme> pageTransitionsTheme;
		/*non-null*/ TargetPlatform platform;
		/*non-null*/ shptr<class ScrollbarThemeData> scrollbarTheme;
		/*non-null*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*non-null*/ bool useMaterial3;
		/*non-null*/ shptr<class VisualDensity> visualDensity;
		/*non-null*/ shptr<class Color> canvasColor;
		/*non-null*/ shptr<class Color> cardColor;
		/*non-null*/ shptr<class ColorScheme> colorScheme;
		/*non-null*/ shptr<class Color> dialogBackgroundColor;
		/*non-null*/ shptr<class Color> disabledColor;
		/*non-null*/ shptr<class Color> dividerColor;
		/*non-null*/ shptr<class Color> focusColor;
		/*non-null*/ shptr<class Color> highlightColor;
		/*non-null*/ shptr<class Color> hintColor;
		/*non-null*/ shptr<class Color> hoverColor;
		/*non-null*/ shptr<class Color> indicatorColor;
		/*non-null*/ shptr<class Color> primaryColor;
		/*non-null*/ shptr<class Color> primaryColorDark;
		/*non-null*/ shptr<class Color> primaryColorLight;
		/*non-null*/ shptr<class Color> scaffoldBackgroundColor;
		/*non-null*/ shptr<class Color> secondaryHeaderColor;
		/*non-null*/ shptr<class Color> shadowColor;
		/*non-null*/ shptr<class Color> splashColor;
		/*non-null*/ shptr<class Color> unselectedWidgetColor;
		/*non-null*/ shptr<class IconThemeData> iconTheme;
		/*non-null*/ shptr<class IconThemeData> primaryIconTheme;
		/*non-null*/ shptr<class TextTheme> primaryTextTheme;
		/*non-null*/ shptr<class TextTheme> textTheme;
		/*non-null*/ shptr<class Typography> typography;
		/*nullable*/ shptr<class ActionIconThemeData> actionIconTheme;
		/*non-null*/ shptr<class AppBarTheme> appBarTheme;
		/*non-null*/ shptr<class BadgeThemeData> badgeTheme;
		/*non-null*/ shptr<class MaterialBannerThemeData> bannerTheme;
		/*non-null*/ shptr<class BottomAppBarTheme> bottomAppBarTheme;
		/*non-null*/ shptr<class BottomNavigationBarThemeData> bottomNavigationBarTheme;
		/*non-null*/ shptr<class BottomSheetThemeData> bottomSheetTheme;
		/*non-null*/ shptr<class ButtonBarThemeData> buttonBarTheme;
		/*non-null*/ shptr<class ButtonThemeData> buttonTheme;
		/*non-null*/ shptr<class CardTheme> cardTheme;
		/*non-null*/ shptr<class CheckboxThemeData> checkboxTheme;
		/*non-null*/ shptr<class ChipThemeData> chipTheme;
		/*non-null*/ shptr<class DataTableThemeData> dataTableTheme;
		/*non-null*/ shptr<class DatePickerThemeData> datePickerTheme;
		/*non-null*/ shptr<class DialogTheme> dialogTheme;
		/*non-null*/ shptr<class DividerThemeData> dividerTheme;
		/*non-null*/ shptr<class DrawerThemeData> drawerTheme;
		/*non-null*/ shptr<class DropdownMenuThemeData> dropdownMenuTheme;
		/*non-null*/ shptr<class ElevatedButtonThemeData> elevatedButtonTheme;
		/*non-null*/ shptr<class ExpansionTileThemeData> expansionTileTheme;
		/*non-null*/ shptr<class FilledButtonThemeData> filledButtonTheme;
		/*non-null*/ shptr<class FloatingActionButtonThemeData> floatingActionButtonTheme;
		/*non-null*/ shptr<class IconButtonThemeData> iconButtonTheme;
		/*non-null*/ shptr<class ListTileThemeData> listTileTheme;
		/*non-null*/ shptr<class MenuBarThemeData> menuBarTheme;
		/*non-null*/ shptr<class MenuButtonThemeData> menuButtonTheme;
		/*non-null*/ shptr<class MenuThemeData> menuTheme;
		/*non-null*/ shptr<class NavigationBarThemeData> navigationBarTheme;
		/*non-null*/ shptr<class NavigationDrawerThemeData> navigationDrawerTheme;
		/*non-null*/ shptr<class NavigationRailThemeData> navigationRailTheme;
		/*non-null*/ shptr<class OutlinedButtonThemeData> outlinedButtonTheme;
		/*non-null*/ shptr<class PopupMenuThemeData> popupMenuTheme;
		/*non-null*/ shptr<class ProgressIndicatorThemeData> progressIndicatorTheme;
		/*non-null*/ shptr<class RadioThemeData> radioTheme;
		/*non-null*/ shptr<class SearchBarThemeData> searchBarTheme;
		/*non-null*/ shptr<class SearchViewThemeData> searchViewTheme;
		/*non-null*/ shptr<class SegmentedButtonThemeData> segmentedButtonTheme;
		/*non-null*/ shptr<class SliderThemeData> sliderTheme;
		/*non-null*/ shptr<class SnackBarThemeData> snackBarTheme;
		/*non-null*/ shptr<class SwitchThemeData> switchTheme;
		/*non-null*/ shptr<class TabBarTheme> tabBarTheme;
		/*non-null*/ shptr<class TextButtonThemeData> textButtonTheme;
		/*non-null*/ shptr<class TextSelectionThemeData> textSelectionTheme;
		/*non-null*/ shptr<class TimePickerThemeData> timePickerTheme;
		/*non-null*/ shptr<class ToggleButtonsThemeData> toggleButtonsTheme;
		/*non-null*/ shptr<class TooltipThemeData> tooltipTheme;
		/*nullable*/ stdop<AndroidOverscrollIndicator> androidOverscrollIndicator;
		/*nullable*/ shptr<class Color> toggleableActiveColor;
		/*nullable*/ shptr<class Color> selectedRowColor;
		/*nullable*/ shptr<class Color> errorColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> bottomAppBarColor;
	};
	static shptr<class ThemeData> /*non-null*/ raw(_raw p = {});
	struct _ctorMain
	{
		/*nullable*/ stdop<bool> applyElevationOverlayColor;
		/*nullable*/ shptr<class NoDefaultCupertinoThemeData> cupertinoOverrideTheme;
//		/*nullable*/ shptr<class Iterable<shptr<class ThemeExtension<shptr<class ObjBase>>>>> extensions;
		/*nullable*/ shptr<class InputDecorationTheme> inputDecorationTheme;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class PageTransitionsTheme> pageTransitionsTheme;
		/*nullable*/ stdop<TargetPlatform> platform;
		/*nullable*/ shptr<class ScrollbarThemeData> scrollbarTheme;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*nullable*/ stdop<bool> useMaterial3;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ shptr<class Color> canvasColor;
		/*nullable*/ shptr<class Color> cardColor;
		/*nullable*/ shptr<class ColorScheme> colorScheme;
		/*nullable*/ shptr<class Color> colorSchemeSeed;
		/*nullable*/ shptr<class Color> dialogBackgroundColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> dividerColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> hintColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ shptr<class Color> primaryColor;
		/*nullable*/ shptr<class Color> primaryColorDark;
		/*nullable*/ shptr<class Color> primaryColorLight;
		/*nullable*/ shptr<class MaterialColor> primarySwatch;
		/*nullable*/ shptr<class Color> scaffoldBackgroundColor;
		/*nullable*/ shptr<class Color> secondaryHeaderColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class Color> unselectedWidgetColor;
		/*nullable*/ stdop<stdstr> fontFamily;
		/*nullable*/ stdop<stdvec<stdstr>> fontFamilyFallback;
		/*nullable*/ stdop<stdstr> package;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
		/*nullable*/ shptr<class IconThemeData> primaryIconTheme;
		/*nullable*/ shptr<class TextTheme> primaryTextTheme;
		/*nullable*/ shptr<class TextTheme> textTheme;
		/*nullable*/ shptr<class Typography> typography;
		/*nullable*/ shptr<class ActionIconThemeData> actionIconTheme;
		/*nullable*/ shptr<class AppBarTheme> appBarTheme;
		/*nullable*/ shptr<class BadgeThemeData> badgeTheme;
		/*nullable*/ shptr<class MaterialBannerThemeData> bannerTheme;
		/*nullable*/ shptr<class BottomAppBarTheme> bottomAppBarTheme;
		/*nullable*/ shptr<class BottomNavigationBarThemeData> bottomNavigationBarTheme;
		/*nullable*/ shptr<class BottomSheetThemeData> bottomSheetTheme;
		/*nullable*/ shptr<class ButtonBarThemeData> buttonBarTheme;
		/*nullable*/ shptr<class ButtonThemeData> buttonTheme;
		/*nullable*/ shptr<class CardTheme> cardTheme;
		/*nullable*/ shptr<class CheckboxThemeData> checkboxTheme;
		/*nullable*/ shptr<class ChipThemeData> chipTheme;
		/*nullable*/ shptr<class DataTableThemeData> dataTableTheme;
		/*nullable*/ shptr<class DatePickerThemeData> datePickerTheme;
		/*nullable*/ shptr<class DialogTheme> dialogTheme;
		/*nullable*/ shptr<class DividerThemeData> dividerTheme;
		/*nullable*/ shptr<class DrawerThemeData> drawerTheme;
		/*nullable*/ shptr<class DropdownMenuThemeData> dropdownMenuTheme;
		/*nullable*/ shptr<class ElevatedButtonThemeData> elevatedButtonTheme;
		/*nullable*/ shptr<class ExpansionTileThemeData> expansionTileTheme;
		/*nullable*/ shptr<class FilledButtonThemeData> filledButtonTheme;
		/*nullable*/ shptr<class FloatingActionButtonThemeData> floatingActionButtonTheme;
		/*nullable*/ shptr<class IconButtonThemeData> iconButtonTheme;
		/*nullable*/ shptr<class ListTileThemeData> listTileTheme;
		/*nullable*/ shptr<class MenuBarThemeData> menuBarTheme;
		/*nullable*/ shptr<class MenuButtonThemeData> menuButtonTheme;
		/*nullable*/ shptr<class MenuThemeData> menuTheme;
		/*nullable*/ shptr<class NavigationBarThemeData> navigationBarTheme;
		/*nullable*/ shptr<class NavigationDrawerThemeData> navigationDrawerTheme;
		/*nullable*/ shptr<class NavigationRailThemeData> navigationRailTheme;
		/*nullable*/ shptr<class OutlinedButtonThemeData> outlinedButtonTheme;
		/*nullable*/ shptr<class PopupMenuThemeData> popupMenuTheme;
		/*nullable*/ shptr<class ProgressIndicatorThemeData> progressIndicatorTheme;
		/*nullable*/ shptr<class RadioThemeData> radioTheme;
		/*nullable*/ shptr<class SearchBarThemeData> searchBarTheme;
		/*nullable*/ shptr<class SearchViewThemeData> searchViewTheme;
		/*nullable*/ shptr<class SegmentedButtonThemeData> segmentedButtonTheme;
		/*nullable*/ shptr<class SliderThemeData> sliderTheme;
		/*nullable*/ shptr<class SnackBarThemeData> snackBarTheme;
		/*nullable*/ shptr<class SwitchThemeData> switchTheme;
		/*nullable*/ shptr<class TabBarTheme> tabBarTheme;
		/*nullable*/ shptr<class TextButtonThemeData> textButtonTheme;
		/*nullable*/ shptr<class TextSelectionThemeData> textSelectionTheme;
		/*nullable*/ shptr<class TimePickerThemeData> timePickerTheme;
		/*nullable*/ shptr<class ToggleButtonsThemeData> toggleButtonsTheme;
		/*nullable*/ shptr<class TooltipThemeData> tooltipTheme;
		/*nullable*/ stdop<AndroidOverscrollIndicator> androidOverscrollIndicator;
		/*nullable*/ shptr<class Color> toggleableActiveColor;
		/*nullable*/ shptr<class Color> selectedRowColor;
		/*nullable*/ shptr<class Color> errorColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> bottomAppBarColor;
	};
	static shptr<class ThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _from
	{
		/*non-null*/ shptr<class ColorScheme> colorScheme;
		/*nullable*/ shptr<class TextTheme> textTheme;
		/*nullable*/ stdop<bool> useMaterial3;
	};
	static shptr<class ThemeData> /*non-null*/ from(_from p = {});
	struct _light
	{
		/*nullable*/ stdop<bool> useMaterial3;
	};
	static shptr<class ThemeData> /*non-null*/ light(_light p = {});
	struct _dark
	{
		/*nullable*/ stdop<bool> useMaterial3;
	};
	static shptr<class ThemeData> /*non-null*/ dark(_dark p = {});
	struct _fallback
	{
		/*nullable*/ stdop<bool> useMaterial3;
	};
	static shptr<class ThemeData> /*non-null*/ fallback(_fallback p = {});
};

inline shptr<class ThemeData> ThemeData(ThemeData::_ctorMain p = {}) {
	return ThemeData::ctorMain(p);
}

class ActionIconTheme : public InheritedTheme
{
public:
	shptr<class ActionIconThemeData> /*var-non-null*/ data();
	static shptr<class ActionIconThemeData> /*nullable*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class ActionIconTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ActionIconThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ActionIconTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ActionIconTheme> ActionIconTheme(ActionIconTheme::_ctorMain p = {}) {
	return ActionIconTheme::ctorMain(p);
}

class ActionIconThemeData : public ObjBase
{
public:
	struct _copyWith
	{
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ backButtonIconBuilder;
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ closeButtonIconBuilder;
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ drawerButtonIconBuilder;
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ endDrawerButtonIconBuilder;
	};
	shptr<class ActionIconThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class ActionIconThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class ActionIconThemeData> a, /*nullable*/ shptr<class ActionIconThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ backButtonIconBuilder;
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ closeButtonIconBuilder;
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ drawerButtonIconBuilder;
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ endDrawerButtonIconBuilder;
	};
	static shptr<class ActionIconThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ActionIconThemeData> ActionIconThemeData(ActionIconThemeData::_ctorMain p = {}) {
	return ActionIconThemeData::ctorMain(p);
}

class BadgeTheme : public InheritedTheme
{
public:
	shptr<class BadgeThemeData> /*var-non-null*/ data();
	static shptr<class BadgeThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class BadgeTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class BadgeThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class BadgeTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BadgeTheme> BadgeTheme(BadgeTheme::_ctorMain p = {}) {
	return BadgeTheme::ctorMain(p);
}

class BadgeThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ textColor();
	stdop<double> /*var-nullable*/ smallSize();
	stdop<double> /*var-nullable*/ largeSize();
	shptr<class TextStyle> /*var-nullable*/ textStyle();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class AlignmentGeometry> /*var-nullable*/ alignment();
	shptr<class Offset> /*var-nullable*/ offset();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ stdop<double> smallSize;
		/*nullable*/ stdop<double> largeSize;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class Offset> offset;
	};
	shptr<class BadgeThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class BadgeThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class BadgeThemeData> a, /*nullable*/ shptr<class BadgeThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ stdop<double> smallSize;
		/*nullable*/ stdop<double> largeSize;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class Offset> offset;
	};
	static shptr<class BadgeThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BadgeThemeData> BadgeThemeData(BadgeThemeData::_ctorMain p = {}) {
	return BadgeThemeData::ctorMain(p);
}

class MaterialBannerThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ dividerColor();
	shptr<class TextStyle> /*var-nullable*/ contentTextStyle();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ leadingPadding();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> dividerColor;
		/*nullable*/ shptr<class TextStyle> contentTextStyle;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class EdgeInsetsGeometry> leadingPadding;
	};
	shptr<class MaterialBannerThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class MaterialBannerThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class MaterialBannerThemeData> a, /*nullable*/ shptr<class MaterialBannerThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> dividerColor;
		/*nullable*/ shptr<class TextStyle> contentTextStyle;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class EdgeInsetsGeometry> leadingPadding;
	};
	static shptr<class MaterialBannerThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MaterialBannerThemeData> MaterialBannerThemeData(MaterialBannerThemeData::_ctorMain p = {}) {
	return MaterialBannerThemeData::ctorMain(p);
}

class MaterialBannerTheme : public InheritedTheme
{
public:
	shptr<class MaterialBannerThemeData> /*var-nullable*/ data();
	static shptr<class MaterialBannerThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class MaterialBannerTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class MaterialBannerThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class MaterialBannerTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MaterialBannerTheme> MaterialBannerTheme(MaterialBannerTheme::_ctorMain p = {}) {
	return MaterialBannerTheme::ctorMain(p);
}

class BottomNavigationBarTheme : public InheritedWidget
{
public:
	shptr<class BottomNavigationBarThemeData> /*var-non-null*/ data();
	static shptr<class BottomNavigationBarThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class BottomNavigationBarTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class BottomNavigationBarThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class BottomNavigationBarTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BottomNavigationBarTheme> BottomNavigationBarTheme(BottomNavigationBarTheme::_ctorMain p = {}) {
	return BottomNavigationBarTheme::ctorMain(p);
}

class BottomNavigationBarThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class IconThemeData> /*var-nullable*/ selectedIconTheme();
	shptr<class IconThemeData> /*var-nullable*/ unselectedIconTheme();
	shptr<class Color> /*var-nullable*/ selectedItemColor();
	shptr<class Color> /*var-nullable*/ unselectedItemColor();
	shptr<class TextStyle> /*var-nullable*/ selectedLabelStyle();
	shptr<class TextStyle> /*var-nullable*/ unselectedLabelStyle();
	stdop<bool> /*var-nullable*/ showSelectedLabels();
	stdop<bool> /*var-nullable*/ showUnselectedLabels();
	stdop<BottomNavigationBarType> /*var-nullable*/ type();
	stdop<bool> /*var-nullable*/ enableFeedback();
	stdop<BottomNavigationBarLandscapeLayout> /*var-nullable*/ landscapeLayout();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class IconThemeData> selectedIconTheme;
		/*nullable*/ shptr<class IconThemeData> unselectedIconTheme;
		/*nullable*/ shptr<class Color> selectedItemColor;
		/*nullable*/ shptr<class Color> unselectedItemColor;
		/*nullable*/ shptr<class TextStyle> selectedLabelStyle;
		/*nullable*/ shptr<class TextStyle> unselectedLabelStyle;
		/*nullable*/ stdop<bool> showSelectedLabels;
		/*nullable*/ stdop<bool> showUnselectedLabels;
		/*nullable*/ stdop<BottomNavigationBarType> type;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ stdop<BottomNavigationBarLandscapeLayout> landscapeLayout;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
	};
	shptr<class BottomNavigationBarThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class BottomNavigationBarThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class BottomNavigationBarThemeData> a, /*nullable*/ shptr<class BottomNavigationBarThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class IconThemeData> selectedIconTheme;
		/*nullable*/ shptr<class IconThemeData> unselectedIconTheme;
		/*nullable*/ shptr<class Color> selectedItemColor;
		/*nullable*/ shptr<class Color> unselectedItemColor;
		/*nullable*/ shptr<class TextStyle> selectedLabelStyle;
		/*nullable*/ shptr<class TextStyle> unselectedLabelStyle;
		/*nullable*/ stdop<bool> showSelectedLabels;
		/*nullable*/ stdop<bool> showUnselectedLabels;
		/*nullable*/ stdop<BottomNavigationBarType> type;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ stdop<BottomNavigationBarLandscapeLayout> landscapeLayout;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
	};
	static shptr<class BottomNavigationBarThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BottomNavigationBarThemeData> BottomNavigationBarThemeData(BottomNavigationBarThemeData::_ctorMain p = {}) {
	return BottomNavigationBarThemeData::ctorMain(p);
}

class BottomSheetThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ modalBackgroundColor();
	shptr<class Color> /*var-nullable*/ modalBarrierColor();
	shptr<class Color> /*var-nullable*/ shadowColor();
	stdop<double> /*var-nullable*/ modalElevation();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	stdop<bool> /*var-nullable*/ showDragHandle();
	shptr<class Color> /*var-nullable*/ dragHandleColor();
	shptr<class Size> /*var-nullable*/ dragHandleSize();
	stdop<Clip> /*var-nullable*/ clipBehavior();
	shptr<class BoxConstraints> /*var-nullable*/ constraints();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> modalBackgroundColor;
		/*nullable*/ shptr<class Color> modalBarrierColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ stdop<double> modalElevation;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<bool> showDragHandle;
		/*nullable*/ shptr<class Color> dragHandleColor;
		/*nullable*/ shptr<class Size> dragHandleSize;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class BoxConstraints> constraints;
	};
	shptr<class BottomSheetThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class BottomSheetThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class BottomSheetThemeData> a, /*nullable*/ shptr<class BottomSheetThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> modalBackgroundColor;
		/*nullable*/ shptr<class Color> modalBarrierColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ stdop<double> modalElevation;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<bool> showDragHandle;
		/*nullable*/ shptr<class Color> dragHandleColor;
		/*nullable*/ shptr<class Size> dragHandleSize;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class BoxConstraints> constraints;
	};
	static shptr<class BottomSheetThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BottomSheetThemeData> BottomSheetThemeData(BottomSheetThemeData::_ctorMain p = {}) {
	return BottomSheetThemeData::ctorMain(p);
}

class ButtonBarTheme : public InheritedWidget
{
public:
	shptr<class ButtonBarThemeData> /*var-non-null*/ data();
	static shptr<class ButtonBarThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class ButtonBarTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ButtonBarThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ButtonBarTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ButtonBarTheme> ButtonBarTheme(ButtonBarTheme::_ctorMain p = {}) {
	return ButtonBarTheme::ctorMain(p);
}

class ButtonBarThemeData : public ObjBase
{
public:
	stdop<MainAxisAlignment> /*var-nullable*/ alignment();
	stdop<MainAxisSize> /*var-nullable*/ mainAxisSize();
	stdop<ButtonTextTheme> /*var-nullable*/ buttonTextTheme();
	stdop<double> /*var-nullable*/ buttonMinWidth();
	stdop<double> /*var-nullable*/ buttonHeight();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ buttonPadding();
	stdop<bool> /*var-nullable*/ buttonAlignedDropdown();
	stdop<ButtonBarLayoutBehavior> /*var-nullable*/ layoutBehavior();
	stdop<VerticalDirection> /*var-nullable*/ overflowDirection();
	struct _copyWith
	{
		/*nullable*/ stdop<MainAxisAlignment> alignment;
		/*nullable*/ stdop<MainAxisSize> mainAxisSize;
		/*nullable*/ stdop<ButtonTextTheme> buttonTextTheme;
		/*nullable*/ stdop<double> buttonMinWidth;
		/*nullable*/ stdop<double> buttonHeight;
		/*nullable*/ shptr<class EdgeInsetsGeometry> buttonPadding;
		/*nullable*/ stdop<bool> buttonAlignedDropdown;
		/*nullable*/ stdop<ButtonBarLayoutBehavior> layoutBehavior;
		/*nullable*/ stdop<VerticalDirection> overflowDirection;
	};
	shptr<class ButtonBarThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class ButtonBarThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class ButtonBarThemeData> a, /*nullable*/ shptr<class ButtonBarThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdop<MainAxisAlignment> alignment;
		/*nullable*/ stdop<MainAxisSize> mainAxisSize;
		/*nullable*/ stdop<ButtonTextTheme> buttonTextTheme;
		/*nullable*/ stdop<double> buttonMinWidth;
		/*nullable*/ stdop<double> buttonHeight;
		/*nullable*/ shptr<class EdgeInsetsGeometry> buttonPadding;
		/*nullable*/ stdop<bool> buttonAlignedDropdown;
		/*nullable*/ stdop<ButtonBarLayoutBehavior> layoutBehavior;
		/*nullable*/ stdop<VerticalDirection> overflowDirection;
	};
	static shptr<class ButtonBarThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ButtonBarThemeData> ButtonBarThemeData(ButtonBarThemeData::_ctorMain p = {}) {
	return ButtonBarThemeData::ctorMain(p);
}

class ButtonTheme : public InheritedTheme
{
public:
	shptr<class ButtonThemeData> /*var-non-null*/ data();
	static shptr<class ButtonThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class ButtonTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ ButtonTextTheme textTheme = ButtonTextTheme_normal;
		/*non-null*/ ButtonBarLayoutBehavior layoutBehavior = ButtonBarLayoutBehavior_padded;
		/*non-null*/ double minWidth = 88.0;
		/*non-null*/ double height = 36.0;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ bool alignedDropdown = false;
		/*nullable*/ shptr<class Color> buttonColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class ColorScheme> colorScheme;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ButtonTheme> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _fromButtonThemeData
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ButtonThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ButtonTheme> /*non-null*/ fromButtonThemeData(_fromButtonThemeData p = {});
};

inline shptr<class ButtonTheme> ButtonTheme(ButtonTheme::_ctorMain p = {}) {
	return ButtonTheme::ctorMain(p);
}

class ButtonThemeData : public ObjBase
{
public:
	double /*var-non-null*/ minWidth();
	double /*var-non-null*/ height();
	ButtonTextTheme /*var-non-null*/ textTheme();
	ButtonBarLayoutBehavior /*var-non-null*/ layoutBehavior();
	bool /*var-non-null*/ alignedDropdown();
	shptr<class ColorScheme> /*var-nullable*/ colorScheme();
	shptr<class BoxConstraints> /*get-non-null*/ constraints();
	shptr<class EdgeInsetsGeometry> /*get-non-null*/ padding();
	shptr<class ShapeBorder> /*get-non-null*/ shape();
	Brightness /*non-null*/ getBrightness(/*non-null*/ shptr<class MaterialButton> button);
	ButtonTextTheme /*non-null*/ getTextTheme(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class Color> /*non-null*/ getDisabledTextColor(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class Color> /*non-null*/ getDisabledFillColor(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class Color> /*nullable*/ getFillColor(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class Color> /*non-null*/ getTextColor(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class Color> /*non-null*/ getSplashColor(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class Color> /*non-null*/ getFocusColor(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class Color> /*non-null*/ getHoverColor(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class Color> /*non-null*/ getHighlightColor(/*non-null*/ shptr<class MaterialButton> button);
	double /*non-null*/ getElevation(/*non-null*/ shptr<class MaterialButton> button);
	double /*non-null*/ getFocusElevation(/*non-null*/ shptr<class MaterialButton> button);
	double /*non-null*/ getHoverElevation(/*non-null*/ shptr<class MaterialButton> button);
	double /*non-null*/ getHighlightElevation(/*non-null*/ shptr<class MaterialButton> button);
	double /*non-null*/ getDisabledElevation(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class EdgeInsetsGeometry> /*non-null*/ getPadding(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class ShapeBorder> /*non-null*/ getShape(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class Duration> /*non-null*/ getAnimationDuration(/*non-null*/ shptr<class MaterialButton> button);
	shptr<class BoxConstraints> /*non-null*/ getConstraints(/*non-null*/ shptr<class MaterialButton> button);
	MaterialTapTargetSize /*non-null*/ getMaterialTapTargetSize(/*non-null*/ shptr<class MaterialButton> button);
	struct _copyWith
	{
		/*nullable*/ stdop<ButtonTextTheme> textTheme;
		/*nullable*/ stdop<ButtonBarLayoutBehavior> layoutBehavior;
		/*nullable*/ stdop<double> minWidth;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<bool> alignedDropdown;
		/*nullable*/ shptr<class Color> buttonColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class ColorScheme> colorScheme;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
	};
	shptr<class ButtonThemeData> /*non-null*/ copyWith(_copyWith p = {});
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ ButtonTextTheme textTheme = ButtonTextTheme_normal;
		/*non-null*/ double minWidth = 88.0;
		/*non-null*/ double height = 36.0;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ ButtonBarLayoutBehavior layoutBehavior = ButtonBarLayoutBehavior_padded;
		/*non-null*/ bool alignedDropdown = false;
		/*nullable*/ shptr<class Color> buttonColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class ColorScheme> colorScheme;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
	};
	static shptr<class ButtonThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ButtonThemeData> ButtonThemeData(ButtonThemeData::_ctorMain p = {}) {
	return ButtonThemeData::ctorMain(p);
}

class CheckboxThemeData : public ObjBase
{
public:
	stdop<double> /*var-nullable*/ splashRadius();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	shptr<class OutlinedBorder> /*var-nullable*/ shape();
	shptr<class BorderSide> /*var-nullable*/ side();
	struct _copyWith
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> checkColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class BorderSide> side;
	};
	shptr<class CheckboxThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class CheckboxThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class CheckboxThemeData> a, /*nullable*/ shptr<class CheckboxThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> checkColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class BorderSide> side;
	};
	static shptr<class CheckboxThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CheckboxThemeData> CheckboxThemeData(CheckboxThemeData::_ctorMain p = {}) {
	return CheckboxThemeData::ctorMain(p);
}

class CheckboxTheme : public InheritedWidget
{
public:
	shptr<class CheckboxThemeData> /*var-non-null*/ data();
	static shptr<class CheckboxThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class CheckboxTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class CheckboxThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class CheckboxTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CheckboxTheme> CheckboxTheme(CheckboxTheme::_ctorMain p = {}) {
	return CheckboxTheme::ctorMain(p);
}

class ChipTheme : public InheritedTheme
{
public:
	shptr<class ChipThemeData> /*var-non-null*/ data();
	static shptr<class ChipThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class ChipTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ChipThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ChipTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ChipTheme> ChipTheme(ChipTheme::_ctorMain p = {}) {
	return ChipTheme::ctorMain(p);
}

class ChipThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ deleteIconColor();
	shptr<class Color> /*var-nullable*/ disabledColor();
	shptr<class Color> /*var-nullable*/ selectedColor();
	shptr<class Color> /*var-nullable*/ secondarySelectedColor();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class Color> /*var-nullable*/ selectedShadowColor();
	stdop<bool> /*var-nullable*/ showCheckmark();
	shptr<class Color> /*var-nullable*/ checkmarkColor();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ labelPadding();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class BorderSide> /*var-nullable*/ side();
	shptr<class OutlinedBorder> /*var-nullable*/ shape();
	shptr<class TextStyle> /*var-nullable*/ labelStyle();
	shptr<class TextStyle> /*var-nullable*/ secondaryLabelStyle();
	stdop<Brightness> /*var-nullable*/ brightness();
	stdop<double> /*var-nullable*/ elevation();
	stdop<double> /*var-nullable*/ pressElevation();
	shptr<class IconThemeData> /*var-nullable*/ iconTheme();
	struct _copyWith
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> deleteIconColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ shptr<class Color> secondarySelectedColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> selectedShadowColor;
		/*nullable*/ stdop<bool> showCheckmark;
		/*nullable*/ shptr<class Color> checkmarkColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> labelPadding;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class TextStyle> secondaryLabelStyle;
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> pressElevation;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
	};
	shptr<class ChipThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class ChipThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class ChipThemeData> a, /*nullable*/ shptr<class ChipThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> deleteIconColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ shptr<class Color> secondarySelectedColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> selectedShadowColor;
		/*nullable*/ stdop<bool> showCheckmark;
		/*nullable*/ shptr<class Color> checkmarkColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> labelPadding;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class TextStyle> secondaryLabelStyle;
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> pressElevation;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
	};
	static shptr<class ChipThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _fromDefaults
	{
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ shptr<class Color> primaryColor;
		/*non-null*/ shptr<class Color> secondaryColor;
		/*non-null*/ shptr<class TextStyle> labelStyle;
	};
	static shptr<class ChipThemeData> /*non-null*/ fromDefaults(_fromDefaults p = {});
};

inline shptr<class ChipThemeData> ChipThemeData(ChipThemeData::_ctorMain p = {}) {
	return ChipThemeData::ctorMain(p);
}

class DataTableThemeData : public ObjBase
{
public:
	shptr<class Decoration> /*var-nullable*/ decoration();
	stdop<double> /*var-nullable*/ dataRowMinHeight();
	stdop<double> /*var-nullable*/ dataRowMaxHeight();
	shptr<class TextStyle> /*var-nullable*/ dataTextStyle();
	stdop<double> /*var-nullable*/ headingRowHeight();
	shptr<class TextStyle> /*var-nullable*/ headingTextStyle();
	stdop<double> /*var-nullable*/ horizontalMargin();
	stdop<double> /*var-nullable*/ columnSpacing();
	stdop<double> /*var-nullable*/ dividerThickness();
	stdop<double> /*var-nullable*/ checkboxHorizontalMargin();
	stdop<double> /*get-nullable*/ dataRowHeight();
	struct _copyWith
	{
		/*nullable*/ shptr<class Decoration> decoration;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> dataRowColor;
		/*nullable*/ stdop<double> dataRowHeight;
		/*nullable*/ stdop<double> dataRowMinHeight;
		/*nullable*/ stdop<double> dataRowMaxHeight;
		/*nullable*/ shptr<class TextStyle> dataTextStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> headingRowColor;
		/*nullable*/ stdop<double> headingRowHeight;
		/*nullable*/ shptr<class TextStyle> headingTextStyle;
		/*nullable*/ stdop<double> horizontalMargin;
		/*nullable*/ stdop<double> columnSpacing;
		/*nullable*/ stdop<double> dividerThickness;
		/*nullable*/ stdop<double> checkboxHorizontalMargin;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> headingCellCursor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> dataRowCursor;
	};
	shptr<class DataTableThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class DataTableThemeData> /*non-null*/ lerp(/*non-null*/ shptr<class DataTableThemeData> a, /*non-null*/ shptr<class DataTableThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Decoration> decoration;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> dataRowColor;
		/*nullable*/ stdop<double> dataRowHeight;
		/*nullable*/ stdop<double> dataRowMinHeight;
		/*nullable*/ stdop<double> dataRowMaxHeight;
		/*nullable*/ shptr<class TextStyle> dataTextStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> headingRowColor;
		/*nullable*/ stdop<double> headingRowHeight;
		/*nullable*/ shptr<class TextStyle> headingTextStyle;
		/*nullable*/ stdop<double> horizontalMargin;
		/*nullable*/ stdop<double> columnSpacing;
		/*nullable*/ stdop<double> dividerThickness;
		/*nullable*/ stdop<double> checkboxHorizontalMargin;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> headingCellCursor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> dataRowCursor;
	};
	static shptr<class DataTableThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DataTableThemeData> DataTableThemeData(DataTableThemeData::_ctorMain p = {}) {
	return DataTableThemeData::ctorMain(p);
}

class DataTableTheme : public InheritedWidget
{
public:
	shptr<class DataTableThemeData> /*var-non-null*/ data();
	static shptr<class DataTableThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class DataTableTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class DataTableThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class DataTableTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DataTableTheme> DataTableTheme(DataTableTheme::_ctorMain p = {}) {
	return DataTableTheme::ctorMain(p);
}

class DatePickerTheme : public InheritedTheme
{
public:
	shptr<class DatePickerThemeData> /*var-non-null*/ data();
	static shptr<class DatePickerThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class DatePickerThemeData> /*nullable*/ maybeOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class DatePickerThemeData> /*non-null*/ defaults(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class DatePickerTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class DatePickerThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class DatePickerTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DatePickerTheme> DatePickerTheme(DatePickerTheme::_ctorMain p = {}) {
	return DatePickerTheme::ctorMain(p);
}

class DatePickerThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class Color> /*var-nullable*/ headerBackgroundColor();
	shptr<class Color> /*var-nullable*/ headerForegroundColor();
	shptr<class TextStyle> /*var-nullable*/ headerHeadlineStyle();
	shptr<class TextStyle> /*var-nullable*/ headerHelpStyle();
	shptr<class TextStyle> /*var-nullable*/ weekdayStyle();
	shptr<class TextStyle> /*var-nullable*/ dayStyle();
	shptr<class BorderSide> /*var-nullable*/ todayBorder();
	shptr<class TextStyle> /*var-nullable*/ yearStyle();
	shptr<class Color> /*var-nullable*/ rangePickerBackgroundColor();
	stdop<double> /*var-nullable*/ rangePickerElevation();
	shptr<class Color> /*var-nullable*/ rangePickerShadowColor();
	shptr<class Color> /*var-nullable*/ rangePickerSurfaceTintColor();
	shptr<class ShapeBorder> /*var-nullable*/ rangePickerShape();
	shptr<class Color> /*var-nullable*/ rangePickerHeaderBackgroundColor();
	shptr<class Color> /*var-nullable*/ rangePickerHeaderForegroundColor();
	shptr<class TextStyle> /*var-nullable*/ rangePickerHeaderHeadlineStyle();
	shptr<class TextStyle> /*var-nullable*/ rangePickerHeaderHelpStyle();
	shptr<class Color> /*var-nullable*/ rangeSelectionBackgroundColor();
	shptr<class Color> /*var-nullable*/ dividerColor();
	shptr<class InputDecorationTheme> /*var-nullable*/ inputDecorationTheme();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class Color> headerBackgroundColor;
		/*nullable*/ shptr<class Color> headerForegroundColor;
		/*nullable*/ shptr<class TextStyle> headerHeadlineStyle;
		/*nullable*/ shptr<class TextStyle> headerHelpStyle;
		/*nullable*/ shptr<class TextStyle> weekdayStyle;
		/*nullable*/ shptr<class TextStyle> dayStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> dayForegroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> dayBackgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> dayOverlayColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> todayForegroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> todayBackgroundColor;
		/*nullable*/ shptr<class BorderSide> todayBorder;
		/*nullable*/ shptr<class TextStyle> yearStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> yearForegroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> yearBackgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> yearOverlayColor;
		/*nullable*/ shptr<class Color> rangePickerBackgroundColor;
		/*nullable*/ stdop<double> rangePickerElevation;
		/*nullable*/ shptr<class Color> rangePickerShadowColor;
		/*nullable*/ shptr<class Color> rangePickerSurfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> rangePickerShape;
		/*nullable*/ shptr<class Color> rangePickerHeaderBackgroundColor;
		/*nullable*/ shptr<class Color> rangePickerHeaderForegroundColor;
		/*nullable*/ shptr<class TextStyle> rangePickerHeaderHeadlineStyle;
		/*nullable*/ shptr<class TextStyle> rangePickerHeaderHelpStyle;
		/*nullable*/ shptr<class Color> rangeSelectionBackgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> rangeSelectionOverlayColor;
		/*nullable*/ shptr<class Color> dividerColor;
		/*nullable*/ shptr<class InputDecorationTheme> inputDecorationTheme;
	};
	shptr<class DatePickerThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class DatePickerThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class DatePickerThemeData> a, /*nullable*/ shptr<class DatePickerThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class Color> headerBackgroundColor;
		/*nullable*/ shptr<class Color> headerForegroundColor;
		/*nullable*/ shptr<class TextStyle> headerHeadlineStyle;
		/*nullable*/ shptr<class TextStyle> headerHelpStyle;
		/*nullable*/ shptr<class TextStyle> weekdayStyle;
		/*nullable*/ shptr<class TextStyle> dayStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> dayForegroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> dayBackgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> dayOverlayColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> todayForegroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> todayBackgroundColor;
		/*nullable*/ shptr<class BorderSide> todayBorder;
		/*nullable*/ shptr<class TextStyle> yearStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> yearForegroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> yearBackgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> yearOverlayColor;
		/*nullable*/ shptr<class Color> rangePickerBackgroundColor;
		/*nullable*/ stdop<double> rangePickerElevation;
		/*nullable*/ shptr<class Color> rangePickerShadowColor;
		/*nullable*/ shptr<class Color> rangePickerSurfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> rangePickerShape;
		/*nullable*/ shptr<class Color> rangePickerHeaderBackgroundColor;
		/*nullable*/ shptr<class Color> rangePickerHeaderForegroundColor;
		/*nullable*/ shptr<class TextStyle> rangePickerHeaderHeadlineStyle;
		/*nullable*/ shptr<class TextStyle> rangePickerHeaderHelpStyle;
		/*nullable*/ shptr<class Color> rangeSelectionBackgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> rangeSelectionOverlayColor;
		/*nullable*/ shptr<class Color> dividerColor;
		/*nullable*/ shptr<class InputDecorationTheme> inputDecorationTheme;
	};
	static shptr<class DatePickerThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DatePickerThemeData> DatePickerThemeData(DatePickerThemeData::_ctorMain p = {}) {
	return DatePickerThemeData::ctorMain(p);
}

class DividerThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ color();
	stdop<double> /*var-nullable*/ space();
	stdop<double> /*var-nullable*/ thickness();
	stdop<double> /*var-nullable*/ indent();
	stdop<double> /*var-nullable*/ endIndent();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<double> space;
		/*nullable*/ stdop<double> thickness;
		/*nullable*/ stdop<double> indent;
		/*nullable*/ stdop<double> endIndent;
	};
	shptr<class DividerThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class DividerThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class DividerThemeData> a, /*nullable*/ shptr<class DividerThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<double> space;
		/*nullable*/ stdop<double> thickness;
		/*nullable*/ stdop<double> indent;
		/*nullable*/ stdop<double> endIndent;
	};
	static shptr<class DividerThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DividerThemeData> DividerThemeData(DividerThemeData::_ctorMain p = {}) {
	return DividerThemeData::ctorMain(p);
}

class DividerTheme : public InheritedTheme
{
public:
	shptr<class DividerThemeData> /*var-non-null*/ data();
	static shptr<class DividerThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class DividerTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class DividerThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class DividerTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DividerTheme> DividerTheme(DividerTheme::_ctorMain p = {}) {
	return DividerTheme::ctorMain(p);
}

class DrawerTheme : public InheritedTheme
{
public:
	shptr<class DrawerThemeData> /*var-non-null*/ data();
	static shptr<class DrawerThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class DrawerTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class DrawerThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class DrawerTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DrawerTheme> DrawerTheme(DrawerTheme::_ctorMain p = {}) {
	return DrawerTheme::ctorMain(p);
}

class DrawerThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ scrimColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class ShapeBorder> /*var-nullable*/ endShape();
	stdop<double> /*var-nullable*/ width();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> scrimColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class ShapeBorder> endShape;
		/*nullable*/ stdop<double> width;
	};
	shptr<class DrawerThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class DrawerThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class DrawerThemeData> a, /*nullable*/ shptr<class DrawerThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> scrimColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class ShapeBorder> endShape;
		/*nullable*/ stdop<double> width;
	};
	static shptr<class DrawerThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DrawerThemeData> DrawerThemeData(DrawerThemeData::_ctorMain p = {}) {
	return DrawerThemeData::ctorMain(p);
}

class DropdownMenuThemeData : public ObjBase
{
public:
	shptr<class TextStyle> /*var-nullable*/ textStyle();
	shptr<class InputDecorationTheme> /*var-nullable*/ inputDecorationTheme();
	shptr<class MenuStyle> /*var-nullable*/ menuStyle();
	struct _copyWith
	{
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class InputDecorationTheme> inputDecorationTheme;
		/*nullable*/ shptr<class MenuStyle> menuStyle;
	};
	shptr<class DropdownMenuThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class DropdownMenuThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class DropdownMenuThemeData> a, /*nullable*/ shptr<class DropdownMenuThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class InputDecorationTheme> inputDecorationTheme;
		/*nullable*/ shptr<class MenuStyle> menuStyle;
	};
	static shptr<class DropdownMenuThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DropdownMenuThemeData> DropdownMenuThemeData(DropdownMenuThemeData::_ctorMain p = {}) {
	return DropdownMenuThemeData::ctorMain(p);
}

class DropdownMenuTheme : public InheritedTheme
{
public:
	shptr<class DropdownMenuThemeData> /*var-non-null*/ data();
	static shptr<class DropdownMenuThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class DropdownMenuThemeData> /*nullable*/ maybeOf(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class DropdownMenuTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class DropdownMenuThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class DropdownMenuTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DropdownMenuTheme> DropdownMenuTheme(DropdownMenuTheme::_ctorMain p = {}) {
	return DropdownMenuTheme::ctorMain(p);
}

class ElevatedButtonTheme : public InheritedTheme
{
public:
	shptr<class ElevatedButtonThemeData> /*var-non-null*/ data();
	static shptr<class ElevatedButtonThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class ElevatedButtonTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ElevatedButtonThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ElevatedButtonTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ElevatedButtonTheme> ElevatedButtonTheme(ElevatedButtonTheme::_ctorMain p = {}) {
	return ElevatedButtonTheme::ctorMain(p);
}

class ElevatedButtonThemeData : public ObjBase
{
public:
	shptr<class ButtonStyle> /*var-nullable*/ style();
	static shptr<class ElevatedButtonThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class ElevatedButtonThemeData> a, /*nullable*/ shptr<class ElevatedButtonThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class ButtonStyle> style;
	};
	static shptr<class ElevatedButtonThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ElevatedButtonThemeData> ElevatedButtonThemeData(ElevatedButtonThemeData::_ctorMain p = {}) {
	return ElevatedButtonThemeData::ctorMain(p);
}

class ExpansionTileTheme : public InheritedTheme
{
public:
	shptr<class ExpansionTileThemeData> /*var-non-null*/ data();
	static shptr<class ExpansionTileThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class ExpansionTileTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ExpansionTileThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ExpansionTileTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ExpansionTileTheme> ExpansionTileTheme(ExpansionTileTheme::_ctorMain p = {}) {
	return ExpansionTileTheme::ctorMain(p);
}

class ExpansionTileThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ collapsedBackgroundColor();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ tilePadding();
	shptr<class AlignmentGeometry> /*var-nullable*/ expandedAlignment();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ childrenPadding();
	shptr<class Color> /*var-nullable*/ iconColor();
	shptr<class Color> /*var-nullable*/ collapsedIconColor();
	shptr<class Color> /*var-nullable*/ textColor();
	shptr<class Color> /*var-nullable*/ collapsedTextColor();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class ShapeBorder> /*var-nullable*/ collapsedShape();
	stdop<Clip> /*var-nullable*/ clipBehavior();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> collapsedBackgroundColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> tilePadding;
		/*nullable*/ shptr<class AlignmentGeometry> expandedAlignment;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class Color> collapsedIconColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ shptr<class Color> collapsedTextColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class ShapeBorder> collapsedShape;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class EdgeInsetsGeometry> childrenPadding;
	};
	shptr<class ExpansionTileThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class ExpansionTileThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class ExpansionTileThemeData> a, /*nullable*/ shptr<class ExpansionTileThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> collapsedBackgroundColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> tilePadding;
		/*nullable*/ shptr<class AlignmentGeometry> expandedAlignment;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class Color> collapsedIconColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ shptr<class Color> collapsedTextColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class ShapeBorder> collapsedShape;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class EdgeInsetsGeometry> childrenPadding;
	};
	static shptr<class ExpansionTileThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ExpansionTileThemeData> ExpansionTileThemeData(ExpansionTileThemeData::_ctorMain p = {}) {
	return ExpansionTileThemeData::ctorMain(p);
}

class FilledButtonTheme : public InheritedTheme
{
public:
	shptr<class FilledButtonThemeData> /*var-non-null*/ data();
	static shptr<class FilledButtonThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class FilledButtonTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class FilledButtonThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class FilledButtonTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class FilledButtonTheme> FilledButtonTheme(FilledButtonTheme::_ctorMain p = {}) {
	return FilledButtonTheme::ctorMain(p);
}

class FilledButtonThemeData : public ObjBase
{
public:
	shptr<class ButtonStyle> /*var-nullable*/ style();
	static shptr<class FilledButtonThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class FilledButtonThemeData> a, /*nullable*/ shptr<class FilledButtonThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class ButtonStyle> style;
	};
	static shptr<class FilledButtonThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class FilledButtonThemeData> FilledButtonThemeData(FilledButtonThemeData::_ctorMain p = {}) {
	return FilledButtonThemeData::ctorMain(p);
}

class FloatingActionButtonThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ foregroundColor();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	shptr<class Color> /*var-nullable*/ splashColor();
	stdop<double> /*var-nullable*/ elevation();
	stdop<double> /*var-nullable*/ focusElevation();
	stdop<double> /*var-nullable*/ hoverElevation();
	stdop<double> /*var-nullable*/ disabledElevation();
	stdop<double> /*var-nullable*/ highlightElevation();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	stdop<bool> /*var-nullable*/ enableFeedback();
	stdop<double> /*var-nullable*/ iconSize();
	shptr<class BoxConstraints> /*var-nullable*/ sizeConstraints();
	shptr<class BoxConstraints> /*var-nullable*/ smallSizeConstraints();
	shptr<class BoxConstraints> /*var-nullable*/ largeSizeConstraints();
	shptr<class BoxConstraints> /*var-nullable*/ extendedSizeConstraints();
	stdop<double> /*var-nullable*/ extendedIconLabelSpacing();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ extendedPadding();
	shptr<class TextStyle> /*var-nullable*/ extendedTextStyle();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> focusElevation;
		/*nullable*/ stdop<double> hoverElevation;
		/*nullable*/ stdop<double> disabledElevation;
		/*nullable*/ stdop<double> highlightElevation;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ stdop<double> iconSize;
		/*nullable*/ shptr<class BoxConstraints> sizeConstraints;
		/*nullable*/ shptr<class BoxConstraints> smallSizeConstraints;
		/*nullable*/ shptr<class BoxConstraints> largeSizeConstraints;
		/*nullable*/ shptr<class BoxConstraints> extendedSizeConstraints;
		/*nullable*/ stdop<double> extendedIconLabelSpacing;
		/*nullable*/ shptr<class EdgeInsetsGeometry> extendedPadding;
		/*nullable*/ shptr<class TextStyle> extendedTextStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
	};
	shptr<class FloatingActionButtonThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class FloatingActionButtonThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class FloatingActionButtonThemeData> a, /*nullable*/ shptr<class FloatingActionButtonThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> focusElevation;
		/*nullable*/ stdop<double> hoverElevation;
		/*nullable*/ stdop<double> disabledElevation;
		/*nullable*/ stdop<double> highlightElevation;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ stdop<double> iconSize;
		/*nullable*/ shptr<class BoxConstraints> sizeConstraints;
		/*nullable*/ shptr<class BoxConstraints> smallSizeConstraints;
		/*nullable*/ shptr<class BoxConstraints> largeSizeConstraints;
		/*nullable*/ shptr<class BoxConstraints> extendedSizeConstraints;
		/*nullable*/ stdop<double> extendedIconLabelSpacing;
		/*nullable*/ shptr<class EdgeInsetsGeometry> extendedPadding;
		/*nullable*/ shptr<class TextStyle> extendedTextStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
	};
	static shptr<class FloatingActionButtonThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class FloatingActionButtonThemeData> FloatingActionButtonThemeData(FloatingActionButtonThemeData::_ctorMain p = {}) {
	return FloatingActionButtonThemeData::ctorMain(p);
}

class IconButtonTheme : public InheritedTheme
{
public:
	shptr<class IconButtonThemeData> /*var-non-null*/ data();
	static shptr<class IconButtonThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class IconButtonTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class IconButtonThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class IconButtonTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class IconButtonTheme> IconButtonTheme(IconButtonTheme::_ctorMain p = {}) {
	return IconButtonTheme::ctorMain(p);
}

class IconButtonThemeData : public ObjBase
{
public:
	shptr<class ButtonStyle> /*var-nullable*/ style();
	static shptr<class IconButtonThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class IconButtonThemeData> a, /*nullable*/ shptr<class IconButtonThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class ButtonStyle> style;
	};
	static shptr<class IconButtonThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class IconButtonThemeData> IconButtonThemeData(IconButtonThemeData::_ctorMain p = {}) {
	return IconButtonThemeData::ctorMain(p);
}

class ListTileThemeData : public ObjBase
{
public:
	stdop<bool> /*var-nullable*/ dense();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	stdop<ListTileStyle> /*var-nullable*/ style();
	shptr<class Color> /*var-nullable*/ selectedColor();
	shptr<class Color> /*var-nullable*/ iconColor();
	shptr<class Color> /*var-nullable*/ textColor();
	shptr<class TextStyle> /*var-nullable*/ titleTextStyle();
	shptr<class TextStyle> /*var-nullable*/ subtitleTextStyle();
	shptr<class TextStyle> /*var-nullable*/ leadingAndTrailingTextStyle();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ contentPadding();
	shptr<class Color> /*var-nullable*/ tileColor();
	shptr<class Color> /*var-nullable*/ selectedTileColor();
	stdop<double> /*var-nullable*/ horizontalTitleGap();
	stdop<double> /*var-nullable*/ minVerticalPadding();
	stdop<double> /*var-nullable*/ minLeadingWidth();
	stdop<bool> /*var-nullable*/ enableFeedback();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	stdop<ListTileTitleAlignment> /*var-nullable*/ titleAlignment();
	struct _copyWith
	{
		/*nullable*/ stdop<bool> dense;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<ListTileStyle> style;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class TextStyle> subtitleTextStyle;
		/*nullable*/ shptr<class TextStyle> leadingAndTrailingTextStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*nullable*/ shptr<class Color> tileColor;
		/*nullable*/ shptr<class Color> selectedTileColor;
		/*nullable*/ stdop<double> horizontalTitleGap;
		/*nullable*/ stdop<double> minVerticalPadding;
		/*nullable*/ stdop<double> minLeadingWidth;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ stdop<bool> isThreeLine;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<ListTileTitleAlignment> titleAlignment;
	};
	shptr<class ListTileThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class ListTileThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class ListTileThemeData> a, /*nullable*/ shptr<class ListTileThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdop<bool> dense;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<ListTileStyle> style;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class TextStyle> subtitleTextStyle;
		/*nullable*/ shptr<class TextStyle> leadingAndTrailingTextStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*nullable*/ shptr<class Color> tileColor;
		/*nullable*/ shptr<class Color> selectedTileColor;
		/*nullable*/ stdop<double> horizontalTitleGap;
		/*nullable*/ stdop<double> minVerticalPadding;
		/*nullable*/ stdop<double> minLeadingWidth;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<ListTileTitleAlignment> titleAlignment;
	};
	static shptr<class ListTileThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ListTileThemeData> ListTileThemeData(ListTileThemeData::_ctorMain p = {}) {
	return ListTileThemeData::ctorMain(p);
}

class ListTileTheme : public InheritedTheme
{
public:
	shptr<class ListTileThemeData> /*get-non-null*/ data();
	stdop<bool> /*get-nullable*/ dense();
	shptr<class ShapeBorder> /*get-nullable*/ shape();
	stdop<ListTileStyle> /*get-nullable*/ style();
	shptr<class Color> /*get-nullable*/ selectedColor();
	shptr<class Color> /*get-nullable*/ iconColor();
	shptr<class Color> /*get-nullable*/ textColor();
	shptr<class EdgeInsetsGeometry> /*get-nullable*/ contentPadding();
	shptr<class Color> /*get-nullable*/ tileColor();
	shptr<class Color> /*get-nullable*/ selectedTileColor();
	stdop<double> /*get-nullable*/ horizontalTitleGap();
	stdop<double> /*get-nullable*/ minVerticalPadding();
	stdop<double> /*get-nullable*/ minLeadingWidth();
	stdop<bool> /*get-nullable*/ enableFeedback();
	static shptr<class ListTileThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	struct _merge
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<bool> dense;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<ListTileStyle> style;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class TextStyle> subtitleTextStyle;
		/*nullable*/ shptr<class TextStyle> leadingAndTrailingTextStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*nullable*/ shptr<class Color> tileColor;
		/*nullable*/ shptr<class Color> selectedTileColor;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ stdop<double> horizontalTitleGap;
		/*nullable*/ stdop<double> minVerticalPadding;
		/*nullable*/ stdop<double> minLeadingWidth;
		/*nullable*/ stdop<ListTileTitleAlignment> titleAlignment;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Widget> /*non-null*/ merge(_merge p = {});
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class ListTileTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class ListTileThemeData> data;
		/*nullable*/ stdop<bool> dense;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<ListTileStyle> style;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*nullable*/ shptr<class Color> tileColor;
		/*nullable*/ shptr<class Color> selectedTileColor;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ stdop<double> horizontalTitleGap;
		/*nullable*/ stdop<double> minVerticalPadding;
		/*nullable*/ stdop<double> minLeadingWidth;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ListTileTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ListTileTheme> ListTileTheme(ListTileTheme::_ctorMain p = {}) {
	return ListTileTheme::ctorMain(p);
}

class MenuStyle : public ObjBase
{
public:
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	shptr<class AlignmentGeometry> /*var-nullable*/ alignment();
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _copyWith
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> backgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> shadowColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> surfaceTintColor;
		/*nullable*/ shptr<class MaterialStateProperty<double>> elevation;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class EdgeInsetsGeometry>>> padding;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> minimumSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> fixedSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> maximumSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class BorderSide>>> side;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class OutlinedBorder>>> shape;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
	};
	shptr<class MenuStyle> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class MenuStyle> /*non-null*/ merge(/*nullable*/ shptr<class MenuStyle> style);
	static shptr<class MenuStyle> /*nullable*/ lerp(/*nullable*/ shptr<class MenuStyle> a, /*nullable*/ shptr<class MenuStyle> b, /*non-null*/ double t);
	struct _ctorMain
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> backgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> shadowColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> surfaceTintColor;
		/*nullable*/ shptr<class MaterialStateProperty<double>> elevation;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class EdgeInsetsGeometry>>> padding;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> minimumSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> fixedSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> maximumSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class BorderSide>>> side;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class OutlinedBorder>>> shape;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
	};
	static shptr<class MenuStyle> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MenuStyle> MenuStyle(MenuStyle::_ctorMain p = {}) {
	return MenuStyle::ctorMain(p);
}

class MenuButtonTheme : public InheritedTheme
{
public:
	shptr<class MenuButtonThemeData> /*var-non-null*/ data();
	static shptr<class MenuButtonThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class MenuButtonTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class MenuButtonThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class MenuButtonTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MenuButtonTheme> MenuButtonTheme(MenuButtonTheme::_ctorMain p = {}) {
	return MenuButtonTheme::ctorMain(p);
}

class MenuButtonThemeData : public ObjBase
{
public:
	shptr<class ButtonStyle> /*var-nullable*/ style();
	static shptr<class MenuButtonThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class MenuButtonThemeData> a, /*nullable*/ shptr<class MenuButtonThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class ButtonStyle> style;
	};
	static shptr<class MenuButtonThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MenuButtonThemeData> MenuButtonThemeData(MenuButtonThemeData::_ctorMain p = {}) {
	return MenuButtonThemeData::ctorMain(p);
}

class MenuThemeData : public ObjBase
{
public:
	shptr<class MenuStyle> /*var-nullable*/ style();
	static shptr<class MenuThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class MenuThemeData> a, /*nullable*/ shptr<class MenuThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class MenuStyle> style;
	};
	static shptr<class MenuThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MenuThemeData> MenuThemeData(MenuThemeData::_ctorMain p = {}) {
	return MenuThemeData::ctorMain(p);
}

class MenuTheme : public InheritedTheme
{
public:
	shptr<class MenuThemeData> /*var-non-null*/ data();
	static shptr<class MenuThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class MenuTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class MenuThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class MenuTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MenuTheme> MenuTheme(MenuTheme::_ctorMain p = {}) {
	return MenuTheme::ctorMain(p);
}

class MenuBarTheme : public InheritedTheme
{
public:
	shptr<class MenuBarThemeData> /*var-non-null*/ data();
	static shptr<class MenuBarThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class MenuBarTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class MenuBarThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class MenuBarTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MenuBarTheme> MenuBarTheme(MenuBarTheme::_ctorMain p = {}) {
	return MenuBarTheme::ctorMain(p);
}

class MenuBarThemeData : public MenuThemeData
{
public:
	static shptr<class MenuBarThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class MenuBarThemeData> a, /*nullable*/ shptr<class MenuBarThemeData> b, /*non-null*/ double t);
	struct _ctorMain
	{
		/*nullable*/ shptr<class MenuStyle> style;
	};
	static shptr<class MenuBarThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MenuBarThemeData> MenuBarThemeData(MenuBarThemeData::_ctorMain p = {}) {
	return MenuBarThemeData::ctorMain(p);
}

class NavigationBarTheme : public InheritedTheme
{
public:
	shptr<class NavigationBarThemeData> /*var-non-null*/ data();
	static shptr<class NavigationBarThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class NavigationBarTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class NavigationBarThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class NavigationBarTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NavigationBarTheme> NavigationBarTheme(NavigationBarTheme::_ctorMain p = {}) {
	return NavigationBarTheme::ctorMain(p);
}

class NavigationBarThemeData : public ObjBase
{
public:
	stdop<double> /*var-nullable*/ height();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class Color> /*var-nullable*/ indicatorColor();
	shptr<class ShapeBorder> /*var-nullable*/ indicatorShape();
	stdop<NavigationDestinationLabelBehavior> /*var-nullable*/ labelBehavior();
	struct _copyWith
	{
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ shptr<class ShapeBorder> indicatorShape;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> labelTextStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class IconThemeData>>> iconTheme;
		/*nullable*/ stdop<NavigationDestinationLabelBehavior> labelBehavior;
	};
	shptr<class NavigationBarThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class NavigationBarThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class NavigationBarThemeData> a, /*nullable*/ shptr<class NavigationBarThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ shptr<class ShapeBorder> indicatorShape;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> labelTextStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class IconThemeData>>> iconTheme;
		/*nullable*/ stdop<NavigationDestinationLabelBehavior> labelBehavior;
	};
	static shptr<class NavigationBarThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NavigationBarThemeData> NavigationBarThemeData(NavigationBarThemeData::_ctorMain p = {}) {
	return NavigationBarThemeData::ctorMain(p);
}

class NavigationDrawerThemeData : public ObjBase
{
public:
	stdop<double> /*var-nullable*/ tileHeight();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class Color> /*var-nullable*/ indicatorColor();
	shptr<class ShapeBorder> /*var-nullable*/ indicatorShape();
	shptr<class Size> /*var-nullable*/ indicatorSize();
	struct _copyWith
	{
		/*nullable*/ stdop<double> tileHeight;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ shptr<class ShapeBorder> indicatorShape;
		/*nullable*/ shptr<class Size> indicatorSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> labelTextStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class IconThemeData>>> iconTheme;
	};
	shptr<class NavigationDrawerThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class NavigationDrawerThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class NavigationDrawerThemeData> a, /*nullable*/ shptr<class NavigationDrawerThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdop<double> tileHeight;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ shptr<class ShapeBorder> indicatorShape;
		/*nullable*/ shptr<class Size> indicatorSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> labelTextStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class IconThemeData>>> iconTheme;
	};
	static shptr<class NavigationDrawerThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NavigationDrawerThemeData> NavigationDrawerThemeData(NavigationDrawerThemeData::_ctorMain p = {}) {
	return NavigationDrawerThemeData::ctorMain(p);
}

class NavigationDrawerTheme : public InheritedTheme
{
public:
	shptr<class NavigationDrawerThemeData> /*var-non-null*/ data();
	static shptr<class NavigationDrawerThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class NavigationDrawerTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class NavigationDrawerThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class NavigationDrawerTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NavigationDrawerTheme> NavigationDrawerTheme(NavigationDrawerTheme::_ctorMain p = {}) {
	return NavigationDrawerTheme::ctorMain(p);
}

class NavigationRailTheme : public InheritedTheme
{
public:
	shptr<class NavigationRailThemeData> /*var-non-null*/ data();
	static shptr<class NavigationRailThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class NavigationRailTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class NavigationRailThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class NavigationRailTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NavigationRailTheme> NavigationRailTheme(NavigationRailTheme::_ctorMain p = {}) {
	return NavigationRailTheme::ctorMain(p);
}

class NavigationRailThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class TextStyle> /*var-nullable*/ unselectedLabelTextStyle();
	shptr<class TextStyle> /*var-nullable*/ selectedLabelTextStyle();
	shptr<class IconThemeData> /*var-nullable*/ unselectedIconTheme();
	shptr<class IconThemeData> /*var-nullable*/ selectedIconTheme();
	stdop<double> /*var-nullable*/ groupAlignment();
	stdop<NavigationRailLabelType> /*var-nullable*/ labelType();
	stdop<bool> /*var-nullable*/ useIndicator();
	shptr<class Color> /*var-nullable*/ indicatorColor();
	shptr<class ShapeBorder> /*var-nullable*/ indicatorShape();
	stdop<double> /*var-nullable*/ minWidth();
	stdop<double> /*var-nullable*/ minExtendedWidth();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class TextStyle> unselectedLabelTextStyle;
		/*nullable*/ shptr<class TextStyle> selectedLabelTextStyle;
		/*nullable*/ shptr<class IconThemeData> unselectedIconTheme;
		/*nullable*/ shptr<class IconThemeData> selectedIconTheme;
		/*nullable*/ stdop<double> groupAlignment;
		/*nullable*/ stdop<NavigationRailLabelType> labelType;
		/*nullable*/ stdop<bool> useIndicator;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ shptr<class ShapeBorder> indicatorShape;
		/*nullable*/ stdop<double> minWidth;
		/*nullable*/ stdop<double> minExtendedWidth;
	};
	shptr<class NavigationRailThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class NavigationRailThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class NavigationRailThemeData> a, /*nullable*/ shptr<class NavigationRailThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class TextStyle> unselectedLabelTextStyle;
		/*nullable*/ shptr<class TextStyle> selectedLabelTextStyle;
		/*nullable*/ shptr<class IconThemeData> unselectedIconTheme;
		/*nullable*/ shptr<class IconThemeData> selectedIconTheme;
		/*nullable*/ stdop<double> groupAlignment;
		/*nullable*/ stdop<NavigationRailLabelType> labelType;
		/*nullable*/ stdop<bool> useIndicator;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ shptr<class ShapeBorder> indicatorShape;
		/*nullable*/ stdop<double> minWidth;
		/*nullable*/ stdop<double> minExtendedWidth;
	};
	static shptr<class NavigationRailThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NavigationRailThemeData> NavigationRailThemeData(NavigationRailThemeData::_ctorMain p = {}) {
	return NavigationRailThemeData::ctorMain(p);
}

class OutlinedButtonTheme : public InheritedTheme
{
public:
	shptr<class OutlinedButtonThemeData> /*var-non-null*/ data();
	static shptr<class OutlinedButtonThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class OutlinedButtonTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class OutlinedButtonThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class OutlinedButtonTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class OutlinedButtonTheme> OutlinedButtonTheme(OutlinedButtonTheme::_ctorMain p = {}) {
	return OutlinedButtonTheme::ctorMain(p);
}

class OutlinedButtonThemeData : public ObjBase
{
public:
	shptr<class ButtonStyle> /*var-nullable*/ style();
	static shptr<class OutlinedButtonThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class OutlinedButtonThemeData> a, /*nullable*/ shptr<class OutlinedButtonThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class ButtonStyle> style;
	};
	static shptr<class OutlinedButtonThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class OutlinedButtonThemeData> OutlinedButtonThemeData(OutlinedButtonThemeData::_ctorMain p = {}) {
	return OutlinedButtonThemeData::ctorMain(p);
}

class PopupMenuThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ color();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class TextStyle> /*var-nullable*/ textStyle();
	stdop<bool> /*var-nullable*/ enableFeedback();
	stdop<PopupMenuPosition> /*var-nullable*/ position();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> labelTextStyle;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ stdop<PopupMenuPosition> position;
	};
	shptr<class PopupMenuThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class PopupMenuThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class PopupMenuThemeData> a, /*nullable*/ shptr<class PopupMenuThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> labelTextStyle;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ stdop<PopupMenuPosition> position;
	};
	static shptr<class PopupMenuThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class PopupMenuThemeData> PopupMenuThemeData(PopupMenuThemeData::_ctorMain p = {}) {
	return PopupMenuThemeData::ctorMain(p);
}

class PopupMenuTheme : public InheritedTheme
{
public:
	shptr<class PopupMenuThemeData> /*var-non-null*/ data();
	static shptr<class PopupMenuThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class PopupMenuTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class PopupMenuThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class PopupMenuTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class PopupMenuTheme> PopupMenuTheme(PopupMenuTheme::_ctorMain p = {}) {
	return PopupMenuTheme::ctorMain(p);
}

class ProgressIndicatorTheme : public InheritedTheme
{
public:
	shptr<class ProgressIndicatorThemeData> /*var-non-null*/ data();
	static shptr<class ProgressIndicatorThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class ProgressIndicatorTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ProgressIndicatorThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ProgressIndicatorTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ProgressIndicatorTheme> ProgressIndicatorTheme(ProgressIndicatorTheme::_ctorMain p = {}) {
	return ProgressIndicatorTheme::ctorMain(p);
}

class ProgressIndicatorThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Color> /*var-nullable*/ linearTrackColor();
	stdop<double> /*var-nullable*/ linearMinHeight();
	shptr<class Color> /*var-nullable*/ circularTrackColor();
	shptr<class Color> /*var-nullable*/ refreshBackgroundColor();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> linearTrackColor;
		/*nullable*/ stdop<double> linearMinHeight;
		/*nullable*/ shptr<class Color> circularTrackColor;
		/*nullable*/ shptr<class Color> refreshBackgroundColor;
	};
	shptr<class ProgressIndicatorThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class ProgressIndicatorThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class ProgressIndicatorThemeData> a, /*nullable*/ shptr<class ProgressIndicatorThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> linearTrackColor;
		/*nullable*/ stdop<double> linearMinHeight;
		/*nullable*/ shptr<class Color> circularTrackColor;
		/*nullable*/ shptr<class Color> refreshBackgroundColor;
	};
	static shptr<class ProgressIndicatorThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ProgressIndicatorThemeData> ProgressIndicatorThemeData(ProgressIndicatorThemeData::_ctorMain p = {}) {
	return ProgressIndicatorThemeData::ctorMain(p);
}

class RadioTheme : public InheritedWidget
{
public:
	shptr<class RadioThemeData> /*var-non-null*/ data();
	static shptr<class RadioThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class RadioTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class RadioThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class RadioTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class RadioTheme> RadioTheme(RadioTheme::_ctorMain p = {}) {
	return RadioTheme::ctorMain(p);
}

class RadioThemeData : public ObjBase
{
public:
	stdop<double> /*var-nullable*/ splashRadius();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	struct _copyWith
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
	};
	shptr<class RadioThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class RadioThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class RadioThemeData> a, /*nullable*/ shptr<class RadioThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
	};
	static shptr<class RadioThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class RadioThemeData> RadioThemeData(RadioThemeData::_ctorMain p = {}) {
	return RadioThemeData::ctorMain(p);
}

class ScrollbarThemeData : public ObjBase
{
public:
	stdop<bool> /*var-nullable*/ showTrackOnHover();
	stdop<bool> /*var-nullable*/ interactive();
	shptr<class Radius> /*var-nullable*/ radius();
	stdop<double> /*var-nullable*/ crossAxisMargin();
	stdop<double> /*var-nullable*/ mainAxisMargin();
	stdop<double> /*var-nullable*/ minThumbLength();
	struct _copyWith
	{
		/*nullable*/ shptr<class MaterialStateProperty<bool>> thumbVisibility;
		/*nullable*/ shptr<class MaterialStateProperty<double>> thickness;
		/*nullable*/ shptr<class MaterialStateProperty<bool>> trackVisibility;
		/*nullable*/ stdop<bool> interactive;
		/*nullable*/ shptr<class Radius> radius;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> thumbColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackBorderColor;
		/*nullable*/ stdop<double> crossAxisMargin;
		/*nullable*/ stdop<double> mainAxisMargin;
		/*nullable*/ stdop<double> minThumbLength;
		/*nullable*/ stdop<bool> showTrackOnHover;
	};
	shptr<class ScrollbarThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class ScrollbarThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class ScrollbarThemeData> a, /*nullable*/ shptr<class ScrollbarThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class MaterialStateProperty<bool>> thumbVisibility;
		/*nullable*/ shptr<class MaterialStateProperty<double>> thickness;
		/*nullable*/ shptr<class MaterialStateProperty<bool>> trackVisibility;
		/*nullable*/ shptr<class Radius> radius;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> thumbColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackBorderColor;
		/*nullable*/ stdop<double> crossAxisMargin;
		/*nullable*/ stdop<double> mainAxisMargin;
		/*nullable*/ stdop<double> minThumbLength;
		/*nullable*/ stdop<bool> interactive;
		/*nullable*/ stdop<bool> showTrackOnHover;
	};
	static shptr<class ScrollbarThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ScrollbarThemeData> ScrollbarThemeData(ScrollbarThemeData::_ctorMain p = {}) {
	return ScrollbarThemeData::ctorMain(p);
}

class ScrollbarTheme : public InheritedTheme
{
public:
	shptr<class ScrollbarThemeData> /*var-non-null*/ data();
	static shptr<class ScrollbarThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class ScrollbarTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ScrollbarThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ScrollbarTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ScrollbarTheme> ScrollbarTheme(ScrollbarTheme::_ctorMain p = {}) {
	return ScrollbarTheme::ctorMain(p);
}

class SearchBarThemeData : public ObjBase
{
public:
	shptr<class BoxConstraints> /*var-nullable*/ constraints();
	struct _copyWith
	{
		/*nullable*/ shptr<class MaterialStateProperty<double>> elevation;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> backgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> shadowColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> surfaceTintColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class BorderSide>>> side;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class OutlinedBorder>>> shape;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class EdgeInsetsGeometry>>> padding;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> textStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> hintStyle;
		/*nullable*/ shptr<class BoxConstraints> constraints;
	};
	shptr<class SearchBarThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class SearchBarThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class SearchBarThemeData> a, /*nullable*/ shptr<class SearchBarThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class MaterialStateProperty<double>> elevation;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> backgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> shadowColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> surfaceTintColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class BorderSide>>> side;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class OutlinedBorder>>> shape;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class EdgeInsetsGeometry>>> padding;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> textStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> hintStyle;
		/*nullable*/ shptr<class BoxConstraints> constraints;
	};
	static shptr<class SearchBarThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SearchBarThemeData> SearchBarThemeData(SearchBarThemeData::_ctorMain p = {}) {
	return SearchBarThemeData::ctorMain(p);
}

class SearchBarTheme : public InheritedWidget
{
public:
	shptr<class SearchBarThemeData> /*var-non-null*/ data();
	static shptr<class SearchBarThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class SearchBarTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class SearchBarThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class SearchBarTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SearchBarTheme> SearchBarTheme(SearchBarTheme::_ctorMain p = {}) {
	return SearchBarTheme::ctorMain(p);
}

class SearchViewTheme : public InheritedWidget
{
public:
	shptr<class SearchViewThemeData> /*var-non-null*/ data();
	static shptr<class SearchViewThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class SearchViewTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class SearchViewThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class SearchViewTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SearchViewTheme> SearchViewTheme(SearchViewTheme::_ctorMain p = {}) {
	return SearchViewTheme::ctorMain(p);
}

class SearchViewThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class BorderSide> /*var-nullable*/ side();
	shptr<class OutlinedBorder> /*var-nullable*/ shape();
	shptr<class TextStyle> /*var-nullable*/ headerTextStyle();
	shptr<class TextStyle> /*var-nullable*/ headerHintStyle();
	shptr<class BoxConstraints> /*var-nullable*/ constraints();
	shptr<class Color> /*var-nullable*/ dividerColor();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class TextStyle> headerTextStyle;
		/*nullable*/ shptr<class TextStyle> headerHintStyle;
		/*nullable*/ shptr<class BoxConstraints> constraints;
		/*nullable*/ shptr<class Color> dividerColor;
	};
	shptr<class SearchViewThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class SearchViewThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class SearchViewThemeData> a, /*nullable*/ shptr<class SearchViewThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class BoxConstraints> constraints;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class TextStyle> headerTextStyle;
		/*nullable*/ shptr<class TextStyle> headerHintStyle;
		/*nullable*/ shptr<class Color> dividerColor;
	};
	static shptr<class SearchViewThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SearchViewThemeData> SearchViewThemeData(SearchViewThemeData::_ctorMain p = {}) {
	return SearchViewThemeData::ctorMain(p);
}

class SegmentedButtonTheme : public InheritedTheme
{
public:
	shptr<class SegmentedButtonThemeData> /*var-non-null*/ data();
	static shptr<class SegmentedButtonThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class SegmentedButtonThemeData> /*nullable*/ maybeOf(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class SegmentedButtonTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class SegmentedButtonThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class SegmentedButtonTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SegmentedButtonTheme> SegmentedButtonTheme(SegmentedButtonTheme::_ctorMain p = {}) {
	return SegmentedButtonTheme::ctorMain(p);
}

class SegmentedButtonThemeData : public ObjBase
{
public:
	shptr<class ButtonStyle> /*var-nullable*/ style();
	shptr<class Widget> /*var-nullable*/ selectedIcon();
	struct _copyWith
	{
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class Widget> selectedIcon;
	};
	shptr<class SegmentedButtonThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class SegmentedButtonThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class SegmentedButtonThemeData> a, /*nullable*/ shptr<class SegmentedButtonThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class Widget> selectedIcon;
	};
	static shptr<class SegmentedButtonThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SegmentedButtonThemeData> SegmentedButtonThemeData(SegmentedButtonThemeData::_ctorMain p = {}) {
	return SegmentedButtonThemeData::ctorMain(p);
}

class SliderTheme : public InheritedTheme
{
public:
	shptr<class SliderThemeData> /*var-non-null*/ data();
	static shptr<class SliderThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class SliderTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class SliderThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class SliderTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SliderTheme> SliderTheme(SliderTheme::_ctorMain p = {}) {
	return SliderTheme::ctorMain(p);
}

class SliderThemeData : public ObjBase
{
public:
	stdop<double> /*var-nullable*/ trackHeight();
	shptr<class Color> /*var-nullable*/ activeTrackColor();
	shptr<class Color> /*var-nullable*/ inactiveTrackColor();
	shptr<class Color> /*var-nullable*/ secondaryActiveTrackColor();
	shptr<class Color> /*var-nullable*/ disabledActiveTrackColor();
	shptr<class Color> /*var-nullable*/ disabledSecondaryActiveTrackColor();
	shptr<class Color> /*var-nullable*/ disabledInactiveTrackColor();
	shptr<class Color> /*var-nullable*/ activeTickMarkColor();
	shptr<class Color> /*var-nullable*/ inactiveTickMarkColor();
	shptr<class Color> /*var-nullable*/ disabledActiveTickMarkColor();
	shptr<class Color> /*var-nullable*/ disabledInactiveTickMarkColor();
	shptr<class Color> /*var-nullable*/ thumbColor();
	shptr<class Color> /*var-nullable*/ overlappingShapeStrokeColor();
	shptr<class Color> /*var-nullable*/ disabledThumbColor();
	shptr<class Color> /*var-nullable*/ overlayColor();
	shptr<class Color> /*var-nullable*/ valueIndicatorColor();
	shptr<class SliderComponentShape> /*var-nullable*/ overlayShape();
	shptr<class SliderTickMarkShape> /*var-nullable*/ tickMarkShape();
	shptr<class SliderComponentShape> /*var-nullable*/ thumbShape();
	shptr<class SliderTrackShape> /*var-nullable*/ trackShape();
	shptr<class SliderComponentShape> /*var-nullable*/ valueIndicatorShape();
	shptr<class RangeSliderTickMarkShape> /*var-nullable*/ rangeTickMarkShape();
	shptr<class RangeSliderThumbShape> /*var-nullable*/ rangeThumbShape();
	shptr<class RangeSliderTrackShape> /*var-nullable*/ rangeTrackShape();
	shptr<class RangeSliderValueIndicatorShape> /*var-nullable*/ rangeValueIndicatorShape();
	stdop<ShowValueIndicator> /*var-nullable*/ showValueIndicator();
	shptr<class TextStyle> /*var-nullable*/ valueIndicatorTextStyle();
	stdop<double> /*var-nullable*/ minThumbSeparation();
	stdop<SliderInteraction> /*var-nullable*/ allowedInteraction();
	struct _copyWith
	{
		/*nullable*/ stdop<double> trackHeight;
		/*nullable*/ shptr<class Color> activeTrackColor;
		/*nullable*/ shptr<class Color> inactiveTrackColor;
		/*nullable*/ shptr<class Color> secondaryActiveTrackColor;
		/*nullable*/ shptr<class Color> disabledActiveTrackColor;
		/*nullable*/ shptr<class Color> disabledInactiveTrackColor;
		/*nullable*/ shptr<class Color> disabledSecondaryActiveTrackColor;
		/*nullable*/ shptr<class Color> activeTickMarkColor;
		/*nullable*/ shptr<class Color> inactiveTickMarkColor;
		/*nullable*/ shptr<class Color> disabledActiveTickMarkColor;
		/*nullable*/ shptr<class Color> disabledInactiveTickMarkColor;
		/*nullable*/ shptr<class Color> thumbColor;
		/*nullable*/ shptr<class Color> overlappingShapeStrokeColor;
		/*nullable*/ shptr<class Color> disabledThumbColor;
		/*nullable*/ shptr<class Color> overlayColor;
		/*nullable*/ shptr<class Color> valueIndicatorColor;
		/*nullable*/ shptr<class SliderComponentShape> overlayShape;
		/*nullable*/ shptr<class SliderTickMarkShape> tickMarkShape;
		/*nullable*/ shptr<class SliderComponentShape> thumbShape;
		/*nullable*/ shptr<class SliderTrackShape> trackShape;
		/*nullable*/ shptr<class SliderComponentShape> valueIndicatorShape;
		/*nullable*/ shptr<class RangeSliderTickMarkShape> rangeTickMarkShape;
		/*nullable*/ shptr<class RangeSliderThumbShape> rangeThumbShape;
		/*nullable*/ shptr<class RangeSliderTrackShape> rangeTrackShape;
		/*nullable*/ shptr<class RangeSliderValueIndicatorShape> rangeValueIndicatorShape;
		/*nullable*/ stdop<ShowValueIndicator> showValueIndicator;
		/*nullable*/ shptr<class TextStyle> valueIndicatorTextStyle;
		/*nullable*/ stdop<double> minThumbSeparation;
//		/*nullable*/ stdfunc<Thumb(TextDirection, shptr<class RangeValues>, double, shptr<class Size>, shptr<class Size>, double)> thumbSelector;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ stdop<SliderInteraction> allowedInteraction;
	};
	shptr<class SliderThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class SliderThemeData> /*non-null*/ lerp(/*non-null*/ shptr<class SliderThemeData> a, /*non-null*/ shptr<class SliderThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdop<double> trackHeight;
		/*nullable*/ shptr<class Color> activeTrackColor;
		/*nullable*/ shptr<class Color> inactiveTrackColor;
		/*nullable*/ shptr<class Color> secondaryActiveTrackColor;
		/*nullable*/ shptr<class Color> disabledActiveTrackColor;
		/*nullable*/ shptr<class Color> disabledInactiveTrackColor;
		/*nullable*/ shptr<class Color> disabledSecondaryActiveTrackColor;
		/*nullable*/ shptr<class Color> activeTickMarkColor;
		/*nullable*/ shptr<class Color> inactiveTickMarkColor;
		/*nullable*/ shptr<class Color> disabledActiveTickMarkColor;
		/*nullable*/ shptr<class Color> disabledInactiveTickMarkColor;
		/*nullable*/ shptr<class Color> thumbColor;
		/*nullable*/ shptr<class Color> overlappingShapeStrokeColor;
		/*nullable*/ shptr<class Color> disabledThumbColor;
		/*nullable*/ shptr<class Color> overlayColor;
		/*nullable*/ shptr<class Color> valueIndicatorColor;
		/*nullable*/ shptr<class SliderComponentShape> overlayShape;
		/*nullable*/ shptr<class SliderTickMarkShape> tickMarkShape;
		/*nullable*/ shptr<class SliderComponentShape> thumbShape;
		/*nullable*/ shptr<class SliderTrackShape> trackShape;
		/*nullable*/ shptr<class SliderComponentShape> valueIndicatorShape;
		/*nullable*/ shptr<class RangeSliderTickMarkShape> rangeTickMarkShape;
		/*nullable*/ shptr<class RangeSliderThumbShape> rangeThumbShape;
		/*nullable*/ shptr<class RangeSliderTrackShape> rangeTrackShape;
		/*nullable*/ shptr<class RangeSliderValueIndicatorShape> rangeValueIndicatorShape;
		/*nullable*/ stdop<ShowValueIndicator> showValueIndicator;
		/*nullable*/ shptr<class TextStyle> valueIndicatorTextStyle;
		/*nullable*/ stdop<double> minThumbSeparation;
//		/*nullable*/ stdfunc<Thumb(TextDirection, shptr<class RangeValues>, double, shptr<class Size>, shptr<class Size>, double)> thumbSelector;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ stdop<SliderInteraction> allowedInteraction;
	};
	static shptr<class SliderThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _fromPrimaryColors
	{
		/*non-null*/ shptr<class Color> primaryColor;
		/*non-null*/ shptr<class Color> primaryColorDark;
		/*non-null*/ shptr<class Color> primaryColorLight;
		/*non-null*/ shptr<class TextStyle> valueIndicatorTextStyle;
	};
	static shptr<class SliderThemeData> /*non-null*/ fromPrimaryColors(_fromPrimaryColors p = {});
};

inline shptr<class SliderThemeData> SliderThemeData(SliderThemeData::_ctorMain p = {}) {
	return SliderThemeData::ctorMain(p);
}

class SnackBarThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ actionTextColor();
	shptr<class Color> /*var-nullable*/ disabledActionTextColor();
	shptr<class TextStyle> /*var-nullable*/ contentTextStyle();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	stdop<SnackBarBehavior> /*var-nullable*/ behavior();
	stdop<double> /*var-nullable*/ width();
	shptr<class EdgeInsets> /*var-nullable*/ insetPadding();
	stdop<bool> /*var-nullable*/ showCloseIcon();
	shptr<class Color> /*var-nullable*/ closeIconColor();
	stdop<double> /*var-nullable*/ actionOverflowThreshold();
	shptr<class Color> /*var-nullable*/ actionBackgroundColor();
	shptr<class Color> /*var-nullable*/ disabledActionBackgroundColor();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> actionTextColor;
		/*nullable*/ shptr<class Color> disabledActionTextColor;
		/*nullable*/ shptr<class TextStyle> contentTextStyle;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<SnackBarBehavior> behavior;
		/*nullable*/ stdop<double> width;
		/*nullable*/ shptr<class EdgeInsets> insetPadding;
		/*nullable*/ stdop<bool> showCloseIcon;
		/*nullable*/ shptr<class Color> closeIconColor;
		/*nullable*/ stdop<double> actionOverflowThreshold;
		/*nullable*/ shptr<class Color> actionBackgroundColor;
		/*nullable*/ shptr<class Color> disabledActionBackgroundColor;
	};
	shptr<class SnackBarThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class SnackBarThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class SnackBarThemeData> a, /*nullable*/ shptr<class SnackBarThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> actionTextColor;
		/*nullable*/ shptr<class Color> disabledActionTextColor;
		/*nullable*/ shptr<class TextStyle> contentTextStyle;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<SnackBarBehavior> behavior;
		/*nullable*/ stdop<double> width;
		/*nullable*/ shptr<class EdgeInsets> insetPadding;
		/*nullable*/ stdop<bool> showCloseIcon;
		/*nullable*/ shptr<class Color> closeIconColor;
		/*nullable*/ stdop<double> actionOverflowThreshold;
		/*nullable*/ shptr<class Color> actionBackgroundColor;
		/*nullable*/ shptr<class Color> disabledActionBackgroundColor;
	};
	static shptr<class SnackBarThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SnackBarThemeData> SnackBarThemeData(SnackBarThemeData::_ctorMain p = {}) {
	return SnackBarThemeData::ctorMain(p);
}

class SwitchThemeData : public ObjBase
{
public:
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	stdop<double> /*var-nullable*/ splashRadius();
	struct _copyWith
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> thumbColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackOutlineColor;
		/*nullable*/ shptr<class MaterialStateProperty<double>> trackOutlineWidth;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Icon>>> thumbIcon;
	};
	shptr<class SwitchThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class SwitchThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class SwitchThemeData> a, /*nullable*/ shptr<class SwitchThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> thumbColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackOutlineColor;
		/*nullable*/ shptr<class MaterialStateProperty<double>> trackOutlineWidth;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Icon>>> thumbIcon;
	};
	static shptr<class SwitchThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SwitchThemeData> SwitchThemeData(SwitchThemeData::_ctorMain p = {}) {
	return SwitchThemeData::ctorMain(p);
}

class SwitchTheme : public InheritedWidget
{
public:
	shptr<class SwitchThemeData> /*var-non-null*/ data();
	static shptr<class SwitchThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class SwitchTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class SwitchThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class SwitchTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SwitchTheme> SwitchTheme(SwitchTheme::_ctorMain p = {}) {
	return SwitchTheme::ctorMain(p);
}

class TextButtonTheme : public InheritedTheme
{
public:
	shptr<class TextButtonThemeData> /*var-non-null*/ data();
	static shptr<class TextButtonThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class TextButtonTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class TextButtonThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class TextButtonTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TextButtonTheme> TextButtonTheme(TextButtonTheme::_ctorMain p = {}) {
	return TextButtonTheme::ctorMain(p);
}

class TextButtonThemeData : public ObjBase
{
public:
	shptr<class ButtonStyle> /*var-nullable*/ style();
	static shptr<class TextButtonThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class TextButtonThemeData> a, /*nullable*/ shptr<class TextButtonThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class ButtonStyle> style;
	};
	static shptr<class TextButtonThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TextButtonThemeData> TextButtonThemeData(TextButtonThemeData::_ctorMain p = {}) {
	return TextButtonThemeData::ctorMain(p);
}

class TextSelectionThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ cursorColor();
	shptr<class Color> /*var-nullable*/ selectionColor();
	shptr<class Color> /*var-nullable*/ selectionHandleColor();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> cursorColor;
		/*nullable*/ shptr<class Color> selectionColor;
		/*nullable*/ shptr<class Color> selectionHandleColor;
	};
	shptr<class TextSelectionThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class TextSelectionThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class TextSelectionThemeData> a, /*nullable*/ shptr<class TextSelectionThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> cursorColor;
		/*nullable*/ shptr<class Color> selectionColor;
		/*nullable*/ shptr<class Color> selectionHandleColor;
	};
	static shptr<class TextSelectionThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TextSelectionThemeData> TextSelectionThemeData(TextSelectionThemeData::_ctorMain p = {}) {
	return TextSelectionThemeData::ctorMain(p);
}

class TextSelectionTheme : public InheritedTheme
{
public:
	shptr<class TextSelectionThemeData> /*var-non-null*/ data();
	shptr<class Widget> /*get-non-null*/ child();
	static shptr<class TextSelectionThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class TextSelectionTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class TextSelectionThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class TextSelectionTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TextSelectionTheme> TextSelectionTheme(TextSelectionTheme::_ctorMain p = {}) {
	return TextSelectionTheme::ctorMain(p);
}

class TimePickerThemeData : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class ButtonStyle> /*var-nullable*/ cancelButtonStyle();
	shptr<class ButtonStyle> /*var-nullable*/ confirmButtonStyle();
	shptr<class BorderSide> /*var-nullable*/ dayPeriodBorderSide();
	shptr<class Color> /*var-nullable*/ dayPeriodColor();
	shptr<class OutlinedBorder> /*var-nullable*/ dayPeriodShape();
	shptr<class Color> /*var-nullable*/ dayPeriodTextColor();
	shptr<class TextStyle> /*var-nullable*/ dayPeriodTextStyle();
	shptr<class Color> /*var-nullable*/ dialBackgroundColor();
	shptr<class Color> /*var-nullable*/ dialHandColor();
	shptr<class Color> /*var-nullable*/ dialTextColor();
	shptr<class TextStyle> /*var-nullable*/ dialTextStyle();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ entryModeIconColor();
	shptr<class TextStyle> /*var-nullable*/ helpTextStyle();
	shptr<class Color> /*var-nullable*/ hourMinuteColor();
	shptr<class ShapeBorder> /*var-nullable*/ hourMinuteShape();
	shptr<class Color> /*var-nullable*/ hourMinuteTextColor();
	shptr<class TextStyle> /*var-nullable*/ hourMinuteTextStyle();
	shptr<class InputDecorationTheme> /*var-nullable*/ inputDecorationTheme();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class ButtonStyle> cancelButtonStyle;
		/*nullable*/ shptr<class ButtonStyle> confirmButtonStyle;
		/*nullable*/ shptr<class ButtonStyle> dayPeriodButtonStyle;
		/*nullable*/ shptr<class BorderSide> dayPeriodBorderSide;
		/*nullable*/ shptr<class Color> dayPeriodColor;
		/*nullable*/ shptr<class OutlinedBorder> dayPeriodShape;
		/*nullable*/ shptr<class Color> dayPeriodTextColor;
		/*nullable*/ shptr<class TextStyle> dayPeriodTextStyle;
		/*nullable*/ shptr<class Color> dialBackgroundColor;
		/*nullable*/ shptr<class Color> dialHandColor;
		/*nullable*/ shptr<class Color> dialTextColor;
		/*nullable*/ shptr<class TextStyle> dialTextStyle;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> entryModeIconColor;
		/*nullable*/ shptr<class TextStyle> helpTextStyle;
		/*nullable*/ shptr<class Color> hourMinuteColor;
		/*nullable*/ shptr<class ShapeBorder> hourMinuteShape;
		/*nullable*/ shptr<class Color> hourMinuteTextColor;
		/*nullable*/ shptr<class TextStyle> hourMinuteTextStyle;
		/*nullable*/ shptr<class InputDecorationTheme> inputDecorationTheme;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class ShapeBorder> shape;
	};
	shptr<class TimePickerThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class TimePickerThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class TimePickerThemeData> a, /*nullable*/ shptr<class TimePickerThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class ButtonStyle> cancelButtonStyle;
		/*nullable*/ shptr<class ButtonStyle> confirmButtonStyle;
		/*nullable*/ shptr<class BorderSide> dayPeriodBorderSide;
		/*nullable*/ shptr<class Color> dayPeriodColor;
		/*nullable*/ shptr<class OutlinedBorder> dayPeriodShape;
		/*nullable*/ shptr<class Color> dayPeriodTextColor;
		/*nullable*/ shptr<class TextStyle> dayPeriodTextStyle;
		/*nullable*/ shptr<class Color> dialBackgroundColor;
		/*nullable*/ shptr<class Color> dialHandColor;
		/*nullable*/ shptr<class Color> dialTextColor;
		/*nullable*/ shptr<class TextStyle> dialTextStyle;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> entryModeIconColor;
		/*nullable*/ shptr<class TextStyle> helpTextStyle;
		/*nullable*/ shptr<class Color> hourMinuteColor;
		/*nullable*/ shptr<class ShapeBorder> hourMinuteShape;
		/*nullable*/ shptr<class Color> hourMinuteTextColor;
		/*nullable*/ shptr<class TextStyle> hourMinuteTextStyle;
		/*nullable*/ shptr<class InputDecorationTheme> inputDecorationTheme;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class ShapeBorder> shape;
	};
	static shptr<class TimePickerThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TimePickerThemeData> TimePickerThemeData(TimePickerThemeData::_ctorMain p = {}) {
	return TimePickerThemeData::ctorMain(p);
}

class TimePickerTheme : public InheritedTheme
{
public:
	shptr<class TimePickerThemeData> /*var-non-null*/ data();
	static shptr<class TimePickerThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class TimePickerTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class TimePickerThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class TimePickerTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TimePickerTheme> TimePickerTheme(TimePickerTheme::_ctorMain p = {}) {
	return TimePickerTheme::ctorMain(p);
}

class ToggleButtonsThemeData : public ObjBase
{
public:
	shptr<class TextStyle> /*var-nullable*/ textStyle();
	shptr<class BoxConstraints> /*var-nullable*/ constraints();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Color> /*var-nullable*/ selectedColor();
	shptr<class Color> /*var-nullable*/ disabledColor();
	shptr<class Color> /*var-nullable*/ fillColor();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ highlightColor();
	shptr<class Color> /*var-nullable*/ splashColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	shptr<class Color> /*var-nullable*/ borderColor();
	shptr<class Color> /*var-nullable*/ selectedBorderColor();
	shptr<class Color> /*var-nullable*/ disabledBorderColor();
	stdop<double> /*var-nullable*/ borderWidth();
	shptr<class BorderRadius> /*var-nullable*/ borderRadius();
	struct _copyWith
	{
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class BoxConstraints> constraints;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> fillColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class Color> borderColor;
		/*nullable*/ shptr<class Color> selectedBorderColor;
		/*nullable*/ shptr<class Color> disabledBorderColor;
		/*nullable*/ shptr<class BorderRadius> borderRadius;
		/*nullable*/ stdop<double> borderWidth;
	};
	shptr<class ToggleButtonsThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class ToggleButtonsThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class ToggleButtonsThemeData> a, /*nullable*/ shptr<class ToggleButtonsThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class BoxConstraints> constraints;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> fillColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class Color> borderColor;
		/*nullable*/ shptr<class Color> selectedBorderColor;
		/*nullable*/ shptr<class Color> disabledBorderColor;
		/*nullable*/ shptr<class BorderRadius> borderRadius;
		/*nullable*/ stdop<double> borderWidth;
	};
	static shptr<class ToggleButtonsThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ToggleButtonsThemeData> ToggleButtonsThemeData(ToggleButtonsThemeData::_ctorMain p = {}) {
	return ToggleButtonsThemeData::ctorMain(p);
}

class ToggleButtonsTheme : public InheritedTheme
{
public:
	shptr<class ToggleButtonsThemeData> /*var-non-null*/ data();
	static shptr<class ToggleButtonsThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class ToggleButtonsTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ToggleButtonsThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ToggleButtonsTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ToggleButtonsTheme> ToggleButtonsTheme(ToggleButtonsTheme::_ctorMain p = {}) {
	return ToggleButtonsTheme::ctorMain(p);
}

class TooltipThemeData : public ObjBase
{
public:
	stdop<double> /*var-nullable*/ height();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ margin();
	stdop<double> /*var-nullable*/ verticalOffset();
	stdop<bool> /*var-nullable*/ preferBelow();
	stdop<bool> /*var-nullable*/ excludeFromSemantics();
	shptr<class Decoration> /*var-nullable*/ decoration();
	shptr<class TextStyle> /*var-nullable*/ textStyle();
	stdop<TextAlign> /*var-nullable*/ textAlign();
	shptr<class Duration> /*var-nullable*/ waitDuration();
	shptr<class Duration> /*var-nullable*/ showDuration();
	stdop<TooltipTriggerMode> /*var-nullable*/ triggerMode();
	stdop<bool> /*var-nullable*/ enableFeedback();
	struct _copyWith
	{
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class EdgeInsetsGeometry> margin;
		/*nullable*/ stdop<double> verticalOffset;
		/*nullable*/ stdop<bool> preferBelow;
		/*nullable*/ stdop<bool> excludeFromSemantics;
		/*nullable*/ shptr<class Decoration> decoration;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ stdop<TextAlign> textAlign;
		/*nullable*/ shptr<class Duration> waitDuration;
		/*nullable*/ shptr<class Duration> showDuration;
		/*nullable*/ stdop<TooltipTriggerMode> triggerMode;
		/*nullable*/ stdop<bool> enableFeedback;
	};
	shptr<class TooltipThemeData> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class TooltipThemeData> /*nullable*/ lerp(/*nullable*/ shptr<class TooltipThemeData> a, /*nullable*/ shptr<class TooltipThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class EdgeInsetsGeometry> margin;
		/*nullable*/ stdop<double> verticalOffset;
		/*nullable*/ stdop<bool> preferBelow;
		/*nullable*/ stdop<bool> excludeFromSemantics;
		/*nullable*/ shptr<class Decoration> decoration;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ stdop<TextAlign> textAlign;
		/*nullable*/ shptr<class Duration> waitDuration;
		/*nullable*/ shptr<class Duration> showDuration;
		/*nullable*/ stdop<TooltipTriggerMode> triggerMode;
		/*nullable*/ stdop<bool> enableFeedback;
	};
	static shptr<class TooltipThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TooltipThemeData> TooltipThemeData(TooltipThemeData::_ctorMain p = {}) {
	return TooltipThemeData::ctorMain(p);
}

class TooltipTheme : public InheritedTheme
{
public:
	shptr<class TooltipThemeData> /*var-non-null*/ data();
	static shptr<class TooltipThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class TooltipTheme> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class TooltipThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class TooltipTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TooltipTheme> TooltipTheme(TooltipTheme::_ctorMain p = {}) {
	return TooltipTheme::ctorMain(p);
}

class IconTheme : public InheritedTheme
{
public:
	shptr<class IconThemeData> /*var-non-null*/ data();
	struct _merge
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class IconThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Widget> /*non-null*/ merge(_merge p = {});
	static shptr<class IconThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class IconTheme> oldWidget);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class IconThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class IconTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class IconTheme> IconTheme(IconTheme::_ctorMain p = {}) {
	return IconTheme::ctorMain(p);
}

class IconThemeData : public ObjBase
{
public:
	stdop<double> /*var-nullable*/ size();
	stdop<double> /*var-nullable*/ fill();
	stdop<double> /*var-nullable*/ weight();
	stdop<double> /*var-nullable*/ grade();
	stdop<double> /*var-nullable*/ opticalSize();
	shptr<class Color> /*var-nullable*/ color();
	bool /*get-non-null*/ isConcrete();
	stdop<double> /*get-nullable*/ opacity();
	struct _copyWith
	{
		/*nullable*/ stdop<double> size;
		/*nullable*/ stdop<double> fill;
		/*nullable*/ stdop<double> weight;
		/*nullable*/ stdop<double> grade;
		/*nullable*/ stdop<double> opticalSize;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<double> opacity;
		/*nullable*/ stdop<stdvec<shptr<class Shadow>>> shadows;
	};
	shptr<class IconThemeData> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class IconThemeData> /*non-null*/ merge(/*nullable*/ shptr<class IconThemeData> other);
	shptr<class IconThemeData> /*non-null*/ resolve(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class IconThemeData> /*non-null*/ lerp(/*nullable*/ shptr<class IconThemeData> a, /*nullable*/ shptr<class IconThemeData> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdop<double> size;
		/*nullable*/ stdop<double> fill;
		/*nullable*/ stdop<double> weight;
		/*nullable*/ stdop<double> grade;
		/*nullable*/ stdop<double> opticalSize;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<double> opacity;
		/*nullable*/ stdop<stdvec<shptr<class Shadow>>> shadows;
	};
	static shptr<class IconThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
	static shptr<class IconThemeData> /*non-null*/ fallback();
};

inline shptr<class IconThemeData> IconThemeData(IconThemeData::_ctorMain p = {}) {
	return IconThemeData::ctorMain(p);
}

class CupertinoIconThemeData : public IconThemeData
{
public:
	shptr<class IconThemeData> /*non-null*/ resolve(/*non-null*/ shptr<class BuildContext> context);
	struct _copyWith
	{
		/*nullable*/ stdop<double> size;
		/*nullable*/ stdop<double> fill;
		/*nullable*/ stdop<double> weight;
		/*nullable*/ stdop<double> grade;
		/*nullable*/ stdop<double> opticalSize;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<double> opacity;
		/*nullable*/ stdop<stdvec<shptr<class Shadow>>> shadows;
	};
	shptr<class CupertinoIconThemeData> /*non-null*/ copyWith(_copyWith p = {});
	struct _ctorMain
	{
		/*nullable*/ stdop<double> size;
		/*nullable*/ stdop<double> fill;
		/*nullable*/ stdop<double> weight;
		/*nullable*/ stdop<double> grade;
		/*nullable*/ stdop<double> opticalSize;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<double> opacity;
		/*nullable*/ stdop<stdvec<shptr<class Shadow>>> shadows;
	};
	static shptr<class CupertinoIconThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoIconThemeData> CupertinoIconThemeData(CupertinoIconThemeData::_ctorMain p = {}) {
	return CupertinoIconThemeData::ctorMain(p);
}

class CupertinoTextThemeData : public ObjBase
{
public:
	shptr<class TextStyle> /*get-non-null*/ textStyle();
	shptr<class TextStyle> /*get-non-null*/ actionTextStyle();
	shptr<class TextStyle> /*get-non-null*/ tabLabelTextStyle();
	shptr<class TextStyle> /*get-non-null*/ navTitleTextStyle();
	shptr<class TextStyle> /*get-non-null*/ navLargeTitleTextStyle();
	shptr<class TextStyle> /*get-non-null*/ navActionTextStyle();
	shptr<class TextStyle> /*get-non-null*/ pickerTextStyle();
	shptr<class TextStyle> /*get-non-null*/ dateTimePickerTextStyle();
	shptr<class CupertinoTextThemeData> /*non-null*/ resolveFrom(/*non-null*/ shptr<class BuildContext> context);
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> primaryColor;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class TextStyle> actionTextStyle;
		/*nullable*/ shptr<class TextStyle> tabLabelTextStyle;
		/*nullable*/ shptr<class TextStyle> navTitleTextStyle;
		/*nullable*/ shptr<class TextStyle> navLargeTitleTextStyle;
		/*nullable*/ shptr<class TextStyle> navActionTextStyle;
		/*nullable*/ shptr<class TextStyle> pickerTextStyle;
		/*nullable*/ shptr<class TextStyle> dateTimePickerTextStyle;
	};
	shptr<class CupertinoTextThemeData> /*non-null*/ copyWith(_copyWith p = {});
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class Color> primaryColor = CupertinoColors::systemBlue();
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class TextStyle> actionTextStyle;
		/*nullable*/ shptr<class TextStyle> tabLabelTextStyle;
		/*nullable*/ shptr<class TextStyle> navTitleTextStyle;
		/*nullable*/ shptr<class TextStyle> navLargeTitleTextStyle;
		/*nullable*/ shptr<class TextStyle> navActionTextStyle;
		/*nullable*/ shptr<class TextStyle> pickerTextStyle;
		/*nullable*/ shptr<class TextStyle> dateTimePickerTextStyle;
	};
	static shptr<class CupertinoTextThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoTextThemeData> CupertinoTextThemeData(CupertinoTextThemeData::_ctorMain p = {}) {
	return CupertinoTextThemeData::ctorMain(p);
}

class NoDefaultCupertinoThemeData : public ObjBase
{
public:
	stdop<Brightness> /*var-nullable*/ brightness();
	shptr<class Color> /*var-nullable*/ primaryColor();
	shptr<class Color> /*var-nullable*/ primaryContrastingColor();
	shptr<class CupertinoTextThemeData> /*var-nullable*/ textTheme();
	shptr<class Color> /*var-nullable*/ barBackgroundColor();
	shptr<class Color> /*var-nullable*/ scaffoldBackgroundColor();
	stdop<bool> /*var-nullable*/ applyThemeToAll();
	shptr<class NoDefaultCupertinoThemeData> /*non-null*/ noDefault();
	shptr<class NoDefaultCupertinoThemeData> /*non-null*/ resolveFrom(/*non-null*/ shptr<class BuildContext> context);
	struct _copyWith
	{
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ shptr<class Color> primaryColor;
		/*nullable*/ shptr<class Color> primaryContrastingColor;
		/*nullable*/ shptr<class CupertinoTextThemeData> textTheme;
		/*nullable*/ shptr<class Color> barBackgroundColor;
		/*nullable*/ shptr<class Color> scaffoldBackgroundColor;
		/*nullable*/ stdop<bool> applyThemeToAll;
	};
	shptr<class NoDefaultCupertinoThemeData> /*non-null*/ copyWith(_copyWith p = {});
	struct _ctorMain
	{
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ shptr<class Color> primaryColor;
		/*nullable*/ shptr<class Color> primaryContrastingColor;
		/*nullable*/ shptr<class CupertinoTextThemeData> textTheme;
		/*nullable*/ shptr<class Color> barBackgroundColor;
		/*nullable*/ shptr<class Color> scaffoldBackgroundColor;
		/*nullable*/ stdop<bool> applyThemeToAll;
	};
	static shptr<class NoDefaultCupertinoThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NoDefaultCupertinoThemeData> NoDefaultCupertinoThemeData(NoDefaultCupertinoThemeData::_ctorMain p = {}) {
	return NoDefaultCupertinoThemeData::ctorMain(p);
}

class CupertinoTheme : public StatelessWidget
{
public:
	shptr<class CupertinoThemeData> /*var-non-null*/ data();
	shptr<class Widget> /*var-non-null*/ child();
	static shptr<class CupertinoThemeData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static Brightness /*non-null*/ brightnessOf(/*non-null*/ shptr<class BuildContext> context);
	static stdop<Brightness> /*nullable*/ maybeBrightnessOf(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class CupertinoThemeData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class CupertinoTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoTheme> CupertinoTheme(CupertinoTheme::_ctorMain p = {}) {
	return CupertinoTheme::ctorMain(p);
}

class CupertinoThemeData : public NoDefaultCupertinoThemeData
{
public:
	shptr<class Color> /*get-non-null*/ primaryColor();
	shptr<class Color> /*get-non-null*/ primaryContrastingColor();
	shptr<class CupertinoTextThemeData> /*get-non-null*/ textTheme();
	shptr<class Color> /*get-non-null*/ barBackgroundColor();
	shptr<class Color> /*get-non-null*/ scaffoldBackgroundColor();
	bool /*get-non-null*/ applyThemeToAll();
	shptr<class NoDefaultCupertinoThemeData> /*non-null*/ noDefault();
	shptr<class CupertinoThemeData> /*non-null*/ resolveFrom(/*non-null*/ shptr<class BuildContext> context);
	struct _copyWith
	{
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ shptr<class Color> primaryColor;
		/*nullable*/ shptr<class Color> primaryContrastingColor;
		/*nullable*/ shptr<class CupertinoTextThemeData> textTheme;
		/*nullable*/ shptr<class Color> barBackgroundColor;
		/*nullable*/ shptr<class Color> scaffoldBackgroundColor;
		/*nullable*/ stdop<bool> applyThemeToAll;
	};
	shptr<class CupertinoThemeData> /*non-null*/ copyWith(_copyWith p = {});
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ shptr<class Color> primaryColor;
		/*nullable*/ shptr<class Color> primaryContrastingColor;
		/*nullable*/ shptr<class CupertinoTextThemeData> textTheme;
		/*nullable*/ shptr<class Color> barBackgroundColor;
		/*nullable*/ shptr<class Color> scaffoldBackgroundColor;
		/*nullable*/ stdop<bool> applyThemeToAll;
	};
	static shptr<class CupertinoThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
	static shptr<class CupertinoThemeData> /*non-null*/ raw(/*nullable*/ stdop<Brightness> brightness, /*nullable*/ shptr<class Color> primaryColor, /*nullable*/ shptr<class Color> primaryContrastingColor, /*nullable*/ shptr<class CupertinoTextThemeData> textTheme, /*nullable*/ shptr<class Color> barBackgroundColor, /*nullable*/ shptr<class Color> scaffoldBackgroundColor, /*nullable*/ stdop<bool> applyThemeToAll);
};

inline shptr<class CupertinoThemeData> CupertinoThemeData(CupertinoThemeData::_ctorMain p = {}) {
	return CupertinoThemeData::ctorMain(p);
}

class MaterialBasedCupertinoThemeData : public CupertinoThemeData
{
public:
	Brightness /*get-non-null*/ brightness();
	shptr<class Color> /*get-non-null*/ primaryColor();
	shptr<class Color> /*get-non-null*/ primaryContrastingColor();
	shptr<class Color> /*get-non-null*/ scaffoldBackgroundColor();
	struct _copyWith
	{
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ shptr<class Color> primaryColor;
		/*nullable*/ shptr<class Color> primaryContrastingColor;
		/*nullable*/ shptr<class CupertinoTextThemeData> textTheme;
		/*nullable*/ shptr<class Color> barBackgroundColor;
		/*nullable*/ shptr<class Color> scaffoldBackgroundColor;
		/*nullable*/ stdop<bool> applyThemeToAll;
	};
	shptr<class MaterialBasedCupertinoThemeData> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class CupertinoThemeData> /*non-null*/ resolveFrom(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*non-null*/ shptr<class ThemeData> materialTheme;
	};
	static shptr<class MaterialBasedCupertinoThemeData> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MaterialBasedCupertinoThemeData> MaterialBasedCupertinoThemeData(MaterialBasedCupertinoThemeData::_ctorMain p = {}) {
	return MaterialBasedCupertinoThemeData::ctorMain(p);
}

class AppBarTheme : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ foregroundColor();
	stdop<double> /*var-nullable*/ elevation();
	stdop<double> /*var-nullable*/ scrolledUnderElevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class IconThemeData> /*var-nullable*/ iconTheme();
	shptr<class IconThemeData> /*var-nullable*/ actionsIconTheme();
	stdop<bool> /*var-nullable*/ centerTitle();
	stdop<double> /*var-nullable*/ titleSpacing();
	stdop<double> /*var-nullable*/ toolbarHeight();
	shptr<class TextStyle> /*var-nullable*/ toolbarTextStyle();
	shptr<class TextStyle> /*var-nullable*/ titleTextStyle();
	shptr<class SystemUiOverlayStyle> /*var-nullable*/ systemOverlayStyle();
	struct _copyWith
	{
		/*nullable*/ shptr<class IconThemeData> actionsIconTheme;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> scrolledUnderElevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
		/*nullable*/ stdop<bool> centerTitle;
		/*nullable*/ stdop<double> titleSpacing;
		/*nullable*/ stdop<double> toolbarHeight;
		/*nullable*/ shptr<class TextStyle> toolbarTextStyle;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class SystemUiOverlayStyle> systemOverlayStyle;
	};
	shptr<class AppBarTheme> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class AppBarTheme> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class AppBarTheme> /*non-null*/ lerp(/*nullable*/ shptr<class AppBarTheme> a, /*nullable*/ shptr<class AppBarTheme> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> scrolledUnderElevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
		/*nullable*/ shptr<class IconThemeData> actionsIconTheme;
		/*nullable*/ stdop<bool> centerTitle;
		/*nullable*/ stdop<double> titleSpacing;
		/*nullable*/ stdop<double> toolbarHeight;
		/*nullable*/ shptr<class TextStyle> toolbarTextStyle;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class SystemUiOverlayStyle> systemOverlayStyle;
	};
	static shptr<class AppBarTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AppBarTheme> AppBarTheme(AppBarTheme::_ctorMain p = {}) {
	return AppBarTheme::ctorMain(p);
}

class BottomAppBarTheme : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ color();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class NotchedShape> /*var-nullable*/ shape();
	stdop<double> /*var-nullable*/ height();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class NotchedShape> shape;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
	};
	shptr<class BottomAppBarTheme> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class BottomAppBarTheme> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class BottomAppBarTheme> /*non-null*/ lerp(/*nullable*/ shptr<class BottomAppBarTheme> a, /*nullable*/ shptr<class BottomAppBarTheme> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class NotchedShape> shape;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
	};
	static shptr<class BottomAppBarTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BottomAppBarTheme> BottomAppBarTheme(BottomAppBarTheme::_ctorMain p = {}) {
	return BottomAppBarTheme::ctorMain(p);
}

class CardTheme : public ObjBase
{
public:
	stdop<Clip> /*var-nullable*/ clipBehavior();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ margin();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	struct _copyWith
	{
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class EdgeInsetsGeometry> margin;
		/*nullable*/ shptr<class ShapeBorder> shape;
	};
	shptr<class CardTheme> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class CardTheme> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class CardTheme> /*non-null*/ lerp(/*nullable*/ shptr<class CardTheme> a, /*nullable*/ shptr<class CardTheme> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class EdgeInsetsGeometry> margin;
		/*nullable*/ shptr<class ShapeBorder> shape;
	};
	static shptr<class CardTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CardTheme> CardTheme(CardTheme::_ctorMain p = {}) {
	return CardTheme::ctorMain(p);
}

class DialogTheme : public ObjBase
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class AlignmentGeometry> /*var-nullable*/ alignment();
	shptr<class TextStyle> /*var-nullable*/ titleTextStyle();
	shptr<class TextStyle> /*var-nullable*/ contentTextStyle();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ actionsPadding();
	shptr<class Color> /*var-nullable*/ iconColor();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class TextStyle> contentTextStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> actionsPadding;
	};
	shptr<class DialogTheme> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class DialogTheme> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class DialogTheme> /*non-null*/ lerp(/*nullable*/ shptr<class DialogTheme> a, /*nullable*/ shptr<class DialogTheme> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class TextStyle> contentTextStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> actionsPadding;
	};
	static shptr<class DialogTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DialogTheme> DialogTheme(DialogTheme::_ctorMain p = {}) {
	return DialogTheme::ctorMain(p);
}

class FloatingLabelAlignment : public ObjBase
{
public:
	static shptr<class FloatingLabelAlignment> /*var-non-null*/ start();
	static shptr<class FloatingLabelAlignment> /*var-non-null*/ center();
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
};

class InputDecorationTheme : public ObjBase
{
public:
	shptr<class TextStyle> /*var-nullable*/ labelStyle();
	shptr<class TextStyle> /*var-nullable*/ floatingLabelStyle();
	shptr<class TextStyle> /*var-nullable*/ helperStyle();
	stdop<int64> /*var-nullable*/ helperMaxLines();
	shptr<class TextStyle> /*var-nullable*/ hintStyle();
	shptr<class TextStyle> /*var-nullable*/ errorStyle();
	stdop<int64> /*var-nullable*/ errorMaxLines();
	FloatingLabelBehavior /*var-non-null*/ floatingLabelBehavior();
	shptr<class FloatingLabelAlignment> /*var-non-null*/ floatingLabelAlignment();
	bool /*var-non-null*/ isDense();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ contentPadding();
	bool /*var-non-null*/ isCollapsed();
	shptr<class Color> /*var-nullable*/ iconColor();
	shptr<class TextStyle> /*var-nullable*/ prefixStyle();
	shptr<class Color> /*var-nullable*/ prefixIconColor();
	shptr<class TextStyle> /*var-nullable*/ suffixStyle();
	shptr<class Color> /*var-nullable*/ suffixIconColor();
	shptr<class TextStyle> /*var-nullable*/ counterStyle();
	bool /*var-non-null*/ filled();
	shptr<class Color> /*var-nullable*/ fillColor();
	shptr<class BorderSide> /*var-nullable*/ outlineBorder();
	shptr<class BorderSide> /*var-nullable*/ activeIndicatorBorder();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	shptr<class InputBorder> /*var-nullable*/ errorBorder();
	shptr<class InputBorder> /*var-nullable*/ focusedBorder();
	shptr<class InputBorder> /*var-nullable*/ focusedErrorBorder();
	shptr<class InputBorder> /*var-nullable*/ disabledBorder();
	shptr<class InputBorder> /*var-nullable*/ enabledBorder();
	shptr<class InputBorder> /*var-nullable*/ border();
	bool /*var-non-null*/ alignLabelWithHint();
	shptr<class BoxConstraints> /*var-nullable*/ constraints();
	struct _copyWith
	{
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class TextStyle> floatingLabelStyle;
		/*nullable*/ shptr<class TextStyle> helperStyle;
		/*nullable*/ stdop<int64> helperMaxLines;
		/*nullable*/ shptr<class TextStyle> hintStyle;
		/*nullable*/ shptr<class TextStyle> errorStyle;
		/*nullable*/ stdop<int64> errorMaxLines;
		/*nullable*/ stdop<FloatingLabelBehavior> floatingLabelBehavior;
		/*nullable*/ shptr<class FloatingLabelAlignment> floatingLabelAlignment;
		/*nullable*/ stdop<bool> isDense;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*nullable*/ stdop<bool> isCollapsed;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class TextStyle> prefixStyle;
		/*nullable*/ shptr<class Color> prefixIconColor;
		/*nullable*/ shptr<class TextStyle> suffixStyle;
		/*nullable*/ shptr<class Color> suffixIconColor;
		/*nullable*/ shptr<class TextStyle> counterStyle;
		/*nullable*/ stdop<bool> filled;
		/*nullable*/ shptr<class Color> fillColor;
		/*nullable*/ shptr<class BorderSide> activeIndicatorBorder;
		/*nullable*/ shptr<class BorderSide> outlineBorder;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class InputBorder> errorBorder;
		/*nullable*/ shptr<class InputBorder> focusedBorder;
		/*nullable*/ shptr<class InputBorder> focusedErrorBorder;
		/*nullable*/ shptr<class InputBorder> disabledBorder;
		/*nullable*/ shptr<class InputBorder> enabledBorder;
		/*nullable*/ shptr<class InputBorder> border;
		/*nullable*/ stdop<bool> alignLabelWithHint;
		/*nullable*/ shptr<class BoxConstraints> constraints;
	};
	shptr<class InputDecorationTheme> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class InputDecorationTheme> /*non-null*/ merge(/*nullable*/ shptr<class InputDecorationTheme> inputDecorationTheme);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class TextStyle> floatingLabelStyle;
		/*nullable*/ shptr<class TextStyle> helperStyle;
		/*nullable*/ stdop<int64> helperMaxLines;
		/*nullable*/ shptr<class TextStyle> hintStyle;
		/*nullable*/ shptr<class TextStyle> errorStyle;
		/*nullable*/ stdop<int64> errorMaxLines;
		/*non-null*/ FloatingLabelBehavior floatingLabelBehavior = FloatingLabelBehavior_auto;
		/*non-null*/ shptr<class FloatingLabelAlignment> floatingLabelAlignment = FloatingLabelAlignment::start();
		/*non-null*/ bool isDense = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*non-null*/ bool isCollapsed = false;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class TextStyle> prefixStyle;
		/*nullable*/ shptr<class Color> prefixIconColor;
		/*nullable*/ shptr<class TextStyle> suffixStyle;
		/*nullable*/ shptr<class Color> suffixIconColor;
		/*nullable*/ shptr<class TextStyle> counterStyle;
		/*non-null*/ bool filled = false;
		/*nullable*/ shptr<class Color> fillColor;
		/*nullable*/ shptr<class BorderSide> activeIndicatorBorder;
		/*nullable*/ shptr<class BorderSide> outlineBorder;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class InputBorder> errorBorder;
		/*nullable*/ shptr<class InputBorder> focusedBorder;
		/*nullable*/ shptr<class InputBorder> focusedErrorBorder;
		/*nullable*/ shptr<class InputBorder> disabledBorder;
		/*nullable*/ shptr<class InputBorder> enabledBorder;
		/*nullable*/ shptr<class InputBorder> border;
		/*non-null*/ bool alignLabelWithHint = false;
		/*nullable*/ shptr<class BoxConstraints> constraints;
	};
	static shptr<class InputDecorationTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class InputDecorationTheme> InputDecorationTheme(InputDecorationTheme::_ctorMain p = {}) {
	return InputDecorationTheme::ctorMain(p);
}

class TabBarTheme : public ObjBase
{
public:
	shptr<class Decoration> /*var-nullable*/ indicator();
	shptr<class Color> /*var-nullable*/ indicatorColor();
	stdop<TabBarIndicatorSize> /*var-nullable*/ indicatorSize();
	shptr<class Color> /*var-nullable*/ dividerColor();
	shptr<class Color> /*var-nullable*/ labelColor();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ labelPadding();
	shptr<class TextStyle> /*var-nullable*/ labelStyle();
	shptr<class Color> /*var-nullable*/ unselectedLabelColor();
	shptr<class TextStyle> /*var-nullable*/ unselectedLabelStyle();
	shptr<class InteractiveInkFeatureFactory> /*var-nullable*/ splashFactory();
	stdop<TabAlignment> /*var-nullable*/ tabAlignment();
	struct _copyWith
	{
		/*nullable*/ shptr<class Decoration> indicator;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ stdop<TabBarIndicatorSize> indicatorSize;
		/*nullable*/ shptr<class Color> dividerColor;
		/*nullable*/ shptr<class Color> labelColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> labelPadding;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class Color> unselectedLabelColor;
		/*nullable*/ shptr<class TextStyle> unselectedLabelStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ stdop<TabAlignment> tabAlignment;
	};
	shptr<class TabBarTheme> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class TabBarTheme> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class TabBarTheme> /*non-null*/ lerp(/*non-null*/ shptr<class TabBarTheme> a, /*non-null*/ shptr<class TabBarTheme> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Decoration> indicator;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ stdop<TabBarIndicatorSize> indicatorSize;
		/*nullable*/ shptr<class Color> dividerColor;
		/*nullable*/ shptr<class Color> labelColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> labelPadding;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class Color> unselectedLabelColor;
		/*nullable*/ shptr<class TextStyle> unselectedLabelStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ stdop<TabAlignment> tabAlignment;
	};
	static shptr<class TabBarTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TabBarTheme> TabBarTheme(TabBarTheme::_ctorMain p = {}) {
	return TabBarTheme::ctorMain(p);
}

class TextTheme : public ObjBase
{
public:
	shptr<class TextStyle> /*var-nullable*/ displayLarge();
	shptr<class TextStyle> /*var-nullable*/ displayMedium();
	shptr<class TextStyle> /*var-nullable*/ displaySmall();
	shptr<class TextStyle> /*var-nullable*/ headlineLarge();
	shptr<class TextStyle> /*var-nullable*/ headlineMedium();
	shptr<class TextStyle> /*var-nullable*/ headlineSmall();
	shptr<class TextStyle> /*var-nullable*/ titleLarge();
	shptr<class TextStyle> /*var-nullable*/ titleMedium();
	shptr<class TextStyle> /*var-nullable*/ titleSmall();
	shptr<class TextStyle> /*var-nullable*/ bodyLarge();
	shptr<class TextStyle> /*var-nullable*/ bodyMedium();
	shptr<class TextStyle> /*var-nullable*/ bodySmall();
	shptr<class TextStyle> /*var-nullable*/ labelLarge();
	shptr<class TextStyle> /*var-nullable*/ labelMedium();
	shptr<class TextStyle> /*var-nullable*/ labelSmall();
	shptr<class TextStyle> /*get-nullable*/ headline1();
	shptr<class TextStyle> /*get-nullable*/ headline2();
	shptr<class TextStyle> /*get-nullable*/ headline3();
	shptr<class TextStyle> /*get-nullable*/ headline4();
	shptr<class TextStyle> /*get-nullable*/ headline5();
	shptr<class TextStyle> /*get-nullable*/ headline6();
	shptr<class TextStyle> /*get-nullable*/ subtitle1();
	shptr<class TextStyle> /*get-nullable*/ subtitle2();
	shptr<class TextStyle> /*get-nullable*/ bodyText1();
	shptr<class TextStyle> /*get-nullable*/ bodyText2();
	shptr<class TextStyle> /*get-nullable*/ caption();
	shptr<class TextStyle> /*get-nullable*/ button();
	shptr<class TextStyle> /*get-nullable*/ overline();
	struct _copyWith
	{
		/*nullable*/ shptr<class TextStyle> displayLarge;
		/*nullable*/ shptr<class TextStyle> displayMedium;
		/*nullable*/ shptr<class TextStyle> displaySmall;
		/*nullable*/ shptr<class TextStyle> headlineLarge;
		/*nullable*/ shptr<class TextStyle> headlineMedium;
		/*nullable*/ shptr<class TextStyle> headlineSmall;
		/*nullable*/ shptr<class TextStyle> titleLarge;
		/*nullable*/ shptr<class TextStyle> titleMedium;
		/*nullable*/ shptr<class TextStyle> titleSmall;
		/*nullable*/ shptr<class TextStyle> bodyLarge;
		/*nullable*/ shptr<class TextStyle> bodyMedium;
		/*nullable*/ shptr<class TextStyle> bodySmall;
		/*nullable*/ shptr<class TextStyle> labelLarge;
		/*nullable*/ shptr<class TextStyle> labelMedium;
		/*nullable*/ shptr<class TextStyle> labelSmall;
		/*nullable*/ shptr<class TextStyle> headline1;
		/*nullable*/ shptr<class TextStyle> headline2;
		/*nullable*/ shptr<class TextStyle> headline3;
		/*nullable*/ shptr<class TextStyle> headline4;
		/*nullable*/ shptr<class TextStyle> headline5;
		/*nullable*/ shptr<class TextStyle> headline6;
		/*nullable*/ shptr<class TextStyle> subtitle1;
		/*nullable*/ shptr<class TextStyle> subtitle2;
		/*nullable*/ shptr<class TextStyle> bodyText1;
		/*nullable*/ shptr<class TextStyle> bodyText2;
		/*nullable*/ shptr<class TextStyle> caption;
		/*nullable*/ shptr<class TextStyle> button;
		/*nullable*/ shptr<class TextStyle> overline;
	};
	shptr<class TextTheme> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class TextTheme> /*non-null*/ merge(/*nullable*/ shptr<class TextTheme> other);
	struct _apply
	{
		/*nullable*/ stdop<stdstr> fontFamily;
		/*nullable*/ stdop<stdvec<stdstr>> fontFamilyFallback;
		/*nullable*/ stdop<stdstr> package;
		/*non-null*/ double fontSizeFactor = 1.0;
		/*non-null*/ double fontSizeDelta = 0.0;
		/*nullable*/ shptr<class Color> displayColor;
		/*nullable*/ shptr<class Color> bodyColor;
		/*nullable*/ shptr<class TextDecoration> decoration;
		/*nullable*/ shptr<class Color> decorationColor;
		/*nullable*/ stdop<TextDecorationStyle> decorationStyle;
	};
	shptr<class TextTheme> /*non-null*/ apply(_apply p = {});
	static shptr<class TextTheme> /*non-null*/ lerp(/*nullable*/ shptr<class TextTheme> a, /*nullable*/ shptr<class TextTheme> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class TextStyle> displayLarge;
		/*nullable*/ shptr<class TextStyle> displayMedium;
		/*nullable*/ shptr<class TextStyle> displaySmall;
		/*nullable*/ shptr<class TextStyle> headlineLarge;
		/*nullable*/ shptr<class TextStyle> headlineMedium;
		/*nullable*/ shptr<class TextStyle> headlineSmall;
		/*nullable*/ shptr<class TextStyle> titleLarge;
		/*nullable*/ shptr<class TextStyle> titleMedium;
		/*nullable*/ shptr<class TextStyle> titleSmall;
		/*nullable*/ shptr<class TextStyle> bodyLarge;
		/*nullable*/ shptr<class TextStyle> bodyMedium;
		/*nullable*/ shptr<class TextStyle> bodySmall;
		/*nullable*/ shptr<class TextStyle> labelLarge;
		/*nullable*/ shptr<class TextStyle> labelMedium;
		/*nullable*/ shptr<class TextStyle> labelSmall;
		/*nullable*/ shptr<class TextStyle> headline1;
		/*nullable*/ shptr<class TextStyle> headline2;
		/*nullable*/ shptr<class TextStyle> headline3;
		/*nullable*/ shptr<class TextStyle> headline4;
		/*nullable*/ shptr<class TextStyle> headline5;
		/*nullable*/ shptr<class TextStyle> headline6;
		/*nullable*/ shptr<class TextStyle> subtitle1;
		/*nullable*/ shptr<class TextStyle> subtitle2;
		/*nullable*/ shptr<class TextStyle> bodyText1;
		/*nullable*/ shptr<class TextStyle> bodyText2;
		/*nullable*/ shptr<class TextStyle> caption;
		/*nullable*/ shptr<class TextStyle> button;
		/*nullable*/ shptr<class TextStyle> overline;
	};
	static shptr<class TextTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TextTheme> TextTheme(TextTheme::_ctorMain p = {}) {
	return TextTheme::ctorMain(p);
}

class AnimatedTheme : public ImplicitlyAnimatedWidget
{
public:
	shptr<class ThemeData> /*var-non-null*/ data();
	shptr<class Widget> /*var-non-null*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ThemeData> data;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration = Duration({ .milliseconds = 200 });
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedTheme> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedTheme> AnimatedTheme(AnimatedTheme::_ctorMain p = {}) {
	return AnimatedTheme::ctorMain(p);
}

class DefaultTextHeightBehavior : public InheritedTheme
{
public:
	shptr<class TextHeightBehavior> /*var-non-null*/ textHeightBehavior();
	static shptr<class TextHeightBehavior> /*nullable*/ maybeOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class TextHeightBehavior> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class DefaultTextHeightBehavior> oldWidget);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class TextHeightBehavior> textHeightBehavior;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class DefaultTextHeightBehavior> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DefaultTextHeightBehavior> DefaultTextHeightBehavior(DefaultTextHeightBehavior::_ctorMain p = {}) {
	return DefaultTextHeightBehavior::ctorMain(p);
}

class DefaultTextStyle : public InheritedTheme
{
public:
	shptr<class TextStyle> /*var-non-null*/ style();
	stdop<TextAlign> /*var-nullable*/ textAlign();
	bool /*var-non-null*/ softWrap();
	TextOverflow /*var-non-null*/ overflow();
	stdop<int64> /*var-nullable*/ maxLines();
	TextWidthBasis /*var-non-null*/ textWidthBasis();
	shptr<class TextHeightBehavior> /*var-nullable*/ textHeightBehavior();
	struct _merge
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class TextStyle> style;
		/*nullable*/ stdop<TextAlign> textAlign;
		/*nullable*/ stdop<bool> softWrap;
		/*nullable*/ stdop<TextOverflow> overflow;
		/*nullable*/ stdop<int64> maxLines;
		/*nullable*/ stdop<TextWidthBasis> textWidthBasis;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Widget> /*non-null*/ merge(_merge p = {});
	static shptr<class DefaultTextStyle> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class DefaultTextStyle> oldWidget);
	shptr<class Widget> /*non-null*/ wrap(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class TextStyle> style;
		/*nullable*/ stdop<TextAlign> textAlign;
		/*non-null*/ bool softWrap = true;
		/*non-null*/ TextOverflow overflow = TextOverflow_clip;
		/*nullable*/ stdop<int64> maxLines;
		/*non-null*/ TextWidthBasis textWidthBasis = TextWidthBasis_parent;
		/*nullable*/ shptr<class TextHeightBehavior> textHeightBehavior;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class DefaultTextStyle> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _fallback
	{
		/*nullable*/ shptr<class Key> key;
	};
	static shptr<class DefaultTextStyle> /*non-null*/ fallback(_fallback p = {});
};

inline shptr<class DefaultTextStyle> DefaultTextStyle(DefaultTextStyle::_ctorMain p = {}) {
	return DefaultTextStyle::ctorMain(p);
}
