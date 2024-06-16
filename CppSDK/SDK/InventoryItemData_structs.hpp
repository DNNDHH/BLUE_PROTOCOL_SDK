#pragma once

 

// Package: InventoryItemData

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct InventoryItemData.InventoryItemData
// 0x0060 (0x0060 - 0x0000)
struct FInventoryItemData final
{
public:
	class FString                                 UniqueId_45_7574BCF94D5ADE86CDBBF0BB3120996A;      // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Index_46_91E0E93D4606ACC8947E678E4D117154;         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ItemType_54_7E466491478A3BFD84668EB0ADC5D32E;      // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_915C[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Name_19_21BA5B5B48FF00666A0EAE8CFC6A1408;          // 0x0018(0x0018)(Edit, BlueprintVisible)
	class FText                                   UnIdentifiedName_69_98CDE22B47E90984A0F520BFE2AB3B10; // 0x0030(0x0018)(Edit, BlueprintVisible)
	int32                                         Amount_27_A52406EA47DD10B12153A9B4910EB562;        // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountBonus_72_CC8FD2C24D500458399691BA0CC7C393;   // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageNumber_61_3A2F5E984BF1494BE5457B9307681DCC; // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanUse_56_D8CF042346DA73D559782393F6B26CC3;        // 0x0054(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_915D[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemPositionIndex_64_C79DF86B4E5BD82D874FDC8075213A54; // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsIdentified_66_22994BF440D03A77795283A7A3F0DC56; // 0x005C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FInventoryItemData) == 0x000008, "Wrong alignment on FInventoryItemData");
static_assert(sizeof(FInventoryItemData) == 0x000060, "Wrong size on FInventoryItemData");
static_assert(offsetof(FInventoryItemData, UniqueId_45_7574BCF94D5ADE86CDBBF0BB3120996A) == 0x000000, "Member 'FInventoryItemData::UniqueId_45_7574BCF94D5ADE86CDBBF0BB3120996A' has a wrong offset!");
static_assert(offsetof(FInventoryItemData, Index_46_91E0E93D4606ACC8947E678E4D117154) == 0x000010, "Member 'FInventoryItemData::Index_46_91E0E93D4606ACC8947E678E4D117154' has a wrong offset!");
static_assert(offsetof(FInventoryItemData, ItemType_54_7E466491478A3BFD84668EB0ADC5D32E) == 0x000014, "Member 'FInventoryItemData::ItemType_54_7E466491478A3BFD84668EB0ADC5D32E' has a wrong offset!");
static_assert(offsetof(FInventoryItemData, Name_19_21BA5B5B48FF00666A0EAE8CFC6A1408) == 0x000018, "Member 'FInventoryItemData::Name_19_21BA5B5B48FF00666A0EAE8CFC6A1408' has a wrong offset!");
static_assert(offsetof(FInventoryItemData, UnIdentifiedName_69_98CDE22B47E90984A0F520BFE2AB3B10) == 0x000030, "Member 'FInventoryItemData::UnIdentifiedName_69_98CDE22B47E90984A0F520BFE2AB3B10' has a wrong offset!");
static_assert(offsetof(FInventoryItemData, Amount_27_A52406EA47DD10B12153A9B4910EB562) == 0x000048, "Member 'FInventoryItemData::Amount_27_A52406EA47DD10B12153A9B4910EB562' has a wrong offset!");
static_assert(offsetof(FInventoryItemData, AmountBonus_72_CC8FD2C24D500458399691BA0CC7C393) == 0x00004C, "Member 'FInventoryItemData::AmountBonus_72_CC8FD2C24D500458399691BA0CC7C393' has a wrong offset!");
static_assert(offsetof(FInventoryItemData, StorageNumber_61_3A2F5E984BF1494BE5457B9307681DCC) == 0x000050, "Member 'FInventoryItemData::StorageNumber_61_3A2F5E984BF1494BE5457B9307681DCC' has a wrong offset!");
static_assert(offsetof(FInventoryItemData, CanUse_56_D8CF042346DA73D559782393F6B26CC3) == 0x000054, "Member 'FInventoryItemData::CanUse_56_D8CF042346DA73D559782393F6B26CC3' has a wrong offset!");
static_assert(offsetof(FInventoryItemData, ItemPositionIndex_64_C79DF86B4E5BD82D874FDC8075213A54) == 0x000058, "Member 'FInventoryItemData::ItemPositionIndex_64_C79DF86B4E5BD82D874FDC8075213A54' has a wrong offset!");
static_assert(offsetof(FInventoryItemData, bIsIdentified_66_22994BF440D03A77795283A7A3F0DC56) == 0x00005C, "Member 'FInventoryItemData::bIsIdentified_66_22994BF440D03A77795283A7A3F0DC56' has a wrong offset!");

}

