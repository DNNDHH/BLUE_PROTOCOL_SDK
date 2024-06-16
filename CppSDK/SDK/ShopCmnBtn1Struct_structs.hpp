#pragma once

 

// Package: ShopCmnBtn1Struct

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ShopCmnBtn1Struct.ShopCmnBtn1Struct
// 0x0010 (0x0010 - 0x0000)
struct FShopCmnBtn1Struct final
{
public:
	int32                                         TextID_2_4E7DDB99413068B9862461BF6D3578AE;         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71B7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             IconImage_9_1BED2F9C40402311779659A4CD8E7C95;      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FShopCmnBtn1Struct) == 0x000008, "Wrong alignment on FShopCmnBtn1Struct");
static_assert(sizeof(FShopCmnBtn1Struct) == 0x000010, "Wrong size on FShopCmnBtn1Struct");
static_assert(offsetof(FShopCmnBtn1Struct, TextID_2_4E7DDB99413068B9862461BF6D3578AE) == 0x000000, "Member 'FShopCmnBtn1Struct::TextID_2_4E7DDB99413068B9862461BF6D3578AE' has a wrong offset!");
static_assert(offsetof(FShopCmnBtn1Struct, IconImage_9_1BED2F9C40402311779659A4CD8E7C95) == 0x000008, "Member 'FShopCmnBtn1Struct::IconImage_9_1BED2F9C40402311779659A4CD8E7C95' has a wrong offset!");

}

