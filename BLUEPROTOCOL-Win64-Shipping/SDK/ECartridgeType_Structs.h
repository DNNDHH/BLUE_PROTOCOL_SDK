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
	 * UserDefinedEnum ECartridgeType.ECartridgeType
	 */
	enum class ECartridgeType : uint8_t
	{
		NewEnumerator0 = 0,
		NewEnumerator1 = 1,
		NewEnumerator2 = 2,
		NewEnumerator3 = 3,
		MAX            = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
