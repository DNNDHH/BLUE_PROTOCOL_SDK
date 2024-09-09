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
	 * Enum BTUtilitySelector.EUtilitySelectionMode
	 */
	enum class EUtilitySelectionMode : uint8_t
	{
		Priority    = 0,
		Probability = 1,
		MAX         = 2
	};

	/**
	 * Enum BTUtilitySelector.EUtilityBiasCooldownType
	 */
	enum class EUtilityBiasCooldownType : uint8_t
	{
		Step   = 0,
		Linear = 1,
		MAX    = 2
	};

	/**
	 * Enum BTUtilitySelector.EUtilityEvaluateType
	 */
	enum class EUtilityEvaluateType : uint8_t
	{
		Linear     = 0,
		Square     = 1,
		Cube       = 2,
		SquareRoot = 3,
		Cos        = 4,
		Sigmoid    = 5,
		MAX        = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
