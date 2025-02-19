#pragma once

class CupertinoApp : public StatefulWidget
{
public:
	shptr<class Widget> /*var-nullable*/ home();
	shptr<class CupertinoThemeData> /*var-nullable*/ theme();
	stdop<stdstr> /*var-nullable*/ initialRoute();
	shptr<class RouteInformationProvider> /*var-nullable*/ routeInformationProvider();
	shptr<class BackButtonDispatcher> /*var-nullable*/ backButtonDispatcher();
	stdstr /*var-non-null*/ title();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Locale> /*var-nullable*/ locale();
	bool /*var-non-null*/ showPerformanceOverlay();
	bool /*var-non-null*/ checkerboardRasterCacheImages();
	bool /*var-non-null*/ checkerboardOffscreenLayers();
	bool /*var-non-null*/ showSemanticsDebugger();
	bool /*var-non-null*/ debugShowCheckedModeBanner();
	stdop<stdstr> /*var-nullable*/ restorationScopeId();
	shptr<class ScrollBehavior> /*var-nullable*/ scrollBehavior();
	bool /*var-non-null*/ useInheritedMediaQuery();
	static shptr<class HeroController> /*non-null*/ createCupertinoHeroController();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class GlobalKey<shptr<class NavigatorState>>> navigatorKey;
		/*nullable*/ shptr<class Widget> home;
		/*nullable*/ shptr<class CupertinoThemeData> theme;
//		/*non-null*/ shptr<class Map<stdstr, stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/>> routes;
		/*nullable*/ stdop<stdstr> initialRoute;
//		/*nullable*/ stdfunc<shptr<class Route<shptr<class ObjBase>>>(shptr<class RouteSettings>)> /*(RouteSettings) -> Route*/ onGenerateRoute;
//		/*nullable*/ stdfunc<stdvec<shptr<class Route<shptr<class ObjBase>>>>(stdstr)> /*(String) -> List*/ onGenerateInitialRoutes;
//		/*nullable*/ stdfunc<shptr<class Route<shptr<class ObjBase>>>(shptr<class RouteSettings>)> /*(RouteSettings) -> Route*/ onUnknownRoute;
		/*non-null*/ stdvec<shptr<class NavigatorObserver>> navigatorObservers;
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Widget>)> /*(BuildContext, Widget) -> Widget*/ builder;
		/*non-null*/ stdstr title;
//		/*nullable*/ stdfunc<stdstr(shptr<class BuildContext>)> /*(BuildContext) -> String*/ onGenerateTitle;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Locale> locale;
//		/*nullable*/ shptr<class Iterable<shptr<class LocalizationsDelegate<shptr<class ObjBase>>>>> localizationsDelegates;
//		/*nullable*/ stdfunc<shptr<class Locale>(stdvec<shptr<class Locale>>, shptr<class Iterable<shptr<class Locale>>>)> localeListResolutionCallback;
//		/*nullable*/ stdfunc<shptr<class Locale>(shptr<class Locale>, shptr<class Iterable<shptr<class Locale>>>)> localeResolutionCallback;
//		/*non-null*/ shptr<class Iterable<shptr<class Locale>>> supportedLocales/;
		/*non-null*/ bool showPerformanceOverlay = false;
		/*non-null*/ bool checkerboardRasterCacheImages = false;
		/*non-null*/ bool checkerboardOffscreenLayers = false;
		/*non-null*/ bool showSemanticsDebugger = false;
		/*non-null*/ bool debugShowCheckedModeBanner = true;
//		/*nullable*/ shptr<class Map<shptr<class ShortcutActivator>, shptr<class Intent>>> shortcuts;
//		/*nullable*/ shptr<class Map<shptr<class Type>, shptr<class Action<shptr<class Intent>>>>> actions;
		/*nullable*/ stdop<stdstr> restorationScopeId;
		/*nullable*/ shptr<class ScrollBehavior> scrollBehavior;
		/*non-null*/ bool useInheritedMediaQuery = false;
	};
	static shptr<class CupertinoApp> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoApp> CupertinoApp(CupertinoApp::_ctorMain p = {}) {
	return CupertinoApp::ctorMain(p);
}

class CupertinoPageScaffold : public StatefulWidget
{
public:
	shptr<class ObstructingPreferredSizeWidget> /*var-nullable*/ navigationBar();
	shptr<class Widget> /*var-non-null*/ child();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	bool /*var-non-null*/ resizeToAvoidBottomInset();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class ObstructingPreferredSizeWidget> navigationBar;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*non-null*/ bool resizeToAvoidBottomInset = true;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class CupertinoPageScaffold> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoPageScaffold> CupertinoPageScaffold(CupertinoPageScaffold::_ctorMain p = {}) {
	return CupertinoPageScaffold::ctorMain(p);
}

class CupertinoNavigationBar : public ObstructingPreferredSizeWidget
{
public:
	shptr<class Widget> /*var-nullable*/ leading();
	bool /*var-non-null*/ automaticallyImplyLeading();
	bool /*var-non-null*/ automaticallyImplyMiddle();
	stdop<stdstr> /*var-nullable*/ previousPageTitle();
	shptr<class Widget> /*var-nullable*/ middle();
	shptr<class Widget> /*var-nullable*/ trailing();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<Brightness> /*var-nullable*/ brightness();
	shptr<class EdgeInsetsDirectional> /*var-nullable*/ padding();
	shptr<class Border> /*var-nullable*/ border();
	bool /*var-non-null*/ transitionBetweenRoutes();
	shptr<class Size> /*get-non-null*/ preferredSize();
	bool /*non-null*/ shouldFullyObstruct(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> leading;
		/*non-null*/ bool automaticallyImplyLeading = true;
		/*non-null*/ bool automaticallyImplyMiddle = true;
		/*nullable*/ stdop<stdstr> previousPageTitle;
		/*nullable*/ shptr<class Widget> middle;
		/*nullable*/ shptr<class Widget> trailing;
		/*nullable*/ shptr<class Border> border = Border({ .bottom = BorderSide({.color = Color(0x4d000000), .width = 0.0 }) });
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ shptr<class EdgeInsetsDirectional> padding;
		/*non-null*/ bool transitionBetweenRoutes = true;
//		/*non-null*/ shptr<class ObjBase> heroTag;
	};
	static shptr<class CupertinoNavigationBar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoNavigationBar> CupertinoNavigationBar(CupertinoNavigationBar::_ctorMain p = {}) {
	return CupertinoNavigationBar::ctorMain(p);
}

class CupertinoSliverNavigationBar : public StatefulWidget
{
public:
	shptr<class Widget> /*var-nullable*/ largeTitle();
	shptr<class Widget> /*var-nullable*/ leading();
	bool /*var-non-null*/ automaticallyImplyLeading();
	bool /*var-non-null*/ automaticallyImplyTitle();
	bool /*var-non-null*/ alwaysShowMiddle();
	stdop<stdstr> /*var-nullable*/ previousPageTitle();
	shptr<class Widget> /*var-nullable*/ middle();
	shptr<class Widget> /*var-nullable*/ trailing();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<Brightness> /*var-nullable*/ brightness();
	shptr<class EdgeInsetsDirectional> /*var-nullable*/ padding();
	shptr<class Border> /*var-nullable*/ border();
	bool /*var-non-null*/ transitionBetweenRoutes();
	bool /*var-non-null*/ stretch();
	bool /*get-non-null*/ opaque();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> largeTitle;
		/*nullable*/ shptr<class Widget> leading;
		/*non-null*/ bool automaticallyImplyLeading = true;
		/*non-null*/ bool automaticallyImplyTitle = true;
		/*non-null*/ bool alwaysShowMiddle = true;
		/*nullable*/ stdop<stdstr> previousPageTitle;
		/*nullable*/ shptr<class Widget> middle;
		/*nullable*/ shptr<class Widget> trailing;
		/*nullable*/ shptr<class Border> border = Border({ .bottom = BorderSide({.color = Color(0x4d000000), .width = 0.0 }) });
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ shptr<class EdgeInsetsDirectional> padding;
		/*non-null*/ bool transitionBetweenRoutes = true;
//		/*non-null*/ shptr<class ObjBase> heroTag;
		/*non-null*/ bool stretch = false;
	};
	static shptr<class CupertinoSliverNavigationBar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoSliverNavigationBar> CupertinoSliverNavigationBar(CupertinoSliverNavigationBar::_ctorMain p = {}) {
	return CupertinoSliverNavigationBar::ctorMain(p);
}

class CupertinoSlider : public StatefulWidget
{
public:
	double /*var-non-null*/ value();
	double /*var-non-null*/ minimal();
	double /*var-non-null*/ maximal();
	stdop<int64> /*var-nullable*/ divisions();
	shptr<class Color> /*var-nullable*/ activeColor();
	shptr<class Color> /*var-non-null*/ thumbColor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double value;
		/*nullable*/ stdfunc<void(double)> /*(double) -> void*/ onChanged;
		/*nullable*/ stdfunc<void(double)> /*(double) -> void*/ onChangeStart;
		/*nullable*/ stdfunc<void(double)> /*(double) -> void*/ onChangeEnd;
		/*non-null*/ double min = 0.0;
		/*non-null*/ double max = 1.0;
		/*nullable*/ stdop<int64> divisions;
		/*nullable*/ shptr<class Color> activeColor;
		/*non-null*/ shptr<class Color> thumbColor = CupertinoColors::white();
	};
	static shptr<class CupertinoSlider> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoSlider> CupertinoSlider(CupertinoSlider::_ctorMain p = {}) {
	return CupertinoSlider::ctorMain(p);
}

class CupertinoSwitch : public StatefulWidget
{
public:
	bool /*var-non-null*/ value();
	shptr<class Color> /*var-nullable*/ activeColor();
	shptr<class Color> /*var-nullable*/ trackColor();
	shptr<class Color> /*var-nullable*/ thumbColor();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	stdop<bool> /*var-nullable*/ applyTheme();
	DragStartBehavior /*var-non-null*/ dragStartBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool value;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onChanged;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class Color> trackColor;
		/*nullable*/ shptr<class Color> thumbColor;
		/*nullable*/ stdop<bool> applyTheme;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*non-null*/ bool autofocus = false;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
	};
	static shptr<class CupertinoSwitch> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoSwitch> CupertinoSwitch(CupertinoSwitch::_ctorMain p = {}) {
	return CupertinoSwitch::ctorMain(p);
}

class CupertinoActivityIndicator : public StatefulWidget
{
public:
	shptr<class Color> /*var-nullable*/ color();
	bool /*var-non-null*/ animating();
	double /*var-non-null*/ radius();
	double /*var-non-null*/ progress();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> color;
		/*non-null*/ bool animating = true;
		/*non-null*/ double radius = 10.0;
	};
	static shptr<class CupertinoActivityIndicator> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _partiallyRevealed
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> color;
		/*non-null*/ double radius = 10.0;
		/*non-null*/ double progress = 1.0;
	};
	static shptr<class CupertinoActivityIndicator> /*non-null*/ partiallyRevealed(_partiallyRevealed p = {});
};

inline shptr<class CupertinoActivityIndicator> CupertinoActivityIndicator(CupertinoActivityIndicator::_ctorMain p = {}) {
	return CupertinoActivityIndicator::ctorMain(p);
}

class CupertinoButton : public StatefulWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Color> /*var-non-null*/ disabledColor();
	stdop<double> /*var-nullable*/ minSize();
	stdop<double> /*var-nullable*/ pressedOpacity();
	shptr<class BorderRadius> /*var-nullable*/ borderRadius();
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	bool /*get-non-null*/ enabled();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Color> color;
		/*non-null*/ shptr<class Color> disabledColor = CupertinoColors::quaternarySystemFill();
		/*nullable*/ stdop<double> minSize = 44.0;
		/*nullable*/ stdop<double> pressedOpacity = 0.4;
		/*nullable*/ shptr<class BorderRadius> borderRadius = BorderRadius::circular(8.0);
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class CupertinoButton> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _filled
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*non-null*/ shptr<class Color> disabledColor = CupertinoColors::quaternarySystemFill();
		/*nullable*/ stdop<double> minSize = 44.0;
		/*nullable*/ stdop<double> pressedOpacity = 0.4;
		/*nullable*/ shptr<class BorderRadius> borderRadius = BorderRadius::circular(8.0);
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class CupertinoButton> /*non-null*/ filled(_filled p = {});
};

inline shptr<class CupertinoButton> CupertinoButton(CupertinoButton::_ctorMain p = {}) {
	return CupertinoButton::ctorMain(p);
}

class CupertinoCheckbox : public StatefulWidget
{
public:
	stdop<bool> /*var-nullable*/ value();
	shptr<class Color> /*var-nullable*/ activeColor();
	shptr<class Color> /*var-nullable*/ inactiveColor();
	shptr<class Color> /*var-nullable*/ checkColor();
	bool /*var-non-null*/ tristate();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	shptr<class BorderSide> /*var-nullable*/ side();
	shptr<class OutlinedBorder> /*var-nullable*/ shape();
	static double /*var-non-null*/ width();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<bool> value;
		/*non-null*/ bool tristate = false;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onChanged;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class Color> inactiveColor;
		/*nullable*/ shptr<class Color> checkColor;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class OutlinedBorder> shape;
	};
	static shptr<class CupertinoCheckbox> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoCheckbox> CupertinoCheckbox(CupertinoCheckbox::_ctorMain p = {}) {
	return CupertinoCheckbox::ctorMain(p);
}

class CupertinoContextMenu : public StatefulWidget
{
public:
	static double /*var-non-null*/ kOpenBorderRadius();
	static double /*var-non-null*/ animationOpensAt();
	shptr<class Widget> /*var-nullable*/ child();
	bool /*var-non-null*/ enableHapticFeedback();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdvec<shptr<class Widget>> actions;
		/*non-null*/ bool enableHapticFeedback = false;
		//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Animation<double>>, shptr<class Widget>)> previewBuilder;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class CupertinoContextMenu> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _builder
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdvec<shptr<class Widget>> actions;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Animation<double>>)> /*(BuildContext, Animation) -> Widget*/ builder;
		/*non-null*/ bool enableHapticFeedback = false;
	};
	static shptr<class CupertinoContextMenu> /*non-null*/ builder(_builder p = {});
};

inline shptr<class CupertinoContextMenu> CupertinoContextMenu(CupertinoContextMenu::_ctorMain p = {}) {
	return CupertinoContextMenu::ctorMain(p);
}

class CupertinoContextMenuAction : public StatefulWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	bool /*var-non-null*/ isDefaultAction();
	bool /*var-non-null*/ isDestructiveAction();
	shptr<class IconData> /*var-nullable*/ trailingIcon();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool isDefaultAction = false;
		/*non-null*/ bool isDestructiveAction = false;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPressed;
		/*nullable*/ shptr<class IconData> trailingIcon;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class CupertinoContextMenuAction> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoContextMenuAction> CupertinoContextMenuAction(CupertinoContextMenuAction::_ctorMain p = {}) {
	return CupertinoContextMenuAction::ctorMain(p);
}

class CupertinoDatePicker : public StatefulWidget
{
public:
	CupertinoDatePickerMode /*var-non-null*/ mode();
	shptr<class DateTime> /*var-non-null*/ initialDateTime();
	shptr<class DateTime> /*var-nullable*/ minimumDate();
	shptr<class DateTime> /*var-nullable*/ maximumDate();
	int64 /*var-non-null*/ minimumYear();
	stdop<int64> /*var-nullable*/ maximumYear();
	int64 /*var-non-null*/ minuteInterval();
	bool /*var-non-null*/ use24hFormat();
	stdop<DatePickerDateOrder> /*var-nullable*/ dateOrder();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	bool /*var-non-null*/ showDayOfWeek();
	double /*var-non-null*/ itemExtent();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ CupertinoDatePickerMode mode = CupertinoDatePickerMode_dateAndTime;
		/*non-null*/ stdfunc<void(shptr<class DateTime>)> /*(DateTime) -> void*/ onDateTimeChanged;
		/*nullable*/ shptr<class DateTime> initialDateTime;
		/*nullable*/ shptr<class DateTime> minimumDate;
		/*nullable*/ shptr<class DateTime> maximumDate;
		/*non-null*/ int64 minimumYear = 1;
		/*nullable*/ stdop<int64> maximumYear;
		/*non-null*/ int64 minuteInterval = 1;
		/*non-null*/ bool use24hFormat = false;
		/*nullable*/ stdop<DatePickerDateOrder> dateOrder;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*non-null*/ bool showDayOfWeek = false;
		/*non-null*/ double itemExtent = 32.0;
	};
	static shptr<class CupertinoDatePicker> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoDatePicker> CupertinoDatePicker(CupertinoDatePicker::_ctorMain p = {}) {
	return CupertinoDatePicker::ctorMain(p);
}

class CupertinoTimerPicker : public StatefulWidget
{
public:
	CupertinoTimerPickerMode /*var-non-null*/ mode();
	shptr<class Duration> /*var-non-null*/ initialTimerDuration();
	int64 /*var-non-null*/ minuteInterval();
	int64 /*var-non-null*/ secondInterval();
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	double /*var-non-null*/ itemExtent();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ CupertinoTimerPickerMode mode = CupertinoTimerPickerMode_hms;
		/*non-null*/ shptr<class Duration> initialTimerDuration = Duration::zero();
		/*non-null*/ int64 minuteInterval = 1;
		/*non-null*/ int64 secondInterval = 1;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*nullable*/ shptr<class Color> backgroundColor;
		/*non-null*/ double itemExtent = 32.0;
		/*non-null*/ stdfunc<void(shptr<class Duration>)> /*(Duration) -> void*/ onTimerDurationChanged;
	};
	static shptr<class CupertinoTimerPicker> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoTimerPicker> CupertinoTimerPicker(CupertinoTimerPicker::_ctorMain p = {}) {
	return CupertinoTimerPicker::ctorMain(p);
}

class CupertinoPicker : public StatefulWidget
{
public:
	double /*var-non-null*/ diameterRatio();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	double /*var-non-null*/ offAxisFraction();
	bool /*var-non-null*/ useMagnifier();
	double /*var-non-null*/ magnification();
	double /*var-non-null*/ itemExtent();
	double /*var-non-null*/ squeeze();
	shptr<class ListWheelChildDelegate> /*var-non-null*/ childDelegate();
	shptr<class Widget> /*var-nullable*/ selectionOverlay();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double diameterRatio = 1.07;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*non-null*/ double offAxisFraction = 0.0;
		/*non-null*/ bool useMagnifier = false;
		/*non-null*/ double magnification = 1.0;
		/*nullable*/ shptr<class FixedExtentScrollController> scrollController;
		/*non-null*/ double squeeze = 1.45;
		/*non-null*/ double itemExtent;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onSelectedItemChanged;
		//		/*nullable*/ shptr<class Widget> selectionOverlay = CupertinoPickerDefaultSelectionOverlay;
		/*non-null*/ bool looping = false;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class CupertinoPicker> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _builder
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double diameterRatio = 1.07;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*non-null*/ double offAxisFraction = 0.0;
		/*non-null*/ bool useMagnifier = false;
		/*non-null*/ double magnification = 1.0;
		/*nullable*/ shptr<class FixedExtentScrollController> scrollController;
		/*non-null*/ double squeeze = 1.45;
		/*non-null*/ double itemExtent;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onSelectedItemChanged;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ itemBuilder;
		//		/*nullable*/ shptr<class Widget> selectionOverlay = CupertinoPickerDefaultSelectionOverlay;
		/*nullable*/ stdop<int64> childCount;
	};
	static shptr<class CupertinoPicker> /*non-null*/ builder(_builder p = {});
};

inline shptr<class CupertinoPicker> CupertinoPicker(CupertinoPicker::_ctorMain p = {}) {
	return CupertinoPicker::ctorMain(p);
}

class CupertinoPopupSurface : public StatelessWidget
{
public:
	bool /*var-non-null*/ isSurfacePainted();
	shptr<class Widget> /*var-nullable*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool isSurfacePainted = true;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class CupertinoPopupSurface> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoPopupSurface> CupertinoPopupSurface(CupertinoPopupSurface::_ctorMain p = {}) {
	return CupertinoPopupSurface::ctorMain(p);
}

class CupertinoScrollbar : public StatefulWidget
{
public:
	static double /*var-non-null*/ defaultThickness();
	static double /*var-non-null*/ defaultThicknessWhileDragging();
	static shptr<class Radius> /*var-non-null*/ defaultRadius();
	static shptr<class Radius> /*var-non-null*/ defaultRadiusWhileDragging();
	double /*var-non-null*/ thicknessWhileDragging();
	shptr<class Radius> /*var-non-null*/ radiusWhileDragging();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> thumbVisibility;
		/*non-null*/ double thickness = 3.0;
		/*non-null*/ double thicknessWhileDragging = 8.0;
		/*non-null*/ shptr<class Radius> radius = Radius::circular(1.5);
		/*non-null*/ shptr<class Radius> radiusWhileDragging = Radius::circular(4.0);
		/*nullable*/ stdfunc<bool(shptr<class ScrollNotification>)> /*(ScrollNotification) -> bool*/ notificationPredicate;
		/*nullable*/ stdop<ScrollbarOrientation> scrollbarOrientation;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class CupertinoScrollbar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoScrollbar> CupertinoScrollbar(CupertinoScrollbar::_ctorMain p = {}) {
	return CupertinoScrollbar::ctorMain(p);
}

class CupertinoSearchTextField : public StatefulWidget
{
public:
	shptr<class TextEditingController> /*var-nullable*/ controller();
	shptr<class TextStyle> /*var-nullable*/ style();
	stdop<stdstr> /*var-nullable*/ placeholder();
	shptr<class TextStyle> /*var-nullable*/ placeholderStyle();
	shptr<class BoxDecoration> /*var-nullable*/ decoration();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class BorderRadius> /*var-nullable*/ borderRadius();
	shptr<class TextInputType> /*var-nullable*/ keyboardType();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ padding();
	shptr<class Color> /*var-non-null*/ itemColor();
	double /*var-non-null*/ itemSize();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ prefixInsets();
	shptr<class Widget> /*var-non-null*/ prefixIcon();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ suffixInsets();
	shptr<class Icon> /*var-non-null*/ suffixIcon();
	OverlayVisibilityMode /*var-non-null*/ suffixMode();
	stdop<stdstr> /*var-nullable*/ restorationId();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	bool /*var-non-null*/ autocorrect();
	stdop<SmartQuotesType> /*var-nullable*/ smartQuotesType();
	stdop<SmartDashesType> /*var-nullable*/ smartDashesType();
	bool /*var-non-null*/ enableIMEPersonalizedLearning();
	stdop<bool> /*var-nullable*/ enabled();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class TextEditingController> controller;
		/*nullable*/ stdfunc<void(stdstr)> /*(String) -> void*/ onChanged;
		/*nullable*/ stdfunc<void(stdstr)> /*(String) -> void*/ onSubmitted;
		/*nullable*/ shptr<class TextStyle> style;
		/*nullable*/ stdop<stdstr> placeholder;
		/*nullable*/ shptr<class TextStyle> placeholderStyle;
		/*nullable*/ shptr<class BoxDecoration> decoration;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class BorderRadius> borderRadius;
		//		/*nullable*/ shptr<class TextInputType> keyboardType = TextInputType(name: TextInputType.text, signed: null, decimal: null);
		//		/*non-null*/ shptr<class EdgeInsetsGeometry> padding = EdgeInsetsDirectional(5.5, 8.0, 5.5, 8.0);
		//		/*non-null*/ shptr<class Color> itemColor = secondaryLabel(*color = Color(0x993c3c43)*, darkColor = Color(0x99ebebf5), highContrastColor = Color(0xad3c3c43), darkHighContrastColor = Color(0xadebebf5), resolved by: UNRESOLVED);
		/*non-null*/ double itemSize = 20.0;
		//		/*non-null*/ shptr<class EdgeInsetsGeometry> prefixInsets = EdgeInsetsDirectional(6.0, 0.0, 0.0, 3.0);
		//		/*non-null*/ shptr<class Widget> prefixIcon = Icon(IconData(U+0F4A5));
		//		/*non-null*/ shptr<class EdgeInsetsGeometry> suffixInsets = EdgeInsetsDirectional(0.0, 0.0, 5.0, 2.0);
		//		/*non-null*/ shptr<class Icon> suffixIcon = Icon(IconData(U+0F36E));
		/*non-null*/ OverlayVisibilityMode suffixMode = OverlayVisibilityMode_editing;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onSuffixTap;
		/*nullable*/ stdop<stdstr> restorationId;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*nullable*/ stdop<SmartQuotesType> smartQuotesType;
		/*nullable*/ stdop<SmartDashesType> smartDashesType;
		/*non-null*/ bool enableIMEPersonalizedLearning = true;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTap;
		/*non-null*/ bool autocorrect = true;
		/*nullable*/ stdop<bool> enabled;
	};
	static shptr<class CupertinoSearchTextField> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoSearchTextField> CupertinoSearchTextField(CupertinoSearchTextField::_ctorMain p = {}) {
	return CupertinoSearchTextField::ctorMain(p);
}

class CupertinoTabBar : public PreferredSizeWidget
{
public:
	int64 /*var-non-null*/ currentIndex();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Color> /*var-nullable*/ activeColor();
	shptr<class Color> /*var-non-null*/ inactiveColor();
	double /*var-non-null*/ iconSize();
	double /*var-non-null*/ height();
	shptr<class Border> /*var-nullable*/ border();
	shptr<class Size> /*get-non-null*/ preferredSize();
	bool /*non-null*/ opaque(/*non-null*/ shptr<class BuildContext> context);
	struct _copyWith
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<stdvec<shptr<class BottomNavigationBarItem>>> items;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> activeColor;
		/*nullable*/ shptr<class Color> inactiveColor;
		/*nullable*/ stdop<double> iconSize;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Border> border;
		/*nullable*/ stdop<int64> currentIndex;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onTap;
	};
	shptr<class CupertinoTabBar> /*non-null*/ copyWith(_copyWith p = {});
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdvec<shptr<class BottomNavigationBarItem>> items;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onTap;
		/*non-null*/ int64 currentIndex = 0;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> activeColor;
		/*non-null*/ shptr<class Color> inactiveColor = CupertinoColors::inactiveGray();
		/*non-null*/ double iconSize = 30.0;
		/*non-null*/ double height = 50.0;
		/*nullable*/ shptr<class Border> border = Border({ .top = BorderSide({.color = CupertinoDynamicColor::withBrightness({.color = Color(0x4D000000), .darkColor = Color(0x29000000) }), .width = 0.0 }) });
	};
	static shptr<class CupertinoTabBar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoTabBar> CupertinoTabBar(CupertinoTabBar::_ctorMain p = {}) {
	return CupertinoTabBar::ctorMain(p);
}

class CupertinoSlidingSegmentedControl : public StatefulWidget
{
public:
	stdop<int64> /*var-nullable*/ groupValue();
	shptr<class Color> /*var-non-null*/ backgroundColor();
	shptr<class Color> /*var-non-null*/ thumbColor();
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ padding();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdfunc<void(int64)> onValueChanged;
		/*nullable*/ stdop<int64> groupValue;
		/*non-null*/ shptr<class Color> thumbColor = CupertinoDynamicColor::withBrightness({ .color = Color(0xFFFFFFFF), .darkColor = Color(0xFF636366) });
		/*non-null*/ shptr<class EdgeInsetsGeometry> padding = EdgeInsets::fromLTRB(3.0, 2.0, 3.0, 2.0);
		/*non-null*/ shptr<class Color> backgroundColor = CupertinoColors::tertiarySystemFill();
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class CupertinoSlidingSegmentedControl> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoSlidingSegmentedControl> CupertinoSlidingSegmentedControl(CupertinoSlidingSegmentedControl::_ctorMain p = {}) {
	return CupertinoSlidingSegmentedControl::ctorMain(p);
}
