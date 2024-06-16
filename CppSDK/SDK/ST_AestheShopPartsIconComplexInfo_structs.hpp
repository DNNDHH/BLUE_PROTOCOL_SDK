#pragma once

 

// Package: ST_AestheShopPartsIconComplexInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_AestheShopPartsIconComplexInfo.ST_AestheShopPartsIconComplexInfo
// 0x0040 (0x0040 - 0x0000)
struct FST_AestheShopPartsIconComplexInfo final
{
public:
	int32                                         SortId_6_5700DB4D4D696912EACFF88E4ABF52C1;         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BAD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              IconTexture_17_483993A147B09FB367717BB57D7A55E4;   // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FName                                   AssetId_16_D09797F9442906BD919341AA8A48182E;       // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewFlag_14_052B0507412B168F091DD4B62F6B8749;       // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FST_AestheShopPartsIconComplexInfo) == 0x000008, "Wrong alignment on FST_AestheShopPartsIconComplexInfo");
static_assert(sizeof(FST_AestheShopPartsIconComplexInfo) == 0x000040, "Wrong size on FST_AestheShopPartsIconComplexInfo");
static_assert(offsetof(FST_AestheShopPartsIconComplexInfo, SortId_6_5700DB4D4D696912EACFF88E4ABF52C1) == 0x000000, "Member 'FST_AestheShopPartsIconComplexInfo::SortId_6_5700DB4D4D696912EACFF88E4ABF52C1' has a wrong offset!");
static_assert(offsetof(FST_AestheShopPartsIconComplexInfo, IconTexture_17_483993A147B09FB367717BB57D7A55E4) == 0x000008, "Member 'FST_AestheShopPartsIconComplexInfo::IconTexture_17_483993A147B09FB367717BB57D7A55E4' has a wrong offset!");
static_assert(offsetof(FST_AestheShopPartsIconComplexInfo, AssetId_16_D09797F9442906BD919341AA8A48182E) == 0x000030, "Member 'FST_AestheShopPartsIconComplexInfo::AssetId_16_D09797F9442906BD919341AA8A48182E' has a wrong offset!");
static_assert(offsetof(FST_AestheShopPartsIconComplexInfo, NewFlag_14_052B0507412B168F091DD4B62F6B8749) == 0x000038, "Member 'FST_AestheShopPartsIconComplexInfo::NewFlag_14_052B0507412B168F091DD4B62F6B8749' has a wrong offset!");

}

