#pragma once

 

// Package: Desc_WeaponSynthe

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Desc_WeaponSynthe.Desc_WeaponSynthe_C.SetWeapon
// 0x0128 (0x0128 - 0x0000)
struct Desc_WeaponSynthe_C_SetWeapon final
{
public:
	struct FOwnItemInfo                           WeaponInfos;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FSBCharacterWeaponPerkData>     Perks;                                             // 0x0118(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(Desc_WeaponSynthe_C_SetWeapon) == 0x000008, "Wrong alignment on Desc_WeaponSynthe_C_SetWeapon");
static_assert(sizeof(Desc_WeaponSynthe_C_SetWeapon) == 0x000128, "Wrong size on Desc_WeaponSynthe_C_SetWeapon");
static_assert(offsetof(Desc_WeaponSynthe_C_SetWeapon, WeaponInfos) == 0x000000, "Member 'Desc_WeaponSynthe_C_SetWeapon::WeaponInfos' has a wrong offset!");
static_assert(offsetof(Desc_WeaponSynthe_C_SetWeapon, Perks) == 0x000118, "Member 'Desc_WeaponSynthe_C_SetWeapon::Perks' has a wrong offset!");

// Function Desc_WeaponSynthe.Desc_WeaponSynthe_C.SetFusionItem
// 0x0004 (0x0004 - 0x0000)
struct Desc_WeaponSynthe_C_SetFusionItem final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Desc_WeaponSynthe_C_SetFusionItem) == 0x000004, "Wrong alignment on Desc_WeaponSynthe_C_SetFusionItem");
static_assert(sizeof(Desc_WeaponSynthe_C_SetFusionItem) == 0x000004, "Wrong size on Desc_WeaponSynthe_C_SetFusionItem");
static_assert(offsetof(Desc_WeaponSynthe_C_SetFusionItem, ItemId) == 0x000000, "Member 'Desc_WeaponSynthe_C_SetFusionItem::ItemId' has a wrong offset!");

}

