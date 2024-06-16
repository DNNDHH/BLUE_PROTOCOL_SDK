#pragma once

 

// Package: WeaponButtonViewPerkListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.ExecuteUbergraph_WeaponButtonViewPerkListItem
// 0x0004 (0x0004 - 0x0000)
struct WeaponButtonViewPerkListItem_C_ExecuteUbergraph_WeaponButtonViewPerkListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponButtonViewPerkListItem_C_ExecuteUbergraph_WeaponButtonViewPerkListItem) == 0x000004, "Wrong alignment on WeaponButtonViewPerkListItem_C_ExecuteUbergraph_WeaponButtonViewPerkListItem");
static_assert(sizeof(WeaponButtonViewPerkListItem_C_ExecuteUbergraph_WeaponButtonViewPerkListItem) == 0x000004, "Wrong size on WeaponButtonViewPerkListItem_C_ExecuteUbergraph_WeaponButtonViewPerkListItem");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_ExecuteUbergraph_WeaponButtonViewPerkListItem, EntryPoint) == 0x000000, "Member 'WeaponButtonViewPerkListItem_C_ExecuteUbergraph_WeaponButtonViewPerkListItem::EntryPoint' has a wrong offset!");

// Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.Set Perk Data
// 0x00B8 (0x00B8 - 0x0000)
struct WeaponButtonViewPerkListItem_C_Set_Perk_Data final
{
public:
	struct FSBCharacterWeaponPerkData             PerkData;                                          // 0x0000(0x001C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_6940[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ItemName;                                          // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSBMasterFusionItem                    LocalFusionItem;                                   // 0x0030(0x0018)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6941[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6942[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	class UWidget*                                K2Node_Select_Default;                             // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6943[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6944[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x009C(0x0018)(NoDestructor)
};
static_assert(alignof(WeaponButtonViewPerkListItem_C_Set_Perk_Data) == 0x000008, "Wrong alignment on WeaponButtonViewPerkListItem_C_Set_Perk_Data");
static_assert(sizeof(WeaponButtonViewPerkListItem_C_Set_Perk_Data) == 0x0000B8, "Wrong size on WeaponButtonViewPerkListItem_C_Set_Perk_Data");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, PerkData) == 0x000000, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::PerkData' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, ItemName) == 0x000020, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::ItemName' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, LocalFusionItem) == 0x000030, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::LocalFusionItem' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, Temp_int_Variable) == 0x000048, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, CallFunc_GetNameText_ReturnValue) == 0x000050, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, K2Node_Select_Default) == 0x000080, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, CallFunc_GetMasterDataManager_IsValid) == 0x000088, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, CallFunc_GetMasterDataManager_ReturnValue) == 0x000090, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000098, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponButtonViewPerkListItem_C_Set_Perk_Data, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x00009C, "Member 'WeaponButtonViewPerkListItem_C_Set_Perk_Data::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");

}

