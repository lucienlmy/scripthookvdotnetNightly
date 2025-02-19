#pragma once

class AnimatedScale : public ImplicitlyAnimatedWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	double /*var-non-null*/ scale();
	shptr<class Alignment> /*var-non-null*/ alignment();
	stdop<FilterQuality> /*var-nullable*/ filterQuality();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double scale;
		/*non-null*/ shptr<class Alignment> alignment = Alignment::center();
		/*nullable*/ stdop<FilterQuality> filterQuality;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedScale> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedScale> AnimatedScale(AnimatedScale::_ctorMain p = {}) {
	return AnimatedScale::ctorMain(p);
}

class AnimatedContainer : public ImplicitlyAnimatedWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class AlignmentGeometry> /*var-nullable*/ alignment();
	shptr<class EdgeInsetsGeometry> /*var-nullable*/ padding();
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
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedContainer> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedContainer> AnimatedContainer(AnimatedContainer::_ctorMain p = {}) {
	return AnimatedContainer::ctorMain(p);
}

class AnimatedPhysicalModel : public ImplicitlyAnimatedWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	BoxShape /*var-non-null*/ shape();
	Clip /*var-non-null*/ clipBehavior();
	shptr<class BorderRadius> /*var-non-null*/ borderRadius();
	double /*var-non-null*/ elevation();
	shptr<class Color> /*var-non-null*/ color();
	bool /*var-non-null*/ animateColor();
	shptr<class Color> /*var-non-null*/ shadowColor();
	bool /*var-non-null*/ animateShadowColor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ BoxShape shape;
		/*non-null*/ Clip clipBehavior = Clip_none;
		/*non-null*/ shptr<class BorderRadius> borderRadius = BorderRadius::zero();
		/*non-null*/ double elevation;
		/*non-null*/ shptr<class Color> color;
		/*non-null*/ bool animateColor = true;
		/*non-null*/ shptr<class Color> shadowColor;
		/*non-null*/ bool animateShadowColor = true;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedPhysicalModel> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedPhysicalModel> AnimatedPhysicalModel(AnimatedPhysicalModel::_ctorMain p = {}) {
	return AnimatedPhysicalModel::ctorMain(p);
}

class SliverAnimatedOpacity : public ImplicitlyAnimatedWidget
{
public:
	shptr<class Widget> /*var-nullable*/ sliver();
	double /*var-non-null*/ opacity();
	bool /*var-non-null*/ alwaysIncludeSemantics();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ shptr<class Widget> sliver;
		/*non-null*/ double opacity;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*non-null*/ bool alwaysIncludeSemantics = false;
	};
	static shptr<class SliverAnimatedOpacity> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SliverAnimatedOpacity> SliverAnimatedOpacity(SliverAnimatedOpacity::_ctorMain p = {}) {
	return SliverAnimatedOpacity::ctorMain(p);
}

class AnimatedPositionedDirectional : public ImplicitlyAnimatedWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	stdop<double> /*var-nullable*/ start();
	stdop<double> /*var-nullable*/ top();
	stdop<double> /*var-nullable*/ end();
	stdop<double> /*var-nullable*/ bottom();
	stdop<double> /*var-nullable*/ width();
	stdop<double> /*var-nullable*/ height();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> start;
		/*nullable*/ stdop<double> top;
		/*nullable*/ stdop<double> end;
		/*nullable*/ stdop<double> bottom;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedPositionedDirectional> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedPositionedDirectional> AnimatedPositionedDirectional(AnimatedPositionedDirectional::_ctorMain p = {}) {
	return AnimatedPositionedDirectional::ctorMain(p);
}

class AnimatedRotation : public ImplicitlyAnimatedWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	double /*var-non-null*/ turns();
	shptr<class Alignment> /*var-non-null*/ alignment();
	stdop<FilterQuality> /*var-nullable*/ filterQuality();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double turns;
		/*non-null*/ shptr<class Alignment> alignment = Alignment::center();
		/*nullable*/ stdop<FilterQuality> filterQuality;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedRotation> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedRotation> AnimatedRotation(AnimatedRotation::_ctorMain p = {}) {
	return AnimatedRotation::ctorMain(p);
}

class AnimatedSwitcher : public StatefulWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class Duration> /*var-non-null*/ duration();
	shptr<class Duration> /*var-nullable*/ reverseDuration();
	shptr<class Curve> /*var-non-null*/ switchInCurve();
	shptr<class Curve> /*var-non-null*/ switchOutCurve();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Duration> reverseDuration;
		/*non-null*/ shptr<class Curve> switchInCurve = Curves::linear();
		/*non-null*/ shptr<class Curve> switchOutCurve = Curves::linear();
//		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class Widget>, shptr<class Animation<double>>)> /*(Widget, Animation) -> Widget*/ transitionBuilder = defaultTransitionBuilder;
//		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class Widget>, stdvec<shptr<class Widget>>)> /*(Widget, List) -> Widget*/ layoutBuilder = defaultLayoutBuilder;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedSwitcher> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedSwitcher> AnimatedSwitcher(AnimatedSwitcher::_ctorMain p = {}) {
	return AnimatedSwitcher::ctorMain(p);
}

class AnimatedCrossFade : public StatefulWidget
{
public:
	shptr<class Widget> /*var-non-null*/ firstChild();
	shptr<class Widget> /*var-non-null*/ secondChild();
	CrossFadeState /*var-non-null*/ crossFadeState();
	shptr<class Duration> /*var-non-null*/ duration();
	shptr<class Duration> /*var-nullable*/ reverseDuration();
	shptr<class Curve> /*var-non-null*/ firstCurve();
	shptr<class Curve> /*var-non-null*/ secondCurve();
	shptr<class Curve> /*var-non-null*/ sizeCurve();
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	bool /*var-non-null*/ excludeBottomFocus();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Widget> firstChild;
		/*non-null*/ shptr<class Widget> secondChild;
		/*non-null*/ shptr<class Curve> firstCurve = Curves::linear();
		/*non-null*/ shptr<class Curve> secondCurve = Curves::linear();
		/*non-null*/ shptr<class Curve> sizeCurve = Curves::linear();
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::topCenter();
		/*non-null*/ CrossFadeState crossFadeState;
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Duration> reverseDuration;
//		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class Widget>, shptr<class Key>, shptr<class Widget>, shptr<class Key>)> /*(Widget, Key, Widget, Key) -> Widget*/ layoutBuilder = defaultLayoutBuilder;
		/*non-null*/ bool excludeBottomFocus = true;
	};
	static shptr<class AnimatedCrossFade> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedCrossFade> AnimatedCrossFade(AnimatedCrossFade::_ctorMain p = {}) {
	return AnimatedCrossFade::ctorMain(p);
}

class AnimatedPositioned : public ImplicitlyAnimatedWidget
{
public:
	shptr<class Widget> /*var-non-null*/ child();
	stdop<double> /*var-nullable*/ left();
	stdop<double> /*var-nullable*/ top();
	stdop<double> /*var-nullable*/ right();
	stdop<double> /*var-nullable*/ bottom();
	stdop<double> /*var-nullable*/ width();
	stdop<double> /*var-nullable*/ height();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*nullable*/ stdop<double> left;
		/*nullable*/ stdop<double> top;
		/*nullable*/ stdop<double> right;
		/*nullable*/ stdop<double> bottom;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedPositioned> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _fromRect
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Rect> rect;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*non-null*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedPositioned> /*non-null*/ fromRect(_fromRect p = {});
};

inline shptr<class AnimatedPositioned> AnimatedPositioned(AnimatedPositioned::_ctorMain p = {}) {
	return AnimatedPositioned::ctorMain(p);
}

class AnimatedOpacity : public ImplicitlyAnimatedWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	double /*var-non-null*/ opacity();
	bool /*var-non-null*/ alwaysIncludeSemantics();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ double opacity;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*non-null*/ bool alwaysIncludeSemantics = false;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedOpacity> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedOpacity> AnimatedOpacity(AnimatedOpacity::_ctorMain p = {}) {
	return AnimatedOpacity::ctorMain(p);
}

class AnimatedPadding : public ImplicitlyAnimatedWidget
{
public:
	shptr<class EdgeInsetsGeometry> /*var-non-null*/ padding();
	shptr<class Widget> /*var-nullable*/ child();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class EdgeInsetsGeometry> padding;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedPadding> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedPadding> AnimatedPadding(AnimatedPadding::_ctorMain p = {}) {
	return AnimatedPadding::ctorMain(p);
}

class AnimatedAlign : public ImplicitlyAnimatedWidget
{
public:
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	shptr<class Widget> /*var-nullable*/ child();
	stdop<double> /*var-nullable*/ heightFactor();
	stdop<double> /*var-nullable*/ widthFactor();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class AlignmentGeometry> alignment;
		/*nullable*/ stdop<double> heightFactor;
		/*nullable*/ stdop<double> widthFactor;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedAlign> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedAlign> AnimatedAlign(AnimatedAlign::_ctorMain p = {}) {
	return AnimatedAlign::ctorMain(p);
}

class AnimatedSlide : public ImplicitlyAnimatedWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	shptr<class Offset> /*var-non-null*/ offset();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Offset> offset;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedSlide> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedSlide> AnimatedSlide(AnimatedSlide::_ctorMain p = {}) {
	return AnimatedSlide::ctorMain(p);
}

class AnimatedFractionallySizedBox : public ImplicitlyAnimatedWidget
{
public:
	shptr<class Widget> /*var-nullable*/ child();
	stdop<double> /*var-nullable*/ heightFactor();
	stdop<double> /*var-nullable*/ widthFactor();
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*nullable*/ stdop<double> heightFactor;
		/*nullable*/ stdop<double> widthFactor;
		/*non-null*/ shptr<class Curve> curve = Curves::linear();
		/*non-null*/ shptr<class Duration> duration;
		/*nullable*/ stdfunc<void()> /*() -> void*/ onEnd;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedFractionallySizedBox> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedFractionallySizedBox> AnimatedFractionallySizedBox(AnimatedFractionallySizedBox::_ctorMain p = {}) {
	return AnimatedFractionallySizedBox::ctorMain(p);
}

class AnimatedBuilder : public ListenableBuilder
{
public:
	shptr<class Listenable> /*get-non-null*/ animation();
	shptr<class Listenable> /*get-non-null*/ listenable();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Listenable> animation;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Widget>)> /*(BuildContext, Widget) -> Widget*/ builder;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class AnimatedBuilder> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class AnimatedBuilder> AnimatedBuilder(AnimatedBuilder::_ctorMain p = {}) {
	return AnimatedBuilder::ctorMain(p);
}

class FadeTransition : public SingleChildRenderObjectWidget
{
public:
	bool /*var-non-null*/ alwaysIncludeSemantics();
	struct _ctorMain
	{
		/*nullable*/ shptr<class Key> key;
		/*non-null*/ shptr<class Animation<double>> opacity;
		/*non-null*/ bool alwaysIncludeSemantics = false;
		/*nullable*/ shptr<class Widget> child;
	};
	static shptr<class FadeTransition> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class FadeTransition> FadeTransition(FadeTransition::_ctorMain p = {}) {
	return FadeTransition::ctorMain(p);
}

class Animate : public StatefulWidget
{
public:
	static shptr<class Duration> /*var-non-null*/ defaultDuration();
	static shptr<class Curve> /*var-non-null*/ defaultCurve();
	shptr<class Widget> /*var-non-null*/ child();
	bool /*var-non-null*/ autoPlay();
	shptr<class Duration> /*var-non-null*/ delay();
	shptr<class AnimationController> /*var-nullable*/ controller();
	shptr<class ObjBase> /*var-nullable*/ adapter();
	stdop<double> /*var-nullable*/ target();
	stdop<double> /*var-nullable*/ value();
	shptr<class Duration> /*get-non-null*/ duration();
	struct _align
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ shptr<class Alignment> begin;
		/*nullable*/ shptr<class Alignment> end;
	};
	shptr<class Animate> /*non-null*/ align(_align p = {});
	struct _blur
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ shptr<class Offset> begin;
		/*nullable*/ shptr<class Offset> end;
	};
	shptr<class Animate> /*non-null*/ blur(_blur p = {});
	struct _blurX
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
	};
	shptr<class Animate> /*non-null*/ blurX(_blurX p = {});
	struct _blurY
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
	};
	shptr<class Animate> /*non-null*/ blurY(_blurY p = {});
	struct _blurXY
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
	};
	shptr<class Animate> /*non-null*/ blurXY(_blurXY p = {});
	struct _boxShadow
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ shptr<class BoxShadow> begin;
		/*nullable*/ shptr<class BoxShadow> end;
		/*nullable*/ shptr<class BorderRadius> borderRadius;
	};
	shptr<class Animate> /*non-null*/ boxShadow(_boxShadow p = {});
	struct _callback
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*non-null*/ stdfunc<void(bool)> /*(bool) -> void*/ callback;
	};
	shptr<class Animate> /*non-null*/ callback(_callback p = {});
	struct _color
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ shptr<class Color> begin;
		/*nullable*/ shptr<class Color> end;
		/*nullable*/ stdop<BlendMode> blendMode;
	};
	shptr<class Animate> /*non-null*/ color(_color p = {});
	struct _crossfade
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>)> /*(BuildContext) -> Widget*/ builder;
		/*nullable*/ shptr<class Alignment> alignment;
	};
	shptr<class Animate> /*non-null*/ crossfade(_crossfade p = {});
	struct _custom
	{
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, double, shptr<class Widget>)> /*(BuildContext, double, Widget) -> Widget*/ builder;
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
	};
	shptr<class Animate> /*non-null*/ custom(_custom p = {});
	struct _effect
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
	};
	shptr<class Animate> /*non-null*/ effect(_effect p = {});
	struct _elevation
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class BorderRadius> borderRadius;
	};
	shptr<class Animate> /*non-null*/ elevation(_elevation p = {});
	struct _fade
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
	};
	shptr<class Animate> /*non-null*/ fade(_fade p = {});
	struct _fadeIn
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
	};
	shptr<class Animate> /*non-null*/ fadeIn(_fadeIn p = {});
	struct _fadeOut
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
	};
	shptr<class Animate> /*non-null*/ fadeOut(_fadeOut p = {});
	struct _flip
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ shptr<class Alignment> alignment;
		/*nullable*/ stdop<double> perspective;
		/*nullable*/ stdop<Axis> direction;
	};
	shptr<class Animate> /*non-null*/ flip(_flip p = {});
	struct _flipH
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ shptr<class Alignment> alignment;
		/*nullable*/ stdop<double> perspective;
	};
	shptr<class Animate> /*non-null*/ flipH(_flipH p = {});
	struct _flipV
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ shptr<class Alignment> alignment;
		/*nullable*/ stdop<double> perspective;
	};
	shptr<class Animate> /*non-null*/ flipV(_flipV p = {});
	struct _followPath
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*non-null*/ shptr<class Path> path;
		/*nullable*/ stdop<bool> rotate;
		/*nullable*/ stdop<double> rotationOffset;
		/*nullable*/ stdop<bool> transformHitTests;
	};
	shptr<class Animate> /*non-null*/ followPath(_followPath p = {});
	struct _listen
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*non-null*/ stdfunc<void(double)> /*(double) -> void*/ callback;
		/*non-null*/ bool clamp = true;
	};
	shptr<class Animate> /*non-null*/ listen(_listen p = {});
	struct _move
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ shptr<class Offset> begin;
		/*nullable*/ shptr<class Offset> end;
		/*nullable*/ stdop<bool> transformHitTests;
	};
	shptr<class Animate> /*non-null*/ move(_move p = {});
	struct _moveX
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ stdop<bool> transformHitTests;
	};
	shptr<class Animate> /*non-null*/ moveX(_moveX p = {});
	struct _moveY
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ stdop<bool> transformHitTests;
	};
	shptr<class Animate> /*non-null*/ moveY(_moveY p = {});
	struct _rotate
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ shptr<class Alignment> alignment;
		/*nullable*/ stdop<bool> transformHitTests;
	};
	shptr<class Animate> /*non-null*/ rotate(_rotate p = {});
	struct _saturate
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
	};
	shptr<class Animate> /*non-null*/ saturate(_saturate p = {});
	struct _desaturate
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
	};
	shptr<class Animate> /*non-null*/ desaturate(_desaturate p = {});
	struct _scale
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ shptr<class Offset> begin;
		/*nullable*/ shptr<class Offset> end;
		/*nullable*/ shptr<class Alignment> alignment;
		/*nullable*/ stdop<bool> transformHitTests;
	};
	shptr<class Animate> /*non-null*/ scale(_scale p = {});
	struct _scaleX
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ shptr<class Alignment> alignment;
		/*nullable*/ stdop<bool> transformHitTests;
	};
	shptr<class Animate> /*non-null*/ scaleX(_scaleX p = {});
	struct _scaleY
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ shptr<class Alignment> alignment;
		/*nullable*/ stdop<bool> transformHitTests;
	};
	shptr<class Animate> /*non-null*/ scaleY(_scaleY p = {});
	struct _scaleXY
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ shptr<class Alignment> alignment;
		/*nullable*/ stdop<bool> transformHitTests;
	};
	shptr<class Animate> /*non-null*/ scaleXY(_scaleXY p = {});
	struct _shake
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> hz;
		/*nullable*/ shptr<class Offset> offset;
		/*nullable*/ stdop<double> rotation;
	};
	shptr<class Animate> /*non-null*/ shake(_shake p = {});
	struct _shakeX
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> hz;
		/*nullable*/ stdop<double> amount;
	};
	shptr<class Animate> /*non-null*/ shakeX(_shakeX p = {});
	struct _shakeY
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> hz;
		/*nullable*/ stdop<double> amount;
	};
	shptr<class Animate> /*non-null*/ shakeY(_shakeY p = {});
	struct _shimmer
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<stdvec<shptr<class Color>>> colors;
		/*nullable*/ stdop<stdvec<double>> stops;
		/*nullable*/ stdop<double> size;
		/*nullable*/ stdop<double> angle;
		/*nullable*/ stdop<BlendMode> blendMode;
		/*nullable*/ stdop<double> padding;
	};
	shptr<class Animate> /*non-null*/ shimmer(_shimmer p = {});
	struct _slide
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ shptr<class Offset> begin;
		/*nullable*/ shptr<class Offset> end;
	};
	shptr<class Animate> /*non-null*/ slide(_slide p = {});
	struct _slideX
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
	};
	shptr<class Animate> /*non-null*/ slideX(_slideX p = {});
	struct _slideY
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
	};
	shptr<class Animate> /*non-null*/ slideY(_slideY p = {});
	struct _swap
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, shptr<class Widget>)> /*(BuildContext, Widget) -> Widget*/ builder;
	};
	shptr<class Animate> /*non-null*/ swap(_swap p = {});
	struct _then
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
	};
	shptr<class Animate> /*non-null*/ then(_then p = {});
	struct _tint
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ shptr<class Color> color;
	};
	shptr<class Animate> /*non-null*/ tint(_tint p = {});
	struct _untint
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ shptr<class Curve> curve;
		/*nullable*/ stdop<double> begin;
		/*nullable*/ stdop<double> end;
		/*nullable*/ shptr<class Color> color;
	};
	shptr<class Animate> /*non-null*/ untint(_untint p = {});
	struct _toggle
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*non-null*/ stdfunc<shptr<class Widget>(shptr<class BuildContext>, bool, shptr<class Widget>)> /*(BuildContext, bool, Widget) -> Widget*/ builder;
	};
	shptr<class Animate> /*non-null*/ toggle(_toggle p = {});
	struct _visibility
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ stdop<bool> end;
		/*nullable*/ stdop<bool> maintain;
	};
	shptr<class Animate> /*non-null*/ visibility(_visibility p = {});
	struct _show
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ stdop<bool> maintain;
	};
	shptr<class Animate> /*non-null*/ show(_show p = {});
	struct _hide
	{
		/*nullable*/ shptr<class Duration> delay;
		/*nullable*/ shptr<class Duration> duration;
		/*nullable*/ stdop<bool> maintain;
	};
	shptr<class Animate> /*non-null*/ hide(_hide p = {});
};
