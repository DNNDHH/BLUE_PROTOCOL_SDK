#pragma once

 

// Package: ColorCorrectRegions

#include "Basic.hpp"


namespace SDK
{

// Enum ColorCorrectRegions.EColorCorrectRegionTemperatureType
// NumValues: 0x0004
enum class EColorCorrectRegionTemperatureType : uint8
{
	LegacyTemperature                        = 0,
	WhiteBalance                             = 1,
	ColorTemperature                         = 2,
	MAX                                      = 3,
};

// Enum ColorCorrectRegions.EColorCorrectRegionsType
// NumValues: 0x0005
enum class EColorCorrectRegionsType : uint8
{
	Sphere                                   = 0,
	Box                                      = 1,
	Cylinder                                 = 2,
	Cone                                     = 3,
	MAX                                      = 4,
};

}

