#pragma once

 

// Package: BTUtilitySelector

#include "Basic.hpp"


namespace SDK
{

// Enum BTUtilitySelector.EUtilitySelectionMode
// NumValues: 0x0003
enum class EUtilitySelectionMode : uint8
{
	Priority                                 = 0,
	Probability                              = 1,
	EUtilitySelectionMode_MAX                = 2,
};

// Enum BTUtilitySelector.EUtilityBiasCooldownType
// NumValues: 0x0003
enum class EUtilityBiasCooldownType : uint8
{
	Step                                     = 0,
	Linear                                   = 1,
	EUtilityBiasCooldownType_MAX             = 2,
};

// Enum BTUtilitySelector.EUtilityEvaluateType
// NumValues: 0x0007
enum class EUtilityEvaluateType : uint8
{
	Linear                                   = 0,
	Square                                   = 1,
	Cube                                     = 2,
	SquareRoot                               = 3,
	Cos                                      = 4,
	Sigmoid                                  = 5,
	EUtilityEvaluateType_MAX                 = 6,
};

}

