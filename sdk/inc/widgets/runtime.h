#pragma once

#define double_infinity (double)INFINITY

class Duration : public ObjBase
{
public:
	static int64 /*var-non-null*/ microsecondsPerMillisecond();
	static int64 /*var-non-null*/ millisecondsPerSecond();
	static int64 /*var-non-null*/ secondsPerMinute();
	static int64 /*var-non-null*/ minutesPerHour();
	static int64 /*var-non-null*/ hoursPerDay();
	static int64 /*var-non-null*/ microsecondsPerSecond();
	static int64 /*var-non-null*/ microsecondsPerMinute();
	static int64 /*var-non-null*/ microsecondsPerHour();
	static int64 /*var-non-null*/ microsecondsPerDay();
	static int64 /*var-non-null*/ millisecondsPerMinute();
	static int64 /*var-non-null*/ millisecondsPerHour();
	static int64 /*var-non-null*/ millisecondsPerDay();
	static int64 /*var-non-null*/ secondsPerHour();
	static int64 /*var-non-null*/ secondsPerDay();
	static int64 /*var-non-null*/ minutesPerDay();
	static shptr<class Duration> /*var-non-null*/ zero();
	int64 /*get-non-null*/ inDays();
	int64 /*get-non-null*/ inHours();
	int64 /*get-non-null*/ inMinutes();
	int64 /*get-non-null*/ inSeconds();
	int64 /*get-non-null*/ inMilliseconds();
	int64 /*get-non-null*/ inMicroseconds();
	bool /*get-non-null*/ isNegative();
	shptr<class Duration> /*non-null*/ plus(/*non-null*/ shptr<class Duration> other);
	shptr<class Duration> /*non-null*/ minus(/*non-null*/ shptr<class Duration> other);
	shptr<class Duration> /*non-null*/ mul(/*non-null*/ shptr<class num> factor);
	shptr<class Duration> /*non-null*/ idiv(/*non-null*/ int64 quotient);
	bool /*non-null*/ less (/*non-null*/ shptr<class Duration> other);
	bool /*non-null*/ greater (/*non-null*/ shptr<class Duration> other);
	bool /*non-null*/ lessEqual (/*non-null*/ shptr<class Duration> other);
	bool /*non-null*/ greaterEqual (/*non-null*/ shptr<class Duration> other);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	int64 /*non-null*/ compareTo(/*non-null*/ shptr<class Duration> other);
	shptr<class Duration> /*non-null*/ abs();
	shptr<class Duration> /*non-null*/ neg();
	struct _ctorMain
	{
		/*non-null*/ int64 days = 0;
		/*non-null*/ int64 hours = 0;
		/*non-null*/ int64 minutes = 0;
		/*non-null*/ int64 seconds = 0;
		/*non-null*/ int64 milliseconds = 0;
		/*non-null*/ int64 microseconds = 0;
	};
	static shptr<class Duration> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Duration> Duration(Duration::_ctorMain p = {}) {
	return Duration::ctorMain(p);
}

inline shptr<class Duration> DurationMs(int64 ms) {
	return Duration::ctorMain({.milliseconds = ms});
}

class DateTime : public ObjBase {};

class TimeOfDay : public ObjBase
{
public:
	static int64 /*var-non-null*/ hoursPerDay();
	static int64 /*var-non-null*/ hoursPerPeriod();
	static int64 /*var-non-null*/ minutesPerHour();
	int64 /*var-non-null*/ hour();
	int64 /*var-non-null*/ minute();
	DayPeriod /*get-non-null*/ period();
	int64 /*get-non-null*/ hourOfPeriod();
	int64 /*get-non-null*/ periodOffset();
	struct _replacing
	{
		/*nullable*/ stdop<int64> hour;
		/*nullable*/ stdop<int64> minute;
	};
	shptr<class TimeOfDay> /*non-null*/ replacing(_replacing p = {});
	stdstr /*non-null*/ format(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ int64 hour;
		/*non-null*/ int64 minute;
	};
	static shptr<class TimeOfDay> /*non-null*/ ctorMain(_ctorMain p = {});
	static shptr<class TimeOfDay> /*non-null*/ fromDateTime(/*non-null*/ shptr<class DateTime> time);
	static shptr<class TimeOfDay> /*non-null*/ now();
};

inline shptr<class TimeOfDay> TimeOfDay(TimeOfDay::_ctorMain p = {}) {
	return TimeOfDay::ctorMain(p);
}

class Offset : public OffsetBase
{
public:
	static shptr<class Offset> /*var-non-null*/ zero();
	static shptr<class Offset> /*var-non-null*/ infinite();
	double /*get-non-null*/ dx();
	double /*get-non-null*/ dy();
	double /*get-non-null*/ distance();
	double /*get-non-null*/ distanceSquared();
	double /*get-non-null*/ direction();
	shptr<class Offset> /*non-null*/ scale(/*non-null*/ double scaleX, /*non-null*/ double scaleY);
	shptr<class Offset> /*non-null*/ translate(/*non-null*/ double translateX, /*non-null*/ double translateY);
	shptr<class Offset> /*non-null*/ neg();
	shptr<class Offset> /*non-null*/ minus(/*non-null*/ shptr<class Offset> other);
	shptr<class Offset> /*non-null*/ plus(/*non-null*/ shptr<class Offset> other);
	shptr<class Offset> /*non-null*/ mul(/*non-null*/ double operand);
	shptr<class Offset> /*non-null*/ div(/*non-null*/ double operand);
	shptr<class Offset> /*non-null*/ idiv(/*non-null*/ double operand);
	shptr<class Offset> /*non-null*/ mod(/*non-null*/ double operand);
	shptr<class Rect> /*non-null*/ bitop(/*non-null*/ shptr<class Size> other);
	static shptr<class Offset> /*nullable*/ lerp(/*nullable*/ shptr<class Offset> a, /*nullable*/ shptr<class Offset> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	static shptr<class Offset> /*non-null*/ ctorMain(/*non-null*/ double dx, /*non-null*/ double dy);
	static shptr<class Offset> /*non-null*/ fromDirection(/*non-null*/ double direction, /*non-null*/ double distance = 1.0);
};

inline shptr<class Offset> Offset(/*non-null*/ double dx, /*non-null*/ double dy) {
	return Offset::ctorMain(dx, dy);
}

class Velocity : public ObjBase
{
public:
	static shptr<class Velocity> /*var-non-null*/ zero();
	shptr<class Offset> /*var-non-null*/ pixelsPerSecond();
	shptr<class Velocity> /*non-null*/ neg();
	shptr<class Velocity> /*non-null*/ minus(/*non-null*/ shptr<class Velocity> other);
	shptr<class Velocity> /*non-null*/ plus(/*non-null*/ shptr<class Velocity> other);
	shptr<class Velocity> /*non-null*/ clampMagnitude(/*non-null*/ double minValue, /*non-null*/ double maxValue);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class Offset> pixelsPerSecond;
	};
	static shptr<class Velocity> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Velocity> Velocity(Velocity::_ctorMain p = {}) {
	return Velocity::ctorMain(p);
}

class Size : public OffsetBase
{
public:
	static shptr<class Size> /*var-non-null*/ zero();
	static shptr<class Size> /*var-non-null*/ infinite();
	double /*get-non-null*/ width();
	double /*get-non-null*/ height();
	double /*get-non-null*/ aspectRatio();
	bool /*get-non-null*/ isEmpty();
	double /*get-non-null*/ shortestSide();
	double /*get-non-null*/ longestSide();
	shptr<class Size> /*get-non-null*/ flipped();
	shptr<class OffsetBase> /*non-null*/ minus(/*non-null*/ shptr<class OffsetBase> other);
	shptr<class Size> /*non-null*/ plus(/*non-null*/ shptr<class Offset> other);
	shptr<class Size> /*non-null*/ mul(/*non-null*/ double operand);
	shptr<class Size> /*non-null*/ div(/*non-null*/ double operand);
	shptr<class Size> /*non-null*/ idiv(/*non-null*/ double operand);
	shptr<class Size> /*non-null*/ mod(/*non-null*/ double operand);
	shptr<class Offset> /*non-null*/ topLeft(/*non-null*/ shptr<class Offset> origin);
	shptr<class Offset> /*non-null*/ topCenter(/*non-null*/ shptr<class Offset> origin);
	shptr<class Offset> /*non-null*/ topRight(/*non-null*/ shptr<class Offset> origin);
	shptr<class Offset> /*non-null*/ centerLeft(/*non-null*/ shptr<class Offset> origin);
	shptr<class Offset> /*non-null*/ center(/*non-null*/ shptr<class Offset> origin);
	shptr<class Offset> /*non-null*/ centerRight(/*non-null*/ shptr<class Offset> origin);
	shptr<class Offset> /*non-null*/ bottomLeft(/*non-null*/ shptr<class Offset> origin);
	shptr<class Offset> /*non-null*/ bottomCenter(/*non-null*/ shptr<class Offset> origin);
	shptr<class Offset> /*non-null*/ bottomRight(/*non-null*/ shptr<class Offset> origin);
	bool /*non-null*/ contains(/*non-null*/ shptr<class Offset> offset);
	static shptr<class Size> /*nullable*/ lerp(/*nullable*/ shptr<class Size> a, /*nullable*/ shptr<class Size> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	static shptr<class Size> /*non-null*/ ctorMain(/*non-null*/ double width, /*non-null*/ double height);
	static shptr<class Size> /*non-null*/ copy(/*non-null*/ shptr<class Size> source);
	static shptr<class Size> /*non-null*/ square(/*non-null*/ double dimension);
	static shptr<class Size> /*non-null*/ fromWidth(/*non-null*/ double width);
	static shptr<class Size> /*non-null*/ fromHeight(/*non-null*/ double height);
	static shptr<class Size> /*non-null*/ fromRadius(/*non-null*/ double radius);
};

inline shptr<class Size> Size(/*non-null*/ double width, /*non-null*/ double height) {
	return Size::ctorMain(width, height);
}

class Rect : public ObjBase
{
public:
	double /*var-non-null*/ left();
	double /*var-non-null*/ top();
	double /*var-non-null*/ right();
	double /*var-non-null*/ bottom();
	static shptr<class Rect> /*var-non-null*/ zero();
	static shptr<class Rect> /*var-non-null*/ largest();
	double /*get-non-null*/ width();
	double /*get-non-null*/ height();
	shptr<class Size> /*get-non-null*/ size();
	bool /*get-non-null*/ hasNaN();
	bool /*get-non-null*/ isInfinite();
	bool /*get-non-null*/ isFinite();
	bool /*get-non-null*/ isEmpty();
	double /*get-non-null*/ shortestSide();
	double /*get-non-null*/ longestSide();
	shptr<class Offset> /*get-non-null*/ topLeft();
	shptr<class Offset> /*get-non-null*/ topCenter();
	shptr<class Offset> /*get-non-null*/ topRight();
	shptr<class Offset> /*get-non-null*/ centerLeft();
	shptr<class Offset> /*get-non-null*/ center();
	shptr<class Offset> /*get-non-null*/ centerRight();
	shptr<class Offset> /*get-non-null*/ bottomLeft();
	shptr<class Offset> /*get-non-null*/ bottomCenter();
	shptr<class Offset> /*get-non-null*/ bottomRight();
	shptr<class Rect> /*non-null*/ shift(/*non-null*/ shptr<class Offset> offset);
	shptr<class Rect> /*non-null*/ translate(/*non-null*/ double translateX, /*non-null*/ double translateY);
	shptr<class Rect> /*non-null*/ inflate(/*non-null*/ double delta);
	shptr<class Rect> /*non-null*/ deflate(/*non-null*/ double delta);
	shptr<class Rect> /*non-null*/ intersect(/*non-null*/ shptr<class Rect> other);
	shptr<class Rect> /*non-null*/ expandToInclude(/*non-null*/ shptr<class Rect> other);
	bool /*non-null*/ overlaps(/*non-null*/ shptr<class Rect> other);
	bool /*non-null*/ contains(/*non-null*/ shptr<class Offset> offset);
	static shptr<class Rect> /*nullable*/ lerp(/*nullable*/ shptr<class Rect> a, /*nullable*/ shptr<class Rect> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	static shptr<class Rect> /*non-null*/ fromLTRB(/*non-null*/ double left, /*non-null*/ double top, /*non-null*/ double right, /*non-null*/ double bottom);
	static shptr<class Rect> /*non-null*/ fromLTWH(/*non-null*/ double left, /*non-null*/ double top, /*non-null*/ double width, /*non-null*/ double height);
	struct _fromCircle
	{
		/*non-null*/ shptr<class Offset> center;
		/*non-null*/ double radius;
	};
	static shptr<class Rect> /*non-null*/ fromCircle(_fromCircle p = {});
	struct _fromCenter
	{
		/*non-null*/ shptr<class Offset> center;
		/*non-null*/ double width;
		/*non-null*/ double height;
	};
	static shptr<class Rect> /*non-null*/ fromCenter(_fromCenter p = {});
	static shptr<class Rect> /*non-null*/ fromPoints(/*non-null*/ shptr<class Offset> a, /*non-null*/ shptr<class Offset> b);
};

class Uint8List : public ObjBase
{
public:
	static shptr<class Uint8List> /*non-null*/ ctorMain(/*non-null*/ void *address, /*non-null*/ size_t size);
};

inline shptr<class Uint8List> /*non-null*/ Uint8List(/*non-null*/ void *address, /*non-null*/ size_t size) {
	return Uint8List::ctorMain(address, size);
}
