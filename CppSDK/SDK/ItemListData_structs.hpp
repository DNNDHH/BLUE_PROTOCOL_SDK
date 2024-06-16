#pragma once

 

// Package: ItemListData

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct ItemListData.ItemListData
// 0x0090 (0x0090 - 0x0000)
struct FItemListData final
{
public:
	struct FCraftMasterData                       MasterData_2_6162CC2146B6107B8D5D80A57025E66A;     // 0x0000(0x0088)(Edit, BlueprintVisible)
	bool                                          IsWeapon_5_933CC79D4F41AF9B5101DAAA1FD7A0B7;       // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FItemListData) == 0x000008, "Wrong alignment on FItemListData");
static_assert(sizeof(FItemListData) == 0x000090, "Wrong size on FItemListData");
static_assert(offsetof(FItemListData, MasterData_2_6162CC2146B6107B8D5D80A57025E66A) == 0x000000, "Member 'FItemListData::MasterData_2_6162CC2146B6107B8D5D80A57025E66A' has a wrong offset!");
static_assert(offsetof(FItemListData, IsWeapon_5_933CC79D4F41AF9B5101DAAA1FD7A0B7) == 0x000088, "Member 'FItemListData::IsWeapon_5_933CC79D4F41AF9B5101DAAA1FD7A0B7' has a wrong offset!");

}

