#pragma once

 

// Package: InventoryWeaponData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct InventoryWeaponData.InventoryWeaponData
// 0x0002 (0x0002 - 0x0000)
struct FInventoryWeaponData final
{
public:
	bool                                          bRankUp_17_AF1D117949D334171BCDC48B02744600;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bMaxLevel_19_46CBED304AC9C5682E063FADB3172CBF;     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FInventoryWeaponData) == 0x000001, "Wrong alignment on FInventoryWeaponData");
static_assert(sizeof(FInventoryWeaponData) == 0x000002, "Wrong size on FInventoryWeaponData");
static_assert(offsetof(FInventoryWeaponData, bRankUp_17_AF1D117949D334171BCDC48B02744600) == 0x000000, "Member 'FInventoryWeaponData::bRankUp_17_AF1D117949D334171BCDC48B02744600' has a wrong offset!");
static_assert(offsetof(FInventoryWeaponData, bMaxLevel_19_46CBED304AC9C5682E063FADB3172CBF) == 0x000001, "Member 'FInventoryWeaponData::bMaxLevel_19_46CBED304AC9C5682E063FADB3172CBF' has a wrong offset!");

}

