#pragma once

 

// Package: ScriptDofSetting

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ScriptDofSetting.ScriptDofSetting
// 0x0008 (0x0008 - 0x0000)
struct FScriptDofSetting final
{
public:
	bool                                          bEnable_11_8454D95B4DAE68534E0BE8B05FB74D6E;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A25[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlurSize_9_3183A98D42144B0C5D7DA3ABCAADF826;       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FScriptDofSetting) == 0x000004, "Wrong alignment on FScriptDofSetting");
static_assert(sizeof(FScriptDofSetting) == 0x000008, "Wrong size on FScriptDofSetting");
static_assert(offsetof(FScriptDofSetting, bEnable_11_8454D95B4DAE68534E0BE8B05FB74D6E) == 0x000000, "Member 'FScriptDofSetting::bEnable_11_8454D95B4DAE68534E0BE8B05FB74D6E' has a wrong offset!");
static_assert(offsetof(FScriptDofSetting, BlurSize_9_3183A98D42144B0C5D7DA3ABCAADF826) == 0x000004, "Member 'FScriptDofSetting::BlurSize_9_3183A98D42144B0C5D7DA3ABCAADF826' has a wrong offset!");

}

