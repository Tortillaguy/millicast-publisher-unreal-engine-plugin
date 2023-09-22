// Copyright Millicast 2022. All Rights Reserved.

/*
* Minimal set of WebRTC includes for our Millicast publisher plugin headers.
* This is similar to WebRTCInc.h - but much more stripped down.
*/

#pragma once

#include "CoreMinimal.h"

THIRD_PARTY_INCLUDES_START

#if PLATFORM_WINDOWS

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/PreWindowsApi.h"

// C4582: constructor is not implicitly called in "api/rtcerror.h", treated as an error by UnrealEngine
// C6319: Use of the comma-operator in a tested expression causes the left argument to be ignored when it has no side-effects.
// C6323: Use of arithmetic operator on Boolean type(s).
#pragma warning(push)
#pragma warning(disable: 4582 4583 6319 6323)

#endif // PLATFORM_WINDOWS

// Start WebRTC includes here
#include "api/media_stream_interface.h"
#include "api/peer_connection_interface.h"
// End WebRTC includes here

// because WebRTC uses STL
#include <string>
#include <memory>

#if PLATFORM_WINDOWS
#pragma warning(pop)

#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"

#else

#ifdef PF_MAX
#undef PF_MAX
#endif

#endif //PLATFORM_WINDOWS

THIRD_PARTY_INCLUDES_END