#pragma once

class Container : public StatelessWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class AlignmentGeometry> /*var-nullable*/ alignment();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Decoration> /*var-nullable*/ decoration();
	shptr<class Decoration> /*var-nullable*/ foregroundDecoration();
	shptr<class BoxConstraints> /*var-nullable*/ constraints();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ margin();
	shptr<class Matrix4> /*var-nullable*/ transform();
	shptr<class AlignmentGeometry> /*var-nullable*/ transformAlignment();
	Clip /*var-non-null*/ clipBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Decoration> decoration;
		/*nullable*/ shptr<class Decoration> foregroundDecoration;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class BoxConstraints> constraints;
		/*nullable*/ shptr<class EdgeInsetsGeometry> margin;
		/*nullable*/ shptr<class Matrix4> transform;
		/*nullable*/ shptr<class AlignmentGeometry> transformAlignment;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Container> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Container> Container(Container::_ctorMain p = {}) {
	return Container::ctorMain(p);
}

class Text : public StatelessWidget
{
public:
	stdop<stdstr> /*var-nullable*/ data();
	shptr<class InlineSpan> /*var-nullable*/ textSpan();
	shptr<class TextStyle> /*var-nullable*/ style();
	shptr<class StrutStyle> /*var-nullable*/ strutStyle();
	stdop<TextAlign> /*var-nullable*/ textAlign();
	stdop<TextDirection> /*var-nullable*/ textDirection();
	shptr<class Locale> /*var-nullable*/ locale();
	stdop<bool> /*var-nullable*/ softWrap();
	stdop<TextOverflow> /*var-nullable*/ overflow();
	stdop<double> /*var-nullable*/ textScaleFactor();
	stdop<int64> /*var-nullable*/ maxLines();
	stdop<stdstr> /*var-nullable*/ semanticsLabel();
	stdop<TextWidthBasis> /*var-nullable*/ textWidthBasis();
	shptr<class TextHeightBehavior> /*var-nullable*/ textHeightBehavior();
	shptr<class Color> /*var-nullable*/ selectionColor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class TextStyle> style;
		/*nullable*/ shptr<class StrutStyle> strutStyle;
		/*nullable*/ stdop<TextAlign> textAlign;
		/*nullable*/ stdop<TextDirection> textDirection;
		/*nullable*/ shptr<class Locale> locale;
		/*nullable*/ stdop<bool> softWrap;
		/*nullable*/ stdop<TextOverflow> overflow;
		/*nullable*/ stdop<double> textScaleFactor;
		/*nullable*/ stdop<int64> maxLines;
		/*nullable*/ stdop<stdstr> semanticsLabel;
		/*nullable*/ stdop<TextWidthBasis> textWidthBasis;
		/*nullable*/ shptr<class TextHeightBehavior> textHeightBehavior;
		/*nullable*/ shptr<class Color> selectionColor;
	};
	static shptr<class Text> /*non-null*/ ctorMain(/*non-null*/ stdstr data, _ctorMain p = {});
	struct _rich
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class TextStyle> style;
		/*nullable*/ shptr<class StrutStyle> strutStyle;
		/*nullable*/ stdop<TextAlign> textAlign;
		/*nullable*/ stdop<TextDirection> textDirection;
		/*nullable*/ shptr<class Locale> locale;
		/*nullable*/ stdop<bool> softWrap;
		/*nullable*/ stdop<TextOverflow> overflow;
		/*nullable*/ stdop<double> textScaleFactor;
		/*nullable*/ stdop<int64> maxLines;
		/*nullable*/ stdop<stdstr> semanticsLabel;
		/*nullable*/ stdop<TextWidthBasis> textWidthBasis;
		/*nullable*/ shptr<class TextHeightBehavior> textHeightBehavior;
		/*nullable*/ shptr<class Color> selectionColor;
	};
	static shptr<class Text> /*non-null*/ rich(/*non-null*/ shptr<class InlineSpan> textSpan, _rich p = {});
};

inline shptr<class Text> Text(/*non-null*/ stdstr data, Text::_ctorMain p = {}) {
	return Text::ctorMain(data, p);
}

class RichText : public MultiChildRenderObjectWidget
{
public:
	shptr<class InlineSpan> /*var-non-null*/ text();
	TextAlign /*var-non-null*/ textAlign();
	stdop<TextDirection> /*var-nullable*/ textDirection();
	bool /*var-non-null*/ softWrap();
	TextOverflow /*var-non-null*/ overflow();
	double /*var-non-null*/ textScaleFactor();
	stdop<int64> /*var-nullable*/ maxLines();
	shptr<class Locale> /*var-nullable*/ locale();
	shptr<class StrutStyle> /*var-nullable*/ strutStyle();
	TextWidthBasis /*var-non-null*/ textWidthBasis();
	shptr<class TextHeightBehavior> /*var-nullable*/ textHeightBehavior();
	shptr<class SelectionRegistrar> /*var-nullable*/ selectionRegistrar();
	shptr<class Color> /*var-nullable*/ selectionColor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class InlineSpan> text;
		/*non-null*/ TextAlign textAlign = TextAlign_start;
		/*nullable*/ stdop<TextDirection> textDirection;
		/*non-null*/ bool softWrap = true;
		/*non-null*/ TextOverflow overflow = TextOverflow_clip;
		/*non-null*/ double textScaleFactor = 1.0;
		/*nullable*/ stdop<int64> maxLines;
		/*nullable*/ shptr<class Locale> locale;
		/*nullable*/ shptr<class StrutStyle> strutStyle;
		/*non-null*/ TextWidthBasis textWidthBasis = TextWidthBasis_parent;
		/*nullable*/ shptr<class TextHeightBehavior> textHeightBehavior;
		/*nullable*/ shptr<class SelectionRegistrar> selectionRegistrar;
		/*nullable*/ shptr<class Color> selectionColor;
	};
	static shptr<class RichText> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class RichText> RichText(RichText::_ctorMain p = {}) {
	return RichText::ctorMain(p);
}

class Image : public StatefulWidget
{
public:
	stdop<double> /*var-nullable*/ width();
	stdop<double> /*var-nullable*/ height();
	shptr<class Color> /*var-nullable*/ color();
	FilterQuality /*var-non-null*/ filterQuality();
	stdop<BlendMode> /*var-nullable*/ colorBlendMode();
	stdop<BoxFit> /*var-nullable*/ fit();
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	ImageRepeat /*var-non-null*/ repeat();
	shptr<class Rect> /*var-nullable*/ centerSlice();
	bool /*var-non-null*/ matchTextDirection();
	bool /*var-non-null*/ gaplessPlayback();
	stdop<stdstr> /*var-nullable*/ semanticLabel();
	bool /*var-non-null*/ excludeFromSemantics();
	bool /*var-non-null*/ isAntiAlias();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ImageProvider> image;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Widget>, int64, bool)> /*(BuildContext, Widget, int, bool) -> Widget*/ frameBuilder;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Widget>, shptr<class ImageChunkEvent>)> /*(BuildContext, Widget, ImageChunkEvent) -> Widget*/ loadingBuilder;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class ObjBase>, shptr<class StackTrace>)> /*(BuildContext, ObjBase, StackTrace) -> Widget*/ errorBuilder;
		/*nullable*/ stdop<stdstr> semanticLabel;
		/*non-null*/ bool excludeFromSemantics = false;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Color> color;
//		/*nullable*/ shptr<class Animation<double>> opacity;
		/*nullable*/ stdop<BlendMode> colorBlendMode;
		/*nullable*/ stdop<BoxFit> fit;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*non-null*/ ImageRepeat repeat = ImageRepeat_noRepeat;
		/*nullable*/ shptr<class Rect> centerSlice;
		/*non-null*/ bool matchTextDirection = false;
		/*non-null*/ bool gaplessPlayback = false;
		/*non-null*/ bool isAntiAlias = false;
		/*non-null*/ FilterQuality filterQuality = FilterQuality_low;
	};
	static shptr<class Image> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _file
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double scale = 1.0;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Widget>, int64, bool)> /*(BuildContext, Widget, int, bool) -> Widget*/ frameBuilder;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class ObjBase>, shptr<class StackTrace>)> /*(BuildContext, ObjBase, StackTrace) -> Widget*/ errorBuilder;
		/*nullable*/ stdop<stdstr> semanticLabel;
		/*non-null*/ bool excludeFromSemantics = false;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Color> color;
//		/*nullable*/ shptr<class Animation<double>> opacity;
		/*nullable*/ stdop<BlendMode> colorBlendMode;
		/*nullable*/ stdop<BoxFit> fit;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*non-null*/ ImageRepeat repeat = ImageRepeat_noRepeat;
		/*nullable*/ shptr<class Rect> centerSlice;
		/*non-null*/ bool matchTextDirection = false;
		/*non-null*/ bool gaplessPlayback = false;
		/*non-null*/ bool isAntiAlias = false;
		/*non-null*/ FilterQuality filterQuality = FilterQuality_low;
		/*nullable*/ stdop<int64> cacheWidth;
		/*nullable*/ stdop<int64> cacheHeight;
	};
	static shptr<class Image> /*non-null*/ file(/*non-null*/ stdstr file, _file p = {});
	struct _asset
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class AssetBundle> bundle;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Widget>, int64, bool)> /*(BuildContext, Widget, int, bool) -> Widget*/ frameBuilder;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class ObjBase>, shptr<class StackTrace>)> /*(BuildContext, ObjBase, StackTrace) -> Widget*/ errorBuilder;
		/*nullable*/ stdop<stdstr> semanticLabel;
		/*non-null*/ bool excludeFromSemantics = false;
		/*nullable*/ stdop<double> scale;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Color> color;
//		/*nullable*/ shptr<class Animation<double>> opacity;
		/*nullable*/ stdop<BlendMode> colorBlendMode;
		/*nullable*/ stdop<BoxFit> fit;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*non-null*/ ImageRepeat repeat = ImageRepeat_noRepeat;
		/*nullable*/ shptr<class Rect> centerSlice;
		/*non-null*/ bool matchTextDirection = false;
		/*non-null*/ bool gaplessPlayback = false;
		/*non-null*/ bool isAntiAlias = false;
		/*nullable*/ stdop<stdstr> package;
		/*non-null*/ FilterQuality filterQuality = FilterQuality_low;
		/*nullable*/ stdop<int64> cacheWidth;
		/*nullable*/ stdop<int64> cacheHeight;
	};
	static shptr<class Image> /*non-null*/ asset(/*non-null*/ stdstr name, _asset p = {});
	struct _memory
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double scale = 1.0;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Widget>, int64, bool)> /*(BuildContext, Widget, int, bool) -> Widget*/ frameBuilder;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class ObjBase>, shptr<class StackTrace>)> /*(BuildContext, ObjBase, StackTrace) -> Widget*/ errorBuilder;
		/*nullable*/ stdop<stdstr> semanticLabel;
		/*non-null*/ bool excludeFromSemantics = false;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class Color> color;
//		/*nullable*/ shptr<class Animation<double>> opacity;
		/*nullable*/ stdop<BlendMode> colorBlendMode;
		/*nullable*/ stdop<BoxFit> fit;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*non-null*/ ImageRepeat repeat = ImageRepeat_noRepeat;
		/*nullable*/ shptr<class Rect> centerSlice;
		/*non-null*/ bool matchTextDirection = false;
		/*non-null*/ bool gaplessPlayback = false;
		/*non-null*/ bool isAntiAlias = false;
		/*non-null*/ FilterQuality filterQuality = FilterQuality_low;
		/*nullable*/ stdop<int64> cacheWidth;
		/*nullable*/ stdop<int64> cacheHeight;
	};
	static shptr<class Image> /*non-null*/ memory(/*non-null*/ shptr<class Uint8List> bytes, _memory p = {});
};

inline shptr<class Image> Image(Image::_ctorMain p = {}) {
	return Image::ctorMain(p);
}

class Hero : public StatefulWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	bool /*var-non-null*/ transitionOnUserGestures();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdstr tag;
//		/*nullable*/ stdfunc<shptr<class Tween<shptr<class Rect>>>(shptr<class Rect>, shptr<class Rect>)> /*(dart.ui.Rect, dart.ui.Rect) -> Tween*/ createRectTween;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Animation<double>>, HeroFlightDirection, shptr<class BuildContext>, shptr<class BuildContext>)> /*(BuildContext, Animation, HeroFlightDirection, BuildContext, BuildContext) -> Widget*/ flightShuttleBuilder;
//		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Size>, shptr<class Widget>)> /*(BuildContext, dart.ui.Size, Widget) -> Widget*/ placeholderBuilder;
		/*non-null*/ bool transitionOnUserGestures = false;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Hero> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Hero> Hero(Hero::_ctorMain p = {}) {
	return Hero::ctorMain(p);
}

class TextSpan : public InlineSpan
{
public:
	stdop<stdstr> /*var-nullable*/ text();
	shptr<class GestureRecognizer> /*var-nullable*/ recognizer();
	shptr<class MouseCursor> /*var-non-null*/ mouseCursor();
	stdop<stdstr> /*var-nullable*/ semanticsLabel();
	shptr<class Locale> /*var-nullable*/ locale();
	stdop<bool> /*var-nullable*/ spellOut();
	shptr<class MouseCursor> /*get-non-null*/ cursor();
	bool /*get-non-null*/ validForMouseTracker();
	void handleEvent(/*non-null*/ shptr<class PointerEvent> event, /*non-null*/ shptr<class HitTestEntry> entry);
	bool /*non-null*/ visitChildren(/*non-null*/ stdfunc<bool(shptr<class InlineSpan>)> /*(InlineSpan) -> bool*/ visitor);
	bool /*non-null*/ visitDirectChildren(/*non-null*/ stdfunc<bool(shptr<class InlineSpan>)> /*(InlineSpan) -> bool*/ visitor);
	shptr<class InlineSpan> /*nullable*/ getSpanForPositionVisitor(/*non-null*/ shptr<class TextPosition> position, /*non-null*/ shptr<class Accumulator> offset);
	struct _computeToPlainText
	{
		/*non-null*/ bool includeSemanticsLabels = true;
		/*non-null*/ bool includePlaceholders = true;
	};
	void computeToPlainText(/*non-null*/ shptr<class StringBuffer> buffer, _computeToPlainText p = {});
	struct _computeSemanticsInformation
	{
		/*nullable*/ shptr<class Locale> inheritedLocale;
		/*non-null*/ bool inheritedSpellOut = false;
	};
	void computeSemanticsInformation(/*non-null*/ stdvec<shptr<class InlineSpanSemanticsInformation>> collector, _computeSemanticsInformation p = {});
	stdop<int64> /*nullable*/ codeUnitAtVisitor(/*non-null*/ int64 index, /*non-null*/ shptr<class Accumulator> offset);
	void describeSemantics(/*non-null*/ shptr<class Accumulator> offset, /*non-null*/ stdvec<int64> semanticsOffsets, /*non-null*/ stdvec<shptr<class ObjBase>> semanticsElements);
	RenderComparison /*non-null*/ compareTo(/*non-null*/ shptr<class InlineSpan> other);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	stdstr /*non-null*/ toStringShort();
	struct _ctorMain
	{
		/*nullable*/ stdop<stdstr> text;
		/*nullable*/ shptr<class TextStyle> style;
		/*nullable*/ shptr<class GestureRecognizer> recognizer;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*nullable*/ stdfunc<void(shptr<class PointerEnterEvent>)> /*(PointerEnterEvent) -> void*/ onEnter;
		/*nullable*/ stdfunc<void(shptr<class PointerExitEvent>)> /*(PointerExitEvent) -> void*/ onExit;
		/*nullable*/ stdop<stdstr> semanticsLabel;
		/*nullable*/ shptr<class Locale> locale;
		/*nullable*/ stdop<bool> spellOut;
		/*nullable*/ stdop<stdvec<shptr<class InlineSpan>>> children;
	};
	static shptr<class TextSpan> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TextSpan> TextSpan(TextSpan::_ctorMain p = {}) {
	return TextSpan::ctorMain(p);
}

class WidgetSpan : public PlaceholderSpan
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	bool /*non-null*/ visitChildren(/*non-null*/ stdfunc<bool(shptr<class InlineSpan>)> /*(InlineSpan) -> bool*/ visitor);
	bool /*non-null*/ visitDirectChildren(/*non-null*/ stdfunc<bool(shptr<class InlineSpan>)> /*(InlineSpan) -> bool*/ visitor);
	shptr<class InlineSpan> /*nullable*/ getSpanForPositionVisitor(/*non-null*/ shptr<class TextPosition> position, /*non-null*/ shptr<class Accumulator> offset);
	stdop<int64> /*nullable*/ codeUnitAtVisitor(/*non-null*/ int64 index, /*non-null*/ shptr<class Accumulator> offset);
	RenderComparison /*non-null*/ compareTo(/*non-null*/ shptr<class InlineSpan> other);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	shptr<class InlineSpan> /*nullable*/ getSpanForPosition(/*non-null*/ shptr<class TextPosition> position);
	struct _ctorMain
	{
		/*non-null*/ PlaceholderAlignment alignment = PlaceholderAlignment_bottom;
		/*nullable*/ stdop<TextBaseline> baseline;
		/*nullable*/ shptr<class TextStyle> style;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class WidgetSpan> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class WidgetSpan> WidgetSpan(WidgetSpan::_ctorMain p = {}) {
	return WidgetSpan::ctorMain(p);
}

class BackdropFilter : public SingleChildRenderObjectWidget
{
public:
	shptr<class ImageFilter> /*var-non-null*/ filter();
	BlendMode /*var-non-null*/ blendMode();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ImageFilter> filter;
		/*non-null*/ BlendMode blendMode = BlendMode_srcOver;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class BackdropFilter> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BackdropFilter> BackdropFilter(BackdropFilter::_ctorMain p = {}) {
	return BackdropFilter::ctorMain(p);
}

class ImageFiltered : public SingleChildRenderObjectWidget
{
public:
	shptr<class ImageFilter> /*var-non-null*/ imageFilter();
	bool /*var-non-null*/ enabled();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ImageFilter> imageFilter;
		/*non-null*/ bool enabled = true;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class ImageFiltered> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ImageFiltered> ImageFiltered(ImageFiltered::_ctorMain p = {}) {
	return ImageFiltered::ctorMain(p);
}

class Transform : public SingleChildRenderObjectWidget
{
public:
	shptr<class Matrix4> /*var-non-null*/ transform();
	shptr<class Offset> /*var-nullable*/ origin();
	shptr<class AlignmentGeometry> /*var-nullable*/ alignment();
	bool /*var-non-null*/ transformHitTests();
	stdop<FilterQuality> /*var-nullable*/ filterQuality();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Matrix4> transform;
		/*nullable*/ shptr<class Offset> origin;
		/*nullable*/ shptr<class AlignmentGeometry> alignment;
		/*non-null*/ bool transformHitTests = true;
		/*nullable*/ stdop<FilterQuality> filterQuality;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Transform> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _rotate
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double angle;
		/*nullable*/ shptr<class Offset> origin;
		/*nullable*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*non-null*/ bool transformHitTests = true;
		/*nullable*/ stdop<FilterQuality> filterQuality;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Transform> /*non-null*/ rotate(_rotate p = {});
	struct _translate
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Offset> offset;
		/*non-null*/ bool transformHitTests = true;
		/*nullable*/ stdop<FilterQuality> filterQuality;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Transform> /*non-null*/ translate(_translate p = {});
	struct _scale
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> scale;
		/*nullable*/ stdop<double> scaleX;
		/*nullable*/ stdop<double> scaleY;
		/*nullable*/ shptr<class Offset> origin;
		/*nullable*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*non-null*/ bool transformHitTests = true;
		/*nullable*/ stdop<FilterQuality> filterQuality;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Transform> /*non-null*/ scale(_scale p = {});
	struct _flip
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool flipX = false;
		/*non-null*/ bool flipY = false;
		/*nullable*/ shptr<class Offset> origin;
		/*non-null*/ bool transformHitTests = true;
		/*nullable*/ stdop<FilterQuality> filterQuality;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class Transform> /*non-null*/ flip(_flip p = {});
};

inline shptr<class Transform> Transform(Transform::_ctorMain p = {}) {
	return Transform::ctorMain(p);
}

class Divider : public StatelessWidget
{
public:
	stdop<double> /*var-nullable*/ height();
	stdop<double> /*var-nullable*/ thickness();
	stdop<double> /*var-nullable*/ indent();
	stdop<double> /*var-nullable*/ endIndent();
	shptr<class Color> /*var-nullable*/ color();
	struct _createBorderSide
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<double> width;
	};
	static shptr<class BorderSide> /*non-null*/ createBorderSide(/*nullable*/ shptr<class BuildContext> context, _createBorderSide p = {});
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> height;
		/*nullable*/ stdop<double> thickness;
		/*nullable*/ stdop<double> indent;
		/*nullable*/ stdop<double> endIndent;
		/*nullable*/ shptr<class Color> color;
	};
	static shptr<class Divider> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Divider> Divider(Divider::_ctorMain p = {}) {
	return Divider::ctorMain(p);
}

class VerticalDivider : public StatelessWidget
{
public:
	stdop<double> /*var-nullable*/ width();
	stdop<double> /*var-nullable*/ thickness();
	stdop<double> /*var-nullable*/ indent();
	stdop<double> /*var-nullable*/ endIndent();
	shptr<class Color> /*var-nullable*/ color();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> thickness;
		/*nullable*/ stdop<double> indent;
		/*nullable*/ stdop<double> endIndent;
		/*nullable*/ shptr<class Color> color;
	};
	static shptr<class VerticalDivider> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class VerticalDivider> VerticalDivider(VerticalDivider::_ctorMain p = {}) {
	return VerticalDivider::ctorMain(p);
}

class GridPaper : public StatelessWidget
{
public:
	shptr<class Color> /*var-non-null*/ color();
	double /*var-non-null*/ interval();
	int64 /*var-non-null*/ divisions();
	int64 /*var-non-null*/ subdivisions();
	shptr<class Widget> /*var-nullable*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Color> color = Color(0x7fc3e8f3);
		/*non-null*/ double interval = 100.0;
		/*non-null*/ int64 divisions = 2;
		/*non-null*/ int64 subdivisions = 5;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class GridPaper> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class GridPaper> GridPaper(GridPaper::_ctorMain p = {}) {
	return GridPaper::ctorMain(p);
}

class InteractiveViewer : public StatefulWidget
{
public:
	shptr<class Alignment> /*var-nullable*/ alignment();
	Clip /*var-non-null*/ clipBehavior();
	bool /*var-non-null*/ alignPanAxis();
	PanAxis /*var-non-null*/ panAxis();
	shptr<class EdgeInsets> /*var-non-null*/ boundaryMargin();
	shptr<class Widget> /*var-nullable*/ child();
	bool /*var-non-null*/ constrained();
	bool /*var-non-null*/ panEnabled();
	bool /*var-non-null*/ scaleEnabled();
	bool /*var-non-null*/ trackpadScrollCausesScale();
	double /*var-non-null*/ scaleFactor();
	double /*var-non-null*/ maxScale();
	double /*var-non-null*/ minScale();
	double /*var-non-null*/ interactionEndFrictionCoefficient();
	shptr<class TransformationController> /*var-nullable*/ transformationController();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*non-null*/ bool alignPanAxis = false;
		/*non-null*/ PanAxis panAxis = PanAxis_free;
		/*non-null*/ shptr<class EdgeInsets> boundaryMargin = EdgeInsets::zero();
		/*non-null*/ bool constrained = true;
		/*non-null*/ double maxScale = 2.5;
		/*non-null*/ double minScale = 0.8;
		/*non-null*/ double interactionEndFrictionCoefficient = 0.0000135;
		/*nullable*/ stdfunc<void(shptr<class ScaleEndDetails>)> /*(ScaleEndDetails) -> void*/ onInteractionEnd;
		/*nullable*/ stdfunc<void(shptr<class ScaleStartDetails>)> /*(ScaleStartDetails) -> void*/ onInteractionStart;
		/*nullable*/ stdfunc<void(shptr<class ScaleUpdateDetails>)> /*(ScaleUpdateDetails) -> void*/ onInteractionUpdate;
		/*non-null*/ bool panEnabled = true;
		/*non-null*/ bool scaleEnabled = true;
		/*non-null*/ double scaleFactor = 200.0;
		/*nullable*/ shptr<class TransformationController> transformationController;
		/*nullable*/ shptr<class Alignment> alignment;
		/*non-null*/ bool trackpadScrollCausesScale = false;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class InteractiveViewer> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class InteractiveViewer> InteractiveViewer(InteractiveViewer::_ctorMain p = {}) {
	return InteractiveViewer::ctorMain(p);
}

struct KeyboardContextMenuBuilder
{
	/*nullable*/ stdop<double> fontSize;
	/*nullable*/ shptr<class Color> fontColor;
	/*nullable*/ shptr<class Color> backgroundColor;
	/*non-null*/ bool multiline = false;
	/*nullable*/ stdfunc<void(stdstr)> /*(String) -> void*/ onSubmit;
	/*non-null*/ stdvec<stdstr> hints;
};
shptr<class Widget> /*non-null*/ keyboardContextMenuBuilder(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class EditableTextState> editableTextState, KeyboardContextMenuBuilder p = {});

struct ShowAboutDialog
{
	/*non-null*/ shptr<class BuildContext> context;
	/*nullable*/ stdop<stdstr> applicationName;
	/*nullable*/ stdop<stdstr> applicationVersion;
	/*nullable*/ shptr<class Widget> applicationIcon;
	/*nullable*/ stdop<stdstr> applicationLegalese;
	/*non-null*/ bool useRootNavigator = false;
	/*nullable*/ shptr<class RouteSettings> routeSettings;
	/*nullable*/ shptr<class Offset> anchorPoint;
	/*nullable*/ stdop<stdvec<shptr<class Widget>>> children;
};
void showAboutDialog(ShowAboutDialog p = {});

struct ShowAdaptiveDialog
{
	/*non-null*/ shptr<class BuildContext> context;
	/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ builder;
	/*nullable*/ stdop<bool> barrierDismissible;
	/*nullable*/ shptr<class Color> barrierColor = Color(0x8a000000);
	/*nullable*/ stdop<stdstr> barrierLabel;
	/*non-null*/ bool useSafeArea = true;
	/*non-null*/ bool useRootNavigator = false;
	/*nullable*/ shptr<class RouteSettings> routeSettings;
	/*nullable*/ shptr<class Offset> anchorPoint;
	/*nullable*/ stdop<TraversalEdgeBehavior> traversalEdgeBehavior;
	/*nullable*/ stdfunc<void()> onComplete;
};
void showAdaptiveDialog(ShowAdaptiveDialog p = {});

struct ShowBottomSheet
{
	/*non-null*/ shptr<class BuildContext> context;
	/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ builder;
	/*nullable*/ shptr<class Color> backgroundColor;
	/*nullable*/ stdop<double> elevation;
	/*nullable*/ shptr<class ShapeBorder> shape;
	/*nullable*/ stdop<Clip> clipBehavior;
	/*nullable*/ shptr<class BoxConstraints> constraints;
	/*nullable*/ stdop<bool> enableDrag;
	/*nullable*/ shptr<class AnimationController> transitionAnimationController;
	/*nullable*/ stdfunc<void()> onComplete;
};
void showBottomSheet(ShowBottomSheet p = {});

struct ShowCupertinoDialog
{
	/*non-null*/ shptr<class BuildContext> context;
	/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ builder;
	/*nullable*/ stdop<stdstr> barrierLabel;
	/*non-null*/ bool useRootNavigator = false;
	/*non-null*/ bool barrierDismissible = false;
	/*nullable*/ shptr<class RouteSettings> routeSettings;
	/*nullable*/ shptr<class Offset> anchorPoint;
	/*nullable*/ stdfunc<void()> onComplete;
};
void showCupertinoDialog(ShowCupertinoDialog p = {});

struct ShowCupertinoModalPopup
{
	/*non-null*/ shptr<class BuildContext> context;
	/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ builder;
	/*nullable*/ shptr<class ImageFilter> filter;
	/*non-null*/ shptr<class Color> barrierColor = CupertinoDynamicColor::withBrightness({ .color = Color(0x33000000), .darkColor = Color(0x7A000000) });
	/*non-null*/ bool barrierDismissible = true;
	/*non-null*/ bool useRootNavigator = false;
	/*non-null*/ bool semanticsDismissible = false;
	/*nullable*/ shptr<class RouteSettings> routeSettings;
	/*nullable*/ shptr<class Offset> anchorPoint;
	/*nullable*/ stdfunc<void()> onComplete;
};
void showCupertinoModalPopup(ShowCupertinoModalPopup p = {});

struct ShowDatePicker
{
	/*non-null*/ shptr<class BuildContext> context;
	/*non-null*/ shptr<class DateTime> initialDate;
	/*non-null*/ shptr<class DateTime> firstDate;
	/*non-null*/ shptr<class DateTime> lastDate;
	/*nullable*/ shptr<class DateTime> currentDate;
	/*non-null*/ DatePickerEntryMode initialEntryMode = DatePickerEntryMode_calendar;
	/*nullable*/ stdfunc<bool(shptr<class DateTime>)> /*(DateTime) -> bool*/ selectableDayPredicate;
	/*nullable*/ stdop<stdstr> helpText;
	/*nullable*/ stdop<stdstr> cancelText;
	/*nullable*/ stdop<stdstr> confirmText;
	/*nullable*/ shptr<class Locale> locale;
	/*non-null*/ bool useRootNavigator = false;
	/*nullable*/ shptr<class RouteSettings> routeSettings;
	/*nullable*/ stdop<TextDirection> textDirection;
	/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Widget>)> /*(BuildContext, Widget) -> Widget*/ builder;
	/*non-null*/ DatePickerMode initialDatePickerMode = DatePickerMode_day;
	/*nullable*/ stdop<stdstr> errorFormatText;
	/*nullable*/ stdop<stdstr> errorInvalidText;
	/*nullable*/ stdop<stdstr> fieldHintText;
	/*nullable*/ stdop<stdstr> fieldLabelText;
	/*nullable*/ shptr<class TextInputType> keyboardType;
	/*nullable*/ shptr<class Offset> anchorPoint;
//	/*nullable*/ stdfunc<void(DatePickerEntryMode)> /*(DatePickerEntryMode) -> void*/ onDatePickerModeChange;
	/*nullable*/ shptr<class Icon> switchToInputEntryModeIcon;
	/*nullable*/ shptr<class Icon> switchToCalendarEntryModeIcon;
	/*non-null*/ stdfunc<void(shptr<class DateTime>)> /*(DateTime) -> void*/ onResult;
};
void showDatePicker(ShowDatePicker p = {});

struct ShowDialog
{
	/*non-null*/ shptr<class BuildContext> context;
	/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ builder;
	/*non-null*/ bool barrierDismissible = true;
	/*nullable*/ shptr<class Color> barrierColor = Color(0x8a000000);
	/*nullable*/ stdop<stdstr> barrierLabel;
	/*non-null*/ bool useSafeArea = true;
	/*non-null*/ bool useRootNavigator = false;
	/*nullable*/ shptr<class RouteSettings> routeSettings;
	/*nullable*/ shptr<class Offset> anchorPoint;
	/*nullable*/ stdop<TraversalEdgeBehavior> traversalEdgeBehavior;
	/*nullable*/ stdfunc<void()> onComplete;
};
void showDialog(ShowDialog p = {});

struct ShowGeneralDialog
{
	/*non-null*/ shptr<class BuildContext> context;
	/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Animation<double>>, shptr<class Animation<double>>)> pageBuilder;
	/*non-null*/ bool barrierDismissible = false;
	/*nullable*/ stdop<stdstr> barrierLabel;
	/*non-null*/ shptr<class Color> barrierColor = Color(0x80000000);
	/*non-null*/ shptr<class Duration> transitionDuration = Duration({.milliseconds = 200 });
//	/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Animation<double>>, shptr<class Animation<double>>, shptr<class Widget>)> transitionBuilder;
	/*non-null*/ bool useRootNavigator = false;
	/*nullable*/ shptr<class RouteSettings> routeSettings;
	/*nullable*/ shptr<class Offset> anchorPoint;
	/*nullable*/ stdfunc<void()> onComplete;
};
void showGeneralDialog(ShowGeneralDialog p = {});

struct ShowMenu
{
	/*non-null*/ shptr<class BuildContext> context;
	/*non-null*/ shptr<class RelativeRect> position;
	/*non-null*/ stdvec<shptr<class PopupMenuEntry>> items;
	/*nullable*/ stdop<int64> initialValue;
	/*nullable*/ stdop<double> elevation;
	/*nullable*/ shptr<class Color> shadowColor;
	/*nullable*/ shptr<class Color> surfaceTintColor;
	/*nullable*/ stdop<stdstr> semanticLabel;
	/*nullable*/ shptr<class ShapeBorder> shape;
	/*nullable*/ shptr<class Color> color;
	/*non-null*/ bool useRootNavigator = false;
	/*nullable*/ shptr<class BoxConstraints> constraints;
	/*non-null*/ Clip clipBehavior = Clip_none;
	/*nullable*/ shptr<class RouteSettings> routeSettings;
	/*nullable*/ stdfunc<void()> onComplete;
};
void showMenu(ShowMenu p = {});

struct ShowModalBottomSheet
{
	/*non-null*/ shptr<class BuildContext> context;
	/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ builder;
	/*nullable*/ shptr<class Color> backgroundColor;
	/*nullable*/ stdop<stdstr> barrierLabel;
	/*nullable*/ stdop<double> elevation;
	/*nullable*/ shptr<class ShapeBorder> shape;
	/*nullable*/ stdop<Clip> clipBehavior;
	/*nullable*/ shptr<class BoxConstraints> constraints;
	/*nullable*/ shptr<class Color> barrierColor;
	/*non-null*/ bool isScrollControlled = false;
	/*non-null*/ bool useRootNavigator = false;
	/*non-null*/ bool isDismissible = true;
	/*non-null*/ bool enableDrag = true;
	/*nullable*/ stdop<bool> showDragHandle;
	/*non-null*/ bool useSafeArea = false;
	/*nullable*/ shptr<class RouteSettings> routeSettings;
	/*nullable*/ shptr<class AnimationController> transitionAnimationController;
	/*nullable*/ shptr<class Offset> anchorPoint;
	/*nullable*/ stdfunc<void()> onComplete;
};
void showModalBottomSheet(ShowModalBottomSheet p = {});

struct ShowTimePicker
{	
	/*non-null*/ shptr<class BuildContext> context;
	/*non-null*/ shptr<class TimeOfDay> initialTime;
	/*nullable*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Widget>)> /*(BuildContext, Widget) -> Widget*/ builder;
	/*non-null*/ bool useRootNavigator = false;
	/*non-null*/ TimePickerEntryMode initialEntryMode = TimePickerEntryMode_dial;
	/*nullable*/ stdop<stdstr> cancelText;
	/*nullable*/ stdop<stdstr> confirmText;
	/*nullable*/ stdop<stdstr> helpText;
	/*nullable*/ stdop<stdstr> errorInvalidText;
	/*nullable*/ stdop<stdstr> hourLabelText;
	/*nullable*/ stdop<stdstr> minuteLabelText;
	/*nullable*/ shptr<class RouteSettings> routeSettings;
//	/*nullable*/ stdfunc<void(TimePickerEntryMode)> /*(TimePickerEntryMode) -> void*/ onEntryModeChanged;
	/*nullable*/ shptr<class Offset> anchorPoint;
	/*nullable*/ stdop<Orientation> orientation;
	/*non-null*/ stdfunc<void(shptr<class TimeOfDay>)> /*(TimeOfDay) -> void*/ onResult;
};
void showTimePicker(ShowTimePicker p = {});

