#pragma once

 

// Package: FlatShop_ProductItem_DescItemText

#include "Basic.hpp"


namespace SDK::Params
{

// Function FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C.SetProductInfo
// 0x0001 (0x0001 - 0x0000)
struct FlatShop_ProductItem_DescItemText_C_SetProductInfo final
{
public:
	bool                                          Product;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_ProductItem_DescItemText_C_SetProductInfo) == 0x000001, "Wrong alignment on FlatShop_ProductItem_DescItemText_C_SetProductInfo");
static_assert(sizeof(FlatShop_ProductItem_DescItemText_C_SetProductInfo) == 0x000001, "Wrong size on FlatShop_ProductItem_DescItemText_C_SetProductInfo");
static_assert(offsetof(FlatShop_ProductItem_DescItemText_C_SetProductInfo, Product) == 0x000000, "Member 'FlatShop_ProductItem_DescItemText_C_SetProductInfo::Product' has a wrong offset!");

// Function FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C.SetDescription
// 0x0018 (0x0018 - 0x0000)
struct FlatShop_ProductItem_DescItemText_C_SetDescription final
{
public:
	class FText                                   Desc;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FlatShop_ProductItem_DescItemText_C_SetDescription) == 0x000008, "Wrong alignment on FlatShop_ProductItem_DescItemText_C_SetDescription");
static_assert(sizeof(FlatShop_ProductItem_DescItemText_C_SetDescription) == 0x000018, "Wrong size on FlatShop_ProductItem_DescItemText_C_SetDescription");
static_assert(offsetof(FlatShop_ProductItem_DescItemText_C_SetDescription, Desc) == 0x000000, "Member 'FlatShop_ProductItem_DescItemText_C_SetDescription::Desc' has a wrong offset!");

}

