#pragma once

 

// Package: GatherIconInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct GatherIconInfo.GatherIconInfo
// 0x0008 (0x0008 - 0x0000)
struct FGatherIconInfo final
{
public:
	float                                         ClipDistance_4_DD1A63B24B464CB2562458A093CE367F;   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Magnification_5_92D047C643AEF9E9111106A9CB3BEDA5;  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FGatherIconInfo) == 0x000004, "Wrong alignment on FGatherIconInfo");
static_assert(sizeof(FGatherIconInfo) == 0x000008, "Wrong size on FGatherIconInfo");
static_assert(offsetof(FGatherIconInfo, ClipDistance_4_DD1A63B24B464CB2562458A093CE367F) == 0x000000, "Member 'FGatherIconInfo::ClipDistance_4_DD1A63B24B464CB2562458A093CE367F' has a wrong offset!");
static_assert(offsetof(FGatherIconInfo, Magnification_5_92D047C643AEF9E9111106A9CB3BEDA5) == 0x000004, "Member 'FGatherIconInfo::Magnification_5_92D047C643AEF9E9111106A9CB3BEDA5' has a wrong offset!");

}

