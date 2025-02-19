#pragma once

class ScrollPhysics : public ObjBase
{
public:
	shptr<class ScrollPhysics> /*var-nullable*/ parent();
	shptr<class SpringDescription> /*get-non-null*/ spring();
	shptr<class Tolerance> /*get-non-null*/ tolerance();
	double /*get-non-null*/ minFlingDistance();
	double /*get-non-null*/ minFlingVelocity();
	double /*get-non-null*/ maxFlingVelocity();
	stdop<double> /*get-nullable*/ dragStartDistanceMotionThreshold();
	bool /*get-non-null*/ allowImplicitScrolling();
	bool /*get-non-null*/ allowUserScrolling();
	shptr<class ScrollPhysics> /*non-null*/ applyTo(/*nullable*/ shptr<class ScrollPhysics> ancestor);
	double /*non-null*/ applyPhysicsToUserOffset(/*non-null*/ shptr<class ScrollMetrics> position, /*non-null*/ double offset);
	bool /*non-null*/ shouldAcceptUserOffset(/*non-null*/ shptr<class ScrollMetrics> position);
	bool /*non-null*/ recommendDeferredLoading(/*non-null*/ double velocity, /*non-null*/ shptr<class ScrollMetrics> metrics, /*non-null*/ shptr<class BuildContext> context);
	double /*non-null*/ applyBoundaryConditions(/*non-null*/ shptr<class ScrollMetrics> position, /*non-null*/ double value);
	struct _adjustPositionForNewDimensions
	{
		/*non-null*/ shptr<class ScrollMetrics> oldPosition;
		/*non-null*/ shptr<class ScrollMetrics> newPosition;
		/*non-null*/ bool isScrolling;
		/*non-null*/ double velocity;
	};
	double /*non-null*/ adjustPositionForNewDimensions(_adjustPositionForNewDimensions p = {});
	shptr<class Simulation> /*nullable*/ createBallisticSimulation(/*non-null*/ shptr<class ScrollMetrics> position, /*non-null*/ double velocity);
	shptr<class Tolerance> /*non-null*/ toleranceFor(/*non-null*/ shptr<class ScrollMetrics> metrics);
	double /*non-null*/ carriedMomentum(/*non-null*/ double existingVelocity);
	struct _ctorMain
	{
		/*nullable*/ shptr<class ScrollPhysics> parent;
	};
	static shptr<class ScrollPhysics> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ScrollPhysics> ScrollPhysics(ScrollPhysics::_ctorMain p = {}) {
	return ScrollPhysics::ctorMain(p);
}

class RangeMaintainingScrollPhysics : public ScrollPhysics
{
public:
	shptr<class RangeMaintainingScrollPhysics> /*non-null*/ applyTo(/*nullable*/ shptr<class ScrollPhysics> ancestor);
	struct _adjustPositionForNewDimensions
	{
		/*non-null*/ shptr<class ScrollMetrics> oldPosition;
		/*non-null*/ shptr<class ScrollMetrics> newPosition;
		/*non-null*/ bool isScrolling;
		/*non-null*/ double velocity;
	};
	double /*non-null*/ adjustPositionForNewDimensions(_adjustPositionForNewDimensions p = {});
	struct _ctorMain
	{
		/*nullable*/ shptr<class ScrollPhysics> parent;
	};
	static shptr<class RangeMaintainingScrollPhysics> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class RangeMaintainingScrollPhysics> RangeMaintainingScrollPhysics(RangeMaintainingScrollPhysics::_ctorMain p = {}) {
	return RangeMaintainingScrollPhysics::ctorMain(p);
}

class ClampingScrollPhysics : public ScrollPhysics
{
public:
	shptr<class ClampingScrollPhysics> /*non-null*/ applyTo(/*nullable*/ shptr<class ScrollPhysics> ancestor);
	double /*non-null*/ applyBoundaryConditions(/*non-null*/ shptr<class ScrollMetrics> position, /*non-null*/ double value);
	shptr<class Simulation> /*nullable*/ createBallisticSimulation(/*non-null*/ shptr<class ScrollMetrics> position, /*non-null*/ double velocity);
	struct _ctorMain
	{
		/*nullable*/ shptr<class ScrollPhysics> parent;
	};
	static shptr<class ClampingScrollPhysics> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ClampingScrollPhysics> ClampingScrollPhysics(ClampingScrollPhysics::_ctorMain p = {}) {
	return ClampingScrollPhysics::ctorMain(p);
}

class BouncingScrollPhysics : public ScrollPhysics
{
public:
	ScrollDecelerationRate /*var-non-null*/ decelerationRate();
	double /*get-non-null*/ minFlingVelocity();
	double /*get-non-null*/ dragStartDistanceMotionThreshold();
	double /*get-non-null*/ maxFlingVelocity();
	shptr<class SpringDescription> /*get-non-null*/ spring();
	shptr<class BouncingScrollPhysics> /*non-null*/ applyTo(/*nullable*/ shptr<class ScrollPhysics> ancestor);
	double /*non-null*/ frictionFactor(/*non-null*/ double overscrollFraction);
	double /*non-null*/ applyPhysicsToUserOffset(/*non-null*/ shptr<class ScrollMetrics> position, /*non-null*/ double offset);
	double /*non-null*/ applyBoundaryConditions(/*non-null*/ shptr<class ScrollMetrics> position, /*non-null*/ double value);
	shptr<class Simulation> /*nullable*/ createBallisticSimulation(/*non-null*/ shptr<class ScrollMetrics> position, /*non-null*/ double velocity);
	double /*non-null*/ carriedMomentum(/*non-null*/ double existingVelocity);
	struct _ctorMain
	{
		/*non-null*/ ScrollDecelerationRate decelerationRate = ScrollDecelerationRate_normal;
		/*nullable*/ shptr<class ScrollPhysics> parent;
	};
	static shptr<class BouncingScrollPhysics> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BouncingScrollPhysics> BouncingScrollPhysics(BouncingScrollPhysics::_ctorMain p = {}) {
	return BouncingScrollPhysics::ctorMain(p);
}

class AlwaysScrollableScrollPhysics : public ScrollPhysics
{
public:
	shptr<class AlwaysScrollableScrollPhysics> /*non-null*/ applyTo(/*nullable*/ shptr<class ScrollPhysics> ancestor);
	bool /*non-null*/ shouldAcceptUserOffset(/*non-null*/ shptr<class ScrollMetrics> position);
	struct _ctorMain
	{
		/*nullable*/ shptr<class ScrollPhysics> parent;
	};
	static shptr<class AlwaysScrollableScrollPhysics> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AlwaysScrollableScrollPhysics> AlwaysScrollableScrollPhysics(AlwaysScrollableScrollPhysics::_ctorMain p = {}) {
	return AlwaysScrollableScrollPhysics::ctorMain(p);
}

class NeverScrollableScrollPhysics : public ScrollPhysics
{
public:
	bool /*get-non-null*/ allowUserScrolling();
	bool /*get-non-null*/ allowImplicitScrolling();
	shptr<class NeverScrollableScrollPhysics> /*non-null*/ applyTo(/*nullable*/ shptr<class ScrollPhysics> ancestor);
	struct _ctorMain
	{
		/*nullable*/ shptr<class ScrollPhysics> parent;
	};
	static shptr<class NeverScrollableScrollPhysics> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class NeverScrollableScrollPhysics> NeverScrollableScrollPhysics(NeverScrollableScrollPhysics::_ctorMain p = {}) {
	return NeverScrollableScrollPhysics::ctorMain(p);
}

class ScrollBehavior : public ObjBase
{
public:
	AndroidOverscrollIndicator /*get-non-null*/ androidOverscrollIndicator();
	struct _copyWith
	{
		/*nullable*/ stdop<bool> scrollbars;
		/*nullable*/ stdop<bool> overscroll;
		/*nullable*/ stdop<stdvec<PointerDeviceKind>> dragDevices;
		/*nullable*/ stdop<stdvec<shptr<class LogicalKeyboardKey>>> pointerAxisModifiers;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*nullable*/ stdop<TargetPlatform> platform;
		/*nullable*/ stdop<AndroidOverscrollIndicator> androidOverscrollIndicator;
	};
	shptr<class ScrollBehavior> /*non-null*/ copyWith(_copyWith p = {});
	TargetPlatform /*non-null*/ getPlatform(/*non-null*/ shptr<class BuildContext> context);
	shptr<class Widget> /*non-null*/ buildScrollbar(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child, /*non-null*/ shptr<class ScrollableDetails> details);
	shptr<class Widget> /*non-null*/ buildOverscrollIndicator(/*non-null*/ shptr<class BuildContext> context, /*non-null*/ shptr<class Widget> child, /*non-null*/ shptr<class ScrollableDetails> details);
	shptr<class ScrollPhysics> /*non-null*/ getScrollPhysics(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ shouldNotify(/*non-null*/ shptr<class ScrollBehavior> oldDelegate);
	struct _ctorMain
	{
		/*nullable*/ stdop<AndroidOverscrollIndicator> androidOverscrollIndicator;
	};
	static shptr<class ScrollBehavior> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ScrollBehavior> ScrollBehavior(ScrollBehavior::_ctorMain p = {}) {
	return ScrollBehavior::ctorMain(p);
}

class ScrollConfiguration : public InheritedWidget
{
public:
	shptr<class ScrollBehavior> /*var-non-null*/ behavior();
	static shptr<class ScrollBehavior> /*non-null*/ of(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ updateShouldNotify(/*non-null*/ shptr<class ScrollConfiguration> oldWidget);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class ScrollBehavior> behavior;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class ScrollConfiguration> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ScrollConfiguration> ScrollConfiguration(ScrollConfiguration::_ctorMain p = {}) {
	return ScrollConfiguration::ctorMain(p);
}

class ScrollController : public ChangeNotifier
{
public:
	bool /*var-non-null*/ keepScrollOffset();
	stdop<stdstr> /*var-nullable*/ debugLabel();
	double /*get-non-null*/ initialScrollOffset();
	bool /*get-non-null*/ hasClients();
	shptr<class ScrollPosition> /*get-non-null*/ position();
	double /*get-non-null*/ offset();
	struct _animateTo
	{
		/*non-null*/ shptr<class Duration> duration;
		/*non-null*/ shptr<class Curve> curve;
	};
	void animateTo(/*non-null*/ double offset, _animateTo p = {});
	void jumpTo(/*non-null*/ double value);
	void attach(/*non-null*/ shptr<class ScrollPosition> position);
	void detach(/*non-null*/ shptr<class ScrollPosition> position);
	void dispose();
	shptr<class ScrollPosition> /*non-null*/ createScrollPosition(/*non-null*/ shptr<class ScrollPhysics> physics, /*non-null*/ shptr<class ScrollContext> context, /*nullable*/ shptr<class ScrollPosition> oldPosition);
	struct _ctorMain
	{
		/*non-null*/ double initialScrollOffset = 0.0;
		/*non-null*/ bool keepScrollOffset = true;
		/*nullable*/ stdop<stdstr> debugLabel;
		/*nullable*/ stdfunc<void(shptr<class ScrollPosition>)> /*(ScrollPosition) -> void*/ onAttach;
		/*nullable*/ stdfunc<void(shptr<class ScrollPosition>)> /*(ScrollPosition) -> void*/ onDetach;
	};
	static shptr<class ScrollController> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ScrollController> ScrollController(ScrollController::_ctorMain p = {}) {
	return ScrollController::ctorMain(p);
}

class ListView : public BoxScrollView
{
public:
	stdop<double> /*var-nullable*/ itemExtent();
	shptr<class Widget> /*var-nullable*/ prototypeItem();
	shptr<class SliverChildDelegate> /*var-non-null*/ childrenDelegate();
	shptr<class Widget> /*non-null*/ buildChildLayout(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool shrinkWrap = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ stdop<double> itemExtent;
		/*nullable*/ shptr<class Widget> prototypeItem;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
		/*nullable*/ stdop<double> cacheExtent;
		/*nullable*/ stdop<int64> semanticChildCount;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class ListView> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _builder
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool shrinkWrap = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ stdop<double> itemExtent;
		/*nullable*/ shptr<class Widget> prototypeItem;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ itemBuilder;
		/*nullable*/ stdfunc<int64(shptr<class Key>)> /*(Key) -> int*/ findChildIndexCallback;
		/*nullable*/ stdop<int64> itemCount;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
		/*nullable*/ stdop<double> cacheExtent;
		/*nullable*/ stdop<int64> semanticChildCount;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
	};
	static shptr<class ListView> /*non-null*/ builder(_builder p = {});
	struct _separated
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool shrinkWrap = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ itemBuilder;
		/*nullable*/ stdfunc<int64(shptr<class Key>)> /*(Key) -> int*/ findChildIndexCallback;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ separatorBuilder;
		/*non-null*/ int64 itemCount;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
		/*nullable*/ stdop<double> cacheExtent;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
	};
	static shptr<class ListView> /*non-null*/ separated(_separated p = {});
	struct _custom
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool shrinkWrap = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ stdop<double> itemExtent;
		/*nullable*/ shptr<class Widget> prototypeItem;
		/*nullable*/ stdop<double> cacheExtent;
		/*nullable*/ stdop<int64> semanticChildCount;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*non-null*/ shptr<class SliverChildDelegate> childrenDelegate;
	};
	static shptr<class ListView> /*non-null*/ custom(_custom p = {});
};

inline shptr<class ListView> ListView(ListView::_ctorMain p = {}) {
	return ListView::ctorMain(p);
}

class ListTile : public StatelessWidget
{
public:
	shptr<class Widget> /*var-nullable*/ leading();
	shptr<class Widget> /*var-nullable*/ title();
	shptr<class Widget> /*var-nullable*/ subtitle();
	shptr<class Widget> /*var-nullable*/ trailing();
	bool /*var-non-null*/ isThreeLine();
	stdop<bool> /*var-nullable*/ dense();
	shptr<class VisualDensity> /*var-nullable*/ visualDensity();
	shptr<class ShapeBorder> /*var-nullable*/ shape();
	shptr<class Color> /*var-nullable*/ selectedColor();
	shptr<class Color> /*var-nullable*/ iconColor();
	shptr<class Color> /*var-nullable*/ textColor();
	shptr<class TextStyle> /*var-nullable*/ titleTextStyle();
	shptr<class TextStyle> /*var-nullable*/ subtitleTextStyle();
	shptr<class TextStyle> /*var-nullable*/ leadingAndTrailingTextStyle();
	stdop<ListTileStyle> /*var-nullable*/ style();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ contentPadding();
	bool /*var-non-null*/ enabled();
	shptr<class MouseCursor> /*var-nullable*/ mouseCursor();
	bool /*var-non-null*/ selected();
	shptr<class Color> /*var-nullable*/ focusColor();
	shptr<class Color> /*var-nullable*/ hoverColor();
	shptr<class Color> /*var-nullable*/ splashColor();
	shptr<class FocusNode> /*var-nullable*/ focusNode();
	bool /*var-non-null*/ autofocus();
	shptr<class Color> /*var-nullable*/ tileColor();
	shptr<class Color> /*var-nullable*/ selectedTileColor();
	stdop<bool> /*var-nullable*/ enableFeedback();
	stdop<double> /*var-nullable*/ horizontalTitleGap();
	stdop<double> /*var-nullable*/ minVerticalPadding();
	stdop<double> /*var-nullable*/ minLeadingWidth();
	stdop<ListTileTitleAlignment> /*var-nullable*/ titleAlignment();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> leading;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ shptr<class Widget> subtitle;
		/*nullable*/ shptr<class Widget> trailing;
		/*non-null*/ bool isThreeLine = false;
		/*nullable*/ stdop<bool> dense;
		/*nullable*/ shptr<class VisualDensity> visualDensity;
		/*nullable*/ shptr<class ShapeBorder> shape;
		/*nullable*/ stdop<ListTileStyle> style;
		/*nullable*/ shptr<class Color> selectedColor;
		/*nullable*/ shptr<class Color> iconColor;
		/*nullable*/ shptr<class Color> textColor;
		/*nullable*/ shptr<class TextStyle> titleTextStyle;
		/*nullable*/ shptr<class TextStyle> subtitleTextStyle;
		/*nullable*/ shptr<class TextStyle> leadingAndTrailingTextStyle;
		/*nullable*/ shptr<class EdgeInsetsGeometry> contentPadding;
		/*non-null*/ bool enabled = true;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTap;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onFocusChange;
		/*nullable*/ shptr<class MouseCursor> mouseCursor;
		/*non-null*/ bool selected = false;
		/*nullable*/ shptr<class Color> focusColor;
		/*nullable*/ shptr<class Color> hoverColor;
		/*nullable*/ shptr<class Color> splashColor;
		/*nullable*/ shptr<class FocusNode> focusNode;
		/*non-null*/ bool autofocus = false;
		/*nullable*/ shptr<class Color> tileColor;
		/*nullable*/ shptr<class Color> selectedTileColor;
		/*nullable*/ stdop<bool> enableFeedback;
		/*nullable*/ stdop<double> horizontalTitleGap;
		/*nullable*/ stdop<double> minVerticalPadding;
		/*nullable*/ stdop<double> minLeadingWidth;
		/*nullable*/ stdop<ListTileTitleAlignment> titleAlignment;
	};
	static shptr<class ListTile> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ListTile> ListTile(ListTile::_ctorMain p = {}) {
	return ListTile::ctorMain(p);
}

class GlowingOverscrollIndicator : public StatefulWidget
{
public:
	bool /*var-non-null*/ showLeading();
	bool /*var-non-null*/ showTrailing();
	AxisDirection /*var-non-null*/ axisDirection();
	shptr<class Color> /*var-non-null*/ color();
	shptr<class Widget> /*var-nullable*/ child();
	Axis /*get-non-null*/ axis();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool showLeading = true;
		/*non-null*/ bool showTrailing = true;
		/*non-null*/ AxisDirection axisDirection;
		/*non-null*/ shptr<class Color> color;
//		/*non-null*/ stdfunc<bool(shptr<class ScrollNotification>)> /*(ScrollNotification) -> bool*/ notificationPredicate = Closure: (ScrollNotification) = > bool from Function 'defaultScrollNotificationPredicate': static.;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class GlowingOverscrollIndicator> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class GlowingOverscrollIndicator> GlowingOverscrollIndicator(GlowingOverscrollIndicator::_ctorMain p = {}) {
	return GlowingOverscrollIndicator::ctorMain(p);
}

class StretchingOverscrollIndicator : public StatefulWidget
{
public:
	AxisDirection /*var-non-null*/ axisDirection();
	Clip /*var-non-null*/ clipBehavior();
	shptr<class Widget> /*var-nullable*/ child();
	Axis /*get-non-null*/ axis();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ AxisDirection axisDirection;
//		/*non-null*/ stdfunc<bool(shptr<class ScrollNotification>)> /*(ScrollNotification) -> bool*/ notificationPredicate = Closure: (ScrollNotification) = > bool from Function 'defaultScrollNotificationPredicate': static.;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class StretchingOverscrollIndicator> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class StretchingOverscrollIndicator> StretchingOverscrollIndicator(StretchingOverscrollIndicator::_ctorMain p = {}) {
	return StretchingOverscrollIndicator::ctorMain(p);
}

class Scrollbar : public StatelessWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	shptr<class ScrollController> /*var-nullable*/ controller();
	stdop<bool> /*var-nullable*/ thumbVisibility();
	stdop<bool> /*var-nullable*/ trackVisibility();
	stdop<bool> /*var-nullable*/ showTrackOnHover();
	stdop<double> /*var-nullable*/ thickness();
	shptr<class Radius> /*var-nullable*/ radius();
	stdop<bool> /*var-nullable*/ interactive();
	stdop<ScrollbarOrientation> /*var-nullable*/ scrollbarOrientation();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> thumbVisibility;
		/*nullable*/ stdop<bool> trackVisibility;
		/*nullable*/ stdop<double> thickness;
		/*nullable*/ shptr<class Radius> radius;
		/*nullable*/ stdfunc<bool(shptr<class ScrollNotification>)> /*(ScrollNotification) -> bool*/ notificationPredicate;
		/*nullable*/ stdop<bool> interactive;
		/*nullable*/ stdop<ScrollbarOrientation> scrollbarOrientation;
		/*nullable*/ stdop<bool> showTrackOnHover;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Scrollbar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Scrollbar> Scrollbar(Scrollbar::_ctorMain p = {}) {
	return Scrollbar::ctorMain(p);
}

class RawScrollbar : public StatefulWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	shptr<class ScrollController> /*var-nullable*/ controller();
	stdop<bool> /*var-nullable*/ thumbVisibility();
	shptr<class OutlinedBorder> /*var-nullable*/ shape();
	shptr<class Radius> /*var-nullable*/ radius();
	stdop<double> /*var-nullable*/ thickness();
	shptr<class Color> /*var-nullable*/ thumbColor();
	double /*var-non-null*/ minThumbLength();
	stdop<double> /*var-nullable*/ minOverscrollLength();
	stdop<bool> /*var-nullable*/ trackVisibility();
	shptr<class Radius> /*var-nullable*/ trackRadius();
	shptr<class Color> /*var-nullable*/ trackColor();
	shptr<class Color> /*var-nullable*/ trackBorderColor();
	shptr<class Duration> /*var-non-null*/ fadeDuration();
	shptr<class Duration> /*var-non-null*/ timeToFade();
	shptr<class Duration> /*var-non-null*/ pressDuration();
	stdop<bool> /*var-nullable*/ interactive();
	stdop<ScrollbarOrientation> /*var-nullable*/ scrollbarOrientation();
	double /*var-non-null*/ mainAxisMargin();
	double /*var-non-null*/ crossAxisMargin();
	shptr<class EdgeInsets> /*var-nullable*/ padding();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> thumbVisibility;
		/*nullable*/ shptr<class OutlinedBorder> shape;
		/*nullable*/ shptr<class Radius> radius;
		/*nullable*/ stdop<double> thickness;
		/*nullable*/ shptr<class Color> thumbColor;
		/*non-null*/ double minThumbLength = 18.0;
		/*nullable*/ stdop<double> minOverscrollLength;
		/*nullable*/ stdop<bool> trackVisibility;
		/*nullable*/ shptr<class Radius> trackRadius;
		/*nullable*/ shptr<class Color> trackColor;
		/*nullable*/ shptr<class Color> trackBorderColor;
		/*non-null*/ shptr<class Duration> fadeDuration = Duration({ .milliseconds = 300 });
		/*non-null*/ shptr<class Duration> timeToFade = Duration({ .milliseconds = 600 });
		/*non-null*/ shptr<class Duration> pressDuration = Duration::zero();
//		/*non-null*/ stdfunc<bool(shptr<class ScrollNotification>)> /*(ScrollNotification) -> bool*/ notificationPredicate = Closure: (ScrollNotification) = > bool from Function 'defaultScrollNotificationPredicate': static.;
		/*nullable*/ stdop<bool> interactive;
		/*nullable*/ stdop<ScrollbarOrientation> scrollbarOrientation;
		/*non-null*/ double mainAxisMargin = 0.0;
		/*non-null*/ double crossAxisMargin = 0.0;
		/*nullable*/ shptr<class EdgeInsets> padding;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class RawScrollbar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class RawScrollbar> RawScrollbar(RawScrollbar::_ctorMain p = {}) {
	return RawScrollbar::ctorMain(p);
}

class DataTable : public StatelessWidget
{
public:
	stdop<int64> /*var-nullable*/ sortColumnIndex();
	bool /*var-non-null*/ sortAscending();
	shptr<class Decoration> /*var-nullable*/ decoration();
	stdop<double> /*var-nullable*/ dataRowMinHeight();
	stdop<double> /*var-nullable*/ dataRowMaxHeight();
	shptr<class TextStyle> /*var-nullable*/ dataTextStyle();
	stdop<double> /*var-nullable*/ headingRowHeight();
	shptr<class TextStyle> /*var-nullable*/ headingTextStyle();
	stdop<double> /*var-nullable*/ horizontalMargin();
	stdop<double> /*var-nullable*/ columnSpacing();
	bool /*var-non-null*/ showCheckboxColumn();
	stdop<double> /*var-nullable*/ dividerThickness();
	bool /*var-non-null*/ showBottomBorder();
	stdop<double> /*var-nullable*/ checkboxHorizontalMargin();
	shptr<class TableBorder> /*var-nullable*/ border();
	Clip /*var-non-null*/ clipBehavior();
	stdop<double> /*get-nullable*/ dataRowHeight();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdvec<shptr<class DataColumn>> columns;
		/*nullable*/ stdop<int64> sortColumnIndex;
		/*non-null*/ bool sortAscending = true;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onSelectAll;
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
		/*non-null*/ bool showCheckboxColumn = true;
		/*non-null*/ bool showBottomBorder = false;
		/*nullable*/ stdop<double> dividerThickness;
		/*non-null*/ stdvec<shptr<class DataRow>> rows;
		/*nullable*/ stdop<double> checkboxHorizontalMargin;
		/*nullable*/ shptr<class TableBorder> border;
		/*non-null*/ Clip clipBehavior = Clip_none;
	};
	static shptr<class DataTable> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DataTable> DataTable(DataTable::_ctorMain p = {}) {
	return DataTable::ctorMain(p);
}

class DataColumn : public ObjBase
{
public:
	shptr<class Widget> /*var-non-null*/ label();
	stdop<stdstr> /*var-nullable*/ tooltip();
	bool /*var-non-null*/ numeric();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Widget> label;
		/*nullable*/ stdop<stdstr> tooltip;
		/*non-null*/ bool numeric = false;
		/*nullable*/ stdfunc<void(int64, bool)> /*(int, bool) -> void*/ onSort;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
	};
	static shptr<class DataColumn> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DataColumn> DataColumn(DataColumn::_ctorMain p = {}) {
	return DataColumn::ctorMain(p);
}

class DataRow : public ObjBase
{
public:
	shptr<class LocalKey> /*var-nullable*/ key();
	bool /*var-non-null*/ selected();
	struct _ctorMain
	{
		/*nullable*/ shptr<class LocalKey> key;
		/*non-null*/ bool selected = false;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onSelectChanged;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> color;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*non-null*/ stdvec<shptr<class DataCell>> cells;
	};
	static shptr<class DataRow> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _byIndex
	{
		/*nullable*/ stdop<int64> index;
		/*non-null*/ bool selected = false;
		/*nullable*/ stdfunc<void(bool)> /*(bool) -> void*/ onSelectChanged;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class Color>>> color;
		/*nullable*/ shptr<class MaterialStateProperty<shptr<class MouseCursor>>> mouseCursor;
		/*non-null*/ stdvec<shptr<class DataCell>> cells;
	};
	static shptr<class DataRow> /*non-null*/ byIndex(_byIndex p = {});
};

inline shptr<class DataRow> DataRow(DataRow::_ctorMain p = {}) {
	return DataRow::ctorMain(p);
}

class DataCell : public ObjBase
{
public:
	static shptr<class DataCell> /*var-non-null*/ empty();
	shptr<class Widget> /*var-non-null*/ child();
	bool /*var-non-null*/ placeholder();
	bool /*var-non-null*/ showEditIcon();
	struct _ctorMain
	{
		/*non-null*/ bool placeholder = false;
		/*non-null*/ bool showEditIcon = false;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTap;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onLongPress;
		/*nullable*/ stdfunc<void(shptr<class TapDownDetails>)> /*(TapDownDetails) -> void*/ onTapDown;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onDoubleTap;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onTapCancel;
	};
	static shptr<class DataCell> /*non-null*/ ctorMain(/*non-null*/ shptr<class Widget> child, _ctorMain p = {});
};

inline shptr<class DataCell> DataCell(/*non-null*/ shptr<class Widget> child, DataCell::_ctorMain p = {}) {
	return DataCell::ctorMain(child, p);
}

class CustomScrollView : public ScrollView
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*nullable*/ shptr<class ScrollBehavior> scrollBehavior;
		/*non-null*/ bool shrinkWrap = false;
		/*nullable*/ shptr<class Key> center;
		/*non-null*/ double anchor = 0.0;
		/*nullable*/ stdop<double> cacheExtent;
		/*non-null*/ stdvec<shptr<class Widget>> slivers;
		/*nullable*/ stdop<int64> semanticChildCount;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
	};
	static shptr<class CustomScrollView> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CustomScrollView> CustomScrollView(CustomScrollView::_ctorMain p = {}) {
	return CustomScrollView::ctorMain(p);
}

class PageController : public ScrollController
{
public:
	int64 /*var-non-null*/ initialPage();
	bool /*var-non-null*/ keepPage();
	double /*var-non-null*/ viewportFraction();
	stdop<double> /*get-nullable*/ page();
	void jumpToPage(/*non-null*/ int64 page);
	shptr<class ScrollPosition> /*non-null*/ createScrollPosition(/*non-null*/ shptr<class ScrollPhysics> physics, /*non-null*/ shptr<class ScrollContext> context, /*nullable*/ shptr<class ScrollPosition> oldPosition);
	void attach(/*non-null*/ shptr<class ScrollPosition> position);
	struct _ctorMain
	{
		/*non-null*/ int64 initialPage = 0;
		/*non-null*/ bool keepPage = true;
		/*non-null*/ double viewportFraction = 1.0;
	};
	static shptr<class PageController> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class PageController> PageController(PageController::_ctorMain p = {}) {
	return PageController::ctorMain(p);
}

class PageView : public StatefulWidget
{
public:
	bool /*var-non-null*/ allowImplicitScrolling();
	stdop<stdstr> /*var-nullable*/ restorationId();
	Axis /*var-non-null*/ scrollDirection();
	bool /*var-non-null*/ reverse();
	shptr<class PageController> /*var-non-null*/ controller();
	shptr<class ScrollPhysics> /*var-nullable*/ physics();
	bool /*var-non-null*/ pageSnapping();
	shptr<class SliverChildDelegate> /*var-non-null*/ childrenDelegate();
	DragStartBehavior /*var-non-null*/ dragStartBehavior();
	Clip /*var-non-null*/ clipBehavior();
	shptr<class ScrollBehavior> /*var-nullable*/ scrollBehavior();
	bool /*var-non-null*/ padEnds();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_horizontal;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class PageController> controller;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool pageSnapping = true;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onPageChanged;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ bool allowImplicitScrolling = false;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*nullable*/ shptr<class ScrollBehavior> scrollBehavior;
		/*non-null*/ bool padEnds = true;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class PageView> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _builder
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_horizontal;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class PageController> controller;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool pageSnapping = true;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onPageChanged;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ itemBuilder;
		/*nullable*/ stdfunc<int64(shptr<class Key>)> /*(Key) -> int*/ findChildIndexCallback;
		/*nullable*/ stdop<int64> itemCount;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ bool allowImplicitScrolling = false;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*nullable*/ shptr<class ScrollBehavior> scrollBehavior;
		/*non-null*/ bool padEnds = true;
	};
	static shptr<class PageView> /*non-null*/ builder(_builder p = {});
	struct _custom
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_horizontal;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class PageController> controller;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool pageSnapping = true;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onPageChanged;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ bool allowImplicitScrolling = false;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*nullable*/ shptr<class ScrollBehavior> scrollBehavior;
		/*non-null*/ bool padEnds = true;
		/*non-null*/ shptr<class SliverChildDelegate> childrenDelegate;
	};
	static shptr<class PageView> /*non-null*/ custom(_custom p = {});
};

inline shptr<class PageView> PageView(PageView::_ctorMain p = {}) {
	return PageView::ctorMain(p);
}

class GridView : public BoxScrollView
{
public:
	shptr<class SliverGridDelegate> /*var-non-null*/ gridDelegate();
	shptr<class SliverChildDelegate> /*var-non-null*/ childrenDelegate();
	shptr<class Widget> /*non-null*/ buildChildLayout(/*non-null*/ shptr<class BuildContext> context);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool shrinkWrap = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*non-null*/ shptr<class SliverGridDelegate> gridDelegate;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
		/*nullable*/ stdop<double> cacheExtent;
		/*nullable*/ stdop<int64> semanticChildCount;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class GridView> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _builder
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool shrinkWrap = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*non-null*/ shptr<class SliverGridDelegate> gridDelegate;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ itemBuilder;
		/*nullable*/ stdfunc<int64(shptr<class Key>)> /*(Key) -> int*/ findChildIndexCallback;
		/*nullable*/ stdop<int64> itemCount;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
		/*nullable*/ stdop<double> cacheExtent;
		/*nullable*/ stdop<int64> semanticChildCount;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
	};
	static shptr<class GridView> /*non-null*/ builder(_builder p = {});
	struct _custom
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool shrinkWrap = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*non-null*/ shptr<class SliverGridDelegate> gridDelegate;
		/*nullable*/ stdop<double> cacheExtent;
		/*nullable*/ stdop<int64> semanticChildCount;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*non-null*/ shptr<class SliverChildDelegate> childrenDelegate;
	};
	static shptr<class GridView> /*non-null*/ custom(_custom p = {});
	struct _count
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool shrinkWrap = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*non-null*/ int64 crossAxisCount;
		/*non-null*/ double mainAxisSpacing = 0.0;
		/*non-null*/ double crossAxisSpacing = 0.0;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
		/*nullable*/ stdop<double> cacheExtent;
		/*nullable*/ stdop<int64> semanticChildCount;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*non-null*/ double childAspectRatio = 1.0;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class GridView> /*non-null*/ count(_count p = {});
	struct _extent
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool shrinkWrap = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*non-null*/ double maxCrossAxisExtent;
		/*non-null*/ double mainAxisSpacing = 0.0;
		/*non-null*/ double crossAxisSpacing = 0.0;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
		/*nullable*/ stdop<double> cacheExtent;
		/*nullable*/ stdop<int64> semanticChildCount;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*non-null*/ double childAspectRatio = 1.0;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class GridView> /*non-null*/ extent(_extent p = {});
};

inline shptr<class GridView> GridView(GridView::_ctorMain p = {}) {
	return GridView::ctorMain(p);
}

class GridTile : public StatelessWidget
{
public:
	shptr<class Widget> /*var-nullable*/ header();
	shptr<class Widget> /*var-nullable*/ footer();
	shptr<class Widget> /*var-non-null*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> header;
		/*nullable*/ shptr<class Widget> footer;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class GridTile> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class GridTile> GridTile(GridTile::_ctorMain p = {}) {
	return GridTile::ctorMain(p);
}

class GridTileBar : public StatelessWidget
{
public:
	shptr<class Color> /*var-nullable*/ backgroundColor();
	shptr<class Widget> /*var-nullable*/ leading();
	shptr<class Widget> /*var-nullable*/ title();
	shptr<class Widget> /*var-nullable*/ subtitle();
	shptr<class Widget> /*var-nullable*/ trailing();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Widget> leading;
		/*nullable*/ shptr<class Widget> title;
		/*nullable*/ shptr<class Widget> subtitle;
		/*nullable*/ shptr<class Widget> trailing;
	};
	static shptr<class GridTileBar> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class GridTileBar> GridTileBar(GridTileBar::_ctorMain p = {}) {
	return GridTileBar::ctorMain(p);
}

class SingleChildScrollView : public StatelessWidget
{
public:
	Axis /*var-non-null*/ scrollDirection();
	bool /*var-non-null*/ reverse();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
	shptr<class ScrollController> /*var-nullable*/ controller();
	stdop<bool> /*var-nullable*/ primary();
	shptr<class ScrollPhysics> /*var-nullable*/ physics();
	shptr<class Widget> /*var-nullable*/ child();
	DragStartBehavior /*var-non-null*/ dragStartBehavior();
	Clip /*var-non-null*/ clipBehavior();
	stdop<stdstr> /*var-nullable*/ restorationId();
	ScrollViewKeyboardDismissBehavior /*var-non-null*/ keyboardDismissBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class EdgeInsetsGeometry> padding;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*nullable*/ shptr<class ScrollController> controller;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class SingleChildScrollView> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SingleChildScrollView> SingleChildScrollView(SingleChildScrollView::_ctorMain p = {}) {
	return SingleChildScrollView::ctorMain(p);
}

class ReorderableListView : public StatefulWidget
{
public:
	int64 /*var-non-null*/ itemCount();
	bool /*var-non-null*/ buildDefaultDragHandles();
	shptr<class EdgeInsets> /*var-nullable*/ padding();
	shptr<class Widget> /*var-nullable*/ header();
	shptr<class Widget> /*var-nullable*/ footer();
	Axis /*var-non-null*/ scrollDirection();
	bool /*var-non-null*/ reverse();
	shptr<class ScrollController> /*var-nullable*/ scrollController();
	stdop<bool> /*var-nullable*/ primary();
	shptr<class ScrollPhysics> /*var-nullable*/ physics();
	bool /*var-non-null*/ shrinkWrap();
	double /*var-non-null*/ anchor();
	stdop<double> /*var-nullable*/ cacheExtent();
	DragStartBehavior /*var-non-null*/ dragStartBehavior();
	ScrollViewKeyboardDismissBehavior /*var-non-null*/ keyboardDismissBehavior();
	stdop<stdstr> /*var-nullable*/ restorationId();
	Clip /*var-non-null*/ clipBehavior();
	stdop<double> /*var-nullable*/ itemExtent();
	shptr<class Widget> /*var-nullable*/ prototypeItem();
	stdop<double> /*var-nullable*/ autoScrollerVelocityScalar();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdfunc<void(int64, int64)> /*(int, int) -> void*/ onReorder;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onReorderStart;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onReorderEnd;
		/*nullable*/ stdop<double> itemExtent;
		/*nullable*/ shptr<class Widget> prototypeItem;
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class Widget>, int64, shptr<class Animation<double>>)> /*(Widget, int, Animation) -> Widget*/ proxyDecorator;
		/*non-null*/ bool buildDefaultDragHandles = true;
		/*nullable*/ shptr<class EdgeInsets> padding;
		/*nullable*/ shptr<class Widget> header;
		/*nullable*/ shptr<class Widget> footer;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> scrollController;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool shrinkWrap = false;
		/*non-null*/ double anchor = 0.0;
		/*nullable*/ stdop<double> cacheExtent;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*nullable*/ stdop<double> autoScrollerVelocityScalar;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class ReorderableListView> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _builder
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ itemBuilder;
		/*non-null*/ int64 itemCount;
		/*non-null*/ stdfunc<void(int64, int64)> /*(int, int) -> void*/ onReorder;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onReorderStart;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onReorderEnd;
		/*nullable*/ stdop<double> itemExtent;
		/*nullable*/ shptr<class Widget> prototypeItem;
		/*nullable*/ stdfunc<shptr<class Widget>(shptr<class Widget>, int64, shptr<class Animation<double>>)> /*(Widget, int, Animation) -> Widget*/ proxyDecorator;
		/*non-null*/ bool buildDefaultDragHandles = true;
		/*nullable*/ shptr<class EdgeInsets> padding;
		/*nullable*/ shptr<class Widget> header;
		/*nullable*/ shptr<class Widget> footer;
		/*non-null*/ Axis scrollDirection = Axis_vertical;
		/*non-null*/ bool reverse = false;
		/*nullable*/ shptr<class ScrollController> scrollController;
		/*nullable*/ stdop<bool> primary;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ bool shrinkWrap = false;
		/*non-null*/ double anchor = 0.0;
		/*nullable*/ stdop<double> cacheExtent;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ ScrollViewKeyboardDismissBehavior keyboardDismissBehavior = ScrollViewKeyboardDismissBehavior_manual;
		/*nullable*/ stdop<stdstr> restorationId;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*nullable*/ stdop<double> autoScrollerVelocityScalar;
	};
	static shptr<class ReorderableListView> /*non-null*/ builder(_builder p = {});
};

inline shptr<class ReorderableListView> ReorderableListView(ReorderableListView::_ctorMain p = {}) {
	return ReorderableListView::ctorMain(p);
}

class SliverList : public SliverMultiBoxAdaptorWidget
{
public:
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class SliverChildDelegate> delegate;
	};
	static shptr<class SliverList> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _builder
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ itemBuilder;
		/*nullable*/ stdfunc<int64(shptr<class Key>)> /*(Key) -> int*/ findChildIndexCallback;
		/*nullable*/ stdop<int64> itemCount;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
	};
	static shptr<class SliverList> /*non-null*/ builder(_builder p = {});
	struct _separated
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ itemBuilder;
		/*nullable*/ stdfunc<int64(shptr<class Key>)> /*(Key) -> int*/ findChildIndexCallback;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ separatorBuilder;
		/*nullable*/ stdop<int64> itemCount;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
	};
	static shptr<class SliverList> /*non-null*/ separated(_separated p = {});
	struct _list
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class SliverList> /*non-null*/ list(_list p = {});
};

inline shptr<class SliverList> SliverList(SliverList::_ctorMain p = {}) {
	return SliverList::ctorMain(p);
}

class SliverGrid : public SliverMultiBoxAdaptorWidget
{
public:
	shptr<class SliverGridDelegate> /*var-non-null*/ gridDelegate();
	double /*non-null*/ estimateMaxScrollOffset(/*nullable*/ shptr<class SliverConstraints> constraints, /*non-null*/ int64 firstIndex, /*non-null*/ int64 lastIndex, /*non-null*/ double leadingScrollOffset, /*non-null*/ double trailingScrollOffset);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class SliverChildDelegate> delegate;
		/*non-null*/ shptr<class SliverGridDelegate> gridDelegate;
	};
	static shptr<class SliverGrid> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _builder
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class SliverGridDelegate> gridDelegate;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ itemBuilder;
		/*nullable*/ stdfunc<int64(shptr<class Key>)> /*(Key) -> int*/ findChildIndexCallback;
		/*nullable*/ stdop<int64> itemCount;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
	};
	static shptr<class SliverGrid> /*non-null*/ builder(_builder p = {});
	struct _count
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ int64 crossAxisCount;
		/*non-null*/ double mainAxisSpacing = 0.0;
		/*non-null*/ double crossAxisSpacing = 0.0;
		/*non-null*/ double childAspectRatio = 1.0;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class SliverGrid> /*non-null*/ count(_count p = {});
	struct _extent
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double maxCrossAxisExtent;
		/*non-null*/ double mainAxisSpacing = 0.0;
		/*non-null*/ double crossAxisSpacing = 0.0;
		/*non-null*/ double childAspectRatio = 1.0;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class SliverGrid> /*non-null*/ extent(_extent p = {});
};

inline shptr<class SliverGrid> SliverGrid(SliverGrid::_ctorMain p = {}) {
	return SliverGrid::ctorMain(p);
}

class SliverGridDelegateWithFixedCrossAxisCount : public SliverGridDelegate
{
public:
	int64 /*var-non-null*/ crossAxisCount();
	double /*var-non-null*/ mainAxisSpacing();
	double /*var-non-null*/ crossAxisSpacing();
	double /*var-non-null*/ childAspectRatio();
	stdop<double> /*var-nullable*/ mainAxisExtent();
	shptr<class SliverGridLayout> /*non-null*/ getLayout(/*non-null*/ shptr<class SliverConstraints> constraints);
	bool /*non-null*/ shouldRelayout(/*non-null*/ shptr<class SliverGridDelegateWithFixedCrossAxisCount> oldDelegate);
	struct _ctorMain
	{
		/*non-null*/ int64 crossAxisCount;
		/*non-null*/ double mainAxisSpacing = 0.0;
		/*non-null*/ double crossAxisSpacing = 0.0;
		/*nullable*/ stdop<double> mainAxisExtent;
		/*non-null*/ double childAspectRatio = 1.0;
	};
	static shptr<class SliverGridDelegateWithFixedCrossAxisCount> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SliverGridDelegateWithFixedCrossAxisCount> SliverGridDelegateWithFixedCrossAxisCount(SliverGridDelegateWithFixedCrossAxisCount::_ctorMain p = {}) {
	return SliverGridDelegateWithFixedCrossAxisCount::ctorMain(p);
}

class SliverGridDelegateWithMaxCrossAxisExtent : public SliverGridDelegate
{
public:
	double /*var-non-null*/ maxCrossAxisExtent();
	double /*var-non-null*/ mainAxisSpacing();
	double /*var-non-null*/ crossAxisSpacing();
	double /*var-non-null*/ childAspectRatio();
	stdop<double> /*var-nullable*/ mainAxisExtent();
	shptr<class SliverGridLayout> /*non-null*/ getLayout(/*non-null*/ shptr<class SliverConstraints> constraints);
	bool /*non-null*/ shouldRelayout(/*non-null*/ shptr<class SliverGridDelegateWithMaxCrossAxisExtent> oldDelegate);
	struct _ctorMain
	{
		/*non-null*/ double maxCrossAxisExtent;
		/*non-null*/ double mainAxisSpacing = 0.0;
		/*non-null*/ double crossAxisSpacing = 0.0;
		/*nullable*/ stdop<double> mainAxisExtent;
		/*non-null*/ double childAspectRatio = 1.0;
	};
	static shptr<class SliverGridDelegateWithMaxCrossAxisExtent> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SliverGridDelegateWithMaxCrossAxisExtent> SliverGridDelegateWithMaxCrossAxisExtent(SliverGridDelegateWithMaxCrossAxisExtent::_ctorMain p = {}) {
	return SliverGridDelegateWithMaxCrossAxisExtent::ctorMain(p);
}

class SliverChildListDelegate : public SliverChildDelegate
{
public:
	bool /*var-non-null*/ addAutomaticKeepAlives();
	bool /*var-non-null*/ addRepaintBoundaries();
	bool /*var-non-null*/ addSemanticIndexes();
	int64 /*var-non-null*/ semanticIndexOffset();
	stdop<int64> /*get-nullable*/ estimatedChildCount();
	stdop<int64> /*nullable*/ findIndexByKey(/*non-null*/ shptr<class Key> key);
	bool /*non-null*/ shouldRebuild(/*non-null*/ shptr<class SliverChildListDelegate> oldDelegate);
	struct _ctorMain
	{
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
//		/*non-null*/ stdfunc<int64(shptr<class Widget>, int64)> /*(Widget, int) -> int*/ semanticIndexCallback = Closure: (Widget, int) = > int from Function '_kDefaultSemanticIndexCallback@293070758': static.;
		/*non-null*/ int64 semanticIndexOffset = 0;
	};
	static shptr<class SliverChildListDelegate> /*non-null*/ ctorMain(/*non-null*/ stdvec<shptr<class Widget>> children, _ctorMain p = {});
	struct _fixed
	{
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
//		/*non-null*/ stdfunc<int64(shptr<class Widget>, int64)> /*(Widget, int) -> int*/ semanticIndexCallback = Closure: (Widget, int) = > int from Function '_kDefaultSemanticIndexCallback@293070758': static.;
		/*non-null*/ int64 semanticIndexOffset = 0;
	};
	static shptr<class SliverChildListDelegate> /*non-null*/ fixed(/*non-null*/ stdvec<shptr<class Widget>> children, _fixed p = {});
};

inline shptr<class SliverChildListDelegate> SliverChildListDelegate(/*non-null*/ stdvec<shptr<class Widget>> children, SliverChildListDelegate::_ctorMain p = {}) {
	return SliverChildListDelegate::ctorMain(children, p);
}

class SliverChildBuilderDelegate : public SliverChildDelegate
{
public:
	stdop<int64> /*var-nullable*/ childCount();
	bool /*var-non-null*/ addAutomaticKeepAlives();
	bool /*var-non-null*/ addRepaintBoundaries();
	bool /*var-non-null*/ addSemanticIndexes();
	int64 /*var-non-null*/ semanticIndexOffset();
	stdop<int64> /*get-nullable*/ estimatedChildCount();
	stdop<int64> /*nullable*/ findIndexByKey(/*non-null*/ shptr<class Key> key);
	bool /*non-null*/ shouldRebuild(/*non-null*/ shptr<class SliverChildBuilderDelegate> oldDelegate);
	struct _ctorMain
	{
		/*nullable*/ stdfunc<int64(shptr<class Key>)> /*(Key) -> int*/ findChildIndexCallback;
		/*non-null*/ bool addAutomaticKeepAlives = true;
		/*non-null*/ bool addRepaintBoundaries = true;
		/*non-null*/ bool addSemanticIndexes = true;
//		/*non-null*/ stdfunc<int64(shptr<class Widget>, int64)> /*(Widget, int) -> int*/ semanticIndexCallback = Closure: (Widget, int) = > int from Function '_kDefaultSemanticIndexCallback@293070758': static.;
		/*non-null*/ int64 semanticIndexOffset = 0;
		/*nullable*/ stdop<int64> childCount;
	};
	static shptr<class SliverChildBuilderDelegate> /*non-null*/ ctorMain(/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ builder, _ctorMain p = {});
};

inline shptr<class SliverChildBuilderDelegate> SliverChildBuilderDelegate(/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, int64)> /*(BuildContext, int) -> Widget*/ builder, SliverChildBuilderDelegate::_ctorMain p = {}) {
	return SliverChildBuilderDelegate::ctorMain(builder, p);
}

class Dismissible : public StatefulWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	shptr<class Widget> /*var-nullable*/ background();
	shptr<class Widget> /*var-nullable*/ secondaryBackground();
	DismissDirection /*var-non-null*/ direction();
	shptr<class Duration> /*var-nullable*/ resizeDuration();
	shptr<class Duration> /*var-non-null*/ movementDuration();
	double /*var-non-null*/ crossAxisEndOffset();
	DragStartBehavior /*var-non-null*/ dragStartBehavior();
	HitTestBehavior /*var-non-null*/ behavior();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> background;
		/*nullable*/ shptr<class Widget> secondaryBackground;
//		/*nullable*/ stdfunc<shptr<class Future<bool>>(DismissDirection)> confirmDismiss;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onResize;
//		/*nullable*/ stdfunc<void(shptr<class DismissUpdateDetails>)> onUpdate;
		/*nullable*/ stdfunc<void(int64)> /*(DismissDirection) -> void*/ onDismissed;
		/*non-null*/ DismissDirection direction = DismissDirection_horizontal;
		/*nullable*/ shptr<class Duration> resizeDuration = Duration({.milliseconds = 300});
//		/*non-null*/ shptr<class Map<DismissDirection, double>> dismissThresholds;
		/*non-null*/ shptr<class Duration> movementDuration = Duration({.milliseconds = 200});
		/*non-null*/ double crossAxisEndOffset = 0.0;
		/*non-null*/ DragStartBehavior dragStartBehavior = DragStartBehavior_start;
		/*non-null*/ HitTestBehavior behavior = HitTestBehavior_opaque;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class Dismissible> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Dismissible> Dismissible(Dismissible::_ctorMain p = {}) {
	return Dismissible::ctorMain(p);
}

class DraggableScrollableController : public ChangeNotifier
{
public:
	double /*get-non-null*/ size();
	double /*get-non-null*/ pixels();
	bool /*get-non-null*/ isAttached();
	double /*non-null*/ sizeToPixels(/*non-null*/ double size);
	double /*non-null*/ pixelsToSize(/*non-null*/ double pixels);
	struct _animateTo
	{
		/*non-null*/ shptr<class Duration> duration;
		/*non-null*/ shptr<class Curve> curve;
	};
	void animateTo(/*non-null*/ double size, _animateTo p = {});
	void jumpTo(/*non-null*/ double size);
	void reset();
	static shptr<class DraggableScrollableController> /*non-null*/ ctorMain();
};

inline shptr<class DraggableScrollableController> DraggableScrollableController() {
	return DraggableScrollableController::ctorMain();
}

class DraggableScrollableSheet : public StatefulWidget
{
public:
	double /*var-non-null*/ initialChildSize();
	double /*var-non-null*/ minChildSize();
	double /*var-non-null*/ maxChildSize();
	bool /*var-non-null*/ expand();
	bool /*var-non-null*/ snap();
	shptr<class Duration> /*var-nullable*/ snapAnimationDuration();
	shptr<class DraggableScrollableController> /*var-nullable*/ controller();
	bool /*var-non-null*/ shouldCloseOnMinExtent();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double initialChildSize = 0.5;
		/*non-null*/ double minChildSize = 0.25;
		/*non-null*/ double maxChildSize = 1.0;
		/*non-null*/ bool expand = true;
		/*non-null*/ bool snap = false;
		/*nullable*/ stdop<stdvec<double>> snapSizes;
		/*nullable*/ shptr<class Duration> snapAnimationDuration;
		/*nullable*/ shptr<class DraggableScrollableController> controller;
		/*non-null*/ bool shouldCloseOnMinExtent = true;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class ScrollController>)> /*(BuildContext, ScrollController) -> Widget*/ builder;
	};
	static shptr<class DraggableScrollableSheet> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DraggableScrollableSheet> DraggableScrollableSheet(DraggableScrollableSheet::_ctorMain p = {}) {
	return DraggableScrollableSheet::ctorMain(p);
}

class ListWheelScrollView : public StatefulWidget
{
public:
	shptr<class ScrollController> /*var-nullable*/ controller();
	shptr<class ScrollPhysics> /*var-nullable*/ physics();
	double /*var-non-null*/ diameterRatio();
	double /*var-non-null*/ perspective();
	double /*var-non-null*/ offAxisFraction();
	bool /*var-non-null*/ useMagnifier();
	double /*var-non-null*/ magnification();
	double /*var-non-null*/ overAndUnderCenterOpacity();
	double /*var-non-null*/ itemExtent();
	double /*var-non-null*/ squeeze();
	bool /*var-non-null*/ renderChildrenOutsideViewport();
	shptr<class ListWheelChildDelegate> /*var-non-null*/ childDelegate();
	Clip /*var-non-null*/ clipBehavior();
	stdop<stdstr> /*var-nullable*/ restorationId();
	shptr<class ScrollBehavior> /*var-nullable*/ scrollBehavior();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class ScrollController> controller;
		/*nullable*/ shptr<class ScrollPhysics> physics;
		/*non-null*/ double diameterRatio = 2.0;
		/*non-null*/ double perspective = 0.003;
		/*non-null*/ double offAxisFraction = 0.0;
		/*non-null*/ bool useMagnifier = false;
		/*non-null*/ double magnification = 1.0;
		/*non-null*/ double overAndUnderCenterOpacity = 1.0;
		/*non-null*/ double itemExtent;
		/*non-null*/ double squeeze = 1.0;
		/*nullable*/ stdfunc<void(int64)> /*(int) -> void*/ onSelectedItemChanged;
		/*non-null*/ bool renderChildrenOutsideViewport = false;
		/*non-null*/ Clip clipBehavior = Clip_hardEdge;
		/*nullable*/ stdop<stdstr> restorationId;
		/*nullable*/ shptr<class ScrollBehavior> scrollBehavior;
		/*non-null*/ stdvec<shptr<class Widget>> children;
	};
	static shptr<class ListWheelScrollView> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class ListWheelScrollView> ListWheelScrollView(ListWheelScrollView::_ctorMain p = {}) {
	return ListWheelScrollView::ctorMain(p);
}

