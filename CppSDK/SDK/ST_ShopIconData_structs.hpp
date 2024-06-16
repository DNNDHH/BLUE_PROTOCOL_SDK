#pragma once

 

// Package: ST_ShopIconData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_ShopIconData.ST_ShopIconData
// 0x0078 (0x0078 - 0x0000)
struct FST_ShopIconData final
{
public:
	TSoftObjectPtr<class UTexture2D>              Thumbnail_9_EE85A59B46A3B2A7836500B74581289F;      // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Icon_4_31F4230043FFB495A7C0A4948A645734;           // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Banner_8_ECBD125D40A4B3DB3094198062CBFEE1;         // 0x0050(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FST_ShopIconData) == 0x000008, "Wrong alignment on FST_ShopIconData");
static_assert(sizeof(FST_ShopIconData) == 0x000078, "Wrong size on FST_ShopIconData");
static_assert(offsetof(FST_ShopIconData, Thumbnail_9_EE85A59B46A3B2A7836500B74581289F) == 0x000000, "Member 'FST_ShopIconData::Thumbnail_9_EE85A59B46A3B2A7836500B74581289F' has a wrong offset!");
static_assert(offsetof(FST_ShopIconData, Icon_4_31F4230043FFB495A7C0A4948A645734) == 0x000028, "Member 'FST_ShopIconData::Icon_4_31F4230043FFB495A7C0A4948A645734' has a wrong offset!");
static_assert(offsetof(FST_ShopIconData, Banner_8_ECBD125D40A4B3DB3094198062CBFEE1) == 0x000050, "Member 'FST_ShopIconData::Banner_8_ECBD125D40A4B3DB3094198062CBFEE1' has a wrong offset!");

}

