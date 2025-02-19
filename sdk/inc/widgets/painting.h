#pragma once

class Color : public ObjBase
{
public:
	int64 /*var-non-null*/ value();
	int64 /*get-non-null*/ alpha();
	double /*get-non-null*/ opacity();
	int64 /*get-non-null*/ red();
	int64 /*get-non-null*/ green();
	int64 /*get-non-null*/ blue();
	shptr<class Color> /*non-null*/ withAlpha(/*non-null*/ int64 a);
	shptr<class Color> /*non-null*/ withOpacity(/*non-null*/ double opacity);
	shptr<class Color> /*non-null*/ withRed(/*non-null*/ int64 r);
	shptr<class Color> /*non-null*/ withGreen(/*non-null*/ int64 g);
	shptr<class Color> /*non-null*/ withBlue(/*non-null*/ int64 b);
	double /*non-null*/ computeLuminance();
	static shptr<class Color> /*nullable*/ lerp(/*nullable*/ shptr<class Color> a, /*nullable*/ shptr<class Color> b, /*non-null*/ double t);
	static shptr<class Color> /*non-null*/ alphaBlend(/*non-null*/ shptr<class Color> foreground, /*non-null*/ shptr<class Color> background);
	static int64 /*non-null*/ getAlphaFromOpacity(/*non-null*/ double opacity);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	static shptr<class Color> /*non-null*/ ctorMain(/*non-null*/ int64 value);
	static shptr<class Color> /*non-null*/ fromARGB(/*non-null*/ int64 a, /*non-null*/ int64 r, /*non-null*/ int64 g, /*non-null*/ int64 b);
	static shptr<class Color> /*non-null*/ fromRGBO(/*non-null*/ int64 r, /*non-null*/ int64 g, /*non-null*/ int64 b, /*non-null*/ double opacity);
};

inline shptr<class Color> Color(/*non-null*/ int64 value) {
	return Color::ctorMain(value);
}

class MaterialColor : public Color
{
public:
	shptr<class Color> /*get-non-null*/ shade50();
	shptr<class Color> /*get-non-null*/ shade100();
	shptr<class Color> /*get-non-null*/ shade200();
	shptr<class Color> /*get-non-null*/ shade300();
	shptr<class Color> /*get-non-null*/ shade400();
	shptr<class Color> /*get-non-null*/ shade500();
	shptr<class Color> /*get-non-null*/ shade600();
	shptr<class Color> /*get-non-null*/ shade700();
	shptr<class Color> /*get-non-null*/ shade800();
	shptr<class Color> /*get-non-null*/ shade900();
};

class MaterialAccentColor : public Color
{
public:
	shptr<class Color> /*get-non-null*/ shade100();
	shptr<class Color> /*get-non-null*/ shade200();
	shptr<class Color> /*get-non-null*/ shade400();
	shptr<class Color> /*get-non-null*/ shade700();
};

class Colors : public ObjBase
{
public:
	static shptr<class Color> /*var-non-null*/ transparent();
	static shptr<class Color> /*var-non-null*/ black();
	static shptr<class Color> /*var-non-null*/ black87();
	static shptr<class Color> /*var-non-null*/ black54();
	static shptr<class Color> /*var-non-null*/ black45();
	static shptr<class Color> /*var-non-null*/ black38();
	static shptr<class Color> /*var-non-null*/ black26();
	static shptr<class Color> /*var-non-null*/ black12();
	static shptr<class Color> /*var-non-null*/ white();
	static shptr<class Color> /*var-non-null*/ white70();
	static shptr<class Color> /*var-non-null*/ white60();
	static shptr<class Color> /*var-non-null*/ white54();
	static shptr<class Color> /*var-non-null*/ white38();
	static shptr<class Color> /*var-non-null*/ white30();
	static shptr<class Color> /*var-non-null*/ white24();
	static shptr<class Color> /*var-non-null*/ white12();
	static shptr<class Color> /*var-non-null*/ white10();
	static shptr<class MaterialColor> /*var-non-null*/ red();
	static shptr<class MaterialAccentColor> /*var-non-null*/ redAccent();
	static shptr<class MaterialColor> /*var-non-null*/ pink();
	static shptr<class MaterialAccentColor> /*var-non-null*/ pinkAccent();
	static shptr<class MaterialColor> /*var-non-null*/ purple();
	static shptr<class MaterialAccentColor> /*var-non-null*/ purpleAccent();
	static shptr<class MaterialColor> /*var-non-null*/ deepPurple();
	static shptr<class MaterialAccentColor> /*var-non-null*/ deepPurpleAccent();
	static shptr<class MaterialColor> /*var-non-null*/ indigo();
	static shptr<class MaterialAccentColor> /*var-non-null*/ indigoAccent();
	static shptr<class MaterialColor> /*var-non-null*/ blue();
	static shptr<class MaterialAccentColor> /*var-non-null*/ blueAccent();
	static shptr<class MaterialColor> /*var-non-null*/ lightBlue();
	static shptr<class MaterialAccentColor> /*var-non-null*/ lightBlueAccent();
	static shptr<class MaterialColor> /*var-non-null*/ cyan();
	static shptr<class MaterialAccentColor> /*var-non-null*/ cyanAccent();
	static shptr<class MaterialColor> /*var-non-null*/ teal();
	static shptr<class MaterialAccentColor> /*var-non-null*/ tealAccent();
	static shptr<class MaterialColor> /*var-non-null*/ green();
	static shptr<class MaterialAccentColor> /*var-non-null*/ greenAccent();
	static shptr<class MaterialColor> /*var-non-null*/ lightGreen();
	static shptr<class MaterialAccentColor> /*var-non-null*/ lightGreenAccent();
	static shptr<class MaterialColor> /*var-non-null*/ lime();
	static shptr<class MaterialAccentColor> /*var-non-null*/ limeAccent();
	static shptr<class MaterialColor> /*var-non-null*/ yellow();
	static shptr<class MaterialAccentColor> /*var-non-null*/ yellowAccent();
	static shptr<class MaterialColor> /*var-non-null*/ amber();
	static shptr<class MaterialAccentColor> /*var-non-null*/ amberAccent();
	static shptr<class MaterialColor> /*var-non-null*/ orange();
	static shptr<class MaterialAccentColor> /*var-non-null*/ orangeAccent();
	static shptr<class MaterialColor> /*var-non-null*/ deepOrange();
	static shptr<class MaterialAccentColor> /*var-non-null*/ deepOrangeAccent();
	static shptr<class MaterialColor> /*var-non-null*/ brown();
	static shptr<class MaterialColor> /*var-non-null*/ grey();
	static shptr<class MaterialColor> /*var-non-null*/ blueGrey();
};

class CupertinoDynamicColor : public Color
{
public:
	shptr<class Color> /*var-non-null*/ color();
	shptr<class Color> /*var-non-null*/ darkColor();
	shptr<class Color> /*var-non-null*/ highContrastColor();
	shptr<class Color> /*var-non-null*/ darkHighContrastColor();
	shptr<class Color> /*var-non-null*/ elevatedColor();
	shptr<class Color> /*var-non-null*/ darkElevatedColor();
	shptr<class Color> /*var-non-null*/ highContrastElevatedColor();
	shptr<class Color> /*var-non-null*/ darkHighContrastElevatedColor();
	int64 /*get-non-null*/ value();
	static shptr<class Color> /*non-null*/ resolve(/*non-null*/ shptr<class Color> resolvable, /*non-null*/ shptr<class BuildContext> context);
	static shptr<class Color> /*nullable*/ maybeResolve(/*nullable*/ shptr<class Color> resolvable, /*non-null*/ shptr<class BuildContext> context);
	shptr<class CupertinoDynamicColor> /*non-null*/ resolveFrom(/*non-null*/ shptr<class BuildContext> context);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ stdop<stdstr> debugLabel;
		/*non-null*/ shptr<class Color> color;
		/*non-null*/ shptr<class Color> darkColor;
		/*non-null*/ shptr<class Color> highContrastColor;
		/*non-null*/ shptr<class Color> darkHighContrastColor;
		/*non-null*/ shptr<class Color> elevatedColor;
		/*non-null*/ shptr<class Color> darkElevatedColor;
		/*non-null*/ shptr<class Color> highContrastElevatedColor;
		/*non-null*/ shptr<class Color> darkHighContrastElevatedColor;
	};
	static shptr<class CupertinoDynamicColor> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _withBrightnessAndContrast
	{
		/*nullable*/ stdop<stdstr> debugLabel;
		/*non-null*/ shptr<class Color> color;
		/*non-null*/ shptr<class Color> darkColor;
		/*non-null*/ shptr<class Color> highContrastColor;
		/*non-null*/ shptr<class Color> darkHighContrastColor;
	};
	static shptr<class CupertinoDynamicColor> /*non-null*/ withBrightnessAndContrast(_withBrightnessAndContrast p = {});
	struct _withBrightness
	{
		/*nullable*/ stdop<stdstr> debugLabel;
		/*non-null*/ shptr<class Color> color;
		/*non-null*/ shptr<class Color> darkColor;
	};
	static shptr<class CupertinoDynamicColor> /*non-null*/ withBrightness(_withBrightness p = {});
};

inline shptr<class CupertinoDynamicColor> CupertinoDynamicColor(CupertinoDynamicColor::_ctorMain p = {}) {
	return CupertinoDynamicColor::ctorMain(p);
}

class CupertinoColors : public ObjBase
{
public:
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ activeBlue();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ activeGreen();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ activeOrange();
	static shptr<class Color> /*var-non-null*/ white();
	static shptr<class Color> /*var-non-null*/ black();
	static shptr<class Color> /*var-non-null*/ lightBackgroundGray();
	static shptr<class Color> /*var-non-null*/ extraLightBackgroundGray();
	static shptr<class Color> /*var-non-null*/ darkBackgroundGray();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ inactiveGray();
	static shptr<class Color> /*var-non-null*/ destructiveRed();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemBlue();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemGreen();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemMint();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemIndigo();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemOrange();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemPink();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemBrown();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemPurple();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemRed();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemTeal();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemCyan();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemYellow();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemGrey();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemGrey2();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemGrey3();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemGrey4();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemGrey5();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemGrey6();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ label();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ secondaryLabel();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ tertiaryLabel();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ quaternaryLabel();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemFill();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ secondarySystemFill();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ tertiarySystemFill();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ quaternarySystemFill();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ placeholderText();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemBackground();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ secondarySystemBackground();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ tertiarySystemBackground();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ systemGroupedBackground();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ secondarySystemGroupedBackground();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ tertiarySystemGroupedBackground();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ separator();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ opaqueSeparator();
	static shptr<class CupertinoDynamicColor> /*var-non-null*/ link();
};

class ColorScheme : public ObjBase
{
public:
	Brightness /*var-non-null*/ brightness();
	shptr<class Color> /*var-non-null*/ primary();
	shptr<class Color> /*var-non-null*/ onPrimary();
	shptr<class Color> /*var-non-null*/ secondary();
	shptr<class Color> /*var-non-null*/ onSecondary();
	shptr<class Color> /*var-non-null*/ error();
	shptr<class Color> /*var-non-null*/ onError();
	shptr<class Color> /*var-non-null*/ background();
	shptr<class Color> /*var-non-null*/ onBackground();
	shptr<class Color> /*var-non-null*/ surface();
	shptr<class Color> /*var-non-null*/ onSurface();
	shptr<class Color> /*get-non-null*/ primaryContainer();
	shptr<class Color> /*get-non-null*/ onPrimaryContainer();
	shptr<class Color> /*get-non-null*/ secondaryContainer();
	shptr<class Color> /*get-non-null*/ onSecondaryContainer();
	shptr<class Color> /*get-non-null*/ tertiary();
	shptr<class Color> /*get-non-null*/ onTertiary();
	shptr<class Color> /*get-non-null*/ tertiaryContainer();
	shptr<class Color> /*get-non-null*/ onTertiaryContainer();
	shptr<class Color> /*get-non-null*/ errorContainer();
	shptr<class Color> /*get-non-null*/ onErrorContainer();
	shptr<class Color> /*get-non-null*/ surfaceVariant();
	shptr<class Color> /*get-non-null*/ onSurfaceVariant();
	shptr<class Color> /*get-non-null*/ outline();
	shptr<class Color> /*get-non-null*/ outlineVariant();
	shptr<class Color> /*get-non-null*/ shadow();
	shptr<class Color> /*get-non-null*/ scrim();
	shptr<class Color> /*get-non-null*/ inverseSurface();
	shptr<class Color> /*get-non-null*/ onInverseSurface();
	shptr<class Color> /*get-non-null*/ inversePrimary();
	shptr<class Color> /*get-non-null*/ surfaceTint();
	struct _copyWith
	{
		/*nullable*/ stdop<Brightness> brightness;
		/*nullable*/ shptr<class Color> primary;
		/*nullable*/ shptr<class Color> onPrimary;
		/*nullable*/ shptr<class Color> primaryContainer;
		/*nullable*/ shptr<class Color> onPrimaryContainer;
		/*nullable*/ shptr<class Color> secondary;
		/*nullable*/ shptr<class Color> onSecondary;
		/*nullable*/ shptr<class Color> secondaryContainer;
		/*nullable*/ shptr<class Color> onSecondaryContainer;
		/*nullable*/ shptr<class Color> tertiary;
		/*nullable*/ shptr<class Color> onTertiary;
		/*nullable*/ shptr<class Color> tertiaryContainer;
		/*nullable*/ shptr<class Color> onTertiaryContainer;
		/*nullable*/ shptr<class Color> error;
		/*nullable*/ shptr<class Color> onError;
		/*nullable*/ shptr<class Color> errorContainer;
		/*nullable*/ shptr<class Color> onErrorContainer;
		/*nullable*/ shptr<class Color> background;
		/*nullable*/ shptr<class Color> onBackground;
		/*nullable*/ shptr<class Color> surface;
		/*nullable*/ shptr<class Color> onSurface;
		/*nullable*/ shptr<class Color> surfaceVariant;
		/*nullable*/ shptr<class Color> onSurfaceVariant;
		/*nullable*/ shptr<class Color> outline;
		/*nullable*/ shptr<class Color> outlineVariant;
		/*nullable*/ shptr<class Color> shadow;
		/*nullable*/ shptr<class Color> scrim;
		/*nullable*/ shptr<class Color> inverseSurface;
		/*nullable*/ shptr<class Color> onInverseSurface;
		/*nullable*/ shptr<class Color> inversePrimary;
		/*nullable*/ shptr<class Color> surfaceTint;
	};
	shptr<class ColorScheme> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class ColorScheme> /*non-null*/ lerp(/*non-null*/ shptr<class ColorScheme> a, /*non-null*/ shptr<class ColorScheme> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ Brightness brightness;
		/*non-null*/ shptr<class Color> primary;
		/*non-null*/ shptr<class Color> onPrimary;
		/*nullable*/ shptr<class Color> primaryContainer;
		/*nullable*/ shptr<class Color> onPrimaryContainer;
		/*non-null*/ shptr<class Color> secondary;
		/*non-null*/ shptr<class Color> onSecondary;
		/*nullable*/ shptr<class Color> secondaryContainer;
		/*nullable*/ shptr<class Color> onSecondaryContainer;
		/*nullable*/ shptr<class Color> tertiary;
		/*nullable*/ shptr<class Color> onTertiary;
		/*nullable*/ shptr<class Color> tertiaryContainer;
		/*nullable*/ shptr<class Color> onTertiaryContainer;
		/*non-null*/ shptr<class Color> error;
		/*non-null*/ shptr<class Color> onError;
		/*nullable*/ shptr<class Color> errorContainer;
		/*nullable*/ shptr<class Color> onErrorContainer;
		/*non-null*/ shptr<class Color> background;
		/*non-null*/ shptr<class Color> onBackground;
		/*non-null*/ shptr<class Color> surface;
		/*non-null*/ shptr<class Color> onSurface;
		/*nullable*/ shptr<class Color> surfaceVariant;
		/*nullable*/ shptr<class Color> onSurfaceVariant;
		/*nullable*/ shptr<class Color> outline;
		/*nullable*/ shptr<class Color> outlineVariant;
		/*nullable*/ shptr<class Color> shadow;
		/*nullable*/ shptr<class Color> scrim;
		/*nullable*/ shptr<class Color> inverseSurface;
		/*nullable*/ shptr<class Color> onInverseSurface;
		/*nullable*/ shptr<class Color> inversePrimary;
		/*nullable*/ shptr<class Color> surfaceTint;
	};
	static shptr<class ColorScheme> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _light
	{
		/*non-null*/ Brightness brightness = Brightness_light;
		/*non-null*/ shptr<class Color> primary = Color(0xff6200ee);
		/*non-null*/ shptr<class Color> onPrimary = Color(0xffffffff);
		/*nullable*/ shptr<class Color> primaryContainer;
		/*nullable*/ shptr<class Color> onPrimaryContainer;
		/*non-null*/ shptr<class Color> secondary = Color(0xff03dac6);
		/*non-null*/ shptr<class Color> onSecondary = Color(0xff000000);
		/*nullable*/ shptr<class Color> secondaryContainer;
		/*nullable*/ shptr<class Color> onSecondaryContainer;
		/*nullable*/ shptr<class Color> tertiary;
		/*nullable*/ shptr<class Color> onTertiary;
		/*nullable*/ shptr<class Color> tertiaryContainer;
		/*nullable*/ shptr<class Color> onTertiaryContainer;
		/*non-null*/ shptr<class Color> error = Color(0xffb00020);
		/*non-null*/ shptr<class Color> onError = Color(0xffffffff);
		/*nullable*/ shptr<class Color> errorContainer;
		/*nullable*/ shptr<class Color> onErrorContainer;
		/*non-null*/ shptr<class Color> background = Color(0xffffffff);
		/*non-null*/ shptr<class Color> onBackground = Color(0xff000000);
		/*non-null*/ shptr<class Color> surface = Color(0xffffffff);
		/*non-null*/ shptr<class Color> onSurface = Color(0xff000000);
		/*nullable*/ shptr<class Color> surfaceVariant;
		/*nullable*/ shptr<class Color> onSurfaceVariant;
		/*nullable*/ shptr<class Color> outline;
		/*nullable*/ shptr<class Color> outlineVariant;
		/*nullable*/ shptr<class Color> shadow;
		/*nullable*/ shptr<class Color> scrim;
		/*nullable*/ shptr<class Color> inverseSurface;
		/*nullable*/ shptr<class Color> onInverseSurface;
		/*nullable*/ shptr<class Color> inversePrimary;
		/*nullable*/ shptr<class Color> surfaceTint;
	};
	static shptr<class ColorScheme> /*non-null*/ light(_light p = {});
	struct _dark
	{
		/*non-null*/ Brightness brightness = Brightness_dark;
		/*non-null*/ shptr<class Color> primary = Color(0xffbb86fc);
		/*non-null*/ shptr<class Color> onPrimary = Color(0xff000000);
		/*nullable*/ shptr<class Color> primaryContainer;
		/*nullable*/ shptr<class Color> onPrimaryContainer;
		/*non-null*/ shptr<class Color> secondary = Color(0xff03dac6);
		/*non-null*/ shptr<class Color> onSecondary = Color(0xff000000);
		/*nullable*/ shptr<class Color> secondaryContainer;
		/*nullable*/ shptr<class Color> onSecondaryContainer;
		/*nullable*/ shptr<class Color> tertiary;
		/*nullable*/ shptr<class Color> onTertiary;
		/*nullable*/ shptr<class Color> tertiaryContainer;
		/*nullable*/ shptr<class Color> onTertiaryContainer;
		/*non-null*/ shptr<class Color> error = Color(0xffcf6679);
		/*non-null*/ shptr<class Color> onError = Color(0xff000000);
		/*nullable*/ shptr<class Color> errorContainer;
		/*nullable*/ shptr<class Color> onErrorContainer;
		/*non-null*/ shptr<class Color> background = Color(0xff121212);
		/*non-null*/ shptr<class Color> onBackground = Color(0xffffffff);
		/*non-null*/ shptr<class Color> surface = Color(0xff121212);
		/*non-null*/ shptr<class Color> onSurface = Color(0xffffffff);
		/*nullable*/ shptr<class Color> surfaceVariant;
		/*nullable*/ shptr<class Color> onSurfaceVariant;
		/*nullable*/ shptr<class Color> outline;
		/*nullable*/ shptr<class Color> outlineVariant;
		/*nullable*/ shptr<class Color> shadow;
		/*nullable*/ shptr<class Color> scrim;
		/*nullable*/ shptr<class Color> inverseSurface;
		/*nullable*/ shptr<class Color> onInverseSurface;
		/*nullable*/ shptr<class Color> inversePrimary;
		/*nullable*/ shptr<class Color> surfaceTint;
	};
	static shptr<class ColorScheme> /*non-null*/ dark(_dark p = {});
	struct _highContrastLight
	{
		/*non-null*/ Brightness brightness = Brightness_light;
		/*non-null*/ shptr<class Color> primary = Color(0xff0000ba);
		/*non-null*/ shptr<class Color> onPrimary = Color(0xffffffff);
		/*nullable*/ shptr<class Color> primaryContainer;
		/*nullable*/ shptr<class Color> onPrimaryContainer;
		/*non-null*/ shptr<class Color> secondary = Color(0xff66fff9);
		/*non-null*/ shptr<class Color> onSecondary = Color(0xff000000);
		/*nullable*/ shptr<class Color> secondaryContainer;
		/*nullable*/ shptr<class Color> onSecondaryContainer;
		/*nullable*/ shptr<class Color> tertiary;
		/*nullable*/ shptr<class Color> onTertiary;
		/*nullable*/ shptr<class Color> tertiaryContainer;
		/*nullable*/ shptr<class Color> onTertiaryContainer;
		/*non-null*/ shptr<class Color> error = Color(0xff790000);
		/*non-null*/ shptr<class Color> onError = Color(0xffffffff);
		/*nullable*/ shptr<class Color> errorContainer;
		/*nullable*/ shptr<class Color> onErrorContainer;
		/*non-null*/ shptr<class Color> background = Color(0xffffffff);
		/*non-null*/ shptr<class Color> onBackground = Color(0xff000000);
		/*non-null*/ shptr<class Color> surface = Color(0xffffffff);
		/*non-null*/ shptr<class Color> onSurface = Color(0xff000000);
		/*nullable*/ shptr<class Color> surfaceVariant;
		/*nullable*/ shptr<class Color> onSurfaceVariant;
		/*nullable*/ shptr<class Color> outline;
		/*nullable*/ shptr<class Color> outlineVariant;
		/*nullable*/ shptr<class Color> shadow;
		/*nullable*/ shptr<class Color> scrim;
		/*nullable*/ shptr<class Color> inverseSurface;
		/*nullable*/ shptr<class Color> onInverseSurface;
		/*nullable*/ shptr<class Color> inversePrimary;
		/*nullable*/ shptr<class Color> surfaceTint;
	};
	static shptr<class ColorScheme> /*non-null*/ highContrastLight(_highContrastLight p = {});
	struct _highContrastDark
	{
		/*non-null*/ Brightness brightness = Brightness_dark;
		/*non-null*/ shptr<class Color> primary = Color(0xffefb7ff);
		/*non-null*/ shptr<class Color> onPrimary = Color(0xff000000);
		/*nullable*/ shptr<class Color> primaryContainer;
		/*nullable*/ shptr<class Color> onPrimaryContainer;
		/*non-null*/ shptr<class Color> secondary = Color(0xff66fff9);
		/*non-null*/ shptr<class Color> onSecondary = Color(0xff000000);
		/*nullable*/ shptr<class Color> secondaryContainer;
		/*nullable*/ shptr<class Color> onSecondaryContainer;
		/*nullable*/ shptr<class Color> tertiary;
		/*nullable*/ shptr<class Color> onTertiary;
		/*nullable*/ shptr<class Color> tertiaryContainer;
		/*nullable*/ shptr<class Color> onTertiaryContainer;
		/*non-null*/ shptr<class Color> error = Color(0xff9b374d);
		/*non-null*/ shptr<class Color> onError = Color(0xff000000);
		/*nullable*/ shptr<class Color> errorContainer;
		/*nullable*/ shptr<class Color> onErrorContainer;
		/*non-null*/ shptr<class Color> background = Color(0xff121212);
		/*non-null*/ shptr<class Color> onBackground = Color(0xffffffff);
		/*non-null*/ shptr<class Color> surface = Color(0xff121212);
		/*non-null*/ shptr<class Color> onSurface = Color(0xffffffff);
		/*nullable*/ shptr<class Color> surfaceVariant;
		/*nullable*/ shptr<class Color> onSurfaceVariant;
		/*nullable*/ shptr<class Color> outline;
		/*nullable*/ shptr<class Color> outlineVariant;
		/*nullable*/ shptr<class Color> shadow;
		/*nullable*/ shptr<class Color> scrim;
		/*nullable*/ shptr<class Color> inverseSurface;
		/*nullable*/ shptr<class Color> onInverseSurface;
		/*nullable*/ shptr<class Color> inversePrimary;
		/*nullable*/ shptr<class Color> surfaceTint;
	};
	static shptr<class ColorScheme> /*non-null*/ highContrastDark(_highContrastDark p = {});
	struct _fromSeed
	{
		/*non-null*/ shptr<class Color> seedColor;
		/*non-null*/ Brightness brightness = Brightness_light;
		/*nullable*/ shptr<class Color> primary;
		/*nullable*/ shptr<class Color> onPrimary;
		/*nullable*/ shptr<class Color> primaryContainer;
		/*nullable*/ shptr<class Color> onPrimaryContainer;
		/*nullable*/ shptr<class Color> secondary;
		/*nullable*/ shptr<class Color> onSecondary;
		/*nullable*/ shptr<class Color> secondaryContainer;
		/*nullable*/ shptr<class Color> onSecondaryContainer;
		/*nullable*/ shptr<class Color> tertiary;
		/*nullable*/ shptr<class Color> onTertiary;
		/*nullable*/ shptr<class Color> tertiaryContainer;
		/*nullable*/ shptr<class Color> onTertiaryContainer;
		/*nullable*/ shptr<class Color> error;
		/*nullable*/ shptr<class Color> onError;
		/*nullable*/ shptr<class Color> errorContainer;
		/*nullable*/ shptr<class Color> onErrorContainer;
		/*nullable*/ shptr<class Color> outline;
		/*nullable*/ shptr<class Color> outlineVariant;
		/*nullable*/ shptr<class Color> background;
		/*nullable*/ shptr<class Color> onBackground;
		/*nullable*/ shptr<class Color> surface;
		/*nullable*/ shptr<class Color> onSurface;
		/*nullable*/ shptr<class Color> surfaceVariant;
		/*nullable*/ shptr<class Color> onSurfaceVariant;
		/*nullable*/ shptr<class Color> inverseSurface;
		/*nullable*/ shptr<class Color> onInverseSurface;
		/*nullable*/ shptr<class Color> inversePrimary;
		/*nullable*/ shptr<class Color> shadow;
		/*nullable*/ shptr<class Color> scrim;
		/*nullable*/ shptr<class Color> surfaceTint;
	};
	static shptr<class ColorScheme> /*non-null*/ fromSeed(_fromSeed p = {});
	struct _fromSwatch
	{
		/*non-null*/ shptr<class MaterialColor> primarySwatch = Colors::blue();
		/*nullable*/ shptr<class Color> accentColor;
		/*nullable*/ shptr<class Color> cardColor;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class Color> errorColor;
		/*non-null*/ Brightness brightness = Brightness_light;
	};
	static shptr<class ColorScheme> /*non-null*/ fromSwatch(_fromSwatch p = {});
};

inline shptr<class ColorScheme> ColorScheme(ColorScheme::_ctorMain p = {}) {
	return ColorScheme::ctorMain(p);
}

class Curves : public ObjBase
{
public:
	static shptr<class Curve> /*var-non-null*/ linear();
	static shptr<class Curve> /*var-non-null*/ decelerate();
	static shptr<class Cubic> /*var-non-null*/ fastLinearToSlowEaseIn();
	static shptr<class ThreePointCubic> /*var-non-null*/ fastEaseInToSlowEaseOut();
	static shptr<class Cubic> /*var-non-null*/ ease();
	static shptr<class Cubic> /*var-non-null*/ easeIn();
	static shptr<class Cubic> /*var-non-null*/ easeInToLinear();
	static shptr<class Cubic> /*var-non-null*/ easeInSine();
	static shptr<class Cubic> /*var-non-null*/ easeInQuad();
	static shptr<class Cubic> /*var-non-null*/ easeInCubic();
	static shptr<class Cubic> /*var-non-null*/ easeInQuart();
	static shptr<class Cubic> /*var-non-null*/ easeInQuint();
	static shptr<class Cubic> /*var-non-null*/ easeInExpo();
	static shptr<class Cubic> /*var-non-null*/ easeInCirc();
	static shptr<class Cubic> /*var-non-null*/ easeInBack();
	static shptr<class Cubic> /*var-non-null*/ easeOut();
	static shptr<class Cubic> /*var-non-null*/ linearToEaseOut();
	static shptr<class Cubic> /*var-non-null*/ easeOutSine();
	static shptr<class Cubic> /*var-non-null*/ easeOutQuad();
	static shptr<class Cubic> /*var-non-null*/ easeOutCubic();
	static shptr<class Cubic> /*var-non-null*/ easeOutQuart();
	static shptr<class Cubic> /*var-non-null*/ easeOutQuint();
	static shptr<class Cubic> /*var-non-null*/ easeOutExpo();
	static shptr<class Cubic> /*var-non-null*/ easeOutCirc();
	static shptr<class Cubic> /*var-non-null*/ easeOutBack();
	static shptr<class Cubic> /*var-non-null*/ easeInOut();
	static shptr<class Cubic> /*var-non-null*/ easeInOutSine();
	static shptr<class Cubic> /*var-non-null*/ easeInOutQuad();
	static shptr<class Cubic> /*var-non-null*/ easeInOutCubic();
	static shptr<class ThreePointCubic> /*var-non-null*/ easeInOutCubicEmphasized();
	static shptr<class Cubic> /*var-non-null*/ easeInOutQuart();
	static shptr<class Cubic> /*var-non-null*/ easeInOutQuint();
	static shptr<class Cubic> /*var-non-null*/ easeInOutExpo();
	static shptr<class Cubic> /*var-non-null*/ easeInOutCirc();
	static shptr<class Cubic> /*var-non-null*/ easeInOutBack();
	static shptr<class Cubic> /*var-non-null*/ fastOutSlowIn();
	static shptr<class Cubic> /*var-non-null*/ slowMiddle();
	static shptr<class Curve> /*var-non-null*/ bounceIn();
	static shptr<class Curve> /*var-non-null*/ bounceOut();
	static shptr<class Curve> /*var-non-null*/ bounceInOut();
	static shptr<class ElasticInCurve> /*var-non-null*/ elasticIn();
	static shptr<class ElasticOutCurve> /*var-non-null*/ elasticOut();
	static shptr<class ElasticInOutCurve> /*var-non-null*/ elasticInOut();
};

class AlignmentGeometry : public ObjBase
{
public:
	shptr<class AlignmentGeometry> /*non-null*/ add(/*non-null*/ shptr<class AlignmentGeometry> other);
	shptr<class AlignmentGeometry> /*non-null*/ neg();
	shptr<class AlignmentGeometry> /*non-null*/ mul(/*non-null*/ double other);
	shptr<class AlignmentGeometry> /*non-null*/ div(/*non-null*/ double other);
	shptr<class AlignmentGeometry> /*non-null*/ idiv(/*non-null*/ double other);
	shptr<class AlignmentGeometry> /*non-null*/ mod(/*non-null*/ double other);
	static shptr<class AlignmentGeometry> /*nullable*/ lerp(/*nullable*/ shptr<class AlignmentGeometry> a, /*nullable*/ shptr<class AlignmentGeometry> b, /*non-null*/ double t);
	shptr<class Alignment> /*non-null*/ resolve(/*nullable*/ stdop<TextDirection> direction);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
};

class Alignment : public AlignmentGeometry
{
public:
	double /*var-non-null*/ x();
	double /*var-non-null*/ y();
	static shptr<class Alignment> /*var-non-null*/ topLeft();
	static shptr<class Alignment> /*var-non-null*/ topCenter();
	static shptr<class Alignment> /*var-non-null*/ topRight();
	static shptr<class Alignment> /*var-non-null*/ centerLeft();
	static shptr<class Alignment> /*var-non-null*/ center();
	static shptr<class Alignment> /*var-non-null*/ centerRight();
	static shptr<class Alignment> /*var-non-null*/ bottomLeft();
	static shptr<class Alignment> /*var-non-null*/ bottomCenter();
	static shptr<class Alignment> /*var-non-null*/ bottomRight();
	shptr<class AlignmentGeometry> /*non-null*/ add(/*non-null*/ shptr<class AlignmentGeometry> other);
	shptr<class Alignment> /*non-null*/ minus(/*non-null*/ shptr<class Alignment> other);
	shptr<class Alignment> /*non-null*/ plus(/*non-null*/ shptr<class Alignment> other);
	shptr<class Alignment> /*non-null*/ neg();
	shptr<class Alignment> /*non-null*/ mul(/*non-null*/ double other);
	shptr<class Alignment> /*non-null*/ div(/*non-null*/ double other);
	shptr<class Alignment> /*non-null*/ idiv(/*non-null*/ double other);
	shptr<class Alignment> /*non-null*/ mod(/*non-null*/ double other);
	shptr<class Offset> /*non-null*/ alongOffset(/*non-null*/ shptr<class Offset> other);
	shptr<class Offset> /*non-null*/ alongSize(/*non-null*/ shptr<class Size> other);
	shptr<class Offset> /*non-null*/ withinRect(/*non-null*/ shptr<class Rect> rect);
	shptr<class Rect> /*non-null*/ inscribe(/*non-null*/ shptr<class Size> size, /*non-null*/ shptr<class Rect> rect);
	static shptr<class Alignment> /*nullable*/ lerp(/*nullable*/ shptr<class Alignment> a, /*nullable*/ shptr<class Alignment> b, /*non-null*/ double t);
	shptr<class Alignment> /*non-null*/ resolve(/*nullable*/ stdop<TextDirection> direction);
	static shptr<class Alignment> /*non-null*/ ctorMain(/*non-null*/ double x, /*non-null*/ double y);
};

inline shptr<class Alignment> Alignment(/*non-null*/ double x, /*non-null*/ double y) {
	return Alignment::ctorMain(x, y);
}

class AlignmentDirectional : public AlignmentGeometry
{
public:
	double /*var-non-null*/ start();
	double /*var-non-null*/ y();
	static shptr<class AlignmentDirectional> /*var-non-null*/ topStart();
	static shptr<class AlignmentDirectional> /*var-non-null*/ topCenter();
	static shptr<class AlignmentDirectional> /*var-non-null*/ topEnd();
	static shptr<class AlignmentDirectional> /*var-non-null*/ centerStart();
	static shptr<class AlignmentDirectional> /*var-non-null*/ center();
	static shptr<class AlignmentDirectional> /*var-non-null*/ centerEnd();
	static shptr<class AlignmentDirectional> /*var-non-null*/ bottomStart();
	static shptr<class AlignmentDirectional> /*var-non-null*/ bottomCenter();
	static shptr<class AlignmentDirectional> /*var-non-null*/ bottomEnd();
	shptr<class AlignmentGeometry> /*non-null*/ add(/*non-null*/ shptr<class AlignmentGeometry> other);
	shptr<class AlignmentDirectional> /*non-null*/ minus(/*non-null*/ shptr<class AlignmentDirectional> other);
	shptr<class AlignmentDirectional> /*non-null*/ plus(/*non-null*/ shptr<class AlignmentDirectional> other);
	shptr<class AlignmentDirectional> /*non-null*/ neg();
	shptr<class AlignmentDirectional> /*non-null*/ mul(/*non-null*/ double other);
	shptr<class AlignmentDirectional> /*non-null*/ div(/*non-null*/ double other);
	shptr<class AlignmentDirectional> /*non-null*/ idiv(/*non-null*/ double other);
	shptr<class AlignmentDirectional> /*non-null*/ mod(/*non-null*/ double other);
	static shptr<class AlignmentDirectional> /*nullable*/ lerp(/*nullable*/ shptr<class AlignmentDirectional> a, /*nullable*/ shptr<class AlignmentDirectional> b, /*non-null*/ double t);
	shptr<class Alignment> /*non-null*/ resolve(/*nullable*/ stdop<TextDirection> direction);
	static shptr<class AlignmentDirectional> /*non-null*/ ctorMain(/*non-null*/ double start, /*non-null*/ double y);
};

inline shptr<class AlignmentDirectional> AlignmentDirectional(/*non-null*/ double start, /*non-null*/ double y) {
	return AlignmentDirectional::ctorMain(start, y);
}

class Radius : public ObjBase
{
public:
	double /*var-non-null*/ x();
	double /*var-non-null*/ y();
	static shptr<class Radius> /*var-non-null*/ zero();
	struct _clamp
	{
		/*nullable*/ shptr<class Radius> minimum;
		/*nullable*/ shptr<class Radius> maximum;
	};
	shptr<class Radius> /*non-null*/ clamp(_clamp p = {});
	struct _clampValues
	{
		/*nullable*/ stdop<double> minimumX;
		/*nullable*/ stdop<double> minimumY;
		/*nullable*/ stdop<double> maximumX;
		/*nullable*/ stdop<double> maximumY;
	};
	shptr<class Radius> /*non-null*/ clampValues(_clampValues p = {});
	shptr<class Radius> /*non-null*/ neg();
	shptr<class Radius> /*non-null*/ minus(/*non-null*/ shptr<class Radius> other);
	shptr<class Radius> /*non-null*/ plus(/*non-null*/ shptr<class Radius> other);
	shptr<class Radius> /*non-null*/ mul(/*non-null*/ double operand);
	shptr<class Radius> /*non-null*/ div(/*non-null*/ double operand);
	shptr<class Radius> /*non-null*/ idiv(/*non-null*/ double operand);
	shptr<class Radius> /*non-null*/ mod(/*non-null*/ double operand);
	static shptr<class Radius> /*nullable*/ lerp(/*nullable*/ shptr<class Radius> a, /*nullable*/ shptr<class Radius> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	static shptr<class Radius> /*non-null*/ circular(/*non-null*/ double radius);
	static shptr<class Radius> /*non-null*/ elliptical(/*non-null*/ double x, /*non-null*/ double y);
};

class BorderRadius : public BorderRadiusGeometry
{
public:
	static shptr<class BorderRadius> /*var-non-null*/ zero();
	shptr<class Radius> /*var-non-null*/ topLeft();
	shptr<class Radius> /*var-non-null*/ topRight();
	shptr<class Radius> /*var-non-null*/ bottomLeft();
	shptr<class Radius> /*var-non-null*/ bottomRight();
	struct _copyWith
	{
		/*nullable*/ shptr<class Radius> topLeft;
		/*nullable*/ shptr<class Radius> topRight;
		/*nullable*/ shptr<class Radius> bottomLeft;
		/*nullable*/ shptr<class Radius> bottomRight;
	};
	shptr<class BorderRadius> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class RRect> /*non-null*/ toRRect(/*non-null*/ shptr<class Rect> rect);
	shptr<class BorderRadiusGeometry> /*non-null*/ subtract(/*non-null*/ shptr<class BorderRadiusGeometry> other);
	shptr<class BorderRadiusGeometry> /*non-null*/ add(/*non-null*/ shptr<class BorderRadiusGeometry> other);
	shptr<class BorderRadius> /*non-null*/ minus(/*non-null*/ shptr<class BorderRadius> other);
	shptr<class BorderRadius> /*non-null*/ plus(/*non-null*/ shptr<class BorderRadius> other);
	shptr<class BorderRadius> /*non-null*/ neg();
	shptr<class BorderRadius> /*non-null*/ mul(/*non-null*/ double other);
	shptr<class BorderRadius> /*non-null*/ div(/*non-null*/ double other);
	shptr<class BorderRadius> /*non-null*/ idiv(/*non-null*/ double other);
	shptr<class BorderRadius> /*non-null*/ mod(/*non-null*/ double other);
	static shptr<class BorderRadius> /*nullable*/ lerp(/*nullable*/ shptr<class BorderRadius> a, /*nullable*/ shptr<class BorderRadius> b, /*non-null*/ double t);
	shptr<class BorderRadius> /*non-null*/ resolve(/*nullable*/ stdop<TextDirection> direction);
	static shptr<class BorderRadius> /*non-null*/ all(/*non-null*/ shptr<class Radius> radius);
	static shptr<class BorderRadius> /*non-null*/ circular(/*non-null*/ double radius);
	struct _vertical
	{
		/*non-null*/ shptr<class Radius> top = Radius::circular(0.0);
		/*non-null*/ shptr<class Radius> bottom = Radius::circular(0.0);
	};
	static shptr<class BorderRadius> /*non-null*/ vertical(_vertical p = {});
	struct _horizontal
	{
		/*non-null*/ shptr<class Radius> left = Radius::circular(0.0);
		/*non-null*/ shptr<class Radius> right = Radius::circular(0.0);
	};
	static shptr<class BorderRadius> /*non-null*/ horizontal(_horizontal p = {});
	struct _only
	{
		/*non-null*/ shptr<class Radius> topLeft = Radius::circular(0.0);
		/*non-null*/ shptr<class Radius> topRight = Radius::circular(0.0);
		/*non-null*/ shptr<class Radius> bottomLeft = Radius::circular(0.0);
		/*non-null*/ shptr<class Radius> bottomRight = Radius::circular(0.0);
	};
	static shptr<class BorderRadius> /*non-null*/ only(_only p = {});
};

class BorderSide : public ObjBase
{
public:
	shptr<class Color> /*var-non-null*/ color();
	double /*var-non-null*/ width();
	BorderStyle /*var-non-null*/ style();
	static shptr<class BorderSide> /*var-non-null*/ none();
	double /*var-non-null*/ strokeAlign();
	static double /*var-non-null*/ strokeAlignInside();
	static double /*var-non-null*/ strokeAlignCenter();
	static double /*var-non-null*/ strokeAlignOutside();
	double /*get-non-null*/ strokeInset();
	double /*get-non-null*/ strokeOutset();
	double /*get-non-null*/ strokeOffset();
	static shptr<class BorderSide> /*non-null*/ merge(/*non-null*/ shptr<class BorderSide> a, /*non-null*/ shptr<class BorderSide> b);
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<BorderStyle> style;
		/*nullable*/ stdop<double> strokeAlign;
	};
	shptr<class BorderSide> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class BorderSide> /*non-null*/ scale(/*non-null*/ double t);
	shptr<class Paint> /*non-null*/ toPaint();
	static bool /*non-null*/ canMerge(/*non-null*/ shptr<class BorderSide> a, /*non-null*/ shptr<class BorderSide> b);
	static shptr<class BorderSide> /*non-null*/ lerp(/*non-null*/ shptr<class BorderSide> a, /*non-null*/ shptr<class BorderSide> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	stdstr /*non-null*/ toStringShort();
	struct _ctorMain
	{
		/*non-null*/ shptr<class Color> color = Color(0xff000000);
		/*non-null*/ double width = 1.0;
		/*non-null*/ BorderStyle style = BorderStyle_solid;
		/*non-null*/ double strokeAlign = -1.0;
	};
	static shptr<class BorderSide> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BorderSide> BorderSide(BorderSide::_ctorMain p = {}) {
	return BorderSide::ctorMain(p);
}

class EdgeInsets : public EdgeInsetsGeometry
{
public:
	static shptr<class EdgeInsets> /*var-non-null*/ zero();
	double /*var-non-null*/ left();
	double /*var-non-null*/ top();
	double /*var-non-null*/ right();
	double /*var-non-null*/ bottom();
	shptr<class Offset> /*get-non-null*/ topLeft();
	shptr<class Offset> /*get-non-null*/ topRight();
	shptr<class Offset> /*get-non-null*/ bottomLeft();
	shptr<class Offset> /*get-non-null*/ bottomRight();
	shptr<class EdgeInsets> /*get-non-null*/ flipped();
	shptr<class Rect> /*non-null*/ inflateRect(/*non-null*/ shptr<class Rect> rect);
	shptr<class Rect> /*non-null*/ deflateRect(/*non-null*/ shptr<class Rect> rect);
	shptr<class EdgeInsetsGeometry> /*non-null*/ subtract(/*non-null*/ shptr<class EdgeInsetsGeometry> other);
	shptr<class EdgeInsetsGeometry> /*non-null*/ add(/*non-null*/ shptr<class EdgeInsetsGeometry> other);
	shptr<class EdgeInsetsGeometry> /*non-null*/ clamp(/*non-null*/ shptr<class EdgeInsetsGeometry> min, /*non-null*/ shptr<class EdgeInsetsGeometry> max);
	shptr<class EdgeInsets> /*non-null*/ minus(/*non-null*/ shptr<class EdgeInsets> other);
	shptr<class EdgeInsets> /*non-null*/ plus(/*non-null*/ shptr<class EdgeInsets> other);
	shptr<class EdgeInsets> /*non-null*/ neg();
	shptr<class EdgeInsets> /*non-null*/ mul(/*non-null*/ double other);
	shptr<class EdgeInsets> /*non-null*/ div(/*non-null*/ double other);
	shptr<class EdgeInsets> /*non-null*/ idiv(/*non-null*/ double other);
	shptr<class EdgeInsets> /*non-null*/ mod(/*non-null*/ double other);
	static shptr<class EdgeInsets> /*nullable*/ lerp(/*nullable*/ shptr<class EdgeInsets> a, /*nullable*/ shptr<class EdgeInsets> b, /*non-null*/ double t);
	shptr<class EdgeInsets> /*non-null*/ resolve(/*nullable*/ stdop<TextDirection> direction);
	struct _copyWith
	{
		/*nullable*/ stdop<double> left;
		/*nullable*/ stdop<double> top;
		/*nullable*/ stdop<double> right;
		/*nullable*/ stdop<double> bottom;
	};
	shptr<class EdgeInsets> /*non-null*/ copyWith(_copyWith p = {});
	static shptr<class EdgeInsets> /*non-null*/ fromLTRB(/*non-null*/ double left, /*non-null*/ double top, /*non-null*/ double right, /*non-null*/ double bottom);
	static shptr<class EdgeInsets> /*non-null*/ all(/*non-null*/ double value);
	struct _only
	{
		/*non-null*/ double left = 0.0;
		/*non-null*/ double top = 0.0;
		/*non-null*/ double right = 0.0;
		/*non-null*/ double bottom = 0.0;
	};
	static shptr<class EdgeInsets> /*non-null*/ only(_only p = {});
	struct _symmetric
	{
		/*non-null*/ double vertical = 0.0;
		/*non-null*/ double horizontal = 0.0;
	};
	static shptr<class EdgeInsets> /*non-null*/ symmetric(_symmetric p = {});
	static shptr<class EdgeInsets> /*non-null*/ fromViewPadding(/*non-null*/ shptr<class ViewPadding> padding, /*non-null*/ double devicePixelRatio);
	static shptr<class EdgeInsets> /*non-null*/ fromWindowPadding(/*non-null*/ shptr<class ViewPadding> padding, /*non-null*/ double devicePixelRatio);
};

class BoxDecoration : public Decoration
{
public:
	shptr<class Color> /*var-nullable*/ color();
	shptr<class DecorationImage> /*var-nullable*/ image();
	shptr<class BoxBorder> /*var-nullable*/ border();
	shptr<class BorderRadiusGeometry> /*var-nullable*/ borderRadius();
	shptr<class Gradient> /*var-nullable*/ gradient();
	stdop<BlendMode> /*var-nullable*/ backgroundBlendMode();
	BoxShape /*var-non-null*/ shape();
	shptr<class EdgeInsetsGeometry> /*get-non-null*/ padding();
	bool /*get-non-null*/ isComplex();
	struct _copyWith
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class DecorationImage> image;
		/*nullable*/ shptr<class BoxBorder> border;
		/*nullable*/ shptr<class BorderRadiusGeometry> borderRadius;
		/*nullable*/ stdop<stdvec<shptr<class BoxShadow>>> boxShadow;
		/*nullable*/ shptr<class Gradient> gradient;
		/*nullable*/ stdop<BlendMode> backgroundBlendMode;
		/*nullable*/ stdop<BoxShape> shape;
	};
	shptr<class BoxDecoration> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class Path> /*non-null*/ getClipPath(/*non-null*/ shptr<class Rect> rect, /*non-null*/ TextDirection textDirection);
	shptr<class BoxDecoration> /*non-null*/ scale(/*non-null*/ double factor);
	shptr<class BoxDecoration> /*nullable*/ lerpFrom(/*nullable*/ shptr<class Decoration> a, /*non-null*/ double t);
	shptr<class BoxDecoration> /*nullable*/ lerpTo(/*nullable*/ shptr<class Decoration> b, /*non-null*/ double t);
	static shptr<class BoxDecoration> /*nullable*/ lerp(/*nullable*/ shptr<class BoxDecoration> a, /*nullable*/ shptr<class BoxDecoration> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class DecorationImage> image;
		/*nullable*/ shptr<class BoxBorder> border;
		/*nullable*/ shptr<class BorderRadiusGeometry> borderRadius;
		/*nullable*/ stdop<stdvec<shptr<class BoxShadow>>> boxShadow;
		/*nullable*/ shptr<class Gradient> gradient;
		/*nullable*/ stdop<BlendMode> backgroundBlendMode;
		/*non-null*/ BoxShape shape = BoxShape_rectangle;
	};
	static shptr<class BoxDecoration> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BoxDecoration> BoxDecoration(BoxDecoration::_ctorMain p = {}) {
	return BoxDecoration::ctorMain(p);
}

class Shadow : public ObjBase
{
public:
	shptr<class Color> /*var-non-null*/ color();
	shptr<class Offset> /*var-non-null*/ offset();
	double /*var-non-null*/ blurRadius();
	double /*get-non-null*/ blurSigma();
	static double /*non-null*/ convertRadiusToSigma(/*non-null*/ double radius);
	shptr<class Shadow> /*non-null*/ scale(/*non-null*/ double factor);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class Color> color = Color(0xFF000000);
		/*non-null*/ shptr<class Offset> offset = Offset::zero();
		/*non-null*/ double blurRadius = 0.0;
	};
	static shptr<class Shadow> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class Shadow> Shadow(Shadow::_ctorMain p = {}) {
	return Shadow::ctorMain(p);
}

class BoxShadow : public Shadow
{
public:
	double /*var-non-null*/ spreadRadius();
	BlurStyle /*var-non-null*/ blurStyle();
	shptr<class Paint> /*non-null*/ toPaint();
	shptr<class BoxShadow> /*non-null*/ scale(/*non-null*/ double factor);
	static shptr<class BoxShadow> /*nullable*/ lerp(/*nullable*/ shptr<class BoxShadow> a, /*nullable*/ shptr<class BoxShadow> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class Color> color = Color(0xff000000);
		/*non-null*/ shptr<class Offset> offset = Offset(0.0, 0.0);
		/*non-null*/ double blurRadius = 0.0;
		/*non-null*/ double spreadRadius = 0.0;
		/*non-null*/ BlurStyle blurStyle = BlurStyle_normal;
	};
	static shptr<class BoxShadow> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BoxShadow> BoxShadow(BoxShadow::_ctorMain p = {}) {
	return BoxShadow::ctorMain(p);
}

class GradientRotation : public GradientTransform
{
public:
	double /*var-non-null*/ radians();
	struct _transform
	{
		/*nullable*/ stdop<TextDirection> textDirection;
	};
	shptr<class Matrix4> /*non-null*/ transform(/*non-null*/ shptr<class Rect> bounds, _transform p = {});
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	static shptr<class GradientRotation> /*non-null*/ ctorMain(/*non-null*/ double radians);
};

inline shptr<class GradientRotation> GradientRotation(/*non-null*/ double radians) {
	return GradientRotation::ctorMain(radians);
}

class Gradient : public ObjBase
{
public:
	shptr<class GradientTransform> /*var-nullable*/ transform();
	struct _createShader
	{
		/*nullable*/ stdop<TextDirection> textDirection;
	};
	shptr<class Shader> /*non-null*/ createShader(/*non-null*/ shptr<class Rect> rect, _createShader p = {});
	shptr<class Gradient> /*non-null*/ scale(/*non-null*/ double factor);
	static shptr<class Gradient> /*nullable*/ lerp(/*nullable*/ shptr<class Gradient> a, /*nullable*/ shptr<class Gradient> b, /*non-null*/ double t);
};

class LinearGradient : public Gradient
{
public:
	shptr<class AlignmentGeometry> /*var-non-null*/ begin();
	shptr<class AlignmentGeometry> /*var-non-null*/ end();
	TileMode /*var-non-null*/ tileMode();
	struct _createShader
	{
		/*nullable*/ stdop<TextDirection> textDirection;
	};
	shptr<class Shader> /*non-null*/ createShader(/*non-null*/ shptr<class Rect> rect, _createShader p = {});
	shptr<class LinearGradient> /*non-null*/ scale(/*non-null*/ double factor);
	shptr<class Gradient> /*nullable*/ lerpFrom(/*nullable*/ shptr<class Gradient> a, /*non-null*/ double t);
	shptr<class Gradient> /*nullable*/ lerpTo(/*nullable*/ shptr<class Gradient> b, /*non-null*/ double t);
	static shptr<class LinearGradient> /*nullable*/ lerp(/*nullable*/ shptr<class LinearGradient> a, /*nullable*/ shptr<class LinearGradient> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class AlignmentGeometry> begin = Alignment::centerLeft();
		/*non-null*/ shptr<class AlignmentGeometry> end = Alignment::centerRight();
		/*non-null*/ stdvec<shptr<class Color>> colors;
		/*nullable*/ stdop<stdvec<double>> stops;
		/*non-null*/ TileMode tileMode = TileMode_clamp;
		/*nullable*/ shptr<class GradientTransform> transform;
	};
	static shptr<class LinearGradient> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class LinearGradient> LinearGradient(LinearGradient::_ctorMain p = {}) {
	return LinearGradient::ctorMain(p);
}

class RadialGradient : public Gradient
{
public:
	shptr<class AlignmentGeometry> /*var-non-null*/ center();
	double /*var-non-null*/ radius();
	TileMode /*var-non-null*/ tileMode();
	shptr<class AlignmentGeometry> /*var-nullable*/ focal();
	double /*var-non-null*/ focalRadius();
	struct _createShader
	{
		/*nullable*/ stdop<TextDirection> textDirection;
	};
	shptr<class Shader> /*non-null*/ createShader(/*non-null*/ shptr<class Rect> rect, _createShader p = {});
	shptr<class RadialGradient> /*non-null*/ scale(/*non-null*/ double factor);
	shptr<class Gradient> /*nullable*/ lerpFrom(/*nullable*/ shptr<class Gradient> a, /*non-null*/ double t);
	shptr<class Gradient> /*nullable*/ lerpTo(/*nullable*/ shptr<class Gradient> b, /*non-null*/ double t);
	static shptr<class RadialGradient> /*nullable*/ lerp(/*nullable*/ shptr<class RadialGradient> a, /*nullable*/ shptr<class RadialGradient> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class AlignmentGeometry> center = Alignment::center();
		/*non-null*/ double radius = 0.5;
		/*non-null*/ stdvec<shptr<class Color>> colors;
		/*nullable*/ stdop<stdvec<double>> stops;
		/*non-null*/ TileMode tileMode = TileMode_clamp;
		/*nullable*/ shptr<class AlignmentGeometry> focal;
		/*non-null*/ double focalRadius = 0.0;
		/*nullable*/ shptr<class GradientTransform> transform;
	};
	static shptr<class RadialGradient> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class RadialGradient> RadialGradient(RadialGradient::_ctorMain p = {}) {
	return RadialGradient::ctorMain(p);
}

class SweepGradient : public Gradient
{
public:
	shptr<class AlignmentGeometry> /*var-non-null*/ center();
	double /*var-non-null*/ startAngle();
	double /*var-non-null*/ endAngle();
	TileMode /*var-non-null*/ tileMode();
	struct _createShader
	{
		/*nullable*/ stdop<TextDirection> textDirection;
	};
	shptr<class Shader> /*non-null*/ createShader(/*non-null*/ shptr<class Rect> rect, _createShader p = {});
	shptr<class SweepGradient> /*non-null*/ scale(/*non-null*/ double factor);
	shptr<class Gradient> /*nullable*/ lerpFrom(/*nullable*/ shptr<class Gradient> a, /*non-null*/ double t);
	shptr<class Gradient> /*nullable*/ lerpTo(/*nullable*/ shptr<class Gradient> b, /*non-null*/ double t);
	static shptr<class SweepGradient> /*nullable*/ lerp(/*nullable*/ shptr<class SweepGradient> a, /*nullable*/ shptr<class SweepGradient> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class AlignmentGeometry> center = Alignment::center();
		/*non-null*/ double startAngle = 0.0;
		/*non-null*/ double endAngle = 6.283185307179586;
		/*non-null*/ stdvec<shptr<class Color>> colors;
		/*nullable*/ stdop<stdvec<double>> stops;
		/*non-null*/ TileMode tileMode = TileMode_clamp;
		/*nullable*/ shptr<class GradientTransform> transform;
	};
	static shptr<class SweepGradient> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class SweepGradient> SweepGradient(SweepGradient::_ctorMain p = {}) {
	return SweepGradient::ctorMain(p);
}

class CircleBorder : public OutlinedBorder
{
public:
	double /*var-non-null*/ eccentricity();
	bool /*get-non-null*/ preferPaintInterior();
	shptr<class ShapeBorder> /*non-null*/ scale(/*non-null*/ double t);
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
	struct _copyWith
	{
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ stdop<double> eccentricity;
	};
	shptr<class CircleBorder> /*non-null*/ copyWith(_copyWith p = {});
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class BorderSide> side = BorderSide::none();
		/*non-null*/ double eccentricity = 0.0;
	};
	static shptr<class CircleBorder> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class CircleBorder> CircleBorder(CircleBorder::_ctorMain p = {}) {
	return CircleBorder::ctorMain(p);
}

class OvalBorder : public CircleBorder
{
public:
	shptr<class ShapeBorder> /*non-null*/ scale(/*non-null*/ double t);
	struct _copyWith
	{
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ stdop<double> eccentricity;
	};
	shptr<class OvalBorder> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class ShapeBorder> /*nullable*/ lerpFrom(/*nullable*/ shptr<class ShapeBorder> a, /*non-null*/ double t);
	shptr<class ShapeBorder> /*nullable*/ lerpTo(/*nullable*/ shptr<class ShapeBorder> b, /*non-null*/ double t);
	struct _ctorMain
	{
		/*non-null*/ shptr<class BorderSide> side = BorderSide::none();
		/*non-null*/ double eccentricity = 1.0;
	};
	static shptr<class OvalBorder> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class OvalBorder> OvalBorder(OvalBorder::_ctorMain p = {}) {
	return OvalBorder::ctorMain(p);
}

class RoundedRectangleBorder : public OutlinedBorder
{
public:
	shptr<class BorderRadiusGeometry> /*var-non-null*/ borderRadius();
	bool /*get-non-null*/ preferPaintInterior();
	shptr<class ShapeBorder> /*non-null*/ scale(/*non-null*/ double t);
	shptr<class ShapeBorder> /*nullable*/ lerpFrom(/*nullable*/ shptr<class ShapeBorder> a, /*non-null*/ double t);
	shptr<class ShapeBorder> /*nullable*/ lerpTo(/*nullable*/ shptr<class ShapeBorder> b, /*non-null*/ double t);
	struct _copyWith
	{
		/*nullable*/ shptr<class BorderSide> side;
		/*nullable*/ shptr<class BorderRadiusGeometry> borderRadius;
	};
	shptr<class RoundedRectangleBorder> /*non-null*/ copyWith(_copyWith p = {});
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
		/*non-null*/ shptr<class BorderSide> side = BorderSide::none();
		/*non-null*/ shptr<class BorderRadiusGeometry> borderRadius = BorderRadius::zero();
	};
	static shptr<class RoundedRectangleBorder> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class RoundedRectangleBorder> RoundedRectangleBorder(RoundedRectangleBorder::_ctorMain p = {}) {
	return RoundedRectangleBorder::ctorMain(p);
}

class BorderDirectional : public BoxBorder
{
public:
	shptr<class BorderSide> /*var-non-null*/ top();
	shptr<class BorderSide> /*var-non-null*/ start();
	shptr<class BorderSide> /*var-non-null*/ end();
	shptr<class BorderSide> /*var-non-null*/ bottom();
	shptr<class EdgeInsetsGeometry> /*get-non-null*/ dimensions();
	bool /*get-non-null*/ isUniform();
	static shptr<class BorderDirectional> /*non-null*/ merge(/*non-null*/ shptr<class BorderDirectional> a, /*non-null*/ shptr<class BorderDirectional> b);
	struct _add
	{
		/*non-null*/ bool reversed = false;
	};
	shptr<class BoxBorder> /*nullable*/ add(/*non-null*/ shptr<class ShapeBorder> other, _add p = {});
	shptr<class BorderDirectional> /*non-null*/ scale(/*non-null*/ double t);
	shptr<class ShapeBorder> /*nullable*/ lerpFrom(/*nullable*/ shptr<class ShapeBorder> a, /*non-null*/ double t);
	shptr<class ShapeBorder> /*nullable*/ lerpTo(/*nullable*/ shptr<class ShapeBorder> b, /*non-null*/ double t);
	static shptr<class BorderDirectional> /*nullable*/ lerp(/*nullable*/ shptr<class BorderDirectional> a, /*nullable*/ shptr<class BorderDirectional> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class BorderSide> top = BorderSide::none();
		/*non-null*/ shptr<class BorderSide> start = BorderSide::none();
		/*non-null*/ shptr<class BorderSide> end = BorderSide::none();
		/*non-null*/ shptr<class BorderSide> bottom = BorderSide::none();
	};
	static shptr<class BorderDirectional> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class BorderDirectional> BorderDirectional(BorderDirectional::_ctorMain p = {}) {
	return BorderDirectional::ctorMain(p);
}

class Border : public BoxBorder
{
public:
	shptr<class BorderSide> /*var-non-null*/ top();
	shptr<class BorderSide> /*var-non-null*/ right();
	shptr<class BorderSide> /*var-non-null*/ bottom();
	shptr<class BorderSide> /*var-non-null*/ left();
	shptr<class EdgeInsetsGeometry> /*get-non-null*/ dimensions();
	bool /*get-non-null*/ isUniform();
	static shptr<class Border> /*non-null*/ merge(/*non-null*/ shptr<class Border> a, /*non-null*/ shptr<class Border> b);
	struct _add
	{
		/*non-null*/ bool reversed = false;
	};
	shptr<class Border> /*nullable*/ add(/*non-null*/ shptr<class ShapeBorder> other, _add p = {});
	shptr<class Border> /*non-null*/ scale(/*non-null*/ double t);
	shptr<class ShapeBorder> /*nullable*/ lerpFrom(/*nullable*/ shptr<class ShapeBorder> a, /*non-null*/ double t);
	shptr<class ShapeBorder> /*nullable*/ lerpTo(/*nullable*/ shptr<class ShapeBorder> b, /*non-null*/ double t);
	static shptr<class Border> /*nullable*/ lerp(/*nullable*/ shptr<class Border> a, /*nullable*/ shptr<class Border> b, /*non-null*/ double t);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class BorderSide> top = BorderSide::none();
		/*non-null*/ shptr<class BorderSide> right = BorderSide::none();
		/*non-null*/ shptr<class BorderSide> bottom = BorderSide::none();
		/*non-null*/ shptr<class BorderSide> left = BorderSide::none();
	};
	static shptr<class Border> /*non-null*/ ctorMain(_ctorMain p = {});
	static shptr<class Border> /*non-null*/ fromBorderSide(/*non-null*/ shptr<class BorderSide> side);
	struct _symmetric
	{
		/*non-null*/ shptr<class BorderSide> vertical = BorderSide::none();
		/*non-null*/ shptr<class BorderSide> horizontal = BorderSide::none();
	};
	static shptr<class Border> /*non-null*/ symmetric(_symmetric p = {});
	struct _all
	{
		/*non-null*/ shptr<class Color> color = Color(0xFF000000);
		/*non-null*/ double width = 1.0;
		/*non-null*/ BorderStyle style = BorderStyle_solid;
		/*non-null*/ double strokeAlign = -1.0;
	};
	static shptr<class Border> /*non-null*/ all(_all p = {});
};

inline shptr<class Border> Border(Border::_ctorMain p = {}) {
	return Border::ctorMain(p);
}

class TextStyle : public ObjBase
{
public:
	bool /*var-non-null*/ inherit();
	shptr<class Color> /*var-nullable*/ color();
	shptr<class Color> /*var-nullable*/ backgroundColor();
	stdop<stdstr> /*var-nullable*/ fontFamily();
	stdop<double> /*var-nullable*/ fontSize();
	shptr<class FontWeight> /*var-nullable*/ fontWeight();
	stdop<FontStyle> /*var-nullable*/ fontStyle();
	stdop<double> /*var-nullable*/ letterSpacing();
	stdop<double> /*var-nullable*/ wordSpacing();
	stdop<TextBaseline> /*var-nullable*/ textBaseline();
	stdop<double> /*var-nullable*/ height();
	stdop<TextLeadingDistribution> /*var-nullable*/ leadingDistribution();
	shptr<class Locale> /*var-nullable*/ locale();
	shptr<class Paint> /*var-nullable*/ foreground();
	shptr<class Paint> /*var-nullable*/ background();
	shptr<class TextDecoration> /*var-nullable*/ decoration();
	shptr<class Color> /*var-nullable*/ decorationColor();
	stdop<TextDecorationStyle> /*var-nullable*/ decorationStyle();
	stdop<double> /*var-nullable*/ decorationThickness();
	stdop<stdstr> /*var-nullable*/ debugLabel();
	stdop<TextOverflow> /*var-nullable*/ overflow();
	struct _copyWith
	{
		/*nullable*/ stdop<bool> inherit;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> fontSize;
		/*nullable*/ shptr<class FontWeight> fontWeight;
		/*nullable*/ stdop<FontStyle> fontStyle;
		/*nullable*/ stdop<double> letterSpacing;
		/*nullable*/ stdop<double> wordSpacing;
		/*nullable*/ stdop<TextBaseline> textBaseline;
		/*nullable*/ stdop<double> height;
		/*nullable*/ stdop<TextLeadingDistribution> leadingDistribution;
		/*nullable*/ shptr<class Locale> locale;
		/*nullable*/ shptr<class Paint> foreground;
		/*nullable*/ shptr<class Paint> background;
		/*nullable*/ stdop<stdvec<shptr<class Shadow>>> shadows;
		/*nullable*/ stdop<stdvec<shptr<class FontFeature>>> fontFeatures;
		/*nullable*/ stdop<stdvec<shptr<class FontVariation>>> fontVariations;
		/*nullable*/ shptr<class TextDecoration> decoration;
		/*nullable*/ shptr<class Color> decorationColor;
		/*nullable*/ stdop<TextDecorationStyle> decorationStyle;
		/*nullable*/ stdop<double> decorationThickness;
		/*nullable*/ stdop<stdstr> debugLabel;
		/*nullable*/ stdop<stdstr> fontFamily;
		/*nullable*/ stdop<stdvec<stdstr>> fontFamilyFallback;
		/*nullable*/ stdop<stdstr> package;
		/*nullable*/ stdop<TextOverflow> overflow;
	};
	shptr<class TextStyle> /*non-null*/ copyWith(_copyWith p = {});
	struct _apply
	{
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ shptr<class TextDecoration> decoration;
		/*nullable*/ shptr<class Color> decorationColor;
		/*nullable*/ stdop<TextDecorationStyle> decorationStyle;
		/*non-null*/ double decorationThicknessFactor = 1.0;
		/*non-null*/ double decorationThicknessDelta = 0.0;
		/*nullable*/ stdop<stdstr> fontFamily;
		/*nullable*/ stdop<stdvec<stdstr>> fontFamilyFallback;
		/*non-null*/ double fontSizeFactor = 1.0;
		/*non-null*/ double fontSizeDelta = 0.0;
		/*non-null*/ int64 fontWeightDelta = 0;
		/*nullable*/ stdop<FontStyle> fontStyle;
		/*non-null*/ double letterSpacingFactor = 1.0;
		/*non-null*/ double letterSpacingDelta = 0.0;
		/*non-null*/ double wordSpacingFactor = 1.0;
		/*non-null*/ double wordSpacingDelta = 0.0;
		/*non-null*/ double heightFactor = 1.0;
		/*non-null*/ double heightDelta = 0.0;
		/*nullable*/ stdop<TextBaseline> textBaseline;
		/*nullable*/ stdop<TextLeadingDistribution> leadingDistribution;
		/*nullable*/ shptr<class Locale> locale;
		/*nullable*/ stdop<stdvec<shptr<class Shadow>>> shadows;
		/*nullable*/ stdop<stdvec<shptr<class FontFeature>>> fontFeatures;
		/*nullable*/ stdop<stdvec<shptr<class FontVariation>>> fontVariations;
		/*nullable*/ stdop<stdstr> package;
		/*nullable*/ stdop<TextOverflow> overflow;
	};
	shptr<class TextStyle> /*non-null*/ apply(_apply p = {});
	shptr<class TextStyle> /*non-null*/ merge(/*nullable*/ shptr<class TextStyle> other);
	static shptr<class TextStyle> /*nullable*/ lerp(/*nullable*/ shptr<class TextStyle> a, /*nullable*/ shptr<class TextStyle> b, /*non-null*/ double t);
	struct _getTextStyle
	{
		/*non-null*/ double textScaleFactor = 1.0;
	};
	shptr<class TextStyle> /*non-null*/ getTextStyle(_getTextStyle p = {});
	struct _getParagraphStyle
	{
		/*nullable*/ stdop<TextAlign> textAlign;
		/*nullable*/ stdop<TextDirection> textDirection;
		/*non-null*/ double textScaleFactor = 1.0;
		/*nullable*/ stdop<stdstr> ellipsis;
		/*nullable*/ stdop<int64> maxLines;
		/*nullable*/ shptr<class TextHeightBehavior> textHeightBehavior;
		/*nullable*/ shptr<class Locale> locale;
		/*nullable*/ stdop<stdstr> fontFamily;
		/*nullable*/ stdop<double> fontSize;
		/*nullable*/ shptr<class FontWeight> fontWeight;
		/*nullable*/ stdop<FontStyle> fontStyle;
		/*nullable*/ stdop<double> height;
		/*nullable*/ shptr<class StrutStyle> strutStyle;
	};
	shptr<class ParagraphStyle> /*non-null*/ getParagraphStyle(_getParagraphStyle p = {});
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	stdstr /*non-null*/ toStringShort();
	struct _ctorMain
	{
		/*non-null*/ bool inherit = true;
		/*nullable*/ shptr<class Color> color;
		/*nullable*/ shptr<class Color> backgroundColor;
		/*nullable*/ stdop<double> fontSize;
		/*nullable*/ shptr<class FontWeight> fontWeight;
		/*nullable*/ stdop<FontStyle> fontStyle;
		/*nullable*/ stdop<double> letterSpacing;
		/*nullable*/ stdop<double> wordSpacing;
		/*nullable*/ stdop<TextBaseline> textBaseline;
		/*nullable*/ stdop<double> height;
		/*nullable*/ stdop<TextLeadingDistribution> leadingDistribution;
		/*nullable*/ shptr<class Locale> locale;
		/*nullable*/ shptr<class Paint> foreground;
		/*nullable*/ shptr<class Paint> background;
		/*nullable*/ stdop<stdvec<shptr<class Shadow>>> shadows;
		/*nullable*/ stdop<stdvec<shptr<class FontFeature>>> fontFeatures;
		/*nullable*/ stdop<stdvec<shptr<class FontVariation>>> fontVariations;
		/*nullable*/ shptr<class TextDecoration> decoration;
		/*nullable*/ shptr<class Color> decorationColor;
		/*nullable*/ stdop<TextDecorationStyle> decorationStyle;
		/*nullable*/ stdop<double> decorationThickness;
		/*nullable*/ stdop<stdstr> debugLabel;
		/*nullable*/ stdop<stdstr> fontFamily;
		/*nullable*/ stdop<stdvec<stdstr>> fontFamilyFallback;
		/*nullable*/ stdop<stdstr> package;
		/*nullable*/ stdop<TextOverflow> overflow;
	};
	static shptr<class TextStyle> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class TextStyle> TextStyle(TextStyle::_ctorMain p = {}) {
	return TextStyle::ctorMain(p);
}

class StrutStyle : public ObjBase
{
public:
	static shptr<class StrutStyle> /*var-non-null*/ disabled();
	stdop<stdstr> /*var-nullable*/ fontFamily();
	stdop<double> /*var-nullable*/ fontSize();
	stdop<double> /*var-nullable*/ height();
	stdop<TextLeadingDistribution> /*var-nullable*/ leadingDistribution();
	shptr<class FontWeight> /*var-nullable*/ fontWeight();
	stdop<FontStyle> /*var-nullable*/ fontStyle();
	stdop<double> /*var-nullable*/ leading();
	stdop<bool> /*var-nullable*/ forceStrutHeight();
	stdop<stdstr> /*var-nullable*/ debugLabel();
	RenderComparison /*non-null*/ compareTo(/*non-null*/ shptr<class StrutStyle> other);
	shptr<class StrutStyle> /*non-null*/ inheritFromTextStyle(/*nullable*/ shptr<class TextStyle> other);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	stdstr /*non-null*/ toStringShort();
	struct _ctorMain
	{
		/*nullable*/ stdop<stdstr> fontFamily;
		/*nullable*/ stdop<stdvec<stdstr>> fontFamilyFallback;
		/*nullable*/ stdop<double> fontSize;
		/*nullable*/ stdop<double> height;
		/*nullable*/ stdop<TextLeadingDistribution> leadingDistribution;
		/*nullable*/ stdop<double> leading;
		/*nullable*/ shptr<class FontWeight> fontWeight;
		/*nullable*/ stdop<FontStyle> fontStyle;
		/*nullable*/ stdop<bool> forceStrutHeight;
		/*nullable*/ stdop<stdstr> debugLabel;
		/*nullable*/ stdop<stdstr> package;
	};
	static shptr<class StrutStyle> /*non-null*/ ctorMain(_ctorMain p = {});
	struct _fromTextStyle
	{
		/*nullable*/ stdop<stdstr> fontFamily;
		/*nullable*/ stdop<stdvec<stdstr>> fontFamilyFallback;
		/*nullable*/ stdop<double> fontSize;
		/*nullable*/ stdop<double> height;
		/*nullable*/ stdop<TextLeadingDistribution> leadingDistribution;
		/*nullable*/ stdop<double> leading;
		/*nullable*/ shptr<class FontWeight> fontWeight;
		/*nullable*/ stdop<FontStyle> fontStyle;
		/*nullable*/ stdop<bool> forceStrutHeight;
		/*nullable*/ stdop<stdstr> debugLabel;
		/*nullable*/ stdop<stdstr> package;
	};
	static shptr<class StrutStyle> /*non-null*/ fromTextStyle(/*non-null*/ shptr<class TextStyle> textStyle, _fromTextStyle p = {});
};

inline shptr<class StrutStyle> StrutStyle(StrutStyle::_ctorMain p = {}) {
	return StrutStyle::ctorMain(p);
}

class FontWeight : public ObjBase
{
public:
	int64 /*var-non-null*/ index();
	int64 /*var-non-null*/ value();
	static shptr<class FontWeight> /*var-non-null*/ w100();
	static shptr<class FontWeight> /*var-non-null*/ w200();
	static shptr<class FontWeight> /*var-non-null*/ w300();
	static shptr<class FontWeight> /*var-non-null*/ w400();
	static shptr<class FontWeight> /*var-non-null*/ w500();
	static shptr<class FontWeight> /*var-non-null*/ w600();
	static shptr<class FontWeight> /*var-non-null*/ w700();
	static shptr<class FontWeight> /*var-non-null*/ w800();
	static shptr<class FontWeight> /*var-non-null*/ w900();
	static shptr<class FontWeight> /*var-non-null*/ normal();
	static shptr<class FontWeight> /*var-non-null*/ bold();
	static shptr<class FontWeight> /*nullable*/ lerp(/*nullable*/ shptr<class FontWeight> a, /*nullable*/ shptr<class FontWeight> b, /*non-null*/ double t);
};

class FileImage : public ImageProvider
{
public:
	double /*var-non-null*/ scale();
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ double scale = 1.0;
	};
	static shptr<class FileImage> /*non-null*/ ctorMain(/*non-null*/ stdstr file, _ctorMain p = {});
};

inline shptr<class FileImage> FileImage(/*non-null*/ stdstr file, FileImage::_ctorMain p = {}) {
	return FileImage::ctorMain(file, p);
}

class MemoryImage : public ImageProvider
{
public:
	shptr<class Uint8List> /*var-non-null*/ bytes();
	double /*var-non-null*/ scale();
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ double scale = 1.0;
	};
	static shptr<class MemoryImage> /*non-null*/ ctorMain(/*non-null*/ shptr<class Uint8List> bytes, _ctorMain p = {});
};

inline shptr<class MemoryImage> MemoryImage(/*non-null*/ shptr<class Uint8List> bytes, MemoryImage::_ctorMain p = {}) {
	return MemoryImage::ctorMain(bytes, p);
}

class ImageFilter : public ObjBase
{
public:
	struct _blur
	{
		/*non-null*/ double sigmaX = 0.0;
		/*non-null*/ double sigmaY = 0.0;
		/*non-null*/ TileMode tileMode = TileMode_clamp;
	};
	static shptr<class ImageFilter> /*non-null*/ blur(_blur p = {});
	struct _dilate
	{
		/*non-null*/ double radiusX = 0.0;
		/*non-null*/ double radiusY = 0.0;
	};
	static shptr<class ImageFilter> /*non-null*/ dilate(_dilate p = {});
	struct _erode
	{
		/*non-null*/ double radiusX = 0.0;
		/*non-null*/ double radiusY = 0.0;
	};
	static shptr<class ImageFilter> /*non-null*/ erode(_erode p = {});
	struct _matrix
	{
		/*non-null*/ FilterQuality filterQuality = FilterQuality_low;
	};
	static shptr<class ImageFilter> /*non-null*/ matrix(/*non-null*/ shptr<class Float64List> matrix4, _matrix p = {});
	struct _compose
	{
		/*non-null*/ shptr<class ImageFilter> outer;
		/*non-null*/ shptr<class ImageFilter> inner;
	};
	static shptr<class ImageFilter> /*non-null*/ compose(_compose p = {});
};

class ColorFilter : public ImageFilter
{
public:
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	static shptr<class ColorFilter> /*non-null*/ mode(/*non-null*/ shptr<class Color> color, /*non-null*/ BlendMode blendMode);
	static shptr<class ColorFilter> /*non-null*/ matrix(/*non-null*/ stdvec<double> matrix);
	static shptr<class ColorFilter> /*non-null*/ linearToSrgbGamma();
	static shptr<class ColorFilter> /*non-null*/ srgbToLinearGamma();
};

class DecorationImage : public ObjBase
{
public:
	shptr<class ColorFilter> /*var-nullable*/ colorFilter();
	stdop<BoxFit> /*var-nullable*/ fit();
	shptr<class AlignmentGeometry> /*var-non-null*/ alignment();
	shptr<class Rect> /*var-nullable*/ centerSlice();
	ImageRepeat /*var-non-null*/ repeat();
	bool /*var-non-null*/ matchTextDirection();
	double /*var-non-null*/ scale();
	double /*var-non-null*/ opacity();
	FilterQuality /*var-non-null*/ filterQuality();
	bool /*var-non-null*/ invertColors();
	bool /*var-non-null*/ isAntiAlias();
	shptr<class DecorationImagePainter> /*non-null*/ createPainter(/*non-null*/ stdfunc<void()> /*() -> void*/ onChanged);
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ shptr<class ImageProvider> image;
//		/*nullable*/ stdfunc<void(shptr<class ObjBase>, shptr<class StackTrace>)> /*(ObjBase, StackTrace) -> void*/ onError;
		/*nullable*/ shptr<class ColorFilter> colorFilter;
		/*nullable*/ stdop<BoxFit> fit;
		/*non-null*/ shptr<class AlignmentGeometry> alignment = Alignment::center();
		/*nullable*/ shptr<class Rect> centerSlice;
		/*non-null*/ ImageRepeat repeat = ImageRepeat_noRepeat;
		/*non-null*/ bool matchTextDirection = false;
		/*non-null*/ double scale = 1.0;
		/*non-null*/ double opacity = 1.0;
		/*non-null*/ FilterQuality filterQuality = FilterQuality_low;
		/*non-null*/ bool invertColors = false;
		/*non-null*/ bool isAntiAlias = false;
	};
	static shptr<class DecorationImage> /*non-null*/ ctorMain(_ctorMain p = {});
};

inline shptr<class DecorationImage> DecorationImage(DecorationImage::_ctorMain p = {}) {
	return DecorationImage::ctorMain(p);
}

class BoxConstraints : public Constraints
{
public:
	double /*var-non-null*/ minWidth();
	double /*var-non-null*/ maxWidth();
	double /*var-non-null*/ minHeight();
	double /*var-non-null*/ maxHeight();
	shptr<class BoxConstraints> /*get-non-null*/ flipped();
	shptr<class Size> /*get-non-null*/ biggest();
	shptr<class Size> /*get-non-null*/ smallest();
	bool /*get-non-null*/ hasTightWidth();
	bool /*get-non-null*/ hasTightHeight();
	bool /*get-non-null*/ isTight();
	bool /*get-non-null*/ hasBoundedWidth();
	bool /*get-non-null*/ hasBoundedHeight();
	bool /*get-non-null*/ hasInfiniteWidth();
	bool /*get-non-null*/ hasInfiniteHeight();
	bool /*get-non-null*/ isNormalized();
	struct _copyWith
	{
		/*nullable*/ stdop<double> minWidth;
		/*nullable*/ stdop<double> maxWidth;
		/*nullable*/ stdop<double> minHeight;
		/*nullable*/ stdop<double> maxHeight;
	};
	shptr<class BoxConstraints> /*non-null*/ copyWith(_copyWith p = {});
	shptr<class BoxConstraints> /*non-null*/ deflate(/*non-null*/ shptr<class EdgeInsets> edges);
	shptr<class BoxConstraints> /*non-null*/ loosen();
	shptr<class BoxConstraints> /*non-null*/ enforce(/*non-null*/ shptr<class BoxConstraints> constraints);
	struct _tighten
	{
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
	};
	shptr<class BoxConstraints> /*non-null*/ tighten(_tighten p = {});
	shptr<class BoxConstraints> /*non-null*/ widthConstraints();
	shptr<class BoxConstraints> /*non-null*/ heightConstraints();
	double /*non-null*/ constrainWidth(/*non-null*/ double width = double_infinity);
	double /*non-null*/ constrainHeight(/*non-null*/ double height = double_infinity);
	shptr<class Size> /*non-null*/ constrain(/*non-null*/ shptr<class Size> size);
	shptr<class Size> /*non-null*/ constrainDimensions(/*non-null*/ double width, /*non-null*/ double height);
	shptr<class Size> /*non-null*/ constrainSizeAndAttemptToPreserveAspectRatio(/*non-null*/ shptr<class Size> size);
	bool /*non-null*/ isSatisfiedBy(/*non-null*/ shptr<class Size> size);
	shptr<class BoxConstraints> /*non-null*/ mul(/*non-null*/ double factor);
	shptr<class BoxConstraints> /*non-null*/ div(/*non-null*/ double factor);
	shptr<class BoxConstraints> /*non-null*/ idiv(/*non-null*/ double factor);
	shptr<class BoxConstraints> /*non-null*/ mod(/*non-null*/ double value);
	static shptr<class BoxConstraints> /*nullable*/ lerp(/*nullable*/ shptr<class BoxConstraints> a, /*nullable*/ shptr<class BoxConstraints> b, /*non-null*/ double t);
	shptr<class BoxConstraints> /*non-null*/ normalize();
	bool /*non-null*/ equals(/*non-null*/ shptr<class ObjBase> other);
	struct _ctorMain
	{
		/*non-null*/ double minWidth = 0.0;
		/*non-null*/ double maxWidth = double_infinity;
		/*non-null*/ double minHeight = 0.0;
		/*non-null*/ double maxHeight = double_infinity;
	};
	static shptr<class BoxConstraints> /*non-null*/ ctorMain(_ctorMain p = {});
	static shptr<class BoxConstraints> /*non-null*/ tight(/*non-null*/ shptr<class Size> size);
	struct _tightFor
	{
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
	};
	static shptr<class BoxConstraints> /*non-null*/ tightFor(_tightFor p = {});
	struct _tightForFinite
	{
		/*non-null*/ double width = double_infinity;
		/*non-null*/ double height = double_infinity;
	};
	static shptr<class BoxConstraints> /*non-null*/ tightForFinite(_tightForFinite p = {});
	static shptr<class BoxConstraints> /*non-null*/ loose(/*non-null*/ shptr<class Size> size);
	struct _expand
	{
		/*nullable*/ stdop<double> width;
		/*nullable*/ stdop<double> height;
	};
	static shptr<class BoxConstraints> /*non-null*/ expand(_expand p = {});
};

inline shptr<class BoxConstraints> BoxConstraints(BoxConstraints::_ctorMain p = {}) {
	return BoxConstraints::ctorMain(p);
}

class Path : public ObjBase
{
public:
	PathFillType /*get-non-null*/ fillType();
	void moveTo(/*non-null*/ double x, /*non-null*/ double y);
	void relativeMoveTo(/*non-null*/ double dx, /*non-null*/ double dy);
	void lineTo(/*non-null*/ double x, /*non-null*/ double y);
	void relativeLineTo(/*non-null*/ double dx, /*non-null*/ double dy);
	void quadraticBezierTo(/*non-null*/ double x1, /*non-null*/ double y1, /*non-null*/ double x2, /*non-null*/ double y2);
	void relativeQuadraticBezierTo(/*non-null*/ double x1, /*non-null*/ double y1, /*non-null*/ double x2, /*non-null*/ double y2);
	void cubicTo(/*non-null*/ double x1, /*non-null*/ double y1, /*non-null*/ double x2, /*non-null*/ double y2, /*non-null*/ double x3, /*non-null*/ double y3);
	void relativeCubicTo(/*non-null*/ double x1, /*non-null*/ double y1, /*non-null*/ double x2, /*non-null*/ double y2, /*non-null*/ double x3, /*non-null*/ double y3);
	void conicTo(/*non-null*/ double x1, /*non-null*/ double y1, /*non-null*/ double x2, /*non-null*/ double y2, /*non-null*/ double w);
	void relativeConicTo(/*non-null*/ double x1, /*non-null*/ double y1, /*non-null*/ double x2, /*non-null*/ double y2, /*non-null*/ double w);
	void arcTo(/*non-null*/ shptr<class Rect> rect, /*non-null*/ double startAngle, /*non-null*/ double sweepAngle, /*non-null*/ bool forceMoveTo);
	struct _arcToPoint
	{
		/*non-null*/ shptr<class Radius> radius;
		/*non-null*/ double rotation;
		/*non-null*/ bool largeArc;
		/*non-null*/ bool clockwise;
	};
	void arcToPoint(/*non-null*/ shptr<class Offset> arcEnd, _arcToPoint p = {});
	struct _relativeArcToPoint
	{
		/*non-null*/ shptr<class Radius> radius;
		/*non-null*/ double rotation;
		/*non-null*/ bool largeArc;
		/*non-null*/ bool clockwise;
	};
	void relativeArcToPoint(/*non-null*/ shptr<class Offset> arcEndDelta, _relativeArcToPoint p = {});
	void addRect(/*non-null*/ shptr<class Rect> rect);
	void addOval(/*non-null*/ shptr<class Rect> oval);
	void addArc(/*non-null*/ shptr<class Rect> oval, /*non-null*/ double startAngle, /*non-null*/ double sweepAngle);
	void addPolygon(/*non-null*/ stdvec<shptr<class Offset>> points, /*non-null*/ bool close);
	void addRRect(/*non-null*/ shptr<class RRect> rrect);
	struct _addPath
	{
		/*nullable*/ shptr<class Float64List> matrix4;
	};
	void addPath(/*non-null*/ shptr<class Path> path, /*non-null*/ shptr<class Offset> offset, _addPath p = {});
	struct _extendWithPath
	{
		/*nullable*/ shptr<class Float64List> matrix4;
	};
	void extendWithPath(/*non-null*/ shptr<class Path> path, /*non-null*/ shptr<class Offset> offset, _extendWithPath p = {});
	void close();
	void reset();
	bool /*non-null*/ contains(/*non-null*/ shptr<class Offset> point);
	shptr<class Path> /*non-null*/ shift(/*non-null*/ shptr<class Offset> offset);
	shptr<class Path> /*non-null*/ transform(/*non-null*/ shptr<class Float64List> matrix4);
	shptr<class Rect> /*non-null*/ getBounds();
	static shptr<class Path> /*non-null*/ combine(/*non-null*/ PathOperation operation, /*non-null*/ shptr<class Path> path1, /*non-null*/ shptr<class Path> path2);
	struct _computeMetrics
	{
		/*non-null*/ bool forceClosed;
	};
	shptr<class PathMetrics> /*non-null*/ computeMetrics(_computeMetrics p = {});
	static shptr<class Path> /*non-null*/ ctorMain();
	static shptr<class Path> /*non-null*/ from(/*non-null*/ shptr<class Path> source);
};

inline shptr<class Path> Path() {
	return Path::ctorMain();
}

