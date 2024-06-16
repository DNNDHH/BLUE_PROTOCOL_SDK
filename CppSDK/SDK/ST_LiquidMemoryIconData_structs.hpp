#pragma once

 

// Package: ST_LiquidMemoryIconData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_LiquidMemoryIconData.ST_LiquidMemoryIconData
// 0x0128 (0x0128 - 0x0000)
struct FST_LiquidMemoryIconData final
{
public:
	TSoftObjectPtr<class UTexture2D>              FilledIcon1Texture_37_D777F3C3422BF966B35F478B2A57DC47; // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              FilledIcon2Texture_40_42A353DA458202700BC447B8B4F81362; // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              FilledIcon1LTexture_43_D801F0D845BCCC39BCA4D89E47B960C3; // 0x0050(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              FilledIcon2LTexture_42_DB59A8A84D082CE95B3B0B8E45881C69; // 0x0078(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              UnfilledIcon1Texture_34_0183166040B298A9EF60419BC74E9AFF; // 0x00A0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              UnfilledIcon2Texture_35_F71A2594437F3AB05DC0B4BE23ABF84A; // 0x00C8(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              UnfilledIcon3Texture_36_D65DF9094D6736595A61748B8A26A7FC; // 0x00F0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         FillingColorR_48_EE09730842C30D90E8877D80FCB8C9FC; // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FillingColorG_50_D70C6FA145C9F1A3765146A31A48B100; // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FillingColorB_52_A64D35DA41F8B43DE690EC938161DC41; // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_LiquidMemoryIconData) == 0x000008, "Wrong alignment on FST_LiquidMemoryIconData");
static_assert(sizeof(FST_LiquidMemoryIconData) == 0x000128, "Wrong size on FST_LiquidMemoryIconData");
static_assert(offsetof(FST_LiquidMemoryIconData, FilledIcon1Texture_37_D777F3C3422BF966B35F478B2A57DC47) == 0x000000, "Member 'FST_LiquidMemoryIconData::FilledIcon1Texture_37_D777F3C3422BF966B35F478B2A57DC47' has a wrong offset!");
static_assert(offsetof(FST_LiquidMemoryIconData, FilledIcon2Texture_40_42A353DA458202700BC447B8B4F81362) == 0x000028, "Member 'FST_LiquidMemoryIconData::FilledIcon2Texture_40_42A353DA458202700BC447B8B4F81362' has a wrong offset!");
static_assert(offsetof(FST_LiquidMemoryIconData, FilledIcon1LTexture_43_D801F0D845BCCC39BCA4D89E47B960C3) == 0x000050, "Member 'FST_LiquidMemoryIconData::FilledIcon1LTexture_43_D801F0D845BCCC39BCA4D89E47B960C3' has a wrong offset!");
static_assert(offsetof(FST_LiquidMemoryIconData, FilledIcon2LTexture_42_DB59A8A84D082CE95B3B0B8E45881C69) == 0x000078, "Member 'FST_LiquidMemoryIconData::FilledIcon2LTexture_42_DB59A8A84D082CE95B3B0B8E45881C69' has a wrong offset!");
static_assert(offsetof(FST_LiquidMemoryIconData, UnfilledIcon1Texture_34_0183166040B298A9EF60419BC74E9AFF) == 0x0000A0, "Member 'FST_LiquidMemoryIconData::UnfilledIcon1Texture_34_0183166040B298A9EF60419BC74E9AFF' has a wrong offset!");
static_assert(offsetof(FST_LiquidMemoryIconData, UnfilledIcon2Texture_35_F71A2594437F3AB05DC0B4BE23ABF84A) == 0x0000C8, "Member 'FST_LiquidMemoryIconData::UnfilledIcon2Texture_35_F71A2594437F3AB05DC0B4BE23ABF84A' has a wrong offset!");
static_assert(offsetof(FST_LiquidMemoryIconData, UnfilledIcon3Texture_36_D65DF9094D6736595A61748B8A26A7FC) == 0x0000F0, "Member 'FST_LiquidMemoryIconData::UnfilledIcon3Texture_36_D65DF9094D6736595A61748B8A26A7FC' has a wrong offset!");
static_assert(offsetof(FST_LiquidMemoryIconData, FillingColorR_48_EE09730842C30D90E8877D80FCB8C9FC) == 0x000118, "Member 'FST_LiquidMemoryIconData::FillingColorR_48_EE09730842C30D90E8877D80FCB8C9FC' has a wrong offset!");
static_assert(offsetof(FST_LiquidMemoryIconData, FillingColorG_50_D70C6FA145C9F1A3765146A31A48B100) == 0x00011C, "Member 'FST_LiquidMemoryIconData::FillingColorG_50_D70C6FA145C9F1A3765146A31A48B100' has a wrong offset!");
static_assert(offsetof(FST_LiquidMemoryIconData, FillingColorB_52_A64D35DA41F8B43DE690EC938161DC41) == 0x000120, "Member 'FST_LiquidMemoryIconData::FillingColorB_52_A64D35DA41F8B43DE690EC938161DC41' has a wrong offset!");

}

