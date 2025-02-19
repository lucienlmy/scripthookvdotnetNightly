#pragma once

class MaterialApp : public StatefulWidget
{
public:
	shptr<class Widget> /*var-nullable*/ home();
	stdop<stdstr> /*var-nullable*/ initialRoute();
	shptr<class RouteInformationProvider> /*var-nullable*/ routeInformationProvider();
	shptr<class BackButtonDispatcher> /*var-nullable*/ backButtonDispatcher();
	stdstr /*var-non-null*/ title();
	shptr<class ThemeData> /*var-nullable*/ theme();
	shptr<class ThemeData> /*var-nullable*/ darkTheme();
	shptr<class ThemeData> /*var-nullable*/ highContrastTheme();
	shptr<class ThemeData> /*var-nullable*/ highContrastDarkTheme();
	stdop<ThemeMode> /*var-nullable*/ themeMode();
	shptr<class Duration> /*var-non-null*/ themeAnimationDuration();
	shptr<class Curve> /*var-non-null*/ themeAnimationCurve();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Locale> /*var-nullable*/ locale();
	bool /*var-non-null*/ showPerformanceOverlay();
	bool /*var-non-null*/ checkerboardRasterCacheImages();
	bool /*var-non-null*/ checkerboardOffscreenLayers();
	bool /*var-non-null*/ showSemanticsDebugger();
	bool /*var-non-null*/ debugShowCheckedModeBanner();
	stdop<stdstr> /*var-nullable*/ restorationScopeId();
	shptr<class ScrollBehavior> /*var-nullable*/ scrollBehavior();
	bool /*var-non-null*/ debugShowMaterialGrid();
	bool /*var-non-null*/ useInheritedMediaQuery();
	static shptr<class HeroController> /*non-null*/ createMaterialHeroController();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class GlobalKey<shptr<class NavigatorState>>> navigatorKey;
		/*nullable*/ shptr<class GlobalKey<shptr<class ScaffoldMessengerState>>> scaffoldMessengerKey;
		/*nullable*/ shptr<class Widget> home;
//		/*non-null*/ shptr<class Map<stdstr, stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/>> routes;
		/*nullable*/ stdop<stdstr> initialRoute;
//		/*nullable*/ stdfunc<shptr<class Route<shptr<class ObjBase>>>(shptr<class RouteSettings>)> /*(RouteSettings) -> Route*/ onGenerateRoute;
//		/*nullable*/ stdfunc<stdvec<shptr<class Route<shptr<class ObjBase>>>>(stdstr)> /*(String) -> List*/ onGenerateInitialRoutes;
//		/*nullable*/ stdfunc<shptr<class Route<shptr<class ObjBase>>>(shptr<class RouteSettings>)> /*(RouteSettings) -> Route*/ onUnknownRoute;
		/*non-null*/ stdvec<shptr<class NavigatorObserver>> navigatorObservers;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Widget>)> /*(BuildContext, Widget) -> Widget*/ builder;
		/*non-null*/ stdstr title;
//		/*nullable*/ stdfunc<stdstr(shptr<class BuildContext>)> /*(BuildContext) -> String*/ onGenerateTitle;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class ThemeData> theme;
		/*nullable*/ shptr<class ThemeData> darkTheme;
		/*nullable*/ shptr<class ThemeData> highContrastTheme;
		/*nullable*/ shptr<class ThemeData> highContrastDarkTheme;
		/*nullable*/ stdop<ThemeMode> themeMode = ThemeMode_system;
		/*non-null*/ shptr<class Duration> themeAnimationDuration = Duration({.milliseconds = 200});
		/*non-null*/ shptr<class Curve> themeAnimationCurve = Curves::linear();
//		/*nullable*/ shptr<class Locale> locale;
//		/*nullable*/ shptr<class Iterable<shptr<class LocalizationsDelegate<shptr<class ObjBase>>>>> localizationsDelegates;
//		/*nullable*/ stdfunc<shptr<class Locale>(stdvec<shptr<class Locale>>, shptr<class Iterable<shptr<class Locale>>>)> /*(List, Iterable) -> dart.ui.Locale*/ localeListResolutionCallback;
//		/*nullable*/ stdfunc<shptr<class Locale>(shptr<class Locale>, shptr<class Iterable<shptr<class Locale>>>)> /*(dart.ui.Locale, Iterable) -> dart.ui.Locale*/ localeResolutionCallback;
//		/*non-null*/ shptr<class Iterable<shptr<class Locale>>> supportedLocales = [en_US];
		/*non-null*/ bool debugShowMaterialGrid = false;
		/*non-null*/ bool showPerformanceOverlay = false;
		/*non-null*/ bool checkerboardRasterCacheImages = false;
		/*non-null*/ bool checkerboardOffscreenLayers = false;
		/*non-null*/ bool showSemanticsDebugger = false;
		/*non-null*/ bool debugShowCheckedModeBanner = true;
//		/*nullable*/ shptr<class Map<shptr<class ShortcutActivator>, shptr<class Intent>>> shortcuts;
//		/*nullable*/ shptr<class Map<shptr<class Type>, shptr<class Action<shptr<class Intent>>>>> actions;
		/*nullable*/ stdop<stdstr> restorationScopeId;
		/*nullable*/ shptr<class ScrollBehavior> scrollBehavior;
//		/*non-null*/ bool useInheritedMediaQuery = false;
	};
	static shptr<class MaterialApp> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MaterialApp> MaterialApp(MaterialApp::_ctorMain p = {}) {
	return MaterialApp::ctorMain(p);
}

class Scaffold : public StatefulWidget
{
public:
	bool /*var-non-null*/ extendBody();
	bool /*var-non-null*/ extendBodyBehindAppBar();
	shptr<class PreferredSizeWidget> /*var-nullable*/ appBar();
	shptr<class Widget> /*var-nullable*/ body();
	shptr<class Widget> /*var-nullable*/ floatingActionButton();
	shptr<class FloatingActionButtonLocation> /*var-nullable*/ floatingActionButtonLocation();
	shptr<class FloatingActionButtonAnimator> /*var-nullable*/ floatingActionButtonAnimator();
	shptr<class AlignmentDirectional> /*var-non-null*/ persistentFooterAlignment();
	shptr<class Widget> /*var-nullable*/ drawer();
	shptr<class Widget> /*var-nullable*/ endDrawer();
	shptr<class Color> /*var-nullable*/ drawerScrimColor();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Widget> /*var-nullable*/ bottomNavigationBar();
	shptr<class Widget> /*var-nullable*/ bottomSheet();
	stdop<bool> /*var-nullable*/ resizeToAvoidBottomInset();
	bool /*var-non-null*/ primary();
	DragStartBehavior /*var-non-null*/ drawerDragStartBehavior();
	stdop<double> /*var-nullable*/ drawerEdgeDragWidth();
	bool /*var-non-null*/ drawerEnableOpenDragGesture();
	bool /*var-non-null*/ endDrawerEnableOpenDragGesture();
	stdop<stdstr> /*var-nullable*/ restorationId();
	static shptr<class ScaffoldState> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class ScaffoldState> /*nullable*/ maybeOf(/*non-null*/ shptr<class BuildContext> context);
	struct _hasDrawer
	{
		/*non-null*/ bool registerForUpdates = true;
	};
	static bool /*non-null*/ hasDrawer(/*non-null*/ shptr<class BuildContext> context, _hasDrawer p = {});
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class PreferredSizeWidget> appBar;
		/*nullable*/ shptr<class Widget> body;
		/*nullable*/ shptr<class Widget> floatingActionButton;
		/*nullable*/ shptr<class FloatingActionButtonLocation> floatingActionButtonLocation;
		/*nullable*/ shptr<class FloatingActionButtonAnimator> floatingActionButtonAnimator;
		/*nullable*/ stdop<stdvec<shptr<class Widget>>> persistentFooterButtons;
		/*non-null*/ shptr<class AlignmentDirectional> persistentFooterAlignment = AlignmentDirectional::centerEnd();
		/*nullable*/ shptr<class Widget> drawer;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onDrawerChanged;
		/*nullable*/ shptr<class Widget> endDrawer;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onEndDrawerChanged;
		/*nullable*/ shptr<class Widget> bottomNavigationBar;
		/*nullable*/ shptr<class Widget> bottomSheet;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<bool> resizeToAvoidBottomInset;
		/*non-null*/ bool primary = true;
		/*non-null*/ DragStartBehavior drawerDragStartBehavior = DragStartBehavior_start;
		/*non-null*/ bool extendBody = false;
		/*non-null*/ bool extendBodyBehindAppBar = false;
		/*nullable*/ shptr<class Color> drawerScrimColor;
		/*nullable*/ stdop<double> drawerEdgeDragWidth;
		/*non-null*/ bool drawerEnableOpenDragGesture = true;
		/*non-null*/ bool endDrawerEnableOpenDragGesture = true;
		/*nullable*/ stdop<stdstr> restorationId;
	};
	static shptr<class Scaffold> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Scaffold> Scaffold(Scaffold::_ctorMain p = {}) {
	return Scaffold::ctorMain(p);
}

class ScaffoldState : public State<class Scaffold>
{
public:
	bool /*get-non-null*/ hasAppBar();
	bool /*get-non-null*/ hasDrawer();
	bool /*get-non-null*/ hasEndDrawer();
	bool /*get-non-null*/ hasFloatingActionButton();
	stdop<double> /*get-nullable*/ appBarMaxHeight();
	bool /*get-non-null*/ isDrawerOpen();
	bool /*get-non-null*/ isEndDrawerOpen();
	void openDrawer();
	void openEndDrawer();
	void closeDrawer();
	void closeEndDrawer();
};

class AppBar : public PreferredSizeWidget
{
public:
	shptr<class Widget> /*var-nullable*/ leading();
	bool /*var-non-null*/ automaticallyImplyLeading();
	shptr<class Widget> /*var-nullable*/ title();
	shptr<class Widget> /*var-nullable*/ flexibleSpace();
	shptr<class PreferredSizeWidget> /*var-nullable*/ bottom();
	stdop<double> /*var-nullable*/ elevation();
	stdop<double> /*var-nullable*/ scrolledUnderElevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ foregroundColor();
	shptr<class IconThemeData> /*var-nullable*/ iconTheme();
	shptr<class IconThemeData> /*var-nullable*/ actionsIconTheme();
	bool /*var-non-null*/ primary();
	stdop<bool> /*var-nullable*/ centerTitle();
	bool /*var-non-null*/ excludeHeaderSemantics();
	stdop<double> /*var-nullable*/ titleSpacing();
	double /*var-non-null*/ toolbarOpacity();
	double /*var-non-null*/ bottomOpacity();
	shptr<class Size> /*var-non-null*/ preferredSize();
	stdop<double> /*var-nullable*/ toolbarHeight();
	stdop<double> /*var-nullable*/ leadingWidth();
	shptr<class TextStyle> /*var-nullable*/ toolbarTextStyle();
	shptr<class TextStyle> /*var-nullable*/ titleTextStyle();
	shptr<class SystemUiOverlayStyle> /*var-nullable*/ systemOverlayStyle();
	bool /*var-non-null*/ forceMaterialTransparency();
	stdop<Clip> /*var-nullable*/ clipBehavior();
	static double /*non-null*/ preferredHeightFor(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Size> preferredSize);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> leading;
		/*non-null*/ bool automaticallyImplyLeading = true;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ stdop<stdvec<shptr<class Widget>>> actions;
		/*nullable*/ shptr<class Widget> flexibleSpace;
		/*nullable*/ shptr<class PreferredSizeWidget> bottom;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> scrolledUnderElevation;
//		/*non-null*/ stdfunc<bool(shptr<class ScrollNotification>)> /*(ScrollNotification) -> bool*/ notificationPredicate = Closure: (ScrollNotification) = > bool from Function 'defaultScrollNotificationPredicate': static.;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
		/*nullable*/ shptr<class IconThemeData> actionsIconTheme;
		/*non-null*/ bool primary = true;
		/*nullable*/ stdop<bool> centerTitle;
		/*non-null*/ bool excludeHeaderSemantics = false;
		/*nullable*/ stdop<double> titleSpacing;
		/*non-null*/ double toolbarOpacity = 1.0;
		/*non-null*/ double bottomOpacity = 1.0;
		/*nullable*/ stdop<double> toolbarHeight;
		/*nullable*/ stdop<double> leadingWidth;
		/*nullable*/ shptr<class TextStyle> toolbarTextStyle;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class SystemUiOverlayStyle> systemOverlayStyle;
		/*non-null*/ bool forceMaterialTransparency = false;
		/*nullable*/ stdop<Clip> clipBehavior;
	};
	static shptr<class AppBar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AppBar> AppBar(AppBar::_ctorMain p = {}) {
	return AppBar::ctorMain(p);
}

class SliverAppBar : public StatefulWidget
{
public:
	shptr<class Widget> /*var-nullable*/ leading();
	bool /*var-non-null*/ automaticallyImplyLeading();
	shptr<class Widget> /*var-nullable*/ title();
	shptr<class Widget> /*var-nullable*/ flexibleSpace();
	shptr<class PreferredSizeWidget> /*var-nullable*/ bottom();
	stdop<double> /*var-nullable*/ elevation();
	stdop<double> /*var-nullable*/ scrolledUnderElevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	bool /*var-non-null*/ forceElevated();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ foregroundColor();
	shptr<class IconThemeData> /*var-nullable*/ iconTheme();
	shptr<class IconThemeData> /*var-nullable*/ actionsIconTheme();
	bool /*var-non-null*/ primary();
	stdop<bool> /*var-nullable*/ centerTitle();
	bool /*var-non-null*/ excludeHeaderSemantics();
	stdop<double> /*var-nullable*/ titleSpacing();
	stdop<double> /*var-nullable*/ collapsedHeight();
	stdop<double> /*var-nullable*/ expandedHeight();
	bool /*var-non-null*/ floating();
	bool /*var-non-null*/ pinned();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	bool /*var-non-null*/ snap();
	bool /*var-non-null*/ stretch();
	double /*var-non-null*/ stretchTriggerOffset();
	double /*var-non-null*/ toolbarHeight();
	stdop<double> /*var-nullable*/ leadingWidth();
	shptr<class TextStyle> /*var-nullable*/ toolbarTextStyle();
	shptr<class TextStyle> /*var-nullable*/ titleTextStyle();
	shptr<class SystemUiOverlayStyle> /*var-nullable*/ systemOverlayStyle();
	bool /*var-non-null*/ forceMaterialTransparency();
	stdop<Clip> /*var-nullable*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> leading;
		/*non-null*/ bool automaticallyImplyLeading = true;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ stdop<stdvec<shptr<class Widget>>> actions;
		/*nullable*/ shptr<class Widget> flexibleSpace;
		/*nullable*/ shptr<class PreferredSizeWidget> bottom;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> scrolledUnderElevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*non-null*/ bool forceElevated = false;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
		/*nullable*/ shptr<class IconThemeData> actionsIconTheme;
		/*non-null*/ bool primary = true;
		/*nullable*/ stdop<bool> centerTitle;
		/*non-null*/ bool excludeHeaderSemantics = false;
		/*nullable*/ stdop<double> titleSpacing;
		/*nullable*/ stdop<double> collapsedHeight;
		/*nullable*/ stdop<double> expandedHeight;
		/*non-null*/ bool floating = false;
		/*non-null*/ bool pinned = false;
		/*non-null*/ bool snap = false;
		/*non-null*/ bool stretch = false;
		/*non-null*/ double stretchTriggerOffset = 100.0;
//		/*nullable*/ stdfunc<shptr<class Future<void>>()> /*() -> dart.async.Future*/ onStretchTrigger;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ double toolbarHeight = 56.0;
		/*nullable*/ stdop<double> leadingWidth;
		/*nullable*/ shptr<class TextStyle> toolbarTextStyle;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class SystemUiOverlayStyle> systemOverlayStyle;
		/*non-null*/ bool forceMaterialTransparency = false;
		/*nullable*/ stdop<Clip> clipBehavior;
	};
	static shptr<class SliverAppBar> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _medium
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> leading;
		/*non-null*/ bool automaticallyImplyLeading = true;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ stdop<stdvec<shptr<class Widget>>> actions;
		/*nullable*/ shptr<class Widget> flexibleSpace;
		/*nullable*/ shptr<class PreferredSizeWidget> bottom;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> scrolledUnderElevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*non-null*/ bool forceElevated = false;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
		/*nullable*/ shptr<class IconThemeData> actionsIconTheme;
		/*non-null*/ bool primary = true;
		/*nullable*/ stdop<bool> centerTitle;
		/*non-null*/ bool excludeHeaderSemantics = false;
		/*nullable*/ stdop<double> titleSpacing;
		/*nullable*/ stdop<double> collapsedHeight;
		/*nullable*/ stdop<double> expandedHeight;
		/*non-null*/ bool floating = false;
		/*non-null*/ bool pinned = true;
		/*non-null*/ bool snap = false;
		/*non-null*/ bool stretch = false;
		/*non-null*/ double stretchTriggerOffset = 100.0;
//		/*nullable*/ stdfunc<shptr<class Future<void>>()> /*() -> dart.async.Future*/ onStretchTrigger;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ double toolbarHeight = 64.0;
		/*nullable*/ stdop<double> leadingWidth;
		/*nullable*/ shptr<class TextStyle> toolbarTextStyle;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class SystemUiOverlayStyle> systemOverlayStyle;
		/*non-null*/ bool forceMaterialTransparency = false;
		/*nullable*/ stdop<Clip> clipBehavior;
	};
	static shptr<class SliverAppBar> /*non-null*/ medium(_medium p = {});
	struct _large
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> leading;
		/*non-null*/ bool automaticallyImplyLeading = true;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ stdop<stdvec<shptr<class Widget>>> actions;
		/*nullable*/ shptr<class Widget> flexibleSpace;
		/*nullable*/ shptr<class PreferredSizeWidget> bottom;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> scrolledUnderElevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*non-null*/ bool forceElevated = false;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
		/*nullable*/ shptr<class IconThemeData> actionsIconTheme;
		/*non-null*/ bool primary = true;
		/*nullable*/ stdop<bool> centerTitle;
		/*non-null*/ bool excludeHeaderSemantics = false;
		/*nullable*/ stdop<double> titleSpacing;
		/*nullable*/ stdop<double> collapsedHeight;
		/*nullable*/ stdop<double> expandedHeight;
		/*non-null*/ bool floating = false;
		/*non-null*/ bool pinned = true;
		/*non-null*/ bool snap = false;
		/*non-null*/ bool stretch = false;
		/*non-null*/ double stretchTriggerOffset = 100.0;
//		/*nullable*/ stdfunc<shptr<class Future<void>>()> /*() -> dart.async.Future*/ onStretchTrigger;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ double toolbarHeight = 64.0;
		/*nullable*/ stdop<double> leadingWidth;
		/*nullable*/ shptr<class TextStyle> toolbarTextStyle;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class SystemUiOverlayStyle> systemOverlayStyle;
		/*non-null*/ bool forceMaterialTransparency = false;
		/*nullable*/ stdop<Clip> clipBehavior;
	};
	static shptr<class SliverAppBar> /*non-null*/ large(_large p = {});
};

inline shptr<class SliverAppBar> SliverAppBar(SliverAppBar::_ctorMain p = {}) {
	return SliverAppBar::ctorMain(p);
}

class FlexibleSpaceBar : public StatefulWidget
{
public:
	shptr<class Widget> /*var-nullable*/ title();
	shptr<class Widget> /*var-nullable*/ background();
	stdop<bool> /*var-nullable*/ centerTitle();
	CollapseMode /*var-non-null*/ collapseMode();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ titlePadding();
	double /*var-non-null*/ expandedTitleScale();
	struct _createSettings
	{
		/*nullable*/ stdop<double> toolbarOpacity;
		/*nullable*/ stdop<double> minExtent;
		/*nullable*/ stdop<double> maxExtent;
		/*nullable*/ stdop<bool> isScrolledUnder;
		/*non-null*/ double currentExtent;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Widget> /*non-null*/ createSettings(_createSettings p = {});
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ shptr<class Widget> background;
		/*nullable*/ stdop<bool> centerTitle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> titlePadding;
		/*non-null*/ CollapseMode collapseMode = CollapseMode_parallax;
		/*non-null*/ stdvec<StretchMode> stretchModes = { StretchMode_zoomBackground };
		/*non-null*/ double expandedTitleScale = 1.5;
	};
	static shptr<class FlexibleSpaceBar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class FlexibleSpaceBar> FlexibleSpaceBar(FlexibleSpaceBar::_ctorMain p = {}) {
	return FlexibleSpaceBar::ctorMain(p);
}

class FlexibleSpaceBarSettings : public InheritedWidget
{
public:
	double /*var-non-null*/ toolbarOpacity();
	double /*var-non-null*/ minExtent();
	double /*var-non-null*/ maxExtent();
	double /*var-non-null*/ currentExtent();
	stdop<bool> /*var-nullable*/ isScrolledUnder();
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class FlexibleSpaceBarSettings> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double toolbarOpacity;
		/*non-null*/ double minExtent;
		/*non-null*/ double maxExtent;
		/*non-null*/ double currentExtent;
		/*nullable*/ stdop<bool> isScrolledUnder;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class FlexibleSpaceBarSettings> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class FlexibleSpaceBarSettings> FlexibleSpaceBarSettings(FlexibleSpaceBarSettings::_ctorMain p = {}) {
	return FlexibleSpaceBarSettings::ctorMain(p);
}

class BottomNavigationBarItem : public ObjBase
{
public:
	shptr<class Widget> /*var-non-null*/ icon();
	shptr<class Widget> /*var-non-null*/ activeIcon();
	stdop<stdstr> /*var-nullable*/ label();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<stdstr> /*var-nullable*/ tooltip();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Widget> icon;
		/*nullable*/ stdop<stdstr> label;
		/*nullable*/ shptr<class Widget> activeIcon;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<stdstr> tooltip;
	};
	static shptr<class BottomNavigationBarItem> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BottomNavigationBarItem> BottomNavigationBarItem(BottomNavigationBarItem::_ctorMain p = {}) {
	return BottomNavigationBarItem::ctorMain(p);
}

class BottomNavigationBar : public StatefulWidget
{
public:
	int64 /*var-non-null*/ currentIndex();
	stdop<double> /*var-nullable*/ elevation();
	stdop<BottomNavigationBarType> /*var-nullable*/ type();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	double /*var-non-null*/ iconSize();
	shptr<class Color> /*var-nullable*/ selectedItemColor();
	shptr<class Color> /*var-nullable*/ unselectedItemColor();
	shptr<class IconThemeData> /*var-nullable*/ selectedIconTheme();
	shptr<class IconThemeData> /*var-nullable*/ unselectedIconTheme();
	shptr<class TextStyle> /*var-nullable*/ selectedLabelStyle();
	shptr<class TextStyle> /*var-nullable*/ unselectedLabelStyle();
	double /*var-non-null*/ selectedFontSize();
	double /*var-non-null*/ unselectedFontSize();
	stdop<bool> /*var-nullable*/ showUnselectedLabels();
	stdop<bool> /*var-nullable*/ showSelectedLabels();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	stdop<bool> /*var-nullable*/ enableFeedback();
	stdop<BottomNavigationBarLandscapeLayout> /*var-nullable*/ landscapeLayout();
	bool /*var-non-null*/ useLegacyColorScheme();
	shptr<class Color> /*get-nullable*/ fixedColor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdvec<shptr<class BottomNavigationBarItem>> items;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onTap;
		/*non-null*/ int64 currentIndex = 0;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<BottomNavigationBarType> type;
		/*nullable*/ shptr<class Color> fixedColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*non-null*/ double iconSize = 24.0;
		/*nullable*/ shptr<class Color> selectedItemColor;
		/*nullable*/ shptr<class Color> unselectedItemColor;
		/*nullable*/ shptr<class IconThemeData> selectedIconTheme;
		/*nullable*/ shptr<class IconThemeData> unselectedIconTheme;
		/*non-null*/ double selectedFontSize = 14.0;
		/*non-null*/ double unselectedFontSize = 12.0;
		/*nullable*/ shptr<class TextStyle> selectedLabelStyle;
		/*nullable*/ shptr<class TextStyle> unselectedLabelStyle;
		/*nullable*/ stdop<bool> showSelectedLabels;
		/*nullable*/ stdop<bool> showUnselectedLabels;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ stdop<BottomNavigationBarLandscapeLayout> landscapeLayout;
		/*non-null*/ bool useLegacyColorScheme = true;
	};
	static shptr<class BottomNavigationBar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BottomNavigationBar> BottomNavigationBar(BottomNavigationBar::_ctorMain p = {}) {
	return BottomNavigationBar::ctorMain(p);
}

template <class T> class MaterialStateProperty : public ObjBase
{
public:
	struct _ctorMain
	{
		/*nullable*/ stdop<T> def;
		/*nullable*/ stdop<T> hovered;
		/*nullable*/ stdop<T> focused;
		/*nullable*/ stdop<T> pressed;
		/*nullable*/ stdop<T> dragged;
		/*nullable*/ stdop<T> selected;
		/*nullable*/ stdop<T> scrolledUnder;
		/*nullable*/ stdop<T> disabled;
		/*nullable*/ stdop<T> error;
	};
	static shptr<class MaterialStateProperty<T>> /*non-null*/ ctorMain(_ctorMain p = {}) {
		auto m = ManagedCall("MaterialStateProperty", "MaterialStateProperty");
		m.put("type", stdstr(__FUNCTION__));
		m.put("def", p.def);
		m.put("hovered", p.hovered);
		m.put("focused", p.focused);
		m.put("pressed", p.pressed);
		m.put("dragged", p.dragged);
		m.put("selected", p.selected);
		m.put("scrolledUnder", p.scrolledUnder);
		m.put("disabled", p.disabled);
		m.put("error", p.error);
		shptr<class MaterialStateProperty<T>> result;
		m.check(m.call(result, true));
		return result;
	}
};

template <class T> inline shptr<class MaterialStateProperty<T>> MaterialStateProp(struct MaterialStateProperty<T>::_ctorMain p = {}) {
	return MaterialStateProperty<T>::ctorMain(p);
}

class InputBorder : public ShapeBorder
{
public:
	static shptr<class InputBorder> /*var-non-null*/ none();
	shptr<class BorderSide> /*var-non-null*/ borderSide();
	bool /*get-non-null*/ isOutline();
	struct _copyWith
	{
		/*nullable*/ shptr<class BorderSide> borderSide;
	};
	shptr<class InputBorder> /*non-null*/ copyWith(_copyWith p = {});
};

class UnderlineInputBorder : public InputBorder
{
public:
	shptr<class BorderRadius> /*var-non-null*/ borderRadius();
	bool /*get-non-null*/ isOutline();
	shptr<class EdgeInsetsGeometry> /*get-non-null*/ dimensions();
	bool /*get-non-null*/ preferPaintInterior();
	struct _copyWith
	{
		/*nullable*/ shptr<class BorderSide> borderSide;
		/*nullable*/ shptr<class BorderRadius> borderRadius;
	};
	shptr<class UnderlineInputBorder> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class UnderlineInputBorder> /*non-null*/ scale(/*non-null*/ double t);
	struct _getInnerPath
	{
		/*nullable*/ stdop<TextDirection> textDirection;
	};
	shptr<class Path> /*non-null*/ getInnerPath(/*non-null*/ shptr<class Rect> rect, _getInnerPath p = {});
	struct _getOuterPath
	{
		/*nullable*/ stdop<TextDirection> textDirection;
	};
	shptr<class Path> /*non-null*/ getOuterPath(/*non-null*/ shptr<class Rect> rect, _getOuterPath p = {});
	shptr<class ShapeBorder> /*nullable*/ lerpFrom(/*nullable*/ shptr<class ShapeBorder> a, /*non-null*/ double t);
	shptr<class ShapeBorder> /*nullable*/ lerpTo(/*nullable*/ shptr<class ShapeBorder> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class BorderSide> borderSide = BorderSide();
		/*non-null*/ shptr<class BorderRadius> borderRadius = BorderRadius::only({ .topLeft = Radius::circular(4.0), .topRight = Radius::circular(4.0) });
	};
	static shptr<class UnderlineInputBorder> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class UnderlineInputBorder> UnderlineInputBorder(UnderlineInputBorder::_ctorMain p = {}) {
	return UnderlineInputBorder::ctorMain(p);
}

class OutlineInputBorder : public InputBorder
{
public:
	double /*var-non-null*/ gapPadding();
	shptr<class BorderRadius> /*var-non-null*/ borderRadius();
	bool /*get-non-null*/ isOutline();
	shptr<class EdgeInsetsGeometry> /*get-non-null*/ dimensions();
	bool /*get-non-null*/ preferPaintInterior();
	struct _copyWith
	{
		/*nullable*/ shptr<class BorderSide> borderSide;
		/*nullable*/ shptr<class BorderRadius> borderRadius;
		/*nullable*/ stdop<double> gapPadding;
	};
	shptr<class OutlineInputBorder> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class OutlineInputBorder> /*non-null*/ scale(/*non-null*/ double t);
	shptr<class ShapeBorder> /*nullable*/ lerpFrom(/*nullable*/ shptr<class ShapeBorder> a, /*non-null*/ double t);
	shptr<class ShapeBorder> /*nullable*/ lerpTo(/*nullable*/ shptr<class ShapeBorder> b, /*non-null*/ double t);
	struct _getInnerPath
	{
		/*nullable*/ stdop<TextDirection> textDirection;
	};
	shptr<class Path> /*non-null*/ getInnerPath(/*non-null*/ shptr<class Rect> rect, _getInnerPath p = {});
	struct _getOuterPath
	{
		/*nullable*/ stdop<TextDirection> textDirection;
	};
	shptr<class Path> /*non-null*/ getOuterPath(/*non-null*/ shptr<class Rect> rect, _getOuterPath p = {});
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class BorderSide> borderSide = BorderSide();
		/*non-null*/ shptr<class BorderRadius> borderRadius = BorderRadius::circular(4.0);
		/*non-null*/ double gapPadding = 4.0;
	};
	static shptr<class OutlineInputBorder> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class OutlineInputBorder> OutlineInputBorder(OutlineInputBorder::_ctorMain p = {}) {
	return OutlineInputBorder::ctorMain(p);
}

class InputDecoration : public ObjBase
{
public:
	shptr<class Widget> /*var-nullable*/ icon();
	shptr<class Color> /*var-nullable*/ iconColor();
	shptr<class Widget> /*var-nullable*/ label();
	stdop<stdstr> /*var-nullable*/ labelText();
	shptr<class TextStyle> /*var-nullable*/ labelStyle();
	shptr<class TextStyle> /*var-nullable*/ floatingLabelStyle();
	stdop<stdstr> /*var-nullable*/ helperText();
	shptr<class TextStyle> /*var-nullable*/ helperStyle();
	stdop<int64> /*var-nullable*/ helperMaxLines();
	stdop<stdstr> /*var-nullable*/ hintText();
	shptr<class TextStyle> /*var-nullable*/ hintStyle();
	stdop<TextDirection> /*var-nullable*/ hintTextDirection();
	stdop<int64> /*var-nullable*/ hintMaxLines();
	shptr<class Widget> /*var-nullable*/ error();
	stdop<stdstr> /*var-nullable*/ errorText();
	shptr<class TextStyle> /*var-nullable*/ errorStyle();
	stdop<int64> /*var-nullable*/ errorMaxLines();
	stdop<FloatingLabelBehavior> /*var-nullable*/ floatingLabelBehavior();
	shptr<class FloatingLabelAlignment> /*var-nullable*/ floatingLabelAlignment();
	stdop<bool> /*var-nullable*/ isDense();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ contentPadding();
	bool /*var-non-null*/ isCollapsed();
	shptr<class Widget> /*var-nullable*/ prefixIcon();
	shptr<class BoxConstraints> /*var-nullable*/ prefixIconConstraints();
	shptr<class Widget> /*var-nullable*/ prefix();
	stdop<stdstr> /*var-nullable*/ prefixText();
	shptr<class TextStyle> /*var-nullable*/ prefixStyle();
	shptr<class Color> /*var-nullable*/ prefixIconColor();
	shptr<class Widget> /*var-nullable*/ suffixIcon();
	shptr<class Widget> /*var-nullable*/ suffix();
	stdop<stdstr> /*var-nullable*/ suffixText();
	shptr<class TextStyle> /*var-nullable*/ suffixStyle();
	shptr<class Color> /*var-nullable*/ suffixIconColor();
	shptr<class BoxConstraints> /*var-nullable*/ suffixIconConstraints();
	stdop<stdstr> /*var-nullable*/ counterText();
	shptr<class Widget> /*var-nullable*/ counter();
	shptr<class TextStyle> /*var-nullable*/ counterStyle();
	stdop<bool> /*var-nullable*/ filled();
	shptr<class Color> /*var-nullable*/ fillColor();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	shptr<class InputBorder> /*var-nullable*/ errorBorder();
	shptr<class InputBorder> /*var-nullable*/ focusedBorder();
	shptr<class InputBorder> /*var-nullable*/ focusedErrorBorder();
	shptr<class InputBorder> /*var-nullable*/ disabledBorder();
	shptr<class InputBorder> /*var-nullable*/ enabledBorder();
	shptr<class InputBorder> /*var-nullable*/ border();
	bool /*var-non-null*/ enabled();
	stdop<stdstr> /*var-nullable*/ semanticCounterText();
	stdop<bool> /*var-nullable*/ alignLabelWithHint();
	shptr<class BoxConstraints> /*var-nullable*/ constraints();
	struct _copyWith
	{
		/*nullable*/ shptr<class Widget> icon;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class Widget> label;
		/*nullable*/ stdop<stdstr> labelText;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class TextStyle> floatingLabelStyle;
		/*nullable*/ stdop<stdstr> helperText;
		/*nullable*/ shptr<class TextStyle> helperStyle;
		/*nullable*/ stdop<int64> helperMaxLines;
		/*nullable*/ stdop<stdstr> hintText;
		/*nullable*/ shptr<class TextStyle> hintStyle;
		/*nullable*/ stdop<TextDirection> hintTextDirection;
		/*nullable*/ stdop<int64> hintMaxLines;
		/*nullable*/ shptr<class Widget> error;
		/*nullable*/ stdop<stdstr> errorText;
		/*nullable*/ shptr<class TextStyle> errorStyle;
		/*nullable*/ stdop<int64> errorMaxLines;
		/*nullable*/ stdop<FloatingLabelBehavior> floatingLabelBehavior;
		/*nullable*/ shptr<class FloatingLabelAlignment> floatingLabelAlignment;
		/*nullable*/ stdop<bool> isCollapsed;
		/*nullable*/ stdop<bool> isDense;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*nullable*/ shptr<class Widget> prefixIcon;
		/*nullable*/ shptr<class Widget> prefix;
		/*nullable*/ stdop<stdstr> prefixText;
		/*nullable*/ shptr<class BoxConstraints> prefixIconConstraints;
		/*nullable*/ shptr<class TextStyle> prefixStyle;
		/*nullable*/ shptr<class Color> prefixIconColor;
		/*nullable*/ shptr<class Widget> suffixIcon;
		/*nullable*/ shptr<class Widget> suffix;
		/*nullable*/ stdop<stdstr> suffixText;
		/*nullable*/ shptr<class TextStyle> suffixStyle;
		/*nullable*/ shptr<class Color> suffixIconColor;
		/*nullable*/ shptr<class BoxConstraints> suffixIconConstraints;
		/*nullable*/ shptr<class Widget> counter;
		/*nullable*/ stdop<stdstr> counterText;
		/*nullable*/ shptr<class TextStyle> counterStyle;
		/*nullable*/ stdop<bool> filled;
		/*nullable*/ shptr<class Color> fillColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class InputBorder> errorBorder;
		/*nullable*/ shptr<class InputBorder> focusedBorder;
		/*nullable*/ shptr<class InputBorder> focusedErrorBorder;
		/*nullable*/ shptr<class InputBorder> disabledBorder;
		/*nullable*/ shptr<class InputBorder> enabledBorder;
		/*nullable*/ shptr<class InputBorder> border;
		/*nullable*/ stdop<bool> enabled;
		/*nullable*/ stdop<stdstr> semanticCounterText;
		/*nullable*/ stdop<bool> alignLabelWithHint;
		/*nullable*/ shptr<class BoxConstraints> constraints;
	};
	shptr<class InputDecoration> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class InputDecoration> /*non-null*/ applyDefaults(/*non-null*/ shptr<class InputDecorationTheme> theme);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Widget> icon;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class Widget> label;
		/*nullable*/ stdop<stdstr> labelText;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class TextStyle> floatingLabelStyle;
		/*nullable*/ stdop<stdstr> helperText;
		/*nullable*/ shptr<class TextStyle> helperStyle;
		/*nullable*/ stdop<int64> helperMaxLines;
		/*nullable*/ stdop<stdstr> hintText;
		/*nullable*/ shptr<class TextStyle> hintStyle;
		/*nullable*/ stdop<TextDirection> hintTextDirection;
		/*nullable*/ stdop<int64> hintMaxLines;
		/*nullable*/ shptr<class Widget> error;
		/*nullable*/ stdop<stdstr> errorText;
		/*nullable*/ shptr<class TextStyle> errorStyle;
		/*nullable*/ stdop<int64> errorMaxLines;
		/*nullable*/ stdop<FloatingLabelBehavior> floatingLabelBehavior;
		/*nullable*/ shptr<class FloatingLabelAlignment> floatingLabelAlignment;
		/*non-null*/ bool isCollapsed = false;
		/*nullable*/ stdop<bool> isDense;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*nullable*/ shptr<class Widget> prefixIcon;
		/*nullable*/ shptr<class BoxConstraints> prefixIconConstraints;
		/*nullable*/ shptr<class Widget> prefix;
		/*nullable*/ stdop<stdstr> prefixText;
		/*nullable*/ shptr<class TextStyle> prefixStyle;
		/*nullable*/ shptr<class Color> prefixIconColor;
		/*nullable*/ shptr<class Widget> suffixIcon;
		/*nullable*/ shptr<class Widget> suffix;
		/*nullable*/ stdop<stdstr> suffixText;
		/*nullable*/ shptr<class TextStyle> suffixStyle;
		/*nullable*/ shptr<class Color> suffixIconColor;
		/*nullable*/ shptr<class BoxConstraints> suffixIconConstraints;
		/*nullable*/ shptr<class Widget> counter;
		/*nullable*/ stdop<stdstr> counterText;
		/*nullable*/ shptr<class TextStyle> counterStyle;
		/*nullable*/ stdop<bool> filled;
		/*nullable*/ shptr<class Color> fillColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class InputBorder> errorBorder;
		/*nullable*/ shptr<class InputBorder> focusedBorder;
		/*nullable*/ shptr<class InputBorder> focusedErrorBorder;
		/*nullable*/ shptr<class InputBorder> disabledBorder;
		/*nullable*/ shptr<class InputBorder> enabledBorder;
		/*nullable*/ shptr<class InputBorder> border;
		/*non-null*/ bool enabled = true;
		/*nullable*/ stdop<stdstr> semanticCounterText;
		/*nullable*/ stdop<bool> alignLabelWithHint;
		/*nullable*/ shptr<class BoxConstraints> constraints;
	};
	static shptr<class InputDecoration> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _collapsed
	{
		/*nullable*/ stdop<stdstr> hintText;
		/*nullable*/ stdop<FloatingLabelBehavior> floatingLabelBehavior;
		/*nullable*/ shptr<class FloatingLabelAlignment> floatingLabelAlignment;
		/*nullable*/ shptr<class TextStyle> hintStyle;
		/*nullable*/ stdop<TextDirection> hintTextDirection;
		/*nullable*/ stdop<bool> filled = false;
		/*nullable*/ shptr<class Color> fillColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class InputBorder> border = InputBorder::none();
		/*non-null*/ bool enabled = true;
	};
	static shptr<class InputDecoration> /*non-null*/ collapsed(_collapsed p = {});
};

inline shptr<class InputDecoration> InputDecoration(InputDecoration::_ctorMain p = {}) {
	return InputDecoration::ctorMain(p);
}

class TextField : public StatefulWidget
{
public:
	shptr<class TextMagnifierConfiguration> /*var-nullable*/ magnifierConfiguration();
	shptr<class TextEditingController> /*var-nullable*/ controller();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	shptr<class InputDecoration> /*var-nullable*/ decoration();
	shptr<class TextInputType> /*var-non-null*/ keyboardType();
	stdop<TextInputAction> /*var-nullable*/ textInputAction();
	TextCapitalization /*var-non-null*/ textCapitalization();
	shptr<class TextStyle> /*var-nullable*/ style();
	shptr<class StrutStyle> /*var-nullable*/ strutStyle();
	TextAlign /*var-non-null*/ textAlign();
	shptr<class TextAlignVertical> /*var-nullable*/ textAlignVertical();
	stdop<TextDirection> /*var-nullable*/ textDirection();
	bool /*var-non-null*/ autofocus();
	stdstr /*var-non-null*/ obscuringCharacter();
	bool /*var-non-null*/ obscureText();
	bool /*var-non-null*/ autocorrect();
	SmartDashesType /*var-non-null*/ smartDashesType();
	SmartQuotesType /*var-non-null*/ smartQuotesType();
	bool /*var-non-null*/ enableSuggestions();
	stdop<int64> /*var-nullable*/ maxLines();
	stdop<int64> /*var-nullable*/ minLines();
	bool /*var-non-null*/ expands();
	bool /*var-non-null*/ readOnly();
	shptr<class ToolbarOptions> /*var-nullable*/ toolbarOptions();
	stdop<bool> /*var-nullable*/ showCursor();
	static int64 /*var-non-null*/ noMaxLength();
	stdop<int64> /*var-nullable*/ maxLength();
	stdop<MaxLengthEnforcement> /*var-nullable*/ maxLengthEnforcement();
	stdop<bool> /*var-nullable*/ enabled();
	double /*var-non-null*/ cursorWidth();
	stdop<double> /*var-nullable*/ cursorHeight();
	shptr<class Radius> /*var-nullable*/ cursorRadius();
	stdop<bool> /*var-nullable*/ cursorOpacityAnimates();
	shptr<class Color> /*var-nullable*/ cursorColor();
	BoxHeightStyle /*var-non-null*/ selectionHeightStyle();
	BoxWidthStyle /*var-non-null*/ selectionWidthStyle();
	stdop<Brightness> /*var-nullable*/ keyboardAppearance();
	shptr<class EdgeInsets> /*var-non-null*/ scrollPadding();
	bool /*var-non-null*/ enableInteractiveSelection();
	shptr<class TextSelectionControls> /*var-nullable*/ selectionControls();
	DragStartBehavior /*var-non-null*/ dragStartBehavior();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	shptr<class ScrollPhysics> /*var-nullable*/ scrollPhysics();
	shptr<class ScrollController> /*var-nullable*/ scrollController();
	Clip /*var-non-null*/ clipBehavior();
	stdop<stdstr> /*var-nullable*/ restorationId();
	bool /*var-non-null*/ scribbleEnabled();
	bool /*var-non-null*/ enableIMEPersonalizedLearning();
	shptr<class ContentInsertionConfiguration> /*var-nullable*/ contentInsertionConfiguration();
	bool /*var-non-null*/ canRequestFocus();
	shptr<class UndoHistoryController> /*var-nullable*/ undoController();
	shptr<class SpellCheckConfiguration> /*var-nullable*/ spellCheckConfiguration();
	static shptr<class TextStyle> /*var-non-null*/ materialMisspelledTextStyle();
	bool /*get-non-null*/ selectionEnabled();
	static shptr<class Widget> /*non-null*/ defaultSpellCheckSuggestionsToolbarBuilder(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class EditableTextState> editableTextState);
	static shptr<class SpellCheckConfiguration> /*non-null*/ inferAndroidSpellCheckConfiguration(/*nullable*/ shptr<class SpellCheckConfiguration> configuration);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class TextEditingController> controller;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ shptr<class UndoHistoryController> undoController;
		/*nullable*/ shptr<class InputDecoration> decoration = InputDecoration();
		/*nullable*/ shptr<class TextInputType> keyboardType;
		/*nullable*/ stdop<TextInputAction> textInputAction;
		/*non-null*/ TextCapitalization textCapitalization = TextCapitalization_none;
		/*nullable*/ shptr<class TextStyle> style;
		/*nullable*/ shptr<class StrutStyle> strutStyle;
		/*non-null*/ TextAlign textAlign = TextAlign_start;
		/*nullable*/ shptr<class TextAlignVertical> textAlignVertical;
		/*nullable*/ stdop<TextDirection> textDirection;
		/*non-null*/ bool readOnly = false;
		/*nullable*/ shptr<class ToolbarOptions> toolbarOptions;
		/*nullable*/ stdop<bool> showCursor;
		/*non-null*/ bool autofocus = false;
		/*non-null*/ stdstr obscuringCharacter = "*";
		/*non-null*/ bool obscureText = false;
		/*non-null*/ bool autocorrect = true;
		/*nullable*/ stdop<SmartDashesType> smartDashesType;
		/*nullable*/ stdop<SmartQuotesType> smartQuotesType;
		/*non-null*/ bool enableSuggestions = true;
		/*nullable*/ stdop<int64> maxLines = 1;
		/*nullable*/ stdop<int64> minLines;
		/*non-null*/ bool expands = false;
		/*nullable*/ stdop<int64> maxLength;
		/*nullable*/ stdop<MaxLengthEnforcement> maxLengthEnforcement;
		/*nullable*/ stdfunc<void(stdstr)> /*(String) -> void*/ onChanged;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEditingComplete;
		/*nullable*/ stdfunc<void(stdstr)> /*(String) -> void*/ onSubmitted;
//		/*nullable*/ stdfunc<void(stdstr, shptr<class Map<stdstr, shptr<class ObjBase>>>)> /*(String, Map) -> void*/ onAppPrivateCommand;
		/*nullable*/ stdop<stdvec<shptr<class TextInputFormatter>>> inputFormatters;
		/*nullable*/ stdop<bool> enabled;
		/*non-null*/ double cursorWidth = 2.0;
		/*nullable*/ stdop<double> cursorHeight;
		/*nullable*/ shptr<class Radius> cursorRadius;
		/*nullable*/ stdop<bool> cursorOpacityAnimates;
		/*nullable*/ shptr<class Color> cursorColor;
		/*non-null*/ BoxHeightStyle selectionHeightStyle = BoxHeightStyle_tight;
		/*non-null*/ BoxWidthStyle selectionWidthStyle = BoxWidthStyle_tight;
		/*nullable*/ stdop<Brightness> keyboardAppearance;
		/*non-null*/ shptr<class EdgeInsets> scrollPadding = EdgeInsets::all(20.0);
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*nullable*/ stdop<bool> enableInteractiveSelection;
		/*nullable*/ shptr<class TextSelectionControls> selectionControls;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTap;
		/*nullable*/ stdfunc<void(shptr<class PointerDownEvent>)> /*(PointerDownEvent) -> void*/ onTapOutside;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64, bool, int64)> /*(BuildContext, {currentLength: int, isFocused: bool, maxLength: int}) -> Widget*/ buildCounter;
		/*nullable*/ shptr<class ScrollController> scrollController;
		/*nullable*/ shptr<class ScrollPhysics> scrollPhysics;
		/*nullable*/ stdop<stdvec<stdstr>> autofillHints;
		/*nullable*/ shptr<class ContentInsertionConfiguration> contentInsertionConfiguration;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ bool scribbleEnabled = true;
		/*non-null*/ bool enableIMEPersonalizedLearning = true;
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class EditableTextState>)> /*(BuildContext, EditableTextState) -> Widget*/ contextMenuBuilder;
		/*non-null*/ bool canRequestFocus = true;
		/*nullable*/ shptr<class SpellCheckConfiguration> spellCheckConfiguration;
		/*nullable*/ shptr<class TextMagnifierConfiguration> magnifierConfiguration;
	};
	static shptr<class TextField> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TextField> TextField(TextField::_ctorMain p = {}) {
	return TextField::ctorMain(p);
}

class FloatingActionButtonLocation : public ObjBase
{
public:
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ startTop();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ miniStartTop();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ centerTop();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ miniCenterTop();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ endTop();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ miniEndTop();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ startFloat();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ miniStartFloat();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ centerFloat();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ miniCenterFloat();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ endFloat();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ miniEndFloat();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ startDocked();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ miniStartDocked();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ centerDocked();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ miniCenterDocked();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ endDocked();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ miniEndDocked();
	static shptr<class FloatingActionButtonLocation> /*var-non-null*/ endContained();
};

class FloatingActionButton : public StatelessWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	stdop<stdstr> /*var-nullable*/ tooltip();
	shptr<class Color> /*var-nullable*/ foregroundColor();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	shptr<class Color> /*var-nullable*/ splashColor();
	shptr<class ObjBase> /*var-nullable*/ heroTag();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	stdop<double> /*var-nullable*/ elevation();
	stdop<double> /*var-nullable*/ focusElevation();
	stdop<double> /*var-nullable*/ hoverElevation();
	stdop<double> /*var-nullable*/ highlightElevation();
	stdop<double> /*var-nullable*/ disabledElevation();
	bool /*var-non-null*/ mini();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	Clip /*var-non-null*/ clipBehavior();
	bool /*var-non-null*/ isExtended();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	stdop<bool> /*var-nullable*/ enableFeedback();
	stdop<double> /*var-nullable*/ extendedIconLabelSpacing();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ extendedPadding();
	shptr<class TextStyle> /*var-nullable*/ extendedTextStyle();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> splashColor;
//		/*nullable*/ shptr<class ObjBase> heroTag = <default FloatingActionButton tag>;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> focusElevation;
		/*nullable*/ stdop<double> hoverElevation;
		/*nullable*/ stdop<double> highlightElevation;
		/*nullable*/ stdop<double> disabledElevation;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*non-null*/ bool mini = false;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*non-null*/ bool isExtended = false;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class FloatingActionButton> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _small
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> splashColor;
//		/*nullable*/ shptr<class ObjBase> heroTag = <default FloatingActionButton tag>;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> focusElevation;
		/*nullable*/ stdop<double> hoverElevation;
		/*nullable*/ stdop<double> highlightElevation;
		/*nullable*/ stdop<double> disabledElevation;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class FloatingActionButton> /*non-null*/ small_(_small p = {});
	struct _large
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> splashColor;
//		/*nullable*/ shptr<class ObjBase> heroTag = <default FloatingActionButton tag>;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> focusElevation;
		/*nullable*/ stdop<double> hoverElevation;
		/*nullable*/ stdop<double> highlightElevation;
		/*nullable*/ stdop<double> disabledElevation;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class FloatingActionButton> /*non-null*/ large(_large p = {});
	struct _extended
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
//		/*nullable*/ shptr<class ObjBase> heroTag = <default FloatingActionButton tag>;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> focusElevation;
		/*nullable*/ stdop<double> hoverElevation;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ stdop<double> highlightElevation;
		/*nullable*/ stdop<double> disabledElevation;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ bool isExtended = true;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<double> extendedIconLabelSpacing;
		/*nullable*/ shptr<class EdgeInsetsGeometry> extendedPadding;
		/*nullable*/ shptr<class TextStyle> extendedTextStyle;
		/*nullable*/ shptr<class Widget> icon;
		/*non-null*/ shptr<class Widget> label;
		/*nullable*/ stdop<bool> enableFeedback;
	};
	static shptr<class FloatingActionButton> /*non-null*/ extended(_extended p = {});
};

inline shptr<class FloatingActionButton> FloatingActionButton(FloatingActionButton::_ctorMain p = {}) {
	return FloatingActionButton::ctorMain(p);
}

class IconButton : public StatelessWidget
{
public:
	stdop<double> /*var-nullable*/ iconSize();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class AlignmentGeometry> /*var-nullable*/ alignment();
	stdop<double> /*var-nullable*/ splashRadius();
	shptr<class Widget> /*var-non-null*/ icon();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Color> /*var-nullable*/ splashColor();
	shptr<class Color> /*var-nullable*/ highlightColor();
	shptr<class Color> /*var-nullable*/ disabledColor();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	stdop<stdstr> /*var-nullable*/ tooltip();
	stdop<bool> /*var-nullable*/ enableFeedback();
	shptr<class BoxConstraints> /*var-nullable*/ constraints();
	shptr<class ButtonStyle> /*var-nullable*/ style();
	stdop<bool> /*var-nullable*/ isSelected();
	shptr<class Widget> /*var-nullable*/ selectedIcon();
	struct _styleFrom
	{
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> disabledForegroundColor;
		/*nullable*/ shptr<class Color> disabledBackgroundColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Size> minimumSize;
		/*nullable*/ shptr<class Size> fixedSize;
		/*nullable*/ shptr<class Size> maximumSize;
		/*nullable*/ stdop<double> iconSize;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class MouseCursor> enabledMouseCursor;
		/*nullable*/ shptr<class MouseCursor> disabledMouseCursor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> tapTargetSize;
		/*nullable*/ shptr<class Duration> animationDuration;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
	};
	static shptr<class ButtonStyle> /*non-null*/ styleFrom(_styleFrom p = {});
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> iconSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class BoxConstraints> constraints;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ stdop<bool> isSelected;
		/*nullable*/ shptr<class Widget> selectedIcon;
		/*non-null*/ shptr<class Widget> icon;
	};
	static shptr<class IconButton> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _filled
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> iconSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class BoxConstraints> constraints;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ stdop<bool> isSelected;
		/*nullable*/ shptr<class Widget> selectedIcon;
		/*non-null*/ shptr<class Widget> icon;
	};
	static shptr<class IconButton> /*non-null*/ filled(_filled p = {});
	struct _filledTonal
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> iconSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class BoxConstraints> constraints;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ stdop<bool> isSelected;
		/*nullable*/ shptr<class Widget> selectedIcon;
		/*non-null*/ shptr<class Widget> icon;
	};
	static shptr<class IconButton> /*non-null*/ filledTonal(_filledTonal p = {});
	struct _outlined
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> iconSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class BoxConstraints> constraints;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ stdop<bool> isSelected;
		/*nullable*/ shptr<class Widget> selectedIcon;
		/*non-null*/ shptr<class Widget> icon;
	};
	static shptr<class IconButton> /*non-null*/ outlined(_outlined p = {});
};

inline shptr<class IconButton> IconButton(IconButton::_ctorMain p = {}) {
	return IconButton::ctorMain(p);
}

class InkResponse : public StatelessWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	bool /*var-non-null*/ containedInkWell();
	BoxShape /*var-non-null*/ highlightShape();
	stdop<double> /*var-nullable*/ radius();
	shptr<class BorderRadius> /*var-nullable*/ borderRadius();
	shptr<class ShapeBorder> /*var-nullable*/ customBorder();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	shptr<class Color> /*var-nullable*/ highlightColor();
	shptr<class Color> /*var-nullable*/ splashColor();
	shptr<class InteractiveInkFeatureFactory> /*var-nullable*/ splashFactory();
	bool /*var-non-null*/ enableFeedback();
	bool /*var-non-null*/ excludeFromSemantics();
	bool /*var-non-null*/ autofocus();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ canRequestFocus();
	shptr<class MaterialStatesController> /*var-nullable*/ statesController();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTap;
		/*nullable*/ stdfunc<void(shptr<class TapDownDetails>)> /*(TapDownDetails) -> void*/ onTapDown;
		/*nullable*/ stdfunc<void(shptr<class TapUpDetails>)> /*(TapUpDetails) -> void*/ onTapUp;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTapCancel;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onDoubleTap;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onSecondaryTap;
		/*nullable*/ stdfunc<void(shptr<class TapUpDetails>)> /*(TapUpDetails) -> void*/ onSecondaryTapUp;
		/*nullable*/ stdfunc<void(shptr<class TapDownDetails>)> /*(TapDownDetails) -> void*/ onSecondaryTapDown;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onSecondaryTapCancel;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHighlightChanged;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHover;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*non-null*/ bool containedInkWell = false;
		/*non-null*/ BoxShape highlightShape = BoxShape_circle;
		/*nullable*/ stdop<double> radius;
		/*nullable*/ shptr<class BorderRadius> borderRadius;
		/*nullable*/ shptr<class ShapeBorder> customBorder;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*non-null*/ bool enableFeedback = true;
		/*non-null*/ bool excludeFromSemantics = false;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool canRequestFocus = true;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class InkResponse> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class InkResponse> InkResponse(InkResponse::_ctorMain p = {}) {
	return InkResponse::ctorMain(p);
}

class InkWell : public InkResponse
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTap;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onDoubleTap;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(shptr<class TapDownDetails>)> /*(TapDownDetails) -> void*/ onTapDown;
		/*nullable*/ stdfunc<void(shptr<class TapUpDetails>)> /*(TapUpDetails) -> void*/ onTapUp;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTapCancel;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onSecondaryTap;
		/*nullable*/ stdfunc<void(shptr<class TapUpDetails>)> /*(TapUpDetails) -> void*/ onSecondaryTapUp;
		/*nullable*/ stdfunc<void(shptr<class TapDownDetails>)> /*(TapDownDetails) -> void*/ onSecondaryTapDown;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onSecondaryTapCancel;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHighlightChanged;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHover;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*nullable*/ stdop<double> radius;
		/*nullable*/ shptr<class BorderRadius> borderRadius;
		/*nullable*/ shptr<class ShapeBorder> customBorder;
		/*nullable*/ stdop<bool> enableFeedback = true;
		/*non-null*/ bool excludeFromSemantics = false;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool canRequestFocus = true;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class InkWell> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class InkWell> InkWell(InkWell::_ctorMain p = {}) {
	return InkWell::ctorMain(p);
}

class Ink : public StatefulWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class Decoration> /*var-nullable*/ decoration();
	stdop<double> /*var-nullable*/ width();
	stdop<double> /*var-nullable*/ height();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Decoration> decoration;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Ink> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _image
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*non-null*/ shptr<class ImageProvider> image;
		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class ObjBase>)> /*(ObjBase, StackTrace) -> void*/ onImageError;
		/*nullable*/ shptr<class ColorFilter> colorFilter;
		/*nullable*/ stdop<BoxFit> fit;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*nullable*/ shptr<class Rect> centerSlice;
		/*non-null*/ ImageRepeat repeat = ImageRepeat_noRepeat;
		/*non-null*/ bool matchTextDirection = false;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Ink> /*non-null*/ image(_image p = {});
};

inline shptr<class Ink> Ink(Ink::_ctorMain p = {}) {
	return Ink::ctorMain(p);
}

class ButtonStyle : public ObjBase
{
public:
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	stdop<MaterialTapTargetSize> /*var-nullable*/ tapTargetSize();
	shptr<class Duration> /*var-nullable*/ animationDuration();
	stdop<bool> /*var-nullable*/ enableFeedback();
	shptr<class AlignmentGeometry> /*var-nullable*/ alignment();
	shptr<class InteractiveInkFeatureFactory> /*var-nullable*/ splashFactory();
	struct _copyWith
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> textStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> backgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> foregroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> shadowColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> surfaceTintColor;
		/*nullable*/ shptr<class MaterialStateProperty<double>> elevation;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class EdgeInsetsGeometry>>> padding;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> minimumSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> fixedSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> maximumSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> iconColor;
		/*nullable*/ shptr<class MaterialStateProperty<double>> iconSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class BorderSide>>> side;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class OutlinedBorder>>> shape;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> tapTargetSize;
		/*nullable*/ shptr<class Duration> animationDuration;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
	};
	shptr<class ButtonStyle> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class ButtonStyle> /*non-null*/ merge(/*nullable*/ shptr<class ButtonStyle> style);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	static shptr<class ButtonStyle> /*nullable*/ lerp(/*nullable*/ shptr<class ButtonStyle> a, /*nullable*/ shptr<class ButtonStyle> b, /*non-null*/ double t);
	struct _ctorMain
	{
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> textStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> backgroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> foregroundColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> shadowColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> surfaceTintColor;
		/*nullable*/ shptr<class MaterialStateProperty<double>> elevation;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class EdgeInsetsGeometry>>> padding;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> minimumSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> fixedSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Size>>> maximumSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> iconColor;
		/*nullable*/ shptr<class MaterialStateProperty<double>> iconSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class BorderSide>>> side;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class OutlinedBorder>>> shape;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> tapTargetSize;
		/*nullable*/ shptr<class Duration> animationDuration;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
	};
	static shptr<class ButtonStyle> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ButtonStyle> ButtonStyle(ButtonStyle::_ctorMain p = {}) {
	return ButtonStyle::ctorMain(p);
}

class TextButton : public ButtonStyleButton
{
public:
	struct _styleFrom
	{
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> disabledForegroundColor;
		/*nullable*/ shptr<class Color> disabledBackgroundColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class Color> disabledIconColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Size> minimumSize;
		/*nullable*/ shptr<class Size> fixedSize;
		/*nullable*/ shptr<class Size> maximumSize;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class MouseCursor> enabledMouseCursor;
		/*nullable*/ shptr<class MouseCursor> disabledMouseCursor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> tapTargetSize;
		/*nullable*/ shptr<class Duration> animationDuration;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*nullable*/ shptr<class Color> primary;
		/*nullable*/ shptr<class Color> onSurface;
	};
	static shptr<class ButtonStyle> /*non-null*/ styleFrom(_styleFrom p = {});
	shptr<class ButtonStyle> /*non-null*/ defaultStyleOf(/*non-null*/ shptr<class BuildContext> context);
	shptr<class ButtonStyle> /*nullable*/ themeStyleOf(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHover;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*nullable*/ stdop<bool> isSemanticButton = true;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class TextButton> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _icon
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHover;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdop<bool> autofocus;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*non-null*/ shptr<class Widget> icon;
		/*non-null*/ shptr<class Widget> label;
	};
	static shptr<class TextButton> /*non-null*/ icon(_icon p = {});
};

inline shptr<class TextButton> TextButton(TextButton::_ctorMain p = {}) {
	return TextButton::ctorMain(p);
}

class Material : public StatefulWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	MaterialType /*var-non-null*/ type();
	double /*var-non-null*/ elevation();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class TextStyle> /*var-nullable*/ textStyle();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	bool /*var-non-null*/ borderOnForeground();
	Clip /*var-non-null*/ clipBehavior();
	shptr<class Duration> /*var-non-null*/ animationDuration();
	shptr<class BorderRadiusGeometry> /*var-nullable*/ borderRadius();
	static double /*var-non-null*/ defaultSplashRadius();
	static shptr<class MaterialInkController> /*nullable*/ maybeOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class MaterialInkController> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ MaterialType type = MaterialType_canvas;
		/*non-null*/ double elevation = 0.0;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class BorderRadiusGeometry> borderRadius;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ bool borderOnForeground = true;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*non-null*/ shptr<class Duration> animationDuration = Duration({ .milliseconds = 200 });
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Material> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Material> Material(Material::_ctorMain p = {}) {
	return Material::ctorMain(p);
}

class MaterialButton : public StatelessWidget
{
public:
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	stdop<ButtonTextTheme> /*var-nullable*/ textTheme();
	shptr<class Color> /*var-nullable*/ textColor();
	shptr<class Color> /*var-nullable*/ disabledTextColor();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Color> /*var-nullable*/ disabledColor();
	shptr<class Color> /*var-nullable*/ splashColor();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	shptr<class Color> /*var-nullable*/ highlightColor();
	stdop<double> /*var-nullable*/ elevation();
	stdop<double> /*var-nullable*/ hoverElevation();
	stdop<double> /*var-nullable*/ focusElevation();
	stdop<double> /*var-nullable*/ highlightElevation();
	stdop<double> /*var-nullable*/ disabledElevation();
	stdop<Brightness> /*var-nullable*/ colorBrightness();
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	Clip /*var-non-null*/ clipBehavior();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	shptr<class Duration> /*var-nullable*/ animationDuration();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	stdop<double> /*var-nullable*/ minWidth();
	stdop<double> /*var-nullable*/ height();
	bool /*var-non-null*/ enableFeedback();
	bool /*get-non-null*/ enabled();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHighlightChanged;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ stdop<ButtonTextTheme> textTheme;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ shptr<class Color> disabledTextColor;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> highlightColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ stdop<Brightness> colorBrightness;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ stdop<double> focusElevation;
		/*nullable*/ stdop<double> hoverElevation;
		/*nullable*/ stdop<double> highlightElevation;
		/*nullable*/ stdop<double> disabledElevation;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class Duration> animationDuration;
		/*nullable*/ stdop<double> minWidth;
		/*nullable*/ stdop<double> height;
		/*non-null*/ bool enableFeedback = true;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class MaterialButton> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MaterialButton> MaterialButton(MaterialButton::_ctorMain p = {}) {
	return MaterialButton::ctorMain(p);
}

class CircleAvatar : public StatelessWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ foregroundColor();
	stdop<double> /*var-nullable*/ radius();
	stdop<double> /*var-nullable*/ minRadius();
	stdop<double> /*var-nullable*/ maxRadius();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class ImageProvider> backgroundImage;
		/*nullable*/ shptr<class ImageProvider> foregroundImage;
		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class ObjBase>)> /*(ObjBase, ObjBase) -> void*/ onBackgroundImageError;
		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class ObjBase>)> /*(ObjBase, ObjBase) -> void*/ onForegroundImageError;
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ stdop<double> radius;
		/*nullable*/ stdop<double> minRadius;
		/*nullable*/ stdop<double> maxRadius;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class CircleAvatar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CircleAvatar> CircleAvatar(CircleAvatar::_ctorMain p = {}) {
	return CircleAvatar::ctorMain(p);
}

class Card : public StatelessWidget
{
public:
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	bool /*var-non-null*/ borderOnForeground();
	stdop<Clip> /*var-nullable*/ clipBehavior();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ margin();
	bool /*var-non-null*/ semanticContainer();
	shptr<class Widget> /*var-nullable*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*non-null*/ bool borderOnForeground = true;
		/*nullable*/ shptr<class EdgeInsetsGeometry> margin;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*non-null*/ bool semanticContainer = true;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Card> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Card> Card(Card::_ctorMain p = {}) {
	return Card::ctorMain(p);
}

class Checkbox : public StatefulWidget
{
public:
	stdop<bool> /*var-nullable*/ value();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	shptr<class Color> /*var-nullable*/ activeColor();
	shptr<class Color> /*var-nullable*/ checkColor();
	bool /*var-non-null*/ tristate();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	stdop<double> /*var-nullable*/ splashRadius();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	shptr<class OutlinedBorder> /*var-nullable*/ shape();
	shptr<class BorderSide> /*var-nullable*/ side();
	bool /*var-non-null*/ isError();
	stdop<stdstr> /*var-nullable*/ semanticLabel();
	static double /*var-non-null*/ width();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<bool> value;
		/*non-null*/ bool tristate = false;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onChanged;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class Color> checkColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class BorderSide> side;
		/*non-null*/ bool isError = false;
		/*nullable*/ stdop<stdstr> semanticLabel;
	};
	static shptr<class Checkbox> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _adaptive
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<bool> value;
		/*non-null*/ bool tristate = false;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onChanged;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class Color> checkColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class BorderSide> side;
		/*non-null*/ bool isError = false;
		/*nullable*/ stdop<stdstr> semanticLabel;
	};
	static shptr<class Checkbox> /*non-null*/ adaptive(_adaptive p = {});
};

inline shptr<class Checkbox> Checkbox(Checkbox::_ctorMain p = {}) {
	return Checkbox::ctorMain(p);
}

class Radio : public StatefulWidget
{
public:
	int64 /*var-non-null*/ value();
	stdop<int64> /*var-nullable*/ groupValue();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	bool /*var-non-null*/ toggleable();
	shptr<class Color> /*var-nullable*/ activeColor();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	stdop<double> /*var-nullable*/ splashRadius();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	bool /*var-non-null*/ useCupertinoCheckmarkStyle();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ int64 value;
		/*nullable*/ stdop<int64> groupValue;
		/*nullable*/ stdfunc<void(int64)> /*(dynamic) -> void*/ onChanged;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*non-null*/ bool toggleable = false;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
	};
	static shptr<class Radio> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _adaptive
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ int64 value;
		/*nullable*/ stdop<int64> groupValue;
		/*nullable*/ stdfunc<void(int64)> /*(dynamic) -> void*/ onChanged;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*non-null*/ bool toggleable = false;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*non-null*/ bool useCupertinoCheckmarkStyle = false;
	};
	static shptr<class Radio> /*non-null*/ adaptive(_adaptive p = {});
};

inline shptr<class Radio> Radio(Radio::_ctorMain p = {}) {
	return Radio::ctorMain(p);
}

class Slider : public StatefulWidget
{
public:
	double /*var-non-null*/ value();
	stdop<double> /*var-nullable*/ secondaryTrackValue();
	double /*var-non-null*/ minimal();
	double /*var-non-null*/ maximal();
	stdop<int64> /*var-nullable*/ divisions();
	stdop<stdstr> /*var-nullable*/ label();
	shptr<class Color> /*var-nullable*/ activeColor();
	shptr<class Color> /*var-nullable*/ inactiveColor();
	shptr<class Color> /*var-nullable*/ secondaryActiveColor();
	shptr<class Color> /*var-nullable*/ thumbColor();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	stdop<SliderInteraction> /*var-nullable*/ allowedInteraction();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double value;
		/*nullable*/ stdop<double> secondaryTrackValue;
		/*nullable*/ stdfunc<void(double)> /*(double) -> void*/ onChanged;
		/*nullable*/ stdfunc<void(double)> /*(double) -> void*/ onChangeStart;
		/*nullable*/ stdfunc<void(double)> /*(double) -> void*/ onChangeEnd;
		/*non-null*/ double min = 0.0;
		/*non-null*/ double max = 1.0;
		/*nullable*/ stdop<int64> divisions;
		/*nullable*/ stdop<stdstr> label;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class Color> inactiveColor;
		/*nullable*/ shptr<class Color> secondaryActiveColor;
		/*nullable*/ shptr<class Color> thumbColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
//		/*nullable*/ stdfunc<stdstr(double)> /*(double) -> String*/ semanticFormatterCallback;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<SliderInteraction> allowedInteraction;
	};
	static shptr<class Slider> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _adaptive
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double value;
		/*nullable*/ stdop<double> secondaryTrackValue;
		/*nullable*/ stdfunc<void(double)> /*(double) -> void*/ onChanged;
		/*nullable*/ stdfunc<void(double)> /*(double) -> void*/ onChangeStart;
		/*nullable*/ stdfunc<void(double)> /*(double) -> void*/ onChangeEnd;
		/*non-null*/ double min = 0.0;
		/*non-null*/ double max = 1.0;
		/*nullable*/ stdop<int64> divisions;
		/*nullable*/ stdop<stdstr> label;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class Color> inactiveColor;
		/*nullable*/ shptr<class Color> secondaryActiveColor;
		/*nullable*/ shptr<class Color> thumbColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
//		/*nullable*/ stdfunc<stdstr(double)> /*(double) -> String*/ semanticFormatterCallback;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<SliderInteraction> allowedInteraction;
	};
	static shptr<class Slider> /*non-null*/ adaptive(_adaptive p = {});
};

inline shptr<class Slider> Slider(Slider::_ctorMain p = {}) {
	return Slider::ctorMain(p);
}

class RangeValues : public ObjBase
{
public:
	double /*var-non-null*/ start();
	double /*var-non-null*/ end();
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	static shptr<class RangeValues> /*non-null*/ ctorMain(/*non-null*/ double start, /*non-null*/ double end);
};

inline shptr<class RangeValues> RangeValues(/*non-null*/ double start, /*non-null*/ double end) {
	return RangeValues::ctorMain(start, end);
}

class RangeLabels : public ObjBase
{
public:
	stdstr /*var-non-null*/ start();
	stdstr /*var-non-null*/ end();
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	static shptr<class RangeLabels> /*non-null*/ ctorMain(/*non-null*/ stdstr start, /*non-null*/ stdstr end);
};

inline shptr<class RangeLabels> RangeLabels(/*non-null*/ stdstr start, /*non-null*/ stdstr end) {
	return RangeLabels::ctorMain(start, end);
}

class RangeSlider : public StatefulWidget
{
public:
	shptr<class RangeValues> /*var-non-null*/ values();
	double /*var-non-null*/ minimal();
	double /*var-non-null*/ maximal();
	stdop<int64> /*var-nullable*/ divisions();
	shptr<class RangeLabels> /*var-nullable*/ labels();
	shptr<class Color> /*var-nullable*/ activeColor();
	shptr<class Color> /*var-nullable*/ inactiveColor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class RangeValues> values;
		/*nullable*/ stdfunc<void(shptr<class RangeValues>)> /*(RangeValues) -> void*/ onChanged;
		/*nullable*/ stdfunc<void(shptr<class RangeValues>)> /*(RangeValues) -> void*/ onChangeStart;
		/*nullable*/ stdfunc<void(shptr<class RangeValues>)> /*(RangeValues) -> void*/ onChangeEnd;
		/*non-null*/ double min = 0.0;
		/*non-null*/ double max = 1.0;
		/*nullable*/ stdop<int64> divisions;
		/*nullable*/ shptr<class RangeLabels> labels;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class Color> inactiveColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
//		/*nullable*/ stdfunc<stdstr(double)> /*(double) -> String*/ semanticFormatterCallback;
	};
	static shptr<class RangeSlider> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class RangeSlider> RangeSlider(RangeSlider::_ctorMain p = {}) {
	return RangeSlider::ctorMain(p);
}

class Switch : public StatelessWidget
{
public:
	bool /*var-non-null*/ value();
	shptr<class Color> /*var-nullable*/ activeColor();
	shptr<class Color> /*var-nullable*/ activeTrackColor();
	shptr<class Color> /*var-nullable*/ inactiveThumbColor();
	shptr<class Color> /*var-nullable*/ inactiveTrackColor();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	stdop<bool> /*var-nullable*/ applyCupertinoTheme();
	DragStartBehavior /*var-non-null*/ dragStartBehavior();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	stdop<double> /*var-nullable*/ splashRadius();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool value;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onChanged;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class Color> activeTrackColor;
		/*nullable*/ shptr<class Color> inactiveThumbColor;
		/*nullable*/ shptr<class Color> inactiveTrackColor;
		/*nullable*/ shptr<class ImageProvider> activeThumbImage;
//		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class StackTrace>)> /*(ObjBase, StackTrace) -> void*/ onActiveThumbImageError;
		/*nullable*/ shptr<class ImageProvider> inactiveThumbImage;
//		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class StackTrace>)> /*(ObjBase, StackTrace) -> void*/ onInactiveThumbImageError;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> thumbColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackOutlineColor;
		/*nullable*/ shptr<class MaterialStateProperty<double>> trackOutlineWidth;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Icon>>> thumbIcon;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*non-null*/ bool autofocus = false;
	};
	static shptr<class Switch> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _adaptive
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool value;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onChanged;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class Color> activeTrackColor;
		/*nullable*/ shptr<class Color> inactiveThumbColor;
		/*nullable*/ shptr<class Color> inactiveTrackColor;
		/*nullable*/ shptr<class ImageProvider> activeThumbImage;
//		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class StackTrace>)> /*(ObjBase, StackTrace) -> void*/ onActiveThumbImageError;
		/*nullable*/ shptr<class ImageProvider> inactiveThumbImage;
//		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class StackTrace>)> /*(ObjBase, StackTrace) -> void*/ onInactiveThumbImageError;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> thumbColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackOutlineColor;
		/*nullable*/ shptr<class MaterialStateProperty<double>> trackOutlineWidth;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Icon>>> thumbIcon;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<bool> applyCupertinoTheme;
	};
	static shptr<class Switch> /*non-null*/ adaptive(_adaptive p = {});
};

inline shptr<class Switch> Switch(Switch::_ctorMain p = {}) {
	return Switch::ctorMain(p);
}

class ExpansionTileController : public ObjBase
{
public:
	bool /*get-non-null*/ isExpanded();
	void expand();
	void collapse();
	static shptr<class ExpansionTileController> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class ExpansionTileController> /*nullable*/ maybeOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class ExpansionTileController> /*non-null*/ ctorMain();
};

inline shptr<class ExpansionTileController> ExpansionTileController() {
	return ExpansionTileController::ctorMain();
}

class ExpansionTile : public StatefulWidget
{
public:
	shptr<class Widget> /*var-nullable*/ leading();
	shptr<class Widget> /*var-non-null*/ title();
	shptr<class Widget> /*var-nullable*/ subtitle();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ collapsedBackgroundColor();
	shptr<class Widget> /*var-nullable*/ trailing();
	bool /*var-non-null*/ initiallyExpanded();
	bool /*var-non-null*/ maintainState();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ tilePadding();
	shptr<class Alignment> /*var-nullable*/ expandedAlignment();
	stdop<CrossAxisAlignment> /*var-nullable*/ expandedCrossAxisAlignment();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ childrenPadding();
	shptr<class Color> /*var-nullable*/ iconColor();
	shptr<class Color> /*var-nullable*/ collapsedIconColor();
	shptr<class Color> /*var-nullable*/ textColor();
	shptr<class Color> /*var-nullable*/ collapsedTextColor();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class ShapeBorder> /*var-nullable*/ collapsedShape();
	stdop<Clip> /*var-nullable*/ clipBehavior();
	stdop<ListTileControlAffinity> /*var-nullable*/ controlAffinity();
	shptr<class ExpansionTileController> /*var-nullable*/ controller();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> leading;
		/*non-null*/ shptr<class Widget> title;
		/*nullable*/ shptr<class Widget> subtitle;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onExpansionChanged;
		/*nullable*/ shptr<class Widget> trailing;
		/*non-null*/ bool initiallyExpanded = false;
		/*non-null*/ bool maintainState = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> tilePadding;
		/*nullable*/ stdop<CrossAxisAlignment> expandedCrossAxisAlignment;
		/*nullable*/ shptr<class Alignment> expandedAlignment;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> collapsedBackgroundColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ shptr<class Color> collapsedTextColor;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class Color> collapsedIconColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class ShapeBorder> collapsedShape;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ stdop<ListTileControlAffinity> controlAffinity;
		/*nullable*/ shptr<class ExpansionTileController> controller;
		/*non-null*/ stdvec<shptr<class Widget>> children;
		/*nullable*/ shptr<class EdgeInsetsGeometry> childrenPadding;
	};
	static shptr<class ExpansionTile> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ExpansionTile> ExpansionTile(ExpansionTile::_ctorMain p = {}) {
	return ExpansionTile::ctorMain(p);
}

class ExpansionPanel : public ObjBase
{
public:
	shptr<class Widget> /*var-non-null*/ body();
	bool /*var-non-null*/ isExpanded();
	bool /*var-non-null*/ canTapOnHeader();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	struct _ctorMain
	{
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, bool)> /*(BuildContext, bool) -> Widget*/ headerBuilder;
		/*non-null*/ shptr<class Widget> body;
		/*non-null*/ bool isExpanded = false;
		/*non-null*/ bool canTapOnHeader = false;
		/*nullable*/ shptr<class Color> backgroundColor;
	};
	static shptr<class ExpansionPanel> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ExpansionPanel> ExpansionPanel(ExpansionPanel::_ctorMain p = {}) {
	return ExpansionPanel::ctorMain(p);
}

class ExpansionPanelRadio : public ExpansionPanel
{
public:
	int64 /*var-non-null*/ value();
	struct _ctorMain
	{
		/*non-null*/ int64 value;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, bool)> /*(BuildContext, bool) -> Widget*/ headerBuilder;
		/*non-null*/ shptr<class Widget> body;
		/*non-null*/ bool canTapOnHeader = false;
		/*nullable*/ shptr<class Color> backgroundColor;
	};
	static shptr<class ExpansionPanelRadio> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ExpansionPanelRadio> ExpansionPanelRadio(ExpansionPanelRadio::_ctorMain p = {}) {
	return ExpansionPanelRadio::ctorMain(p);
}

class ExpansionPanelList : public StatefulWidget
{
public:
	shptr<class Duration> /*var-non-null*/ animationDuration();
	stdop<int64> /*var-nullable*/ initialOpenPanelValue();
	shptr<class EdgeInsets> /*var-non-null*/ expandedHeaderPadding();
	shptr<class Color> /*var-nullable*/ dividerColor();
	double /*var-non-null*/ elevation();
	shptr<class Color> /*var-nullable*/ expandIconColor();
	double /*var-non-null*/ materialGapSize();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void(int64, bool)> /*(int, bool) -> void*/ expansionCallback;
		/*non-null*/ shptr<class Duration> animationDuration = Duration({ .milliseconds = 200 });
		/*non-null*/ shptr<class EdgeInsets> expandedHeaderPadding = EdgeInsets::symmetric({ .vertical = 16.0 });
		/*nullable*/ shptr<class Color> dividerColor;
		/*non-null*/ double elevation = 2.0;
		/*nullable*/ shptr<class Color> expandIconColor;
		/*non-null*/ double materialGapSize = 16.0;
		/*non-null*/ stdvec<shptr<class ExpansionPanel>> children;
	};
	static shptr<class ExpansionPanelList> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _radio
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void(int64, bool)> /*(int, bool) -> void*/ expansionCallback;
		/*non-null*/ shptr<class Duration> animationDuration = Duration({ .milliseconds = 200 });
		/*nullable*/ stdop<int64> initialOpenPanelValue;
		/*non-null*/ shptr<class EdgeInsets> expandedHeaderPadding = EdgeInsets::symmetric({ .vertical = 16.0 });
		/*nullable*/ shptr<class Color> dividerColor;
		/*non-null*/ double elevation = 2.0;
		/*nullable*/ shptr<class Color> expandIconColor;
		/*non-null*/ double materialGapSize = 16.0;
		/*non-null*/ stdvec<shptr<class ExpansionPanel>> children;
	};
	static shptr<class ExpansionPanelList> /*non-null*/ radio(_radio p = {});
};

inline shptr<class ExpansionPanelList> ExpansionPanelList(ExpansionPanelList::_ctorMain p = {}) {
	return ExpansionPanelList::ctorMain(p);
}

class ActionChip : public StatelessWidget
{
public:
	shptr<class Widget> /*var-nullable*/ avatar();
	shptr<class Widget> /*var-non-null*/ label();
	shptr<class TextStyle> /*var-nullable*/ labelStyle();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ labelPadding();
	stdop<double> /*var-nullable*/ pressElevation();
	stdop<stdstr> /*var-nullable*/ tooltip();
	shptr<class BorderSide> /*var-nullable*/ side();
	shptr<class OutlinedBorder> /*var-nullable*/ shape();
	Clip /*var-non-null*/ clipBehavior();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ disabledColor();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class IconThemeData> /*var-nullable*/ iconTheme();
	bool /*get-non-null*/ isEnabled();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> avatar;
		/*non-null*/ shptr<class Widget> label;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> labelPadding;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdop<double> pressElevation;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
	};
	static shptr<class ActionChip> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _elevated
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> avatar;
		/*non-null*/ shptr<class Widget> label;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> labelPadding;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdop<double> pressElevation;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
	};
	static shptr<class ActionChip> /*non-null*/ elevated(_elevated p = {});
};

inline shptr<class ActionChip> ActionChip(ActionChip::_ctorMain p = {}) {
	return ActionChip::ctorMain(p);
}

class FilterChip : public StatelessWidget
{
public:
	shptr<class Widget> /*var-nullable*/ avatar();
	shptr<class Widget> /*var-non-null*/ label();
	shptr<class TextStyle> /*var-nullable*/ labelStyle();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ labelPadding();
	bool /*var-non-null*/ selected();
	stdop<double> /*var-nullable*/ pressElevation();
	shptr<class Color> /*var-nullable*/ disabledColor();
	shptr<class Color> /*var-nullable*/ selectedColor();
	stdop<stdstr> /*var-nullable*/ tooltip();
	shptr<class BorderSide> /*var-nullable*/ side();
	shptr<class OutlinedBorder> /*var-nullable*/ shape();
	Clip /*var-non-null*/ clipBehavior();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class Color> /*var-nullable*/ selectedShadowColor();
	stdop<bool> /*var-nullable*/ showCheckmark();
	shptr<class Color> /*var-nullable*/ checkmarkColor();
	shptr<class ShapeBorder> /*var-non-null*/ avatarBorder();
	shptr<class IconThemeData> /*var-nullable*/ iconTheme();
	bool /*get-non-null*/ isEnabled();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> avatar;
		/*non-null*/ shptr<class Widget> label;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> labelPadding;
		/*non-null*/ bool selected = false;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onSelected;
		/*nullable*/ stdop<double> pressElevation;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
		/*nullable*/ shptr<class Color> selectedShadowColor;
		/*nullable*/ stdop<bool> showCheckmark;
		/*nullable*/ shptr<class Color> checkmarkColor;
		/*non-null*/ shptr<class ShapeBorder> avatarBorder = CircleBorder();
	};
	static shptr<class FilterChip> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _elevated
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> avatar;
		/*non-null*/ shptr<class Widget> label;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> labelPadding;
		/*non-null*/ bool selected = false;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onSelected;
		/*nullable*/ stdop<double> pressElevation;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
		/*nullable*/ shptr<class Color> selectedShadowColor;
		/*nullable*/ stdop<bool> showCheckmark;
		/*nullable*/ shptr<class Color> checkmarkColor;
		/*non-null*/ shptr<class ShapeBorder> avatarBorder = CircleBorder();
	};
	static shptr<class FilterChip> /*non-null*/ elevated(_elevated p = {});
};

inline shptr<class FilterChip> FilterChip(FilterChip::_ctorMain p = {}) {
	return FilterChip::ctorMain(p);
}

class OutlinedButton : public ButtonStyleButton
{
public:
	struct _styleFrom
	{
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> disabledForegroundColor;
		/*nullable*/ shptr<class Color> disabledBackgroundColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Size> minimumSize;
		/*nullable*/ shptr<class Size> fixedSize;
		/*nullable*/ shptr<class Size> maximumSize;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class MouseCursor> enabledMouseCursor;
		/*nullable*/ shptr<class MouseCursor> disabledMouseCursor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> tapTargetSize;
		/*nullable*/ shptr<class Duration> animationDuration;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*nullable*/ shptr<class Color> primary;
		/*nullable*/ shptr<class Color> onSurface;
	};
	static shptr<class ButtonStyle> /*non-null*/ styleFrom(_styleFrom p = {});
	shptr<class ButtonStyle> /*non-null*/ defaultStyleOf(/*non-null*/ shptr<class BuildContext> context);
	shptr<class ButtonStyle> /*nullable*/ themeStyleOf(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHover;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class OutlinedButton> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _icon
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdop<bool> autofocus;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*non-null*/ shptr<class Widget> icon;
		/*non-null*/ shptr<class Widget> label;
	};
	static shptr<class OutlinedButton> /*non-null*/ icon(_icon p = {});
};

inline shptr<class OutlinedButton> OutlinedButton(OutlinedButton::_ctorMain p = {}) {
	return OutlinedButton::ctorMain(p);
}

class ElevatedButton : public ButtonStyleButton
{
public:
	struct _styleFrom
	{
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> disabledForegroundColor;
		/*nullable*/ shptr<class Color> disabledBackgroundColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Size> minimumSize;
		/*nullable*/ shptr<class Size> fixedSize;
		/*nullable*/ shptr<class Size> maximumSize;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class MouseCursor> enabledMouseCursor;
		/*nullable*/ shptr<class MouseCursor> disabledMouseCursor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> tapTargetSize;
		/*nullable*/ shptr<class Duration> animationDuration;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*nullable*/ shptr<class Color> primary;
		/*nullable*/ shptr<class Color> onPrimary;
		/*nullable*/ shptr<class Color> onSurface;
	};
	static shptr<class ButtonStyle> /*non-null*/ styleFrom(_styleFrom p = {});
	shptr<class ButtonStyle> /*non-null*/ defaultStyleOf(/*non-null*/ shptr<class BuildContext> context);
	shptr<class ButtonStyle> /*nullable*/ themeStyleOf(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHover;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class ElevatedButton> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _icon
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHover;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdop<bool> autofocus;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*non-null*/ shptr<class Widget> icon;
		/*non-null*/ shptr<class Widget> label;
	};
	static shptr<class ElevatedButton> /*non-null*/ icon(_icon p = {});
};

inline shptr<class ElevatedButton> ElevatedButton(ElevatedButton::_ctorMain p = {}) {
	return ElevatedButton::ctorMain(p);
}

class FilledButton : public ButtonStyleButton
{
public:
	struct _styleFrom
	{
		/*nullable*/ shptr<class Color> foregroundColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> disabledForegroundColor;
		/*nullable*/ shptr<class Color> disabledBackgroundColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Size> minimumSize;
		/*nullable*/ shptr<class Size> fixedSize;
		/*nullable*/ shptr<class Size> maximumSize;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class MouseCursor> enabledMouseCursor;
		/*nullable*/ shptr<class MouseCursor> disabledMouseCursor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> tapTargetSize;
		/*nullable*/ shptr<class Duration> animationDuration;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
	};
	static shptr<class ButtonStyle> /*non-null*/ styleFrom(_styleFrom p = {});
	shptr<class ButtonStyle> /*non-null*/ defaultStyleOf(/*non-null*/ shptr<class BuildContext> context);
	shptr<class ButtonStyle> /*nullable*/ themeStyleOf(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHover;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class FilledButton> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _tonal
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHover;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class FilledButton> /*non-null*/ tonal(_tonal p = {});
	struct _icon
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHover;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdop<bool> autofocus;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*non-null*/ shptr<class Widget> icon;
		/*non-null*/ shptr<class Widget> label;
	};
	static shptr<class FilledButton> /*non-null*/ icon(_icon p = {});
	struct _tonalIcon
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onHover;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdop<bool> autofocus;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class MaterialStatesController> statesController;
		/*non-null*/ shptr<class Widget> icon;
		/*non-null*/ shptr<class Widget> label;
	};
	static shptr<class FilledButton> /*non-null*/ tonalIcon(_tonalIcon p = {});
};

inline shptr<class FilledButton> FilledButton(FilledButton::_ctorMain p = {}) {
	return FilledButton::ctorMain(p);
}

class CircularProgressIndicator : public ProgressIndicator
{
public:
	double /*var-non-null*/ strokeWidth();
	double /*var-non-null*/ strokeAlign();
	stdop<StrokeCap> /*var-nullable*/ strokeCap();
	static double /*var-non-null*/ strokeAlignInside();
	static double /*var-non-null*/ strokeAlignCenter();
	static double /*var-non-null*/ strokeAlignOutside();
	shptr<class Color> /*get-nullable*/ backgroundColor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> value;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Animation<shptr<class Color>>> valueColor;
		/*non-null*/ double strokeWidth = 4.0;
		/*non-null*/ double strokeAlign = 0.0;
		/*nullable*/ stdop<stdstr> semanticsLabel;
		/*nullable*/ stdop<stdstr> semanticsValue;
		/*nullable*/ stdop<StrokeCap> strokeCap;
	};
	static shptr<class CircularProgressIndicator> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _adaptive
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> value;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Animation<shptr<class Color>>> valueColor;
		/*non-null*/ double strokeWidth = 4.0;
		/*nullable*/ stdop<stdstr> semanticsLabel;
		/*nullable*/ stdop<stdstr> semanticsValue;
		/*nullable*/ stdop<StrokeCap> strokeCap;
		/*non-null*/ double strokeAlign = 0.0;
	};
	static shptr<class CircularProgressIndicator> /*non-null*/ adaptive(_adaptive p = {});
};

inline shptr<class CircularProgressIndicator> CircularProgressIndicator(CircularProgressIndicator::_ctorMain p = {}) {
	return CircularProgressIndicator::ctorMain(p);
}

class RefreshProgressIndicator : public CircularProgressIndicator
{
public:
	static double /*var-non-null*/ defaultStrokeWidth();
	shptr<class Color> /*get-nullable*/ backgroundColor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> value;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Animation<shptr<class Color>>> valueColor;
		/*non-null*/ double strokeWidth = 2.5;
		/*non-null*/ double strokeAlign = 0.0;
		/*nullable*/ stdop<stdstr> semanticsLabel;
		/*nullable*/ stdop<stdstr> semanticsValue;
		/*nullable*/ stdop<StrokeCap> strokeCap;
	};
	static shptr<class RefreshProgressIndicator> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class RefreshProgressIndicator> RefreshProgressIndicator(RefreshProgressIndicator::_ctorMain p = {}) {
	return RefreshProgressIndicator::ctorMain(p);
}

class LinearProgressIndicator : public ProgressIndicator
{
public:
	stdop<double> /*var-nullable*/ minHeight();
	shptr<class BorderRadiusGeometry> /*var-non-null*/ borderRadius();
	shptr<class Color> /*get-nullable*/ backgroundColor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> value;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Animation<shptr<class Color>>> valueColor;
		/*nullable*/ stdop<double> minHeight;
		/*nullable*/ stdop<stdstr> semanticsLabel;
		/*nullable*/ stdop<stdstr> semanticsValue;
		/*non-null*/ shptr<class BorderRadiusGeometry> borderRadius = BorderRadius::zero();
	};
	static shptr<class LinearProgressIndicator> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class LinearProgressIndicator> LinearProgressIndicator(LinearProgressIndicator::_ctorMain p = {}) {
	return LinearProgressIndicator::ctorMain(p);
}

class TextEditingController : public ValueNotifier
{
public:
	stdstr /*get-non-null*/ text();
	shptr<class TextSelection> /*get-non-null*/ selection();
	struct _buildTextSpan
	{
		/*non-null*/ shptr<class BuildContext> context;
		/*nullable*/ shptr<class TextStyle> style;
		/*non-null*/ bool withComposing;
	};
	shptr<class TextSpan> /*non-null*/ buildTextSpan(_buildTextSpan p = {});
	void clear();
	void clearComposing();
	bool /*non-null*/ isSelectionWithinTextBounds(/*non-null*/ shptr<class TextSelection> selection);
	struct _ctorMain
	{
		/*nullable*/ stdop<stdstr> text;
	};
	static shptr<class TextEditingController> /*non-null*/ ctorMain(_ctorMain p = {});
	static shptr<class TextEditingController> /*non-null*/ fromValue(/*nullable*/ shptr<class TextEditingValue> value);
};

inline shptr<class TextEditingController> TextEditingController(TextEditingController::_ctorMain p = {}) {
	return TextEditingController::ctorMain(p);
}

class Drawer : public StatelessWidget
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	stdop<double> /*var-nullable*/ width();
	shptr<class Widget> /*var-nullable*/ child();
	stdop<stdstr> /*var-nullable*/ semanticLabel();
	stdop<Clip> /*var-nullable*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<stdstr> semanticLabel;
		/*nullable*/ stdop<Clip> clipBehavior;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Drawer> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Drawer> Drawer(Drawer::_ctorMain p = {}) {
	return Drawer::ctorMain(p);
}

class DrawerHeader : public StatelessWidget
{
public:
	shptr<class Decoration> /*var-nullable*/ decoration();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ padding();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ margin();
	shptr<class Duration> /*var-non-null*/ duration();
	shptr<class Curve> /*var-non-null*/ curve();
	shptr<class Widget> /*var-nullable*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Decoration> decoration;
		/*nullable*/ shptr<class EdgeInsetsGeometry> margin = EdgeInsets::fromLTRB(0.0, 0.0, 0.0, 8.0);
		/*non-null*/ shptr<class EdgeInsetsGeometry> padding = EdgeInsets::fromLTRB(16.0, 16.0, 16.0, 8.0);
		/*non-null*/ shptr<class Duration> duration = Duration({ .milliseconds = 250 });
		/*non-null*/ shptr<class Curve> curve = Curves::fastOutSlowIn();
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class DrawerHeader> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DrawerHeader> DrawerHeader(DrawerHeader::_ctorMain p = {}) {
	return DrawerHeader::ctorMain(p);
}

class DropdownButton : public StatefulWidget
{
public:
	stdop<int64> /*var-nullable*/ value();
	shptr<class Widget> /*var-nullable*/ hint();
	shptr<class Widget> /*var-nullable*/ disabledHint();
	int64 /*var-non-null*/ elevation();
	shptr<class TextStyle> /*var-nullable*/ style();
	shptr<class Widget> /*var-nullable*/ underline();
	shptr<class Widget> /*var-nullable*/ icon();
	shptr<class Color> /*var-nullable*/ iconDisabledColor();
	shptr<class Color> /*var-nullable*/ iconEnabledColor();
	double /*var-non-null*/ iconSize();
	bool /*var-non-null*/ isDense();
	bool /*var-non-null*/ isExpanded();
	stdop<double> /*var-nullable*/ itemHeight();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	shptr<class Color> /*var-nullable*/ dropdownColor();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	stdop<double> /*var-nullable*/ menuMaxHeight();
	stdop<bool> /*var-nullable*/ enableFeedback();
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	shptr<class BorderRadius> /*var-nullable*/ borderRadius();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<stdvec<shptr<class DropdownMenuItem>>> items;
//		/*nullable*/ stdfunc<stdvec<shptr<class Widget>>(shptr<class BuildContext>)> /*(BuildContext) -> List*/ selectedItemBuilder;
		/*nullable*/ stdop<int64> value;
		/*nullable*/ shptr<class Widget> hint;
		/*nullable*/ shptr<class Widget> disabledHint;
		/*nullable*/ stdfunc<void(int64)> onChanged;
		/*nullable*/ stdfunc<void()> onTap;
		/*non-null*/ int64 elevation = 8;
		/*nullable*/ shptr<class TextStyle> style;
		/*nullable*/ shptr<class Widget> underline;
		/*nullable*/ shptr<class Widget> icon;
		/*nullable*/ shptr<class Color> iconDisabledColor;
		/*nullable*/ shptr<class Color> iconEnabledColor;
		/*non-null*/ double iconSize = 24.0;
		/*non-null*/ bool isDense = false;
		/*non-null*/ bool isExpanded = false;
		/*nullable*/ stdop<double> itemHeight = 48.0;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class Color> dropdownColor;
		/*nullable*/ stdop<double> menuMaxHeight;
		/*nullable*/ stdop<bool> enableFeedback;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = AlignmentDirectional::centerStart();
		/*nullable*/ shptr<class BorderRadius> borderRadius;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
	};
	static shptr<class DropdownButton> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DropdownButton> DropdownButton(DropdownButton::_ctorMain p = {}) {
	return DropdownButton::ctorMain(p);
}

class DropdownButtonFormField : public StatefulWidget
{
public:
	shptr<class InputDecoration> /*var-non-null*/ decoration();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<stdvec<shptr<class DropdownMenuItem>>> items;
//		/*nullable*/ stdfunc<stdvec<shptr<class Widget>>(shptr<class BuildContext>)> /*(BuildContext) -> List*/ selectedItemBuilder;
		/*nullable*/ stdop<int64> value;
		/*nullable*/ shptr<class Widget> hint;
		/*nullable*/ shptr<class Widget> disabledHint;
		/*nullable*/ stdfunc<void(int64)> /*(int64) -> void*/ onChanged;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTap;
		/*non-null*/ int64 elevation = 8;
		/*nullable*/ shptr<class TextStyle> style;
		/*nullable*/ shptr<class Widget> icon;
		/*nullable*/ shptr<class Color> iconDisabledColor;
		/*nullable*/ shptr<class Color> iconEnabledColor;
		/*non-null*/ double iconSize = 24.0;
		/*non-null*/ bool isDense = true;
		/*non-null*/ bool isExpanded = false;
		/*nullable*/ stdop<double> itemHeight;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class Color> dropdownColor;
		/*nullable*/ shptr<class InputDecoration> decoration;
		/*nullable*/ stdfunc<void(int64)> /*(int64) -> void*/ onSaved;
//		/*nullable*/ stdfunc<stdstr(ObjBase)> /*(dynamic) -> String*/ validator;
		/*nullable*/ stdop<AutovalidateMode> autovalidateMode;
		/*nullable*/ stdop<double> menuMaxHeight;
		/*nullable*/ stdop<bool> enableFeedback;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = AlignmentDirectional::centerStart();
		/*nullable*/ shptr<class BorderRadius> borderRadius;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
	};
	static shptr<class DropdownButtonFormField> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DropdownButtonFormField> DropdownButtonFormField(DropdownButtonFormField::_ctorMain p = {}) {
	return DropdownButtonFormField::ctorMain(p);
}

class DropdownMenuItem : public StatelessWidget
{
public:
	stdop<int64> /*var-nullable*/ value();
	bool /*var-non-null*/ enabled();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTap;
		/*nullable*/ stdop<int64> value;
		/*non-null*/ bool enabled = true;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = AlignmentDirectional::centerStart();
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class DropdownMenuItem> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DropdownMenuItem> DropdownMenuItem(DropdownMenuItem::_ctorMain p = {}) {
	return DropdownMenuItem::ctorMain(p);
}

class ExpandIcon : public StatefulWidget
{
public:
	bool /*var-non-null*/ isExpanded();
	double /*var-non-null*/ size();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ padding();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Color> /*var-nullable*/ disabledColor();
	shptr<class Color> /*var-nullable*/ expandedColor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool isExpanded = false;
		/*non-null*/ double size = 24.0;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onPressed;
		/*non-null*/ shptr<class EdgeInsetsGeometry> padding = EdgeInsets::all(8.0);
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> expandedColor;
	};
	static shptr<class ExpandIcon> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ExpandIcon> ExpandIcon(ExpandIcon::_ctorMain p = {}) {
	return ExpandIcon::ctorMain(p);
}

class InputChip : public StatelessWidget
{
public:
	shptr<class Widget> /*var-nullable*/ avatar();
	shptr<class Widget> /*var-non-null*/ label();
	shptr<class TextStyle> /*var-nullable*/ labelStyle();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ labelPadding();
	bool /*var-non-null*/ selected();
	bool /*var-non-null*/ isEnabled();
	shptr<class Widget> /*var-nullable*/ deleteIcon();
	shptr<class Color> /*var-nullable*/ deleteIconColor();
	stdop<stdstr> /*var-nullable*/ deleteButtonTooltipMessage();
	stdop<double> /*var-nullable*/ pressElevation();
	shptr<class Color> /*var-nullable*/ disabledColor();
	shptr<class Color> /*var-nullable*/ selectedColor();
	stdop<stdstr> /*var-nullable*/ tooltip();
	shptr<class BorderSide> /*var-nullable*/ side();
	shptr<class OutlinedBorder> /*var-nullable*/ shape();
	Clip /*var-non-null*/ clipBehavior();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class Color> /*var-nullable*/ selectedShadowColor();
	stdop<bool> /*var-nullable*/ showCheckmark();
	shptr<class Color> /*var-nullable*/ checkmarkColor();
	shptr<class ShapeBorder> /*var-non-null*/ avatarBorder();
	shptr<class IconThemeData> /*var-nullable*/ iconTheme();
	bool /*var-non-null*/ useDeleteButtonTooltip();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> avatar;
		/*non-null*/ shptr<class Widget> label;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> labelPadding;
		/*non-null*/ bool selected = false;
		/*non-null*/ bool isEnabled = true;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onSelected;
		/*nullable*/ shptr<class Widget> deleteIcon;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onDeleted;
		/*nullable*/ shptr<class Color> deleteIconColor;
		/*nullable*/ stdop<stdstr> deleteButtonTooltipMessage;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ stdop<double> pressElevation;
		/*nullable*/ shptr<class Color> disabledColor;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class IconThemeData> iconTheme;
		/*nullable*/ shptr<class Color> selectedShadowColor;
		/*nullable*/ stdop<bool> showCheckmark;
		/*nullable*/ shptr<class Color> checkmarkColor;
		/*non-null*/ shptr<class ShapeBorder> avatarBorder = CircleBorder();
		/*non-null*/ bool useDeleteButtonTooltip = true;
	};
	static shptr<class InputChip> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class InputChip> InputChip(InputChip::_ctorMain p = {}) {
	return InputChip::ctorMain(p);
}

class MaterialBanner : public StatefulWidget
{
public:
	shptr<class Widget> /*var-non-null*/ content();
	shptr<class TextStyle> /*var-nullable*/ contentTextStyle();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Widget> /*var-nullable*/ leading();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ dividerColor();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ margin();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ leadingPadding();
	bool /*var-non-null*/ forceActionsBelow();
	OverflowBarAlignment /*var-non-null*/ overflowAlignment();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Widget> content;
		/*nullable*/ shptr<class TextStyle> contentTextStyle;
		/*non-null*/ stdvec<shptr<class Widget>> actions;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Widget> leading;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> dividerColor;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class EdgeInsetsGeometry> margin;
		/*nullable*/ shptr<class EdgeInsetsGeometry> leadingPadding;
		/*non-null*/ bool forceActionsBelow = false;
		/*non-null*/ OverflowBarAlignment overflowAlignment = OverflowBarAlignment_end;
		/*nullable*/ shptr<class Animation<double>> animation;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onVisible;
	};
	static shptr<class MaterialBanner> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MaterialBanner> MaterialBanner(MaterialBanner::_ctorMain p = {}) {
	return MaterialBanner::ctorMain(p);
}

class NavigationBar : public StatelessWidget
{
public:
	shptr<class Duration> /*var-nullable*/ animationDuration();
	int64 /*var-non-null*/ selectedIndex();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class Color> /*var-nullable*/ indicatorColor();
	shptr<class ShapeBorder> /*var-nullable*/ indicatorShape();
	stdop<double> /*var-nullable*/ height();
	stdop<NavigationDestinationLabelBehavior> /*var-nullable*/ labelBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Duration> animationDuration;
		/*non-null*/ int64 selectedIndex = 0;
		/*non-null*/ stdvec<shptr<class Widget>> destinations;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onDestinationSelected;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ shptr<class ShapeBorder> indicatorShape;
		/*nullable*/ stdop<double> height;
		/*nullable*/ stdop<NavigationDestinationLabelBehavior> labelBehavior;
	};
	static shptr<class NavigationBar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NavigationBar> NavigationBar(NavigationBar::_ctorMain p = {}) {
	return NavigationBar::ctorMain(p);
}

class NavigationDestination : public StatelessWidget
{
public:
	shptr<class Widget> /*var-non-null*/ icon();
	shptr<class Widget> /*var-nullable*/ selectedIcon();
	stdstr /*var-non-null*/ label();
	stdop<stdstr> /*var-nullable*/ tooltip();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Widget> icon;
		/*nullable*/ shptr<class Widget> selectedIcon;
		/*non-null*/ stdstr label;
		/*nullable*/ stdop<stdstr> tooltip;
	};
	static shptr<class NavigationDestination> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NavigationDestination> NavigationDestination(NavigationDestination::_ctorMain p = {}) {
	return NavigationDestination::ctorMain(p);
}

class NavigationDrawer : public StatelessWidget
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ indicatorColor();
	shptr<class ShapeBorder> /*var-nullable*/ indicatorShape();
	stdop<int64> /*var-nullable*/ selectedIndex();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ tilePadding();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*nullable*/ shptr<class ShapeBorder> indicatorShape;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onDestinationSelected;
		/*nullable*/ stdop<int64> selectedIndex = 0;
		/*non-null*/ shptr<class EdgeInsetsGeometry> tilePadding = EdgeInsets::symmetric({ .horizontal = 12.0 });
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class NavigationDrawer> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NavigationDrawer> NavigationDrawer(NavigationDrawer::_ctorMain p = {}) {
	return NavigationDrawer::ctorMain(p);
}

class NavigationDrawerDestination : public StatelessWidget
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Widget> /*var-non-null*/ icon();
	shptr<class Widget> /*var-nullable*/ selectedIcon();
	shptr<class Widget> /*var-non-null*/ label();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*non-null*/ shptr<class Widget> icon;
		/*nullable*/ shptr<class Widget> selectedIcon;
		/*non-null*/ shptr<class Widget> label;
	};
	static shptr<class NavigationDrawerDestination> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NavigationDrawerDestination> NavigationDrawerDestination(NavigationDrawerDestination::_ctorMain p = {}) {
	return NavigationDrawerDestination::ctorMain(p);
}

class ScaffoldMessenger : public StatefulWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	static shptr<class ScaffoldMessengerState> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class ScaffoldMessengerState> /*nullable*/ maybeOf(/*non-null*/ shptr<class BuildContext> context);
};

class ScaffoldMessengerState : public ObjBase
{
public:
	void showSnackBar(/*non-null*/ shptr<class SnackBar> snackBar);
	struct _removeCurrentSnackBar
	{
		/*non-null*/ SnackBarClosedReason reason = SnackBarClosedReason_remove;
	};
	void removeCurrentSnackBar(_removeCurrentSnackBar p = {});
	struct _hideCurrentSnackBar
	{
		/*non-null*/ SnackBarClosedReason reason = SnackBarClosedReason_hide;
	};
	void hideCurrentSnackBar(_hideCurrentSnackBar p = {});
	void clearSnackBars();
	void showMaterialBanner(/*non-null*/ shptr<class MaterialBanner> materialBanner);
	struct _removeCurrentMaterialBanner
	{
		/*non-null*/ MaterialBannerClosedReason reason = MaterialBannerClosedReason_remove;
	};
	void removeCurrentMaterialBanner(_removeCurrentMaterialBanner p = {});
	struct _hideCurrentMaterialBanner
	{
		/*non-null*/ MaterialBannerClosedReason reason = MaterialBannerClosedReason_hide;
	};
	void hideCurrentMaterialBanner(_hideCurrentMaterialBanner p = {});
	void clearMaterialBanners();
};

class PopupMenuButton : public StatefulWidget
{
public:
	stdop<int64> /*var-nullable*/ initialValue();
	stdop<stdstr> /*var-nullable*/ tooltip();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ padding();
	stdop<double> /*var-nullable*/ splashRadius();
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class Widget> /*var-nullable*/ icon();
	shptr<class Offset> /*var-non-null*/ offset();
	bool /*var-non-null*/ enabled();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class Color> /*var-nullable*/ color();
	stdop<bool> /*var-nullable*/ enableFeedback();
	stdop<double> /*var-nullable*/ iconSize();
	shptr<class BoxConstraints> /*var-nullable*/ constraints();
	stdop<PopupMenuPosition> /*var-nullable*/ position();
	Clip /*var-non-null*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdvec<shptr<class PopupMenuEntry>> _items;
		/*nullable*/ stdop<int64> initialValue;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onOpened;
		/*nullable*/ stdfunc<void(int64)> /*(int64) -> void*/ onSelected;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onCanceled;
		/*nullable*/ stdop<stdstr> tooltip;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*non-null*/ shptr<class EdgeInsetsGeometry> padding = EdgeInsets::all(8.0);
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ shptr<class Widget> icon;
		/*nullable*/ stdop<double> iconSize;
		/*non-null*/ shptr<class Offset> offset = Offset::zero();
		/*non-null*/ bool enabled = true;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class BoxConstraints> constraints;
		/*nullable*/ stdop<PopupMenuPosition> position;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class PopupMenuButton> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class PopupMenuButton> PopupMenuButton(PopupMenuButton::_ctorMain p = {}) {
	return PopupMenuButton::ctorMain(p);
}

class PopupMenuItem : public PopupMenuEntry
{
public:
	stdop<int64> /*var-nullable*/ value();
	bool /*var-non-null*/ enabled();
	double /*var-non-null*/ height();
	shptr<class EdgeInsets> /*var-nullable*/ padding();
	shptr<class TextStyle> /*var-nullable*/ textStyle();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	shptr<class Widget> /*var-nullable*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<int64> value;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTap;
		/*non-null*/ bool enabled = true;
		/*non-null*/ double height = 48.0;
		/*nullable*/ shptr<class EdgeInsets> padding;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class TextStyle>>> labelTextStyle;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class PopupMenuItem> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class PopupMenuItem> PopupMenuItem(PopupMenuItem::_ctorMain p = {}) {
	return PopupMenuItem::ctorMain(p);
}

class CheckedPopupMenuItem : public PopupMenuItem
{
public:
	bool /*var-non-null*/ checked();
	shptr<class Widget> /*get-nullable*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<int64> value;
		/*non-null*/ bool checked = false;
		/*non-null*/ bool enabled = true;
		/*nullable*/ shptr<class EdgeInsets> padding;
		/*non-null*/ double height = 48.0;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class CheckedPopupMenuItem> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CheckedPopupMenuItem> CheckedPopupMenuItem(CheckedPopupMenuItem::_ctorMain p = {}) {
	return CheckedPopupMenuItem::ctorMain(p);
}

class PopupMenuDivider : public PopupMenuEntry
{
public:
	double /*var-non-null*/ height();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double height = 16.0;
	};
	static shptr<class PopupMenuDivider> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class PopupMenuDivider> PopupMenuDivider(PopupMenuDivider::_ctorMain p = {}) {
	return PopupMenuDivider::ctorMain(p);
}

class SnackBarAction : public StatefulWidget
{
public:
	shptr<class Color> /*var-nullable*/ textColor();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ disabledTextColor();
	shptr<class Color> /*var-nullable*/ disabledBackgroundColor();
	stdstr /*var-non-null*/ label();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ shptr<class Color> disabledTextColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> disabledBackgroundColor;
		/*non-null*/ stdstr label;
		/*non-null*/ stdfunc<void()> /*() -> void*/ onPressed;
	};
	static shptr<class SnackBarAction> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SnackBarAction> SnackBarAction(SnackBarAction::_ctorMain p = {}) {
	return SnackBarAction::ctorMain(p);
}

class SnackBar : public StatefulWidget
{
public:
	shptr<class Widget> /*var-non-null*/ content();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ margin();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	stdop<double> /*var-nullable*/ width();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	stdop<SnackBarBehavior> /*var-nullable*/ behavior();
	shptr<class SnackBarAction> /*var-nullable*/ action();
	stdop<double> /*var-nullable*/ actionOverflowThreshold();
	stdop<bool> /*var-nullable*/ showCloseIcon();
	shptr<class Color> /*var-nullable*/ closeIconColor();
	shptr<class Duration> /*var-non-null*/ duration();
	DismissDirection /*var-non-null*/ dismissDirection();
	Clip /*var-non-null*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Widget> content;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class EdgeInsetsGeometry> margin;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ stdop<double> width;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<SnackBarBehavior> behavior;
		/*nullable*/ shptr<class SnackBarAction> action;
		/*nullable*/ stdop<double> actionOverflowThreshold;
		/*nullable*/ stdop<bool> showCloseIcon;
		/*nullable*/ shptr<class Color> closeIconColor;
		/*non-null*/ shptr<class Duration> duration = Duration({ .seconds = 4 });
		/*nullable*/ shptr<class Animation<double>> animation;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onVisible;
		/*non-null*/ DismissDirection dismissDirection = DismissDirection_down;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
	};
	static shptr<class SnackBar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SnackBar> SnackBar(SnackBar::_ctorMain p = {}) {
	return SnackBar::ctorMain(p);
}

class ControlsDetails : public ObjBase
{
public:
	int64 /*var-non-null*/ currentStep();
	int64 /*var-non-null*/ stepIndex();
	bool /*get-non-null*/ isActive();
	struct _ctorMain
	{
		/*non-null*/ int64 currentStep;
		/*non-null*/ int64 stepIndex;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onStepCancel;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onStepContinue;
	};
	static shptr<class ControlsDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ControlsDetails> ControlsDetails(ControlsDetails::_ctorMain p = {}) {
	return ControlsDetails::ctorMain(p);
}

class Step : public ObjBase
{
public:
	shptr<class Widget> /*var-non-null*/ title();
	shptr<class Widget> /*var-nullable*/ subtitle();
	shptr<class Widget> /*var-non-null*/ content();
	StepState /*var-non-null*/ state();
	bool /*var-non-null*/ isActive();
	shptr<class Widget> /*var-nullable*/ label();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Widget> title;
		/*nullable*/ shptr<class Widget> subtitle;
		/*non-null*/ shptr<class Widget> content;
		/*non-null*/ StepState state = StepState_indexed;
		/*non-null*/ bool isActive = false;
		/*nullable*/ shptr<class Widget> label;
	};
	static shptr<class Step> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Step> Step(Step::_ctorMain p = {}) {
	return Step::ctorMain(p);
}

class Stepper : public StatefulWidget
{
public:
	shptr<class ScrollPhysics> /*var-nullable*/ physics();
	shptr<class ScrollController> /*var-nullable*/ controller();
	StepperType /*var-non-null*/ type();
	int64 /*var-non-null*/ currentStep();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ margin();
	stdop<double> /*var-nullable*/ connectorThickness();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdvec<shptr<class Step>> steps;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ StepperType type = StepperType_vertical;
		/*non-null*/ int64 currentStep = 0;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onStepTapped;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onStepContinue;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onStepCancel;
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class ControlsDetails>)> /*(BuildContext, ControlsDetails) -> Widget*/ controlsBuilder;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class EdgeInsetsGeometry> margin;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> connectorColor;
		/*nullable*/ stdop<double> connectorThickness;
		/*nullable*/ stdfunc<shptr<class Widget>(int64, int64)> /*(int, StepState) -> Widget*/ stepIconBuilder;
	};
	static shptr<class Stepper> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Stepper> Stepper(Stepper::_ctorMain p = {}) {
	return Stepper::ctorMain(p);
}

class CheckboxListTile : public StatelessWidget
{
public:
	stdop<bool> /*var-nullable*/ value();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	shptr<class Color> /*var-nullable*/ activeColor();
	shptr<class Color> /*var-nullable*/ checkColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	stdop<double> /*var-nullable*/ splashRadius();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class BorderSide> /*var-nullable*/ side();
	bool /*var-non-null*/ isError();
	shptr<class Color> /*var-nullable*/ tileColor();
	shptr<class Widget> /*var-nullable*/ title();
	shptr<class Widget> /*var-nullable*/ subtitle();
	shptr<class Widget> /*var-nullable*/ secondary();
	bool /*var-non-null*/ isThreeLine();
	stdop<bool> /*var-nullable*/ dense();
	bool /*var-non-null*/ selected();
	ListTileControlAffinity /*var-non-null*/ controlAffinity();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ contentPadding();
	bool /*var-non-null*/ tristate();
	shptr<class OutlinedBorder> /*var-nullable*/ checkboxShape();
	shptr<class Color> /*var-nullable*/ selectedTileColor();
	stdop<bool> /*var-nullable*/ enableFeedback();
	stdop<bool> /*var-nullable*/ enabled();
	stdop<stdstr> /*var-nullable*/ checkboxSemanticLabel();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<bool> value;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onChanged;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class Color> checkColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class BorderSide> side;
		/*non-null*/ bool isError = false;
		/*nullable*/ stdop<bool> enabled;
		/*nullable*/ shptr<class Color> tileColor;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ shptr<class Widget> subtitle;
		/*non-null*/ bool isThreeLine = false;
		/*nullable*/ stdop<bool> dense;
		/*nullable*/ shptr<class Widget> secondary;
		/*non-null*/ bool selected = false;
		/*non-null*/ ListTileControlAffinity controlAffinity = ListTileControlAffinity_platform;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*non-null*/ bool tristate = false;
		/*nullable*/ shptr<class OutlinedBorder> checkboxShape;
		/*nullable*/ shptr<class Color> selectedTileColor;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ stdop<stdstr> checkboxSemanticLabel;
	};
	static shptr<class CheckboxListTile> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _adaptive
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<bool> value;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onChanged;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class Color> checkColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class BorderSide> side;
		/*non-null*/ bool isError = false;
		/*nullable*/ stdop<bool> enabled;
		/*nullable*/ shptr<class Color> tileColor;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ shptr<class Widget> subtitle;
		/*non-null*/ bool isThreeLine = false;
		/*nullable*/ stdop<bool> dense;
		/*nullable*/ shptr<class Widget> secondary;
		/*non-null*/ bool selected = false;
		/*non-null*/ ListTileControlAffinity controlAffinity = ListTileControlAffinity_platform;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*non-null*/ bool tristate = false;
		/*nullable*/ shptr<class OutlinedBorder> checkboxShape;
		/*nullable*/ shptr<class Color> selectedTileColor;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ stdop<stdstr> checkboxSemanticLabel;
	};
	static shptr<class CheckboxListTile> /*non-null*/ adaptive(_adaptive p = {});
};

inline shptr<class CheckboxListTile> CheckboxListTile(CheckboxListTile::_ctorMain p = {}) {
	return CheckboxListTile::ctorMain(p);
}

class SwitchListTile : public StatelessWidget
{
public:
	bool /*var-non-null*/ value();
	shptr<class Color> /*var-nullable*/ activeColor();
	shptr<class Color> /*var-nullable*/ activeTrackColor();
	shptr<class Color> /*var-nullable*/ inactiveThumbColor();
	shptr<class Color> /*var-nullable*/ inactiveTrackColor();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	DragStartBehavior /*var-non-null*/ dragStartBehavior();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	stdop<double> /*var-nullable*/ splashRadius();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	shptr<class Color> /*var-nullable*/ tileColor();
	shptr<class Widget> /*var-nullable*/ title();
	shptr<class Widget> /*var-nullable*/ subtitle();
	shptr<class Widget> /*var-nullable*/ secondary();
	bool /*var-non-null*/ isThreeLine();
	stdop<bool> /*var-nullable*/ dense();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ contentPadding();
	bool /*var-non-null*/ selected();
	ListTileControlAffinity /*var-non-null*/ controlAffinity();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class Color> /*var-nullable*/ selectedTileColor();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	stdop<bool> /*var-nullable*/ enableFeedback();
	shptr<class Color> /*var-nullable*/ hoverColor();
	stdop<bool> /*var-nullable*/ applyCupertinoTheme();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool value;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onChanged;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class Color> activeTrackColor;
		/*nullable*/ shptr<class Color> inactiveThumbColor;
		/*nullable*/ shptr<class Color> inactiveTrackColor;
		/*nullable*/ shptr<class ImageProvider> activeThumbImage;
		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class StackTrace>)> /*(ObjBase, StackTrace) -> void*/ onActiveThumbImageError;
		/*nullable*/ shptr<class ImageProvider> inactiveThumbImage;
		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class StackTrace>)> /*(ObjBase, StackTrace) -> void*/ onInactiveThumbImageError;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> thumbColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackOutlineColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Icon>>> thumbIcon;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class Color> tileColor;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ shptr<class Widget> subtitle;
		/*non-null*/ bool isThreeLine = false;
		/*nullable*/ stdop<bool> dense;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*nullable*/ shptr<class Widget> secondary;
		/*non-null*/ bool selected = false;
		/*non-null*/ ListTileControlAffinity controlAffinity = ListTileControlAffinity_platform;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class Color> selectedTileColor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class Color> hoverColor;
	};
	static shptr<class SwitchListTile> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _adaptive
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool value;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onChanged;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class Color> activeTrackColor;
		/*nullable*/ shptr<class Color> inactiveThumbColor;
		/*nullable*/ shptr<class Color> inactiveTrackColor;
		/*nullable*/ shptr<class ImageProvider> activeThumbImage;
		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class StackTrace>)> /*(ObjBase, StackTrace) -> void*/ onActiveThumbImageError;
		/*nullable*/ shptr<class ImageProvider> inactiveThumbImage;
		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class StackTrace>)> /*(ObjBase, StackTrace) -> void*/ onInactiveThumbImageError;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> thumbColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> trackOutlineColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Icon>>> thumbIcon;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdop<bool> applyCupertinoTheme;
		/*nullable*/ shptr<class Color> tileColor;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ shptr<class Widget> subtitle;
		/*non-null*/ bool isThreeLine = false;
		/*nullable*/ stdop<bool> dense;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*nullable*/ shptr<class Widget> secondary;
		/*non-null*/ bool selected = false;
		/*non-null*/ ListTileControlAffinity controlAffinity = ListTileControlAffinity_platform;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class Color> selectedTileColor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ shptr<class Color> hoverColor;
	};
	static shptr<class SwitchListTile> /*non-null*/ adaptive(_adaptive p = {});
};

inline shptr<class SwitchListTile> SwitchListTile(SwitchListTile::_ctorMain p = {}) {
	return SwitchListTile::ctorMain(p);
}

class RadioListTile : public StatelessWidget
{
public:
	int64 /*var-non-null*/ value();
	stdop<int64> /*var-nullable*/ groupValue();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	bool /*var-non-null*/ toggleable();
	shptr<class Color> /*var-nullable*/ activeColor();
	stdop<MaterialTapTargetSize> /*var-nullable*/ materialTapTargetSize();
	shptr<class Color> /*var-nullable*/ hoverColor();
	stdop<double> /*var-nullable*/ splashRadius();
	shptr<class Widget> /*var-nullable*/ title();
	shptr<class Widget> /*var-nullable*/ subtitle();
	shptr<class Widget> /*var-nullable*/ secondary();
	bool /*var-non-null*/ isThreeLine();
	stdop<bool> /*var-nullable*/ dense();
	bool /*var-non-null*/ selected();
	ListTileControlAffinity /*var-non-null*/ controlAffinity();
	bool /*var-non-null*/ autofocus();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ contentPadding();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class Color> /*var-nullable*/ tileColor();
	shptr<class Color> /*var-nullable*/ selectedTileColor();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	stdop<bool> /*var-nullable*/ enableFeedback();
	bool /*var-non-null*/ useCupertinoCheckmarkStyle();
	bool /*get-non-null*/ checked();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ int64 value;
		/*nullable*/ stdop<int64> groupValue;
		/*nullable*/ stdfunc<void(int64)> /*(int64) -> void*/ onChanged;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*non-null*/ bool toggleable = false;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ shptr<class Widget> subtitle;
		/*non-null*/ bool isThreeLine = false;
		/*nullable*/ stdop<bool> dense;
		/*nullable*/ shptr<class Widget> secondary;
		/*non-null*/ bool selected = false;
		/*non-null*/ ListTileControlAffinity controlAffinity = ListTileControlAffinity_platform;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class Color> tileColor;
		/*nullable*/ shptr<class Color> selectedTileColor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ stdop<bool> enableFeedback;
	};
	static shptr<class RadioListTile> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _adaptive
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ int64 value;
		/*nullable*/ stdop<int64> groupValue;
		/*nullable*/ stdfunc<void(int64)> /*(int64) -> void*/ onChanged;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*non-null*/ bool toggleable = false;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> fillColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ stdop<double> splashRadius;
		/*nullable*/ stdop<MaterialTapTargetSize> materialTapTargetSize;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ shptr<class Widget> subtitle;
		/*non-null*/ bool isThreeLine = false;
		/*nullable*/ stdop<bool> dense;
		/*nullable*/ shptr<class Widget> secondary;
		/*non-null*/ bool selected = false;
		/*non-null*/ ListTileControlAffinity controlAffinity = ListTileControlAffinity_platform;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class Color> tileColor;
		/*nullable*/ shptr<class Color> selectedTileColor;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ stdop<bool> enableFeedback;
		/*non-null*/ bool useCupertinoCheckmarkStyle = false;
	};
	static shptr<class RadioListTile> /*non-null*/ adaptive(_adaptive p = {});
};

inline shptr<class RadioListTile> RadioListTile(RadioListTile::_ctorMain p = {}) {
	return RadioListTile::ctorMain(p);
}

class DefaultTabController : public StatefulWidget
{
public:
	int64 /*var-non-null*/ length();
	int64 /*var-non-null*/ initialIndex();
	shptr<class Duration> /*var-nullable*/ animationDuration();
	shptr<class Widget> /*var-non-null*/ child();
	static shptr<class TabController> /*nullable*/ maybeOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class TabController> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ int64 length;
		/*non-null*/ int64 initialIndex = 0;
		/*nullable*/ shptr<class Duration> animationDuration;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class DefaultTabController> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DefaultTabController> DefaultTabController(DefaultTabController::_ctorMain p = {}) {
	return DefaultTabController::ctorMain(p);
}

class TabController : public ChangeNotifier
{
public:
	int64 /*var-non-null*/ length();
	shptr<class Animation<double>> /*get-nullable*/ animation();
	shptr<class Duration> /*get-non-null*/ animationDuration();
	int64 /*get-non-null*/ index();
	int64 /*get-non-null*/ previousIndex();
	bool /*get-non-null*/ indexIsChanging();
	double /*get-non-null*/ offset();
	struct _animateTo
	{
		/*nullable*/ shptr<class Duration> duration;
		/*non-null*/ shptr<class Curve> curve = Curves::ease();
	};
	void animateTo(/*non-null*/ int64 value, _animateTo p = {});
	void dispose();
	struct _ctorMain
	{
		/*non-null*/ int64 initialIndex = 0;
		/*nullable*/ shptr<class Duration> animationDuration;
		/*non-null*/ int64 length;
		/*non-null*/ shptr<class TickerProvider> vsync;
	};
	static shptr<class TabController> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TabController> TabController(TabController::_ctorMain p = {}) {
	return TabController::ctorMain(p);
}

class UnderlineTabIndicator : public Decoration
{
public:
	shptr<class BorderRadius> /*var-nullable*/ borderRadius();
	shptr<class BorderSide> /*var-non-null*/ borderSide();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ insets();
	shptr<class Decoration> /*nullable*/ lerpFrom(/*nullable*/ shptr<class Decoration> a, /*non-null*/ double t);
	shptr<class Decoration> /*nullable*/ lerpTo(/*nullable*/ shptr<class Decoration> b, /*non-null*/ double t);
	shptr<class BoxPainter> /*non-null*/ createBoxPainter(/*nullable*/ stdfunc<void()> /*() -> void*/ onChanged);
	shptr<class Path> /*non-null*/ getClipPath(/*non-null*/ shptr<class Rect> rect, /*non-null*/ TextDirection textDirection);
	struct _ctorMain
	{
		/*nullable*/ shptr<class BorderRadius> borderRadius;
		/*non-null*/ shptr<class BorderSide> borderSide = BorderSide({ .color = Colors::white(), .width = 2.0 });
		/*non-null*/ shptr<class EdgeInsetsGeometry> insets = EdgeInsets::zero();
	};
	static shptr<class UnderlineTabIndicator> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class UnderlineTabIndicator> UnderlineTabIndicator(UnderlineTabIndicator::_ctorMain p = {}) {
	return UnderlineTabIndicator::ctorMain(p);
}

class TabBarView : public StatefulWidget
{
public:
	shptr<class TabController> /*var-nullable*/ controller();
	shptr<class ScrollPhysics> /*var-nullable*/ physics();
	DragStartBehavior /*var-non-null*/ dragStartBehavior();
	double /*var-non-null*/ viewportFraction();
	Clip /*var-non-null*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class TabController> controller;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ double viewportFraction = 1.0;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class TabBarView> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TabBarView> TabBarView(TabBarView::_ctorMain p = {}) {
	return TabBarView::ctorMain(p);
}

class TabPageSelector : public StatelessWidget
{
public:
	shptr<class TabController> /*var-nullable*/ controller();
	double /*var-non-null*/ indicatorSize();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Color> /*var-nullable*/ selectedColor();
	stdop<BorderStyle> /*var-nullable*/ borderStyle();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class TabController> controller;
		/*non-null*/ double indicatorSize = 12.0;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ stdop<BorderStyle> borderStyle;
	};
	static shptr<class TabPageSelector> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TabPageSelector> TabPageSelector(TabPageSelector::_ctorMain p = {}) {
	return TabPageSelector::ctorMain(p);
}

class TabBar : public PreferredSizeWidget
{
public:
	shptr<class TabController> /*var-nullable*/ controller();
	bool /*var-non-null*/ isScrollable();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class Color> /*var-nullable*/ indicatorColor();
	double /*var-non-null*/ indicatorWeight();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ indicatorPadding();
	shptr<class Decoration> /*var-nullable*/ indicator();
	bool /*var-non-null*/ automaticIndicatorColorAdjustment();
	stdop<TabBarIndicatorSize> /*var-nullable*/ indicatorSize();
	shptr<class Color> /*var-nullable*/ dividerColor();
	shptr<class Color> /*var-nullable*/ labelColor();
	shptr<class Color> /*var-nullable*/ unselectedLabelColor();
	shptr<class TextStyle> /*var-nullable*/ labelStyle();
	shptr<class TextStyle> /*var-nullable*/ unselectedLabelStyle();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ labelPadding();
	DragStartBehavior /*var-non-null*/ dragStartBehavior();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	stdop<bool> /*var-nullable*/ enableFeedback();
	shptr<class ScrollPhysics> /*var-nullable*/ physics();
	shptr<class InteractiveInkFeatureFactory> /*var-nullable*/ splashFactory();
	shptr<class BorderRadius> /*var-nullable*/ splashBorderRadius();
	stdop<TabAlignment> /*var-nullable*/ tabAlignment();
	shptr<class Size> /*get-non-null*/ preferredSize();
	bool /*get-non-null*/ tabHasTextAndIcon();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdvec<shptr<class Widget>> tabs;
		/*nullable*/ shptr<class TabController> controller;
		/*non-null*/ bool isScrollable = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*non-null*/ bool automaticIndicatorColorAdjustment = true;
		/*non-null*/ double indicatorWeight = 2.0;
		/*non-null*/ shptr<class EdgeInsetsGeometry> indicatorPadding = EdgeInsets::zero();
		/*nullable*/ shptr<class Decoration> indicator;
		/*nullable*/ stdop<TabBarIndicatorSize> indicatorSize;
		/*nullable*/ shptr<class Color> dividerColor;
		/*nullable*/ shptr<class Color> labelColor;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> labelPadding;
		/*nullable*/ shptr<class Color> unselectedLabelColor;
		/*nullable*/ shptr<class TextStyle> unselectedLabelStyle;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onTap;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*nullable*/ shptr<class BorderRadius> splashBorderRadius;
		/*nullable*/ stdop<TabAlignment> tabAlignment;
	};
	static shptr<class TabBar> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _secondary
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdvec<shptr<class Widget>> tabs;
		/*nullable*/ shptr<class TabController> controller;
		/*non-null*/ bool isScrollable = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Color> indicatorColor;
		/*non-null*/ bool automaticIndicatorColorAdjustment = true;
		/*non-null*/ double indicatorWeight = 2.0;
		/*non-null*/ shptr<class EdgeInsetsGeometry> indicatorPadding = EdgeInsets::zero();
		/*nullable*/ shptr<class Decoration> indicator;
		/*nullable*/ stdop<TabBarIndicatorSize> indicatorSize;
		/*nullable*/ shptr<class Color> dividerColor;
		/*nullable*/ shptr<class Color> labelColor;
		/*nullable*/ shptr<class TextStyle> labelStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> labelPadding;
		/*nullable*/ shptr<class Color> unselectedLabelColor;
		/*nullable*/ shptr<class TextStyle> unselectedLabelStyle;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> overlayColor;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onTap;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*nullable*/ shptr<class InteractiveInkFeatureFactory> splashFactory;
		/*nullable*/ shptr<class BorderRadius> splashBorderRadius;
		/*nullable*/ stdop<TabAlignment> tabAlignment;
	};
	static shptr<class TabBar> /*non-null*/ secondary(_secondary p = {});
};

inline shptr<class TabBar> TabBar(TabBar::_ctorMain p = {}) {
	return TabBar::ctorMain(p);
}

class TabPageSelectorIndicator : public StatelessWidget
{
public:
	shptr<class Color> /*var-non-null*/ backgroundColor();
	shptr<class Color> /*var-non-null*/ borderColor();
	double /*var-non-null*/ size();
	BorderStyle /*var-non-null*/ borderStyle();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Color> backgroundColor;
		/*non-null*/ shptr<class Color> borderColor;
		/*non-null*/ double size;
		/*non-null*/ BorderStyle borderStyle = BorderStyle_solid;
	};
	static shptr<class TabPageSelectorIndicator> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TabPageSelectorIndicator> TabPageSelectorIndicator(TabPageSelectorIndicator::_ctorMain p = {}) {
	return TabPageSelectorIndicator::ctorMain(p);
}

class Tab : public PreferredSizeWidget
{
public:
	stdop<stdstr> /*var-nullable*/ text();
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class Widget> /*var-nullable*/ icon();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ iconMargin();
	stdop<double> /*var-nullable*/ height();
	shptr<class Size> /*get-non-null*/ preferredSize();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<stdstr> text;
		/*nullable*/ shptr<class Widget> icon;
		/*non-null*/ shptr<class EdgeInsetsGeometry> iconMargin = EdgeInsets::only({ .bottom = 10.0 });
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Tab> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Tab> Tab(Tab::_ctorMain p = {}) {
	return Tab::ctorMain(p);
}

class ToggleButtons : public StatelessWidget
{
public:
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	stdop<MaterialTapTargetSize> /*var-nullable*/ tapTargetSize();
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
	bool /*var-non-null*/ renderBorder();
	shptr<class Color> /*var-nullable*/ borderColor();
	shptr<class Color> /*var-nullable*/ selectedBorderColor();
	shptr<class Color> /*var-nullable*/ disabledBorderColor();
	stdop<double> /*var-nullable*/ borderWidth();
	shptr<class BorderRadius> /*var-nullable*/ borderRadius();
	Axis /*var-non-null*/ direction();
	VerticalDirection /*var-non-null*/ verticalDirection();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdvec<bool> isSelected;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onPressed;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ stdop<MaterialTapTargetSize> tapTargetSize;
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
		/*nullable*/ stdop<stdvec<shptr<class FocusNode>>> focusNodes;
		/*non-null*/ bool renderBorder = true;
		/*nullable*/ shptr<class Color> borderColor;
		/*nullable*/ shptr<class Color> selectedBorderColor;
		/*nullable*/ shptr<class Color> disabledBorderColor;
		/*nullable*/ shptr<class BorderRadius> borderRadius;
		/*nullable*/ stdop<double> borderWidth;
		/*non-null*/ Axis direction = Axis_horizontal;
		/*non-null*/ VerticalDirection verticalDirection = VerticalDirection_down;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class ToggleButtons> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ToggleButtons> ToggleButtons(ToggleButtons::_ctorMain p = {}) {
	return ToggleButtons::ctorMain(p);
}

class Tooltip : public StatefulWidget
{
public:
	stdop<stdstr> /*var-nullable*/ message();
	shptr<class InlineSpan> /*var-nullable*/ richMessage();
	stdop<double> /*var-nullable*/ height();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ margin();
	stdop<double> /*var-nullable*/ verticalOffset();
	stdop<bool> /*var-nullable*/ preferBelow();
	stdop<bool> /*var-nullable*/ excludeFromSemantics();
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class Decoration> /*var-nullable*/ decoration();
	shptr<class TextStyle> /*var-nullable*/ textStyle();
	stdop<TextAlign> /*var-nullable*/ textAlign();
	shptr<class Duration> /*var-nullable*/ waitDuration();
	shptr<class Duration> /*var-nullable*/ showDuration();
	stdop<TooltipTriggerMode> /*var-nullable*/ triggerMode();
	stdop<bool> /*var-nullable*/ enableFeedback();
	static bool /*non-null*/ dismissAllToolTips();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<stdstr> message;
		/*nullable*/ shptr<class InlineSpan> richMessage;
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
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTriggered;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Tooltip> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Tooltip> Tooltip(Tooltip::_ctorMain p = {}) {
	return Tooltip::ctorMain(p);
}

class Badge : public StatelessWidget
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
	shptr<class Widget> /*var-nullable*/ label();
	bool /*var-non-null*/ isLabelVisible();
	shptr<class Widget> /*var-nullable*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ stdop<double> smallSize;
		/*nullable*/ stdop<double> largeSize;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class Offset> offset;
		/*nullable*/ shptr<class Widget> label;
		/*non-null*/ bool isLabelVisible = true;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Badge> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _count
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ stdop<double> smallSize;
		/*nullable*/ stdop<double> largeSize;
		/*nullable*/ shptr<class TextStyle> textStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class Offset> offset;
		/*non-null*/ int64 count;
		/*non-null*/ bool isLabelVisible = true;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Badge> /*non-null*/ count(_count p = {});
};

inline shptr<class Badge> Badge(Badge::_ctorMain p = {}) {
	return Badge::ctorMain(p);
}

class BottomAppBar : public StatefulWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class Color> /*var-nullable*/ color();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class NotchedShape> /*var-nullable*/ shape();
	Clip /*var-non-null*/ clipBehavior();
	double /*var-non-null*/ notchMargin();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	shptr<class Color> /*var-nullable*/ shadowColor();
	stdop<double> /*var-nullable*/ height();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class NotchedShape> shape;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*non-null*/ double notchMargin = 4.0;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class BottomAppBar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BottomAppBar> BottomAppBar(BottomAppBar::_ctorMain p = {}) {
	return BottomAppBar::ctorMain(p);
}

class SimpleDialog : public StatelessWidget
{
public:
	shptr<class Widget> /*var-nullable*/ title();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ titlePadding();
	shptr<class TextStyle> /*var-nullable*/ titleTextStyle();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ contentPadding();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<double> /*var-nullable*/ elevation();
	shptr<class Color> /*var-nullable*/ shadowColor();
	shptr<class Color> /*var-nullable*/ surfaceTintColor();
	stdop<stdstr> /*var-nullable*/ semanticLabel();
	shptr<class EdgeInsets> /*var-non-null*/ insetPadding();
	Clip /*var-non-null*/ clipBehavior();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class AlignmentGeometry> /*var-nullable*/ alignment();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> title;
		/*non-null*/ shptr<class EdgeInsetsGeometry> titlePadding = EdgeInsets::fromLTRB(24.0, 24.0, 24.0, 0.0);
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*non-null*/ shptr<class EdgeInsetsGeometry> contentPadding = EdgeInsets::fromLTRB(0.0, 12.0, 0.0, 16.0);
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> elevation;
		/*nullable*/ shptr<class Color> shadowColor;
		/*nullable*/ shptr<class Color> surfaceTintColor;
		/*nullable*/ stdop<stdstr> semanticLabel;
		/*non-null*/ shptr<class EdgeInsets> insetPadding = EdgeInsets::fromLTRB(40.0, 24.0, 40.0, 24.0);
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ stdop<stdvec<shptr<class Widget>>> children;
	};
	static shptr<class SimpleDialog> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SimpleDialog> SimpleDialog(SimpleDialog::_ctorMain p = {}) {
	return SimpleDialog::ctorMain(p);
}

class SegmentedButton : public StatelessWidget
{
public:
	bool /*var-non-null*/ multiSelectionEnabled();
	bool /*var-non-null*/ emptySelectionAllowed();
	shptr<class ButtonStyle> /*var-nullable*/ style();
	bool /*var-non-null*/ showSelectedIcon();
	shptr<class Widget> /*var-nullable*/ selectedIcon();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdvec<shptr<class ButtonSegment>> segments;
		/*non-null*/ stdvec<int64> selected;
		/*nullable*/ stdfunc<void(stdstr)> onSelectionChanged;
		/*non-null*/ bool multiSelectionEnabled = false;
		/*non-null*/ bool emptySelectionAllowed = false;
		/*nullable*/ shptr<class ButtonStyle> style;
		/*non-null*/ bool showSelectedIcon = true;
		/*nullable*/ shptr<class Widget> selectedIcon;
	};
	static shptr<class SegmentedButton> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SegmentedButton> SegmentedButton(SegmentedButton::_ctorMain p = {}) {
	return SegmentedButton::ctorMain(p);
}

class ButtonSegment : public ObjBase
{
public:
	int64 /*var-non-null*/ value();
	shptr<class Widget> /*var-nullable*/ icon();
	shptr<class Widget> /*var-nullable*/ label();
	stdop<stdstr> /*var-nullable*/ tooltip();
	bool /*var-non-null*/ enabled();
	struct _ctorMain
	{
		/*non-null*/ int64 value;
		/*nullable*/ shptr<class Widget> icon;
		/*nullable*/ shptr<class Widget> label;
		/*nullable*/ stdop<stdstr> tooltip;
		/*non-null*/ bool enabled = true;
	};
	static shptr<class ButtonSegment> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ButtonSegment> ButtonSegment(ButtonSegment::_ctorMain p = {}) {
	return ButtonSegment::ctorMain(p);
}