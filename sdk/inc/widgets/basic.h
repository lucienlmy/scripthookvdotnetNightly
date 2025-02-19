#pragma once

class Align : public SingleChildRenderObjectWidget
{
public:
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	stdop<double> /*var-nullable*/ widthFactor();
	stdop<double> /*var-nullable*/ heightFactor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*nullable*/ stdop<double> widthFactor;
		/*nullable*/ stdop<double> heightFactor;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Align> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Align> Align(Align::_ctorMain p = {}) {
	return Align::ctorMain(p);
}

class Center : public Align
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> widthFactor;
		/*nullable*/ stdop<double> heightFactor;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Center> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Center> Center(Center::_ctorMain p = {}) {
	return Center::ctorMain(p);
}

class Flexible : public ParentDataWidget
{
public:
	int64 /*var-non-null*/ flex();
	FlexFit /*var-non-null*/ fit();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ int64 flex = 1;
		/*non-null*/ FlexFit fit = FlexFit_loose;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Flexible> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Flexible> Flexible(Flexible::_ctorMain p = {}) {
	return Flexible::ctorMain(p);
}

class Column : public Flex
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ MainAxisAlignment mainAxisAlignment = MainAxisAlignment_start;
		/*non-null*/ MainAxisSize mainAxisSize = MainAxisSize_max;
		/*non-null*/ CrossAxisAlignment crossAxisAlignment = CrossAxisAlignment_center;
		/*nullable*/ stdop<TextDirection> textDirection;
		/*non-null*/ VerticalDirection verticalDirection = VerticalDirection_down;
		/*nullable*/ stdop<TextBaseline> textBaseline;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class Column> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Column> Column(Column::_ctorMain p = {}) {
	return Column::ctorMain(p);
}

class Row : public Flex
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ MainAxisAlignment mainAxisAlignment = MainAxisAlignment_start;
		/*non-null*/ MainAxisSize mainAxisSize = MainAxisSize_max;
		/*non-null*/ CrossAxisAlignment crossAxisAlignment = CrossAxisAlignment_center;
		/*nullable*/ stdop<TextDirection> textDirection;
		/*non-null*/ VerticalDirection verticalDirection = VerticalDirection_down;
		/*nullable*/ stdop<TextBaseline> textBaseline;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class Row> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Row> Row(Row::_ctorMain p = {}) {
	return Row::ctorMain(p);
}

class Expanded : public Flexible
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ int64 flex = 1;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Expanded> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Expanded> Expanded(Expanded::_ctorMain p = {}) {
	return Expanded::ctorMain(p);
}

class Padding : public SingleChildRenderObjectWidget
{
public:
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ padding();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Padding> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Padding> Padding(Padding::_ctorMain p = {}) {
	return Padding::ctorMain(p);
}

class IconData : public ObjBase
{
public:
	int64 /*var-non-null*/ codePoint();
	stdop<stdstr> /*var-nullable*/ fontFamily();
	stdop<stdstr> /*var-nullable*/ fontPackage();
	bool /*var-non-null*/ matchTextDirection();
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdop<stdstr> fontFamily;
		/*nullable*/ stdop<stdstr> fontPackage;
		/*non-null*/ bool matchTextDirection = false;
		/*nullable*/ stdop<stdvec<stdstr>> fontFamilyFallback;
	};
	static shptr<class IconData> /*non-null*/ ctorMain(/*non-null*/ int64 codePoint, _ctorMain p = {});
};

inline shptr<class IconData> IconData(/*non-null*/ int64 codePoint, IconData::_ctorMain p = {}) {
	return IconData::ctorMain(codePoint, p);
}

class Icon : public StatelessWidget
{
public:
	shptr<class IconData> /*var-nullable*/ icon();
	stdop<double> /*var-nullable*/ size();
	stdop<double> /*var-nullable*/ fill();
	stdop<double> /*var-nullable*/ weight();
	stdop<double> /*var-nullable*/ grade();
	stdop<double> /*var-nullable*/ opticalSize();
	shptr<class Color> /*var-nullable*/ color();
	stdop<stdstr> /*var-nullable*/ semanticLabel();
	stdop<TextDirection> /*var-nullable*/ textDirection();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> size;
		/*nullable*/ stdop<double> fill;
		/*nullable*/ stdop<double> weight;
		/*nullable*/ stdop<double> grade;
		/*nullable*/ stdop<double> opticalSize;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<stdvec<shptr<class Shadow>>> shadows;
		/*nullable*/ stdop<stdstr> semanticLabel;
		/*nullable*/ stdop<TextDirection> textDirection;
	};
	static shptr<class Icon> /*non-null*/ ctorMain(/*nullable*/ shptr<class IconData> icon, _ctorMain p = {});
};

inline shptr<class Icon> Icon(/*nullable*/ shptr<class IconData> icon, Icon::_ctorMain p = {}) {
	return Icon::ctorMain(icon, p);
}

class UnconstrainedBox : public StatelessWidget
{
public:
	stdop<TextDirection> /*var-nullable*/ textDirection();
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	stdop<Axis> /*var-nullable*/ constrainedAxis();
	Clip /*var-non-null*/ clipBehavior();
	shptr<class Widget> /*var-nullable*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<TextDirection> textDirection;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*nullable*/ stdop<Axis> constrainedAxis;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class UnconstrainedBox> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class UnconstrainedBox> UnconstrainedBox(UnconstrainedBox::_ctorMain p = {}) {
	return UnconstrainedBox::ctorMain(p);
}

class ColoredBox : public SingleChildRenderObjectWidget
{
public:
	shptr<class Color> /*var-non-null*/ color();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Color> color;
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class ColoredBox> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ColoredBox> ColoredBox(ColoredBox::_ctorMain p = {}) {
	return ColoredBox::ctorMain(p);
}

class SizedOverflowBox : public SingleChildRenderObjectWidget
{
public:
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	shptr<class Size> /*var-non-null*/ size();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Size> size;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class SizedOverflowBox> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SizedOverflowBox> SizedOverflowBox(SizedOverflowBox::_ctorMain p = {}) {
	return SizedOverflowBox::ctorMain(p);
}

class SizedBox : public SingleChildRenderObjectWidget
{
public:
	stdop<double> /*var-nullable*/ width();
	stdop<double> /*var-nullable*/ height();
	stdstr /*non-null*/ toStringShort();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class SizedBox> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _expand
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class SizedBox> /*non-null*/ expand(_expand p = {});
	struct _shrink
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class SizedBox> /*non-null*/ shrink(_shrink p = {});
	struct _fromSize
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Size> size;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class SizedBox> /*non-null*/ fromSize(_fromSize p = {});
	struct _square
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> dimension;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class SizedBox> /*non-null*/ square(_square p = {});
};

inline shptr<class SizedBox> SizedBox(SizedBox::_ctorMain p = {}) {
	return SizedBox::ctorMain(p);
}

class ClipRect : public SingleChildRenderObjectWidget
{
public:
	Clip /*var-non-null*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
//		/*nullable*/ shptr<class CustomClipper<shptr<class Rect>>> clipper;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class ClipRect> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ClipRect> ClipRect(ClipRect::_ctorMain p = {}) {
	return ClipRect::ctorMain(p);
}

class ClipRRect : public SingleChildRenderObjectWidget
{
public:
	shptr<class BorderRadiusGeometry> /*var-non-null*/ borderRadius();
	Clip /*var-non-null*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class BorderRadiusGeometry> borderRadius = BorderRadius::zero();
//		/*nullable*/ shptr<class CustomClipper<RRect> clipper;
		/*non-null*/ Clip clipBehavior = Clip_antiAlias;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class ClipRRect> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ClipRRect> ClipRRect(ClipRRect::_ctorMain p = {}) {
	return ClipRRect::ctorMain(p);
}

class ClipPath : public SingleChildRenderObjectWidget
{
public:
	Clip /*var-non-null*/ clipBehavior();
	struct _shape
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ShapeBorder> shape;
		/*non-null*/ Clip clipBehavior = Clip_antiAlias;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Widget> /*non-null*/ shape(_shape p = {});
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdfunc<shptr<class Path>(shptr<class Size>)> _getClip;
		/*non-null*/ stdfunc<bool()> _shouldReclip;
		/*non-null*/ Clip clipBehavior = Clip_antiAlias;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class ClipPath> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ClipPath> ClipPath(ClipPath::_ctorMain p = {}) {
	return ClipPath::ctorMain(p);
}

class AspectRatio : public SingleChildRenderObjectWidget
{
public:
	double /*var-non-null*/ aspectRatio();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double aspectRatio;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AspectRatio> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AspectRatio> AspectRatio(AspectRatio::_ctorMain p = {}) {
	return AspectRatio::ctorMain(p);
}

class MediaQuery : public ObjBase
{
public:
	shptr<class MediaQueryData> /*var-non-null*/ data();
	struct _fromWindow
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Widget> /*non-null*/ fromWindow(_fromWindow p = {});
	struct _fromView
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class FlutterView> view;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Widget> /*non-null*/ fromView(_fromView p = {});
	static shptr<class MediaQueryData> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class MediaQueryData> /*nullable*/ maybeOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class Size> /*non-null*/ sizeOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class Size> /*nullable*/ maybeSizeOf(/*non-null*/ shptr<class BuildContext> context);
	static Orientation /*non-null*/ orientationOf(/*non-null*/ shptr<class BuildContext> context);
	static stdop<Orientation> /*nullable*/ maybeOrientationOf(/*non-null*/ shptr<class BuildContext> context);
	static double /*non-null*/ devicePixelRatioOf(/*non-null*/ shptr<class BuildContext> context);
	static stdop<double> /*nullable*/ maybeDevicePixelRatioOf(/*non-null*/ shptr<class BuildContext> context);
	static double /*non-null*/ textScaleFactorOf(/*non-null*/ shptr<class BuildContext> context);
	static stdop<double> /*nullable*/ maybeTextScaleFactorOf(/*non-null*/ shptr<class BuildContext> context);
	static Brightness /*non-null*/ platformBrightnessOf(/*non-null*/ shptr<class BuildContext> context);
	static stdop<Brightness> /*nullable*/ maybePlatformBrightnessOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class EdgeInsets> /*non-null*/ paddingOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class EdgeInsets> /*nullable*/ maybePaddingOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class EdgeInsets> /*non-null*/ viewInsetsOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class EdgeInsets> /*nullable*/ maybeViewInsetsOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class EdgeInsets> /*non-null*/ systemGestureInsetsOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class EdgeInsets> /*nullable*/ maybeSystemGestureInsetsOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class EdgeInsets> /*non-null*/ viewPaddingOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class EdgeInsets> /*nullable*/ maybeViewPaddingOf(/*non-null*/ shptr<class BuildContext> context);
	static bool /*non-null*/ alwaysUse24HourFormatOf(/*non-null*/ shptr<class BuildContext> context);
	static stdop<bool> /*nullable*/ maybeAlwaysUse24HourFormatOf(/*non-null*/ shptr<class BuildContext> context);
	static bool /*non-null*/ accessibleNavigationOf(/*non-null*/ shptr<class BuildContext> context);
	static stdop<bool> /*nullable*/ maybeAccessibleNavigationOf(/*non-null*/ shptr<class BuildContext> context);
	static bool /*non-null*/ invertColorsOf(/*non-null*/ shptr<class BuildContext> context);
	static stdop<bool> /*nullable*/ maybeInvertColorsOf(/*non-null*/ shptr<class BuildContext> context);
	static bool /*non-null*/ highContrastOf(/*non-null*/ shptr<class BuildContext> context);
	static stdop<bool> /*nullable*/ maybeHighContrastOf(/*non-null*/ shptr<class BuildContext> context);
	static bool /*non-null*/ disableAnimationsOf(/*non-null*/ shptr<class BuildContext> context);
	static stdop<bool> /*nullable*/ maybeDisableAnimationsOf(/*non-null*/ shptr<class BuildContext> context);
	static bool /*non-null*/ boldTextOf(/*non-null*/ shptr<class BuildContext> context);
	static bool /*non-null*/ boldTextOverride(/*non-null*/ shptr<class BuildContext> context);
	static stdop<bool> /*nullable*/ maybeBoldTextOf(/*non-null*/ shptr<class BuildContext> context);
	static NavigationMode /*non-null*/ navigationModeOf(/*non-null*/ shptr<class BuildContext> context);
	static stdop<NavigationMode> /*nullable*/ maybeNavigationModeOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class DeviceGestureSettings> /*non-null*/ gestureSettingsOf(/*non-null*/ shptr<class BuildContext> context);
	static shptr<class DeviceGestureSettings> /*nullable*/ maybeGestureSettingsOf(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class MediaQuery> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class MediaQueryData> data;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class MediaQuery> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _removePadding
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class BuildContext> context;
		/*non-null*/ bool removeLeft = false;
		/*non-null*/ bool removeTop = false;
		/*non-null*/ bool removeRight = false;
		/*non-null*/ bool removeBottom = false;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class MediaQuery> /*non-null*/ removePadding(_removePadding p = {});
	struct _removeViewInsets
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class BuildContext> context;
		/*non-null*/ bool removeLeft = false;
		/*non-null*/ bool removeTop = false;
		/*non-null*/ bool removeRight = false;
		/*non-null*/ bool removeBottom = false;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class MediaQuery> /*non-null*/ removeViewInsets(_removeViewInsets p = {});
	struct _removeViewPadding
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class BuildContext> context;
		/*non-null*/ bool removeLeft = false;
		/*non-null*/ bool removeTop = false;
		/*non-null*/ bool removeRight = false;
		/*non-null*/ bool removeBottom = false;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class MediaQuery> /*non-null*/ removeViewPadding(_removeViewPadding p = {});
};

inline shptr<class MediaQuery> MediaQuery(MediaQuery::_ctorMain p = {}) {
	return MediaQuery::ctorMain(p);
}

class MediaQueryData : public ObjBase
{
public:
	shptr<class Size> /*var-non-null*/ size();
	double /*var-non-null*/ devicePixelRatio();
	double /*var-non-null*/ textScaleFactor();
	Brightness /*var-non-null*/ platformBrightness();
	shptr<class EdgeInsets> /*var-non-null*/ viewInsets();
	shptr<class EdgeInsets> /*var-non-null*/ padding();
	shptr<class EdgeInsets> /*var-non-null*/ viewPadding();
	shptr<class EdgeInsets> /*var-non-null*/ systemGestureInsets();
	bool /*var-non-null*/ alwaysUse24HourFormat();
	bool /*var-non-null*/ accessibleNavigation();
	bool /*var-non-null*/ invertColors();
	bool /*var-non-null*/ highContrast();
	bool /*var-non-null*/ disableAnimations();
	bool /*var-non-null*/ boldText();
	NavigationMode /*var-non-null*/ navigationMode();
	shptr<class DeviceGestureSettings> /*var-non-null*/ gestureSettings();
	Orientation /*get-non-null*/ orientation();
	struct _copyWith
	{
		/*nullable*/ shptr<class Size> size;
		/*nullable*/ stdop<double> devicePixelRatio;
		/*nullable*/ stdop<double> textScaleFactor;
		/*nullable*/ stdop<Brightness> platformBrightness;
		/*nullable*/ shptr<class EdgeInsets> padding;
		/*nullable*/ shptr<class EdgeInsets> viewPadding;
		/*nullable*/ shptr<class EdgeInsets> viewInsets;
		/*nullable*/ shptr<class EdgeInsets> systemGestureInsets;
		/*nullable*/ stdop<bool> alwaysUse24HourFormat;
		/*nullable*/ stdop<bool> highContrast;
		/*nullable*/ stdop<bool> disableAnimations;
		/*nullable*/ stdop<bool> invertColors;
		/*nullable*/ stdop<bool> accessibleNavigation;
		/*nullable*/ stdop<bool> boldText;
		/*nullable*/ stdop<NavigationMode> navigationMode;
		/*nullable*/ shptr<class DeviceGestureSettings> gestureSettings;
		/*nullable*/ stdop<stdvec<shptr<class DisplayFeature>>> displayFeatures;
	};
	shptr<class MediaQueryData> /*non-null*/ copyWith(_copyWith p = {});
	struct _removePadding
	{
		/*non-null*/ bool removeLeft = false;
		/*non-null*/ bool removeTop = false;
		/*non-null*/ bool removeRight = false;
		/*non-null*/ bool removeBottom = false;
	};
	shptr<class MediaQueryData> /*non-null*/ removePadding(_removePadding p = {});
	struct _removeViewInsets
	{
		/*non-null*/ bool removeLeft = false;
		/*non-null*/ bool removeTop = false;
		/*non-null*/ bool removeRight = false;
		/*non-null*/ bool removeBottom = false;
	};
	shptr<class MediaQueryData> /*non-null*/ removeViewInsets(_removeViewInsets p = {});
	struct _removeViewPadding
	{
		/*non-null*/ bool removeLeft = false;
		/*non-null*/ bool removeTop = false;
		/*non-null*/ bool removeRight = false;
		/*non-null*/ bool removeBottom = false;
	};
	shptr<class MediaQueryData> /*non-null*/ removeViewPadding(_removeViewPadding p = {});
	shptr<class MediaQueryData> /*non-null*/ removeDisplayFeatures(/*non-null*/ shptr<class Rect> subScreen);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _fromView
	{
		/*nullable*/ shptr<class MediaQueryData> platformData;
	};
	static shptr<class MediaQueryData> /*non-null*/ fromView(/*non-null*/ shptr<class FlutterView> view, _fromView p = {});
	static shptr<class MediaQueryData> /*non-null*/ fromWindow(/*non-null*/ shptr<class FlutterView> window);
};

class Spacer : public StatelessWidget
{
public:
	int64 /*var-non-null*/ flex();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ int64 flex = 1;
	};
	static shptr<class Spacer> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Spacer> Spacer(Spacer::_ctorMain p = {}) {
	return Spacer::ctorMain(p);
}

class SafeArea : public StatelessWidget
{
public:
	bool /*var-non-null*/ left();
	bool /*var-non-null*/ top();
	bool /*var-non-null*/ right();
	bool /*var-non-null*/ bottom();
	shptr<class EdgeInsets> /*var-non-null*/ minimum();
	bool /*var-non-null*/ maintainBottomViewPadding();
	shptr<class Widget> /*var-non-null*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool left = true;
		/*non-null*/ bool top = true;
		/*non-null*/ bool right = true;
		/*non-null*/ bool bottom = true;
		/*non-null*/ shptr<class EdgeInsets> minimum = EdgeInsets::zero();
		/*non-null*/ bool maintainBottomViewPadding = false;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class SafeArea> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SafeArea> SafeArea(SafeArea::_ctorMain p = {}) {
	return SafeArea::ctorMain(p);
}

class TapDownDetails : public ObjBase
{
public:
	shptr<class Offset> /*var-non-null*/ globalPosition();
	stdop<PointerDeviceKind> /*var-nullable*/ kind();
	shptr<class Offset> /*var-non-null*/ localPosition();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Offset> globalPosition = Offset::zero();
		/*nullable*/ shptr<class Offset> localPosition;
		/*nullable*/ stdop<PointerDeviceKind> kind;
	};
	static shptr<class TapDownDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TapDownDetails> TapDownDetails(TapDownDetails::_ctorMain p = {}) {
	return TapDownDetails::ctorMain(p);
}

class TapUpDetails : public ObjBase
{
public:
	shptr<class Offset> /*var-non-null*/ globalPosition();
	shptr<class Offset> /*var-non-null*/ localPosition();
	PointerDeviceKind /*var-non-null*/ kind();
	struct _ctorMain
	{
		/*non-null*/ PointerDeviceKind kind;
		/*non-null*/ shptr<class Offset> globalPosition = Offset::zero();
		/*nullable*/ shptr<class Offset> localPosition;
	};
	static shptr<class TapUpDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TapUpDetails> TapUpDetails(TapUpDetails::_ctorMain p = {}) {
	return TapUpDetails::ctorMain(p);
}

class LongPressDownDetails : public ObjBase
{
public:
	shptr<class Offset> /*var-non-null*/ globalPosition();
	stdop<PointerDeviceKind> /*var-nullable*/ kind();
	shptr<class Offset> /*var-non-null*/ localPosition();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Offset> globalPosition = Offset::zero();
		/*nullable*/ shptr<class Offset> localPosition;
		/*nullable*/ stdop<PointerDeviceKind> kind;
	};
	static shptr<class LongPressDownDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class LongPressDownDetails> LongPressDownDetails(LongPressDownDetails::_ctorMain p = {}) {
	return LongPressDownDetails::ctorMain(p);
}

class LongPressStartDetails : public ObjBase
{
public:
	shptr<class Offset> /*var-non-null*/ globalPosition();
	shptr<class Offset> /*var-non-null*/ localPosition();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Offset> globalPosition = Offset::zero();
		/*nullable*/ shptr<class Offset> localPosition;
	};
	static shptr<class LongPressStartDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class LongPressStartDetails> LongPressStartDetails(LongPressStartDetails::_ctorMain p = {}) {
	return LongPressStartDetails::ctorMain(p);
}

class LongPressMoveUpdateDetails : public ObjBase
{
public:
	shptr<class Offset> /*var-non-null*/ globalPosition();
	shptr<class Offset> /*var-non-null*/ localPosition();
	shptr<class Offset> /*var-non-null*/ offsetFromOrigin();
	shptr<class Offset> /*var-non-null*/ localOffsetFromOrigin();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Offset> globalPosition = Offset::zero();
		/*nullable*/ shptr<class Offset> localPosition;
		/*non-null*/ shptr<class Offset> offsetFromOrigin = Offset::zero();
		/*nullable*/ shptr<class Offset> localOffsetFromOrigin;
	};
	static shptr<class LongPressMoveUpdateDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class LongPressMoveUpdateDetails> LongPressMoveUpdateDetails(LongPressMoveUpdateDetails::_ctorMain p = {}) {
	return LongPressMoveUpdateDetails::ctorMain(p);
}

class LongPressEndDetails : public ObjBase
{
public:
	shptr<class Offset> /*var-non-null*/ globalPosition();
	shptr<class Offset> /*var-non-null*/ localPosition();
	shptr<class Velocity> /*var-non-null*/ velocity();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Offset> globalPosition = Offset::zero();
		/*nullable*/ shptr<class Offset> localPosition;
		/*non-null*/ shptr<class Velocity> velocity = Velocity::zero();
	};
	static shptr<class LongPressEndDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class LongPressEndDetails> LongPressEndDetails(LongPressEndDetails::_ctorMain p = {}) {
	return LongPressEndDetails::ctorMain(p);
}

class ForcePressDetails : public ObjBase
{
public:
	shptr<class Offset> /*var-non-null*/ globalPosition();
	shptr<class Offset> /*var-non-null*/ localPosition();
	double /*var-non-null*/ pressure();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Offset> globalPosition;
		/*nullable*/ shptr<class Offset> localPosition;
		/*non-null*/ double pressure;
	};
	static shptr<class ForcePressDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ForcePressDetails> ForcePressDetails(ForcePressDetails::_ctorMain p = {}) {
	return ForcePressDetails::ctorMain(p);
}

class DragDownDetails : public ObjBase
{
public:
	shptr<class Offset> /*var-non-null*/ globalPosition();
	shptr<class Offset> /*var-non-null*/ localPosition();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Offset> globalPosition = Offset::zero();
		/*nullable*/ shptr<class Offset> localPosition;
	};
	static shptr<class DragDownDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DragDownDetails> DragDownDetails(DragDownDetails::_ctorMain p = {}) {
	return DragDownDetails::ctorMain(p);
}

class DragStartDetails : public ObjBase
{
public:
	shptr<class Duration> /*var-nullable*/ sourceTimeStamp();
	shptr<class Offset> /*var-non-null*/ globalPosition();
	shptr<class Offset> /*var-non-null*/ localPosition();
	stdop<PointerDeviceKind> /*var-nullable*/ kind();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Duration> sourceTimeStamp;
		/*non-null*/ shptr<class Offset> globalPosition = Offset::zero();
		/*nullable*/ shptr<class Offset> localPosition;
		/*nullable*/ stdop<PointerDeviceKind> kind;
	};
	static shptr<class DragStartDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DragStartDetails> DragStartDetails(DragStartDetails::_ctorMain p = {}) {
	return DragStartDetails::ctorMain(p);
}

class DragUpdateDetails : public ObjBase
{
public:
	shptr<class Duration> /*var-nullable*/ sourceTimeStamp();
	shptr<class Offset> /*var-non-null*/ delta();
	stdop<double> /*var-nullable*/ primaryDelta();
	shptr<class Offset> /*var-non-null*/ globalPosition();
	shptr<class Offset> /*var-non-null*/ localPosition();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Duration> sourceTimeStamp;
		/*non-null*/ shptr<class Offset> delta = Offset::zero();
		/*nullable*/ stdop<double> primaryDelta;
		/*non-null*/ shptr<class Offset> globalPosition;
		/*nullable*/ shptr<class Offset> localPosition;
	};
	static shptr<class DragUpdateDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DragUpdateDetails> DragUpdateDetails(DragUpdateDetails::_ctorMain p = {}) {
	return DragUpdateDetails::ctorMain(p);
}

class DragEndDetails : public ObjBase
{
public:
	shptr<class Velocity> /*var-non-null*/ velocity();
	stdop<double> /*var-nullable*/ primaryVelocity();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Velocity> velocity = Velocity::zero();
		/*nullable*/ stdop<double> primaryVelocity;
	};
	static shptr<class DragEndDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DragEndDetails> DragEndDetails(DragEndDetails::_ctorMain p = {}) {
	return DragEndDetails::ctorMain(p);
}

class ScaleStartDetails : public ObjBase
{
public:
	shptr<class Offset> /*var-non-null*/ focalPoint();
	shptr<class Offset> /*var-non-null*/ localFocalPoint();
	int64 /*var-non-null*/ pointerCount();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Offset> focalPoint = Offset::zero();
		/*nullable*/ shptr<class Offset> localFocalPoint;
		/*non-null*/ int64 pointerCount = 0;
	};
	static shptr<class ScaleStartDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ScaleStartDetails> ScaleStartDetails(ScaleStartDetails::_ctorMain p = {}) {
	return ScaleStartDetails::ctorMain(p);
}

class ScaleEndDetails : public ObjBase
{
public:
	shptr<class Velocity> /*var-non-null*/ velocity();
	double /*var-non-null*/ scaleVelocity();
	int64 /*var-non-null*/ pointerCount();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Velocity> velocity = Velocity::zero();
		/*non-null*/ double scaleVelocity = 0.0;
		/*non-null*/ int64 pointerCount = 0;
	};
	static shptr<class ScaleEndDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ScaleEndDetails> ScaleEndDetails(ScaleEndDetails::_ctorMain p = {}) {
	return ScaleEndDetails::ctorMain(p);
}

class ScaleUpdateDetails : public ObjBase
{
public:
	shptr<class Offset> /*var-non-null*/ focalPointDelta();
	shptr<class Offset> /*var-non-null*/ focalPoint();
	shptr<class Offset> /*var-non-null*/ localFocalPoint();
	double /*var-non-null*/ scale();
	double /*var-non-null*/ horizontalScale();
	double /*var-non-null*/ verticalScale();
	double /*var-non-null*/ rotation();
	int64 /*var-non-null*/ pointerCount();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Offset> focalPoint = Offset::zero();
		/*nullable*/ shptr<class Offset> localFocalPoint;
		/*non-null*/ double scale = 1.0;
		/*non-null*/ double horizontalScale = 1.0;
		/*non-null*/ double verticalScale = 1.0;
		/*non-null*/ double rotation = 0.0;
		/*non-null*/ int64 pointerCount = 0;
		/*non-null*/ shptr<class Offset> focalPointDelta = Offset::zero();
	};
	static shptr<class ScaleUpdateDetails> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ScaleUpdateDetails> ScaleUpdateDetails(ScaleUpdateDetails::_ctorMain p = {}) {
	return ScaleUpdateDetails::ctorMain(p);
}

class GestureDetector : public StatelessWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	stdop<HitTestBehavior> /*var-nullable*/ behavior();
	bool /*var-non-null*/ excludeFromSemantics();
	DragStartBehavior /*var-non-null*/ dragStartBehavior();
	bool /*var-non-null*/ trackpadScrollCausesScale();
	shptr<class Offset> /*var-non-null*/ trackpadScrollToScaleFactor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void(shptr<class TapDownDetails>)> /*(TapDownDetails) -> void*/ onTapDown;
		/*nullable*/ stdfunc<void(shptr<class TapUpDetails>)> /*(TapUpDetails) -> void*/ onTapUp;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTap;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTapCancel;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onSecondaryTap;
		/*nullable*/ stdfunc<void(shptr<class TapDownDetails>)> /*(TapDownDetails) -> void*/ onSecondaryTapDown;
		/*nullable*/ stdfunc<void(shptr<class TapUpDetails>)> /*(TapUpDetails) -> void*/ onSecondaryTapUp;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onSecondaryTapCancel;
		/*nullable*/ stdfunc<void(shptr<class TapDownDetails>)> /*(TapDownDetails) -> void*/ onTertiaryTapDown;
		/*nullable*/ stdfunc<void(shptr<class TapUpDetails>)> /*(TapUpDetails) -> void*/ onTertiaryTapUp;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTertiaryTapCancel;
		/*nullable*/ stdfunc<void(shptr<class TapDownDetails>)> /*(TapDownDetails) -> void*/ onDoubleTapDown;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onDoubleTap;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onDoubleTapCancel;
		/*nullable*/ stdfunc<void(shptr<class LongPressDownDetails>)> /*(LongPressDownDetails) -> void*/ onLongPressDown;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPressCancel;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(shptr<class LongPressStartDetails>)> /*(LongPressStartDetails) -> void*/ onLongPressStart;
		/*nullable*/ stdfunc<void(shptr<class LongPressMoveUpdateDetails>)> /*(LongPressMoveUpdateDetails) -> void*/ onLongPressMoveUpdate;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPressUp;
		/*nullable*/ stdfunc<void(shptr<class LongPressEndDetails>)> /*(LongPressEndDetails) -> void*/ onLongPressEnd;
		/*nullable*/ stdfunc<void(shptr<class LongPressDownDetails>)> /*(LongPressDownDetails) -> void*/ onSecondaryLongPressDown;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onSecondaryLongPressCancel;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onSecondaryLongPress;
		/*nullable*/ stdfunc<void(shptr<class LongPressStartDetails>)> /*(LongPressStartDetails) -> void*/ onSecondaryLongPressStart;
		/*nullable*/ stdfunc<void(shptr<class LongPressMoveUpdateDetails>)> /*(LongPressMoveUpdateDetails) -> void*/ onSecondaryLongPressMoveUpdate;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onSecondaryLongPressUp;
		/*nullable*/ stdfunc<void(shptr<class LongPressEndDetails>)> /*(LongPressEndDetails) -> void*/ onSecondaryLongPressEnd;
		/*nullable*/ stdfunc<void(shptr<class LongPressDownDetails>)> /*(LongPressDownDetails) -> void*/ onTertiaryLongPressDown;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTertiaryLongPressCancel;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTertiaryLongPress;
		/*nullable*/ stdfunc<void(shptr<class LongPressStartDetails>)> /*(LongPressStartDetails) -> void*/ onTertiaryLongPressStart;
		/*nullable*/ stdfunc<void(shptr<class LongPressMoveUpdateDetails>)> /*(LongPressMoveUpdateDetails) -> void*/ onTertiaryLongPressMoveUpdate;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTertiaryLongPressUp;
		/*nullable*/ stdfunc<void(shptr<class LongPressEndDetails>)> /*(LongPressEndDetails) -> void*/ onTertiaryLongPressEnd;
		/*nullable*/ stdfunc<void(shptr<class DragDownDetails>)> /*(DragDownDetails) -> void*/ onVerticalDragDown;
		/*nullable*/ stdfunc<void(shptr<class DragStartDetails>)> /*(DragStartDetails) -> void*/ onVerticalDragStart;
		/*nullable*/ stdfunc<void(shptr<class DragUpdateDetails>)> /*(DragUpdateDetails) -> void*/ onVerticalDragUpdate;
		/*nullable*/ stdfunc<void(shptr<class DragEndDetails>)> /*(DragEndDetails) -> void*/ onVerticalDragEnd;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onVerticalDragCancel;
		/*nullable*/ stdfunc<void(shptr<class DragDownDetails>)> /*(DragDownDetails) -> void*/ onHorizontalDragDown;
		/*nullable*/ stdfunc<void(shptr<class DragStartDetails>)> /*(DragStartDetails) -> void*/ onHorizontalDragStart;
		/*nullable*/ stdfunc<void(shptr<class DragUpdateDetails>)> /*(DragUpdateDetails) -> void*/ onHorizontalDragUpdate;
		/*nullable*/ stdfunc<void(shptr<class DragEndDetails>)> /*(DragEndDetails) -> void*/ onHorizontalDragEnd;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onHorizontalDragCancel;
		/*nullable*/ stdfunc<void(shptr<class ForcePressDetails>)> /*(ForcePressDetails) -> void*/ onForcePressStart;
		/*nullable*/ stdfunc<void(shptr<class ForcePressDetails>)> /*(ForcePressDetails) -> void*/ onForcePressPeak;
		/*nullable*/ stdfunc<void(shptr<class ForcePressDetails>)> /*(ForcePressDetails) -> void*/ onForcePressUpdate;
		/*nullable*/ stdfunc<void(shptr<class ForcePressDetails>)> /*(ForcePressDetails) -> void*/ onForcePressEnd;
		/*nullable*/ stdfunc<void(shptr<class DragDownDetails>)> /*(DragDownDetails) -> void*/ onPanDown;
		/*nullable*/ stdfunc<void(shptr<class DragStartDetails>)> /*(DragStartDetails) -> void*/ onPanStart;
		/*nullable*/ stdfunc<void(shptr<class DragUpdateDetails>)> /*(DragUpdateDetails) -> void*/ onPanUpdate;
		/*nullable*/ stdfunc<void(shptr<class DragEndDetails>)> /*(DragEndDetails) -> void*/ onPanEnd;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onPanCancel;
		/*nullable*/ stdfunc<void(shptr<class ScaleStartDetails>)> /*(ScaleStartDetails) -> void*/ onScaleStart;
		/*nullable*/ stdfunc<void(shptr<class ScaleUpdateDetails>)> /*(ScaleUpdateDetails) -> void*/ onScaleUpdate;
		/*nullable*/ stdfunc<void(shptr<class ScaleEndDetails>)> /*(ScaleEndDetails) -> void*/ onScaleEnd;
		/*nullable*/ stdop<HitTestBehavior> behavior;
		/*non-null*/ bool excludeFromSemantics = false;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ bool trackpadScrollCausesScale = false;
		/*non-null*/ shptr<class Offset> trackpadScrollToScaleFactor = Offset(0.0, -0.0);
//		/*nullable*/ shptr<class Set<PointerDeviceKind>> supportedDevices;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class GestureDetector> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class GestureDetector> GestureDetector(GestureDetector::_ctorMain p = {}) {
	return GestureDetector::ctorMain(p);
}

class MouseRegion : public SingleChildRenderObjectWidget
{
public:
	shptr<class MouseCursor> /*var-non-null*/ cursor();
	bool /*var-non-null*/ opaque();
	stdop<HitTestBehavior> /*var-nullable*/ hitTestBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdfunc<void(shptr<class PointerEnterEvent>)> /*(PointerEnterEvent) -> void*/ onEnter;
		/*nullable*/ stdfunc<void(shptr<class PointerExitEvent>)> /*(PointerExitEvent) -> void*/ onExit;
		/*nullable*/ stdfunc<void(shptr<class PointerHoverEvent>)> /*(PointerHoverEvent) -> void*/ onHover;
//		/*non-null*/ shptr<class MouseCursor> cursor = defer;
		/*non-null*/ bool opaque = true;
		/*nullable*/ stdop<HitTestBehavior> hitTestBehavior;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class MouseRegion> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MouseRegion> MouseRegion(MouseRegion::_ctorMain p = {}) {
	return MouseRegion::ctorMain(p);
}

class FocusableActionDetector : public StatefulWidget
{
public:
	bool /*var-non-null*/ enabled();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	bool /*var-non-null*/ descendantsAreFocusable();
	bool /*var-non-null*/ descendantsAreTraversable();
	shptr<class MouseCursor> /*var-non-null*/ mouseCursor();
	bool /*var-non-null*/ includeFocusSemantics();
	shptr<class Widget> /*var-non-null*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool enabled = true;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*non-null*/ bool descendantsAreFocusable = true;
		/*non-null*/ bool descendantsAreTraversable = true;
//		/*nullable*/ shptr<class Map<shptr<class ShortcutActivator>, shptr<class Intent>>> shortcuts;
//		/*nullable*/ shptr<class Map<shptr<class Type>, shptr<class Action<shptr<class Intent>>>>> actions;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onShowFocusHighlight;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onShowHoverHighlight;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
//		/*non-null*/ shptr<class MouseCursor> mouseCursor = defer;
		/*non-null*/ bool includeFocusSemantics = true;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class FocusableActionDetector> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class FocusableActionDetector> FocusableActionDetector(FocusableActionDetector::_ctorMain p = {}) {
	return FocusableActionDetector::ctorMain(p);
}

class Stack : public MultiChildRenderObjectWidget
{
public:
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	stdop<TextDirection> /*var-nullable*/ textDirection();
	StackFit /*var-non-null*/ fit();
	Clip /*var-non-null*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = AlignmentDirectional::topStart();
		/*nullable*/ stdop<TextDirection> textDirection;
		/*non-null*/ StackFit fit = StackFit_loose;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class Stack> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Stack> Stack(Stack::_ctorMain p = {}) {
	return Stack::ctorMain(p);
}

class Positioned : public ParentDataWidget
{
public:
	stdop<double> /*var-nullable*/ left();
	stdop<double> /*var-nullable*/ top();
	stdop<double> /*var-nullable*/ right();
	stdop<double> /*var-nullable*/ bottom();
	stdop<double> /*var-nullable*/ width();
	stdop<double> /*var-nullable*/ height();
	void applyParentData(/*non-null*/ shptr<class RenderObject> renderObject);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> left;
		/*nullable*/ stdop<double> top;
		/*nullable*/ stdop<double> right;
		/*nullable*/ stdop<double> bottom;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Positioned> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _fromRect
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Rect> rect;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Positioned> /*non-null*/ fromRect(_fromRect p = {});
	struct _fromRelativeRect
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class RelativeRect> rect;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Positioned> /*non-null*/ fromRelativeRect(_fromRelativeRect p = {});
	struct _fill
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> left = 0.0;
		/*nullable*/ stdop<double> top = 0.0;
		/*nullable*/ stdop<double> right = 0.0;
		/*nullable*/ stdop<double> bottom = 0.0;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Positioned> /*non-null*/ fill(_fill p = {});
	struct _directional
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ TextDirection textDirection;
		/*nullable*/ stdop<double> start;
		/*nullable*/ stdop<double> top;
		/*nullable*/ stdop<double> end;
		/*nullable*/ stdop<double> bottom;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Positioned> /*non-null*/ directional(_directional p = {});
};

inline shptr<class Positioned> Positioned(Positioned::_ctorMain p = {}) {
	return Positioned::ctorMain(p);
}

class SliverToBoxAdapter : public SingleChildRenderObjectWidget
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class SliverToBoxAdapter> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SliverToBoxAdapter> SliverToBoxAdapter(SliverToBoxAdapter::_ctorMain p = {}) {
	return SliverToBoxAdapter::ctorMain(p);
}

class SliverPadding : public SingleChildRenderObjectWidget
{
public:
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ padding();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Widget> sliver;
	};
	static shptr<class SliverPadding> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SliverPadding> SliverPadding(SliverPadding::_ctorMain p = {}) {
	return SliverPadding::ctorMain(p);
}

class PreferredSize : public StatelessWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	shptr<class Size> /*var-non-null*/ preferredSize();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Size> preferredSize;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class PreferredSize> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class PreferredSize> PreferredSize(PreferredSize::_ctorMain p = {}) {
	return PreferredSize::ctorMain(p);
}

class Opacity : public SingleChildRenderObjectWidget
{
public:
	double /*var-non-null*/ opacity();
	bool /*var-non-null*/ alwaysIncludeSemantics();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double opacity;
		/*non-null*/ bool alwaysIncludeSemantics = false;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Opacity> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Opacity> Opacity(Opacity::_ctorMain p = {}) {
	return Opacity::ctorMain(p);
}

class SliverOpacity : public SingleChildRenderObjectWidget
{
public:
	double /*var-non-null*/ opacity();
	bool /*var-non-null*/ alwaysIncludeSemantics();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double opacity;
		/*non-null*/ bool alwaysIncludeSemantics = false;
		/*nullable*/ shptr<class Widget> sliver;
	};
	static shptr<class SliverOpacity> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SliverOpacity> SliverOpacity(SliverOpacity::_ctorMain p = {}) {
	return SliverOpacity::ctorMain(p);
}

class Offstage : public SingleChildRenderObjectWidget
{
public:
	bool /*var-non-null*/ offstage();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool offstage = true;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Offstage> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Offstage> Offstage(Offstage::_ctorMain p = {}) {
	return Offstage::ctorMain(p);
}

class SliverOffstage : public SingleChildRenderObjectWidget
{
public:
	bool /*var-non-null*/ offstage();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool offstage = true;
		/*nullable*/ shptr<class Widget> sliver;
	};
	static shptr<class SliverOffstage> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SliverOffstage> SliverOffstage(SliverOffstage::_ctorMain p = {}) {
	return SliverOffstage::ctorMain(p);
}

class RepaintBoundary : public SingleChildRenderObjectWidget
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class RepaintBoundary> /*non-null*/ ctorMain(_ctorMain p = {});
	static shptr<class RepaintBoundary> /*non-null*/ wrap(/*non-null*/ shptr<class Widget> child, /*non-null*/ int64 childIndex);
};

inline shptr<class RepaintBoundary> RepaintBoundary(RepaintBoundary::_ctorMain p = {}) {
	return RepaintBoundary::ctorMain(p);
}

class AbsorbPointer : public SingleChildRenderObjectWidget
{
public:
	bool /*var-non-null*/ absorbing();
	stdop<bool> /*var-nullable*/ ignoringSemantics();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool absorbing = true;
		/*nullable*/ stdop<bool> ignoringSemantics;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AbsorbPointer> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AbsorbPointer> AbsorbPointer(AbsorbPointer::_ctorMain p = {}) {
	return AbsorbPointer::ctorMain(p);
}

class IgnorePointer : public SingleChildRenderObjectWidget
{
public:
	bool /*var-non-null*/ ignoring();
	stdop<bool> /*var-nullable*/ ignoringSemantics();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool ignoring = true;
		/*nullable*/ stdop<bool> ignoringSemantics;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class IgnorePointer> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class IgnorePointer> IgnorePointer(IgnorePointer::_ctorMain p = {}) {
	return IgnorePointer::ctorMain(p);
}

class SliverIgnorePointer : public SingleChildRenderObjectWidget
{
public:
	bool /*var-non-null*/ ignoring();
	stdop<bool> /*var-nullable*/ ignoringSemantics();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool ignoring = true;
		/*nullable*/ stdop<bool> ignoringSemantics;
		/*nullable*/ shptr<class Widget> sliver;
	};
	static shptr<class SliverIgnorePointer> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SliverIgnorePointer> SliverIgnorePointer(SliverIgnorePointer::_ctorMain p = {}) {
	return SliverIgnorePointer::ctorMain(p);
}

class Navigator : public ObjBase
{
public:
	static void push(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Route> route, /*nullable*/ stdfunc<void()> onComplete = nullptr);
	static bool /*non-null*/ canPop(/*non-null*/ shptr<class BuildContext> context);
	static void pop(/*non-null*/ shptr<class BuildContext> context);
};

class MaterialPageRoute : public PageRoute
{
public:
	struct _ctorMain
	{
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ builder;
		/*nullable*/ shptr<class RouteSettings> settings;
		/*non-null*/ bool maintainState = true;
		/*non-null*/ bool fullscreenDialog = false;
		/*non-null*/ bool allowSnapshotting = true;
	};
	static shptr<class MaterialPageRoute> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class MaterialPageRoute> MaterialPageRoute(MaterialPageRoute::_ctorMain p = {}) {
	return MaterialPageRoute::ctorMain(p);
}

class CupertinoPageRoute : public PageRoute
{
public:
	struct _ctorMain
	{
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ builder;
		/*nullable*/ stdop<stdstr> title;
		/*nullable*/ shptr<class RouteSettings> settings;
		/*non-null*/ bool maintainState = true;
		/*non-null*/ bool fullscreenDialog = false;
		/*non-null*/ bool allowSnapshotting = true;
	};
	static shptr<class CupertinoPageRoute> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CupertinoPageRoute> CupertinoPageRoute(CupertinoPageRoute::_ctorMain p = {}) {
	return CupertinoPageRoute::ctorMain(p);
}

class PageRouteBuilder : public PageRoute
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class RouteSettings> settings;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Animation<double>>, shptr<class Animation<double>>)> /*(BuildContext, Animation, Animation) -> Widget*/ pageBuilder;
//		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Animation<double>>, shptr<class Animation<double>>, shptr<class Widget>)> transitionsBuilder;
		/*non-null*/ shptr<class Duration> transitionDuration = Duration({ .milliseconds = 300 });
		/*non-null*/ shptr<class Duration> reverseTransitionDuration = Duration({ .milliseconds = 300 });
		/*non-null*/ bool opaque = true;
		/*non-null*/ bool barrierDismissible = false;
		/*nullable*/ shptr<class Color> barrierColor;
		/*nullable*/ stdop<stdstr> barrierLabel;
		/*non-null*/ bool maintainState = true;
		/*non-null*/ bool fullscreenDialog = false;
		/*non-null*/ bool allowSnapshotting = true;
	};
	static shptr<class PageRouteBuilder> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class PageRouteBuilder> PageRouteBuilder(PageRouteBuilder::_ctorMain p = {}) {
	return PageRouteBuilder::ctorMain(p);
}

class ConstrainedBox : public SingleChildRenderObjectWidget
{
public:
	shptr<class BoxConstraints> /*var-non-null*/ constraints();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class BoxConstraints> constraints;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class ConstrainedBox> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ConstrainedBox> ConstrainedBox(ConstrainedBox::_ctorMain p = {}) {
	return ConstrainedBox::ctorMain(p);
}

class LimitedBox : public SingleChildRenderObjectWidget
{
public:
	double /*var-non-null*/ maxWidth();
	double /*var-non-null*/ maxHeight();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double maxWidth = double_infinity;
		/*non-null*/ double maxHeight = double_infinity;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class LimitedBox> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class LimitedBox> LimitedBox(LimitedBox::_ctorMain p = {}) {
	return LimitedBox::ctorMain(p);
}

class OverflowBox : public SingleChildRenderObjectWidget
{
public:
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	stdop<double> /*var-nullable*/ minWidth();
	stdop<double> /*var-nullable*/ maxWidth();
	stdop<double> /*var-nullable*/ minHeight();
	stdop<double> /*var-nullable*/ maxHeight();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*nullable*/ stdop<double> minWidth;
		/*nullable*/ stdop<double> maxWidth;
		/*nullable*/ stdop<double> minHeight;
		/*nullable*/ stdop<double> maxHeight;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class OverflowBox> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class OverflowBox> OverflowBox(OverflowBox::_ctorMain p = {}) {
	return OverflowBox::ctorMain(p);
}

class FittedBox : public SingleChildRenderObjectWidget
{
public:
	BoxFit /*var-non-null*/ fit();
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	Clip /*var-non-null*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ BoxFit fit = BoxFit_contain;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class FittedBox> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class FittedBox> FittedBox(FittedBox::_ctorMain p = {}) {
	return FittedBox::ctorMain(p);
}

class FractionalTranslation : public SingleChildRenderObjectWidget
{
public:
	shptr<class Offset> /*var-non-null*/ translation();
	bool /*var-non-null*/ transformHitTests();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Offset> translation;
		/*non-null*/ bool transformHitTests = true;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class FractionalTranslation> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class FractionalTranslation> FractionalTranslation(FractionalTranslation::_ctorMain p = {}) {
	return FractionalTranslation::ctorMain(p);
}

class FractionallySizedBox : public SingleChildRenderObjectWidget
{
public:
	stdop<double> /*var-nullable*/ widthFactor();
	stdop<double> /*var-nullable*/ heightFactor();
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*nullable*/ stdop<double> widthFactor;
		/*nullable*/ stdop<double> heightFactor;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class FractionallySizedBox> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class FractionallySizedBox> FractionallySizedBox(FractionallySizedBox::_ctorMain p = {}) {
	return FractionallySizedBox::ctorMain(p);
}

class Builder : public StatelessWidget
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ builder;
	};
	static shptr<class Builder> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Builder> Builder(Builder::_ctorMain p = {}) {
	return Builder::ctorMain(p);
}

class LayoutBuilder : public ConstrainedLayoutBuilder
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class BoxConstraints>)> builder;
	};
	static shptr<class LayoutBuilder> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class LayoutBuilder> LayoutBuilder(LayoutBuilder::_ctorMain p = {}) {
	return LayoutBuilder::ctorMain(p);
}

class IndexedStack : public StatelessWidget
{
public:
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	stdop<TextDirection> /*var-nullable*/ textDirection();
	Clip /*var-non-null*/ clipBehavior();
	StackFit /*var-non-null*/ sizing();
	stdop<int64> /*var-nullable*/ index();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = AlignmentDirectional::topStart();
		/*nullable*/ stdop<TextDirection> textDirection;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*non-null*/ StackFit sizing = StackFit_loose;
		/*nullable*/ stdop<int64> index = 0;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class IndexedStack> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class IndexedStack> IndexedStack(IndexedStack::_ctorMain p = {}) {
	return IndexedStack::ctorMain(p);
}

class OverflowBar : public MultiChildRenderObjectWidget
{
public:
	double /*var-non-null*/ spacing();
	stdop<MainAxisAlignment> /*var-nullable*/ alignment();
	double /*var-non-null*/ overflowSpacing();
	OverflowBarAlignment /*var-non-null*/ overflowAlignment();
	VerticalDirection /*var-non-null*/ overflowDirection();
	stdop<TextDirection> /*var-nullable*/ textDirection();
	Clip /*var-non-null*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double spacing = 0.0;
		/*nullable*/ stdop<MainAxisAlignment> alignment;
		/*non-null*/ double overflowSpacing = 0.0;
		/*non-null*/ OverflowBarAlignment overflowAlignment = OverflowBarAlignment_start;
		/*non-null*/ VerticalDirection overflowDirection = VerticalDirection_down;
		/*nullable*/ stdop<TextDirection> textDirection;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class OverflowBar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class OverflowBar> OverflowBar(OverflowBar::_ctorMain p = {}) {
	return OverflowBar::ctorMain(p);
}

class PhysicalModel : public SingleChildRenderObjectWidget
{
public:
	BoxShape /*var-non-null*/ shape();
	Clip /*var-non-null*/ clipBehavior();
	shptr<class BorderRadius> /*var-nullable*/ borderRadius();
	double /*var-non-null*/ elevation();
	shptr<class Color> /*var-non-null*/ color();
	shptr<class Color> /*var-non-null*/ shadowColor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ BoxShape shape = BoxShape_rectangle;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class BorderRadius> borderRadius;
		/*non-null*/ double elevation = 0.0;
		/*non-null*/ shptr<class Color> color;
		/*non-null*/ shptr<class Color> shadowColor = Color(0xff000000);
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class PhysicalModel> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class PhysicalModel> PhysicalModel(PhysicalModel::_ctorMain p = {}) {
	return PhysicalModel::ctorMain(p);
}

class ShaderMask : public SingleChildRenderObjectWidget
{
public:
	BlendMode /*var-non-null*/ blendMode();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdfunc<shptr<class Shader>(shptr<class Rect>)> shaderCallback;
		/*non-null*/ BlendMode blendMode = BlendMode_modulate;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class ShaderMask> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ShaderMask> ShaderMask(ShaderMask::_ctorMain p = {}) {
	return ShaderMask::ctorMain(p);
}

class Visibility : public StatelessWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	shptr<class Widget> /*var-non-null*/ replacement();
	bool /*var-non-null*/ visible();
	bool /*var-non-null*/ maintainState();
	bool /*var-non-null*/ maintainAnimation();
	bool /*var-non-null*/ maintainSize();
	bool /*var-non-null*/ maintainSemantics();
	bool /*var-non-null*/ maintainInteractivity();
	static bool /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Widget> replacement = SizedBox::shrink();
		/*non-null*/ bool visible = true;
		/*non-null*/ bool maintainState = false;
		/*non-null*/ bool maintainAnimation = false;
		/*non-null*/ bool maintainSize = false;
		/*non-null*/ bool maintainSemantics = false;
		/*non-null*/ bool maintainInteractivity = false;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Visibility> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _maintain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool visible = true;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Visibility> /*non-null*/ maintain(_maintain p = {});
};

inline shptr<class Visibility> Visibility(Visibility::_ctorMain p = {}) {
	return Visibility::ctorMain(p);
}

class Wrap : public MultiChildRenderObjectWidget
{
public:
	Axis /*var-non-null*/ direction();
	WrapAlignment /*var-non-null*/ alignment();
	double /*var-non-null*/ spacing();
	WrapAlignment /*var-non-null*/ runAlignment();
	double /*var-non-null*/ runSpacing();
	WrapCrossAlignment /*var-non-null*/ crossAxisAlignment();
	stdop<TextDirection> /*var-nullable*/ textDirection();
	VerticalDirection /*var-non-null*/ verticalDirection();
	Clip /*var-non-null*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis direction = Axis_horizontal;
		/*non-null*/ WrapAlignment alignment = WrapAlignment_start;
		/*non-null*/ double spacing = 0.0;
		/*non-null*/ WrapAlignment runAlignment = WrapAlignment_start;
		/*non-null*/ double runSpacing = 0.0;
		/*non-null*/ WrapCrossAlignment crossAxisAlignment = WrapCrossAlignment_start;
		/*nullable*/ stdop<TextDirection> textDirection;
		/*non-null*/ VerticalDirection verticalDirection = VerticalDirection_down;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class Wrap> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Wrap> Wrap(Wrap::_ctorMain p = {}) {
	return Wrap::ctorMain(p);
}

