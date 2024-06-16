#pragma once

 

// Package: ST_ItemIconData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_ItemIconData.ST_ItemIconData
// 0x00C8 (0x00C8 - 0x0000)
struct FST_ItemIconData final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture_10_D777F3C3422BF966B35F478B2A57DC47;       // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Texture_F_9_0183166040B298A9EF60419BC74E9AFF;      // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              TextureL_13_D801F0D845BCCC39BCA4D89E47B960C3;      // 0x0050(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              TextureL_F_15_F71A2594437F3AB05DC0B4BE23ABF84A;    // 0x0078(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              TextureFull_18_7150BB4E4358B879935533AEDFC9E5E3;   // 0x00A0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FST_ItemIconData) == 0x000008, "Wrong alignment on FST_ItemIconData");
static_assert(sizeof(FST_ItemIconData) == 0x0000C8, "Wrong size on FST_ItemIconData");
static_assert(offsetof(FST_ItemIconData, Texture_10_D777F3C3422BF966B35F478B2A57DC47) == 0x000000, "Member 'FST_ItemIconData::Texture_10_D777F3C3422BF966B35F478B2A57DC47' has a wrong offset!");
static_assert(offsetof(FST_ItemIconData, Texture_F_9_0183166040B298A9EF60419BC74E9AFF) == 0x000028, "Member 'FST_ItemIconData::Texture_F_9_0183166040B298A9EF60419BC74E9AFF' has a wrong offset!");
static_assert(offsetof(FST_ItemIconData, TextureL_13_D801F0D845BCCC39BCA4D89E47B960C3) == 0x000050, "Member 'FST_ItemIconData::TextureL_13_D801F0D845BCCC39BCA4D89E47B960C3' has a wrong offset!");
static_assert(offsetof(FST_ItemIconData, TextureL_F_15_F71A2594437F3AB05DC0B4BE23ABF84A) == 0x000078, "Member 'FST_ItemIconData::TextureL_F_15_F71A2594437F3AB05DC0B4BE23ABF84A' has a wrong offset!");
static_assert(offsetof(FST_ItemIconData, TextureFull_18_7150BB4E4358B879935533AEDFC9E5E3) == 0x0000A0, "Member 'FST_ItemIconData::TextureFull_18_7150BB4E4358B879935533AEDFC9E5E3' has a wrong offset!");

}

