#pragma once

class Matrix4 : public ObjBase {};
class Iterable : public ObjBase {};
class NativeFieldWrapperClass1 : public ObjBase {};
class StackTrace : public ObjBase {};
class ParametricCurve : public ObjBase {};
class Listenable : public ObjBase {};
class ValueListenable : public Listenable {};
class ChangeNotifier : public Listenable {};
class ObstructingPreferredSizeWidget : public PreferredSizeWidget {};
class GestureArenaMember : public ObjBase {};
class HitTestEntry : public ObjBase {};
class HitTestTarget : public ObjBase {};
class DeviceGestureSettings : public ObjBase {};
class FloatingActionButtonAnimator : public ObjBase {};
class InteractiveInkFeatureFactory : public ObjBase {};
class MaterialInkController : public ObjBase {};
class RangeSliderThumbShape : public ObjBase {};
class SliderTrackShape : public ObjBase {};
class SliderComponentShape : public ObjBase {};
class RangeSliderTickMarkShape : public ObjBase {};
class RangeSliderTrackShape : public ObjBase {};
class RangeSliderValueIndicatorShape : public ObjBase {};
class SliderTickMarkShape : public ObjBase {};
class TextAlignVertical : public ObjBase {};
class BorderRadiusGeometry : public ObjBase {};
class ShapeBorder : public ObjBase {};
class OutlinedBorder : public ShapeBorder {};
class BoxBorder : public ShapeBorder {};
class BoxPainter : public ObjBase {};
class DecorationImagePainter : public ObjBase {};
class EdgeInsetsGeometry : public ObjBase {};
class EdgeInsetsDirectional : public EdgeInsetsGeometry {};
class GradientTransform : public ObjBase {};
class ImageProvider : public ObjBase {};
class Accumulator : public ObjBase {};
class InlineSpanSemanticsInformation : public ObjBase {};
class NotchedShape : public ObjBase {};
class Simulation : public ObjBase {};
class SpringDescription : public ObjBase {};
class Tolerance : public ObjBase {};
class RenderObject : public HitTestTarget {};
class Constraints : public ObjBase {};
class SelectionRegistrar : public ObjBase {};
class SliverConstraints : public Constraints {};
class SliverGridLayout : public ObjBase {};
class SliverGridDelegate : public ObjBase {};
class RelativeRect : public ObjBase {};
class TableBorder : public ObjBase {};
class ViewportOffset : public ChangeNotifier {};
class TickerProvider : public ObjBase {};
class AssetBundle : public ObjBase {};
class SystemUiOverlayStyle : public ObjBase {};
class TextInputFormatter : public ObjBase {};
class TextInputType : public ObjBase {};
class TextEditingValue : public ObjBase {};
class DismissUpdateDetails : public ObjBase {};
class ContentInsertionConfiguration : public ObjBase {};
class ToolbarOptions : public ObjBase {};
class ListWheelChildDelegate : public ObjBase {};
class TextMagnifierConfiguration : public ObjBase {};
class Route : public ObjBase {};
class RouteSettings : public ObjBase {};
class NavigatorObserver : public ObjBase {};
class Notification : public ObjBase {};
class LayoutChangedNotification : public Notification {};
class ScrollContext : public ObjBase {};
class SliverChildDelegate : public ObjBase {};
class ScrollMetrics : public ObjBase {};
class ScrollableDetails : public ObjBase {};
class SpellCheckConfiguration : public ObjBase {};
class TextSelectionControls : public ObjBase {};
class OffsetBase : public ObjBase {};
class TextRange : public ObjBase {};
class Paint : public ObjBase {};
class FlutterView : public ObjBase {};
class TextPosition : public ObjBase {};
class DisplayFeature : public ObjBase {};
class ParagraphStyle : public ObjBase {};
class FontFeature : public ObjBase {};
class TextHeightBehavior : public ObjBase {};
class RRect : public ObjBase {};
class FontVariation : public ObjBase {};
class TextDecoration : public ObjBase {};
class Locale : public ObjBase {};
class ViewPadding : public ObjBase {};
class ValueNotifier : public ChangeNotifier {};
class TextSelection : public TextRange {};
class HeroController : public NavigatorObserver {};
template <class T> class Animation : public ValueListenable {};
class AnimationController : public Animation<double> {};
class Curve : public ParametricCurve {};
class ElasticInCurve : public Curve {};
class Cubic : public Curve {};
class ElasticOutCurve : public Curve {};
class ThreePointCubic : public Curve {};
class ElasticInOutCurve : public Curve {};
class OverlayRoute : public Route {};
class TransitionRoute : public OverlayRoute {};
class ModalRoute : public TransitionRoute {};
class PageRoute : public ModalRoute {};
class InlineSpan : public DiagnosticableTree {};
class PlaceholderSpan : public InlineSpan {};
class SingleChildRenderObjectWidget : public RenderObjectWidget {};
class ImplicitlyAnimatedWidget : public StatefulWidget {};
class ConstrainedLayoutBuilder : public RenderObjectWidget {};
class ScrollView : public StatelessWidget {};
class BoxScrollView : public ScrollView {};
class SliverWithKeepAliveWidget : public RenderObjectWidget {};
class SliverMultiBoxAdaptorWidget : public SliverWithKeepAliveWidget {};
class AnimatedWidget : public StatefulWidget {};
class ListenableBuilder : public AnimatedWidget {};
class ButtonStyleButton : public StatefulWidget {};
class PopupMenuEntry : public StatefulWidget {};
class ProgressIndicator : public StatefulWidget {};
class MultiChildRenderObjectWidget : public RenderObjectWidget {};
class Flex : public MultiChildRenderObjectWidget {};
class GestureRecognizer : public GestureArenaMember {};
class PointerEvent : public ObjBase {};
class PointerHoverEvent : public PointerEvent {};
class PointerExitEvent : public PointerEvent {};
class PointerDownEvent : public PointerEvent {};
class PointerEnterEvent : public PointerEvent {};
class MouseCursor : public ObjBase {};
class MaterialStatesController : public ValueNotifier {};
class PageTransitionsTheme : public ObjBase {};
class Decoration : public ObjBase {};
class VisualDensity : public ObjBase {};
class Typography : public ObjBase {};
class ImageChunkEvent : public ObjBase {};
class KeyboardKey : public ObjBase {};
class LogicalKeyboardKey : public KeyboardKey {};
class Intent : public ObjBase {};
class EditableTextState : public State<ObjBase> {};
class FocusNode : public ObjBase {};
class TransformationController : public ValueNotifier {};
class RouteInformationProvider : public ValueListenable {};
class BackButtonDispatcher : public ObjBase {};
class ScrollNotification : public LayoutChangedNotification {};
class ScrollPosition : public ViewportOffset {};
class UndoHistoryController : public ValueNotifier {};
class Shader : public NativeFieldWrapperClass1 {};
class PathMetrics : public Iterable {};
class num : public ObjBase {};
class Float64List : public ObjBase {};
class StringBuffer : public ObjBase {};
class FixedExtentScrollController : public ObjBase {};
class Adapter : public ObjBase {};
class Effect : public ObjBase {};