/*
	THIS FILE IS A PART OF GTA V SCRIPT HOOK SDK
				http://dev-c.com			
			(C) Alexander Blade 2015
*/

#pragma once

#include "main.h"
#include "common.h"

// TODO: inplace encryption of simple types

template <typename T>
static inline void nativePush(T val)
{
	UINT64 val64 = 0;
	static_assert(sizeof(T) <= sizeof(UINT64), "error, value size > 64 bit");
	*reinterpret_cast<T *>(&val64) = val; // &val + sizeof(dw) - sizeof(val)
	nativePush64(val64);
}

static inline void pushArgs()
{
}

template <typename T>
static inline void pushArgs(T arg)
{
	nativePush(arg);
}

template <typename T, typename... Ts>
static inline void pushArgs(T arg, Ts... args)
{
	nativePush(arg);
	pushArgs(args...);
}

template <typename R, typename... Ts>
static inline R invoke(UINT64 hash, Ts... args)
{
	if (!nativeCanExecuteInThisContext()) {
		char buf[32];
		sprintf_s(buf, "%llx", hash);
		__ASSERT_THROW(false, "natives can't be executed in this context, current " + stdstr(buf));
	}
	
	nativeInit(hash);
	pushArgs(args...);
	return *reinterpret_cast<R *>(nativeCall());
}