#pragma once

 

// Package: RandomLightMaterialPreviewParams

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct RandomLightMaterialPreviewParams.RandomLightMaterialPreviewParams
// 0x0010 (0x0010 - 0x0000)
struct FRandomLightMaterialPreviewParams final
{
public:
	class UMaterialInstanceDynamic*               MaterialInstance_2_1630306147FF97E0607ACB9D1F5D7114; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OnTime_9_062BDE784E3EAFC75F57688D177CA0D6;         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OffTime_10_BD6924DA4D0D6D47B86B549C8D9636D5;       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FRandomLightMaterialPreviewParams) == 0x000008, "Wrong alignment on FRandomLightMaterialPreviewParams");
static_assert(sizeof(FRandomLightMaterialPreviewParams) == 0x000010, "Wrong size on FRandomLightMaterialPreviewParams");
static_assert(offsetof(FRandomLightMaterialPreviewParams, MaterialInstance_2_1630306147FF97E0607ACB9D1F5D7114) == 0x000000, "Member 'FRandomLightMaterialPreviewParams::MaterialInstance_2_1630306147FF97E0607ACB9D1F5D7114' has a wrong offset!");
static_assert(offsetof(FRandomLightMaterialPreviewParams, OnTime_9_062BDE784E3EAFC75F57688D177CA0D6) == 0x000008, "Member 'FRandomLightMaterialPreviewParams::OnTime_9_062BDE784E3EAFC75F57688D177CA0D6' has a wrong offset!");
static_assert(offsetof(FRandomLightMaterialPreviewParams, OffTime_10_BD6924DA4D0D6D47B86B549C8D9636D5) == 0x00000C, "Member 'FRandomLightMaterialPreviewParams::OffTime_10_BD6924DA4D0D6D47B86B549C8D9636D5' has a wrong offset!");

}

