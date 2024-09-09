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
	 * Enum ColorCorrectRegions.EColorCorrectRegionTemperatureType
	 */
	enum class EColorCorrectRegionTemperatureType : uint8_t
	{
		LegacyTemperature = 0,
		WhiteBalance      = 1,
		ColorTemperature  = 2,
		MAX               = 3
	};

	/**
	 * Enum ColorCorrectRegions.EColorCorrectRegionsType
	 */
	enum class EColorCorrectRegionsType : uint8_t
	{
		Sphere   = 0,
		Box      = 1,
		Cylinder = 2,
		Cone     = 3,
		MAX      = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
