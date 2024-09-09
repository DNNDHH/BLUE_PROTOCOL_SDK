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
	 * UserDefinedEnum SecondPasswordSenderStartType.SecondPasswordSenderStartType
	 */
	enum class ESecondPasswordSenderStartType : uint8_t
	{
		SecondPasswordSenderStartTypeNewEnumerator0                    = 0,
		SecondPasswordSenderStartTypeNewEnumerator2                    = 1,
		SecondPasswordSenderStartTypeNewEnumerator3                    = 2,
		SecondPasswordSenderStartTypeSecondPasswordSenderStartType_MAX = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
