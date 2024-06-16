#pragma once

 

// Package: DamageUI_DamageCorrectionIconData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct DamageUI_DamageCorrectionIconData.DamageUI_DamageCorrectionIconData
// 0x0010 (0x0010 - 0x0000)
struct FDamageUI_DamageCorrectionIconData final
{
public:
	class UTexture2D*                             Texture_2_98B31C1E4A4C47A316E70EB184171EBA;        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AttributeScale_6_F635138B4AE596FD68CA0F9414363186; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FDamageUI_DamageCorrectionIconData) == 0x000008, "Wrong alignment on FDamageUI_DamageCorrectionIconData");
static_assert(sizeof(FDamageUI_DamageCorrectionIconData) == 0x000010, "Wrong size on FDamageUI_DamageCorrectionIconData");
static_assert(offsetof(FDamageUI_DamageCorrectionIconData, Texture_2_98B31C1E4A4C47A316E70EB184171EBA) == 0x000000, "Member 'FDamageUI_DamageCorrectionIconData::Texture_2_98B31C1E4A4C47A316E70EB184171EBA' has a wrong offset!");
static_assert(offsetof(FDamageUI_DamageCorrectionIconData, AttributeScale_6_F635138B4AE596FD68CA0F9414363186) == 0x000008, "Member 'FDamageUI_DamageCorrectionIconData::AttributeScale_6_F635138B4AE596FD68CA0F9414363186' has a wrong offset!");

}

