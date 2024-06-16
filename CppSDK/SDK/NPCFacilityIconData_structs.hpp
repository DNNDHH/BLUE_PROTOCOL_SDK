#pragma once

 

// Package: NPCFacilityIconData

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct NPCFacilityIconData.NPCFacilityIconData
// 0x0028 (0x0028 - 0x0000)
struct FNPCFacilityIconData final
{
public:
	ESBFacilityType                               FacilityType_9_877CA17B46F9F4D1E747E1AD3078C172;   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_723A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             IconTexture_5_9E3BC24346B532D989EC97BC2B15CA90;    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFacilityIconStatusSetting           StatusSetting_21_7E4C525E4F4AAB856EB4CABC7C747FED; // 0x0010(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(FNPCFacilityIconData) == 0x000008, "Wrong alignment on FNPCFacilityIconData");
static_assert(sizeof(FNPCFacilityIconData) == 0x000028, "Wrong size on FNPCFacilityIconData");
static_assert(offsetof(FNPCFacilityIconData, FacilityType_9_877CA17B46F9F4D1E747E1AD3078C172) == 0x000000, "Member 'FNPCFacilityIconData::FacilityType_9_877CA17B46F9F4D1E747E1AD3078C172' has a wrong offset!");
static_assert(offsetof(FNPCFacilityIconData, IconTexture_5_9E3BC24346B532D989EC97BC2B15CA90) == 0x000008, "Member 'FNPCFacilityIconData::IconTexture_5_9E3BC24346B532D989EC97BC2B15CA90' has a wrong offset!");
static_assert(offsetof(FNPCFacilityIconData, StatusSetting_21_7E4C525E4F4AAB856EB4CABC7C747FED) == 0x000010, "Member 'FNPCFacilityIconData::StatusSetting_21_7E4C525E4F4AAB856EB4CABC7C747FED' has a wrong offset!");

}

