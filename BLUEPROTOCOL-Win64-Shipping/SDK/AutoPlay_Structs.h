#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AutoPlay.EAutoPlayTaskState
	 */
	enum class EAutoPlayTaskState : uint8_t
	{
		AwaitingStart = 0,
		Running       = 1,
		Paused        = 2,
		Succeeded     = 3,
		Failed        = 4,
		Aborted       = 5,
		MAX           = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AutoPlay.AutoPlayEventArgs
	 * Size -> 0x0050
	 */
	struct FAutoPlayEventArgs
	{
	public:
		unsigned char                                              UnknownData_P3L2[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
