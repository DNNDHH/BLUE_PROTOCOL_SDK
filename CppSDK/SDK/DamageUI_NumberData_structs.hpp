#pragma once

 

// Package: DamageUI_NumberData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct DamageUI_NumberData.DamageUI_NumberData
// 0x0018 (0x0018 - 0x0000)
struct FDamageUI_NumberData final
{
public:
	float                                         Scale_2_7AD6110D4D34965E7D4562949F9166DE;          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DFD[0x4];                                      // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2D*>                     Textures_6_509B5E384FBADCE8C3796F9BAF4F88F5;       // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FDamageUI_NumberData) == 0x000008, "Wrong alignment on FDamageUI_NumberData");
static_assert(sizeof(FDamageUI_NumberData) == 0x000018, "Wrong size on FDamageUI_NumberData");
static_assert(offsetof(FDamageUI_NumberData, Scale_2_7AD6110D4D34965E7D4562949F9166DE) == 0x000000, "Member 'FDamageUI_NumberData::Scale_2_7AD6110D4D34965E7D4562949F9166DE' has a wrong offset!");
static_assert(offsetof(FDamageUI_NumberData, Textures_6_509B5E384FBADCE8C3796F9BAF4F88F5) == 0x000008, "Member 'FDamageUI_NumberData::Textures_6_509B5E384FBADCE8C3796F9BAF4F88F5' has a wrong offset!");

}

