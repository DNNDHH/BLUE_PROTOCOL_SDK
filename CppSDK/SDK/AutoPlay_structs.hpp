#pragma once

 

// Package: AutoPlay

#include "Basic.hpp"


namespace SDK
{

// Enum AutoPlay.EAutoPlayTaskState
// NumValues: 0x0007
enum class EAutoPlayTaskState : uint8
{
	AwaitingStart                            = 0,
	Running                                  = 1,
	Paused                                   = 2,
	Succeeded                                = 3,
	Failed                                   = 4,
	Aborted                                  = 5,
	EAutoPlayTaskState_MAX                   = 6,
};

// ScriptStruct AutoPlay.AutoPlayEventArgs
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FAutoPlayEventArgs final
{
public:
	uint8                                         Pad_1C78[0x50];                                    // 0x0000(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAutoPlayEventArgs) == 0x000008, "Wrong alignment on FAutoPlayEventArgs");
static_assert(sizeof(FAutoPlayEventArgs) == 0x000050, "Wrong size on FAutoPlayEventArgs");

}

