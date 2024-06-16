#pragma once

 

// Package: InventoryData

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "InventoryWeaponData_structs.hpp"


namespace SDK
{

// UserDefinedStruct InventoryData.InventoryData
// 0x0098 (0x0098 - 0x0000)
struct FInventoryData final
{
public:
	int32                                         Index_12_2A2EFBEB48A8DB04985595BB2B213B55;         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BAC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     IconData_2_92C9F7714C368ABD7288809282479544;       // 0x0008(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	EProtectorCategory                            Protector_5_F413968E4742B4497EC14F9B6613751B;      // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryWeaponData                   WeaponData_9_44A6B3C24A12554F59B43F9AB4EE70C9;     // 0x0069(0x0002)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BAD[0x5];                                     // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterMountImagineData           MountImagineData_18_133EF68E42124C6687F2608087850718; // 0x0070(0x0028)(Edit, BlueprintVisible)
};
static_assert(alignof(FInventoryData) == 0x000008, "Wrong alignment on FInventoryData");
static_assert(sizeof(FInventoryData) == 0x000098, "Wrong size on FInventoryData");
static_assert(offsetof(FInventoryData, Index_12_2A2EFBEB48A8DB04985595BB2B213B55) == 0x000000, "Member 'FInventoryData::Index_12_2A2EFBEB48A8DB04985595BB2B213B55' has a wrong offset!");
static_assert(offsetof(FInventoryData, IconData_2_92C9F7714C368ABD7288809282479544) == 0x000008, "Member 'FInventoryData::IconData_2_92C9F7714C368ABD7288809282479544' has a wrong offset!");
static_assert(offsetof(FInventoryData, Protector_5_F413968E4742B4497EC14F9B6613751B) == 0x000068, "Member 'FInventoryData::Protector_5_F413968E4742B4497EC14F9B6613751B' has a wrong offset!");
static_assert(offsetof(FInventoryData, WeaponData_9_44A6B3C24A12554F59B43F9AB4EE70C9) == 0x000069, "Member 'FInventoryData::WeaponData_9_44A6B3C24A12554F59B43F9AB4EE70C9' has a wrong offset!");
static_assert(offsetof(FInventoryData, MountImagineData_18_133EF68E42124C6687F2608087850718) == 0x000070, "Member 'FInventoryData::MountImagineData_18_133EF68E42124C6687F2608087850718' has a wrong offset!");

}

