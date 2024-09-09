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
	 * UserDefinedEnum TickerMessageStatus.TickerMessageStatus
	 */
	enum class ETickerMessageStatus : uint8_t
	{
		TickerMessageStatusNewEnumerator0          = 0,
		TickerMessageStatusNewEnumerator1          = 1,
		TickerMessageStatusNewEnumerator2          = 2,
		TickerMessageStatusTickerMessageStatus_MAX = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
