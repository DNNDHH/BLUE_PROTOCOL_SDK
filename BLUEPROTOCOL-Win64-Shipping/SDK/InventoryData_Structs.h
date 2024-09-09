#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct InventoryData.InventoryData
	 * Size -> 0x0098
	 */
	struct FInventoryData
	{
	public:
		int32_t                                                    Index_12_2A2EFBEB48A8DB04985595BB2B213B55;               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C1RE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInventoryItemData                                  IconData_2_92C9F7714C368ABD7288809282479544;             // 0x0008(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash
		EProtectorCategory                                         Protector_5_F413968E4742B4497EC14F9B6613751B;            // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInventoryWeaponData                                WeaponData_9_44A6B3C24A12554F59B43F9AB4EE70C9;           // 0x0069(0x0002) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B0T9[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBCharacterMountImagineData                        MountImagineData_18_133EF68E42124C6687F2608087850718;    // 0x0070(0x0028) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
