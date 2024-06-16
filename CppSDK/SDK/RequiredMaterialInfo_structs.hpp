#pragma once

 

// Package: RequiredMaterialInfo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct RequiredMaterialInfo.RequiredMaterialInfo
// 0x000C (0x000C - 0x0000)
struct FRequiredMaterialInfo final
{
public:
	EItemType                                     ItemType_2_DE0262184DD2990B76B1E081A262C8FE;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C81[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId_5_33BD62AC488FB04215B472A91F762CF3;         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount_7_9981979B4F147E68260BF88AD7E12D7E;         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FRequiredMaterialInfo) == 0x000004, "Wrong alignment on FRequiredMaterialInfo");
static_assert(sizeof(FRequiredMaterialInfo) == 0x00000C, "Wrong size on FRequiredMaterialInfo");
static_assert(offsetof(FRequiredMaterialInfo, ItemType_2_DE0262184DD2990B76B1E081A262C8FE) == 0x000000, "Member 'FRequiredMaterialInfo::ItemType_2_DE0262184DD2990B76B1E081A262C8FE' has a wrong offset!");
static_assert(offsetof(FRequiredMaterialInfo, ItemId_5_33BD62AC488FB04215B472A91F762CF3) == 0x000004, "Member 'FRequiredMaterialInfo::ItemId_5_33BD62AC488FB04215B472A91F762CF3' has a wrong offset!");
static_assert(offsetof(FRequiredMaterialInfo, Amount_7_9981979B4F147E68260BF88AD7E12D7E) == 0x000008, "Member 'FRequiredMaterialInfo::Amount_7_9981979B4F147E68260BF88AD7E12D7E' has a wrong offset!");

}

