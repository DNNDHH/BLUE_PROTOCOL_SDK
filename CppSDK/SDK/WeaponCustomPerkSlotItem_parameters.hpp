#pragma once

 

// Package: WeaponCustomPerkSlotItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.ExecuteUbergraph_WeaponCustomPerkSlotItem
// 0x0008 (0x0008 - 0x0000)
struct WeaponCustomPerkSlotItem_C_ExecuteUbergraph_WeaponCustomPerkSlotItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_ExecuteUbergraph_WeaponCustomPerkSlotItem) == 0x000004, "Wrong alignment on WeaponCustomPerkSlotItem_C_ExecuteUbergraph_WeaponCustomPerkSlotItem");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_ExecuteUbergraph_WeaponCustomPerkSlotItem) == 0x000008, "Wrong size on WeaponCustomPerkSlotItem_C_ExecuteUbergraph_WeaponCustomPerkSlotItem");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ExecuteUbergraph_WeaponCustomPerkSlotItem, EntryPoint) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_ExecuteUbergraph_WeaponCustomPerkSlotItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ExecuteUbergraph_WeaponCustomPerkSlotItem, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'WeaponCustomPerkSlotItem_C_ExecuteUbergraph_WeaponCustomPerkSlotItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.ApplyData
// 0x0220 (0x0220 - 0x0000)
struct WeaponCustomPerkSlotItem_C_ApplyData final
{
public:
	struct FSBAbilityMasterData                   LocalPerkMaster;                                   // 0x0000(0x0048)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_680F[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0050(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6810[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6811[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x007C(0x0018)(NoDestructor)
	uint8                                         Pad_6812[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue; // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	struct FSBAbilityTextData                     CallFunc_GetAbilityTextDataCollection_ReturnValue; // 0x00C0(0x0050)(ConstParm)
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6813[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0138(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0150(0x0018)()
	class FString                                 CallFunc_SelectString_ReturnValue_1;               // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x0178(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0190(0x0018)()
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_1; // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x01B8(0x0018)()
	int32                                         CallFunc_GetAbilityEffectID_AbilityEffectID;       // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6814[0x3];                                     // 0x01D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x01D8(0x0048)()
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_ApplyData) == 0x000008, "Wrong alignment on WeaponCustomPerkSlotItem_C_ApplyData");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_ApplyData) == 0x000220, "Wrong size on WeaponCustomPerkSlotItem_C_ApplyData");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, LocalPerkMaster) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::LocalPerkMaster' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, Temp_bool_Variable) == 0x000048, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, Temp_text_Variable) == 0x000050, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_GetMasterDataManager_IsValid) == 0x000068, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000078, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x00007C, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_ConvertAbilityEffectValueText_ReturnValue) == 0x000098, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_ConvertAbilityEffectValueText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_GetAbilityTextDataCollection_ReturnValue) == 0x0000C0, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_GetAbilityTextDataCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_GetItemName_OutName) == 0x000110, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_GetItemName_ReturnValue) == 0x000120, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_SelectString_ReturnValue) == 0x000128, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000138, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000150, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_SelectString_ReturnValue_1) == 0x000168, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_SelectString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, K2Node_Select_Default) == 0x000178, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000190, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_ConvertAbilityEffectValueText_ReturnValue_1) == 0x0001A8, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_ConvertAbilityEffectValueText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0001B8, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_GetAbilityEffectID_AbilityEffectID) == 0x0001D0, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_GetAbilityEffectID_AbilityEffectID' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_FindAbilityMaster_bIsValid) == 0x0001D4, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ApplyData, CallFunc_FindAbilityMaster_AbilityMaster) == 0x0001D8, "Member 'WeaponCustomPerkSlotItem_C_ApplyData::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetWeaponData
// 0x001C (0x001C - 0x0000)
struct WeaponCustomPerkSlotItem_C_SetWeaponData final
{
public:
	struct FSBCharacterWeaponPerkData             Param_SBCharacter_Weapon_Perk_Data;                // 0x0000(0x001C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_SetWeaponData) == 0x000004, "Wrong alignment on WeaponCustomPerkSlotItem_C_SetWeaponData");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_SetWeaponData) == 0x00001C, "Wrong size on WeaponCustomPerkSlotItem_C_SetWeaponData");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetWeaponData, Param_SBCharacter_Weapon_Perk_Data) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_SetWeaponData::Param_SBCharacter_Weapon_Perk_Data' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetProtectButtonVisible
// 0x0005 (0x0005 - 0x0000)
struct WeaponCustomPerkSlotItem_C_SetProtectButtonVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_SetProtectButtonVisible) == 0x000001, "Wrong alignment on WeaponCustomPerkSlotItem_C_SetProtectButtonVisible");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_SetProtectButtonVisible) == 0x000005, "Wrong size on WeaponCustomPerkSlotItem_C_SetProtectButtonVisible");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetProtectButtonVisible, bVisible) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_SetProtectButtonVisible::bVisible' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetProtectButtonVisible, Temp_bool_Variable) == 0x000001, "Member 'WeaponCustomPerkSlotItem_C_SetProtectButtonVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetProtectButtonVisible, Temp_byte_Variable) == 0x000002, "Member 'WeaponCustomPerkSlotItem_C_SetProtectButtonVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetProtectButtonVisible, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponCustomPerkSlotItem_C_SetProtectButtonVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetProtectButtonVisible, K2Node_Select_Default) == 0x000004, "Member 'WeaponCustomPerkSlotItem_C_SetProtectButtonVisible::K2Node_Select_Default' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetItemData
// 0x02E0 (0x02E0 - 0x0000)
struct WeaponCustomPerkSlotItem_C_SetItemData final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6815[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   LocalPerkMaster;                                   // 0x0008(0x0048)(Edit, BlueprintVisible)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6816[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0058(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6817[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6818[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x0084(0x0018)(NoDestructor)
	uint8                                         Pad_6819[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists; // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_681A[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSyntheAbilityPickUp                 CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue; // 0x00B8(0x0028)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E0(0x0018)()
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_681B[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x0100(0x0048)()
	struct FSBAbilityTextData                     CallFunc_GetAbilityTextDataCollection_ReturnValue; // 0x0148(0x0050)(ConstParm)
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy; // 0x0198(0x001C)(NoDestructor)
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy; // 0x01B4(0x001C)(NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01D0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_681C[0x5];                                     // 0x01EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_681D[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue; // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0210(0x0018)()
	class UWidget*                                K2Node_Select_Default_1;                           // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_1; // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0240(0x0018)()
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_2; // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_3; // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0278(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0290(0x0018)()
	class FText                                   K2Node_Select_Default_2;                           // 0x02A8(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_681E[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x02C8(0x0018)()
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_SetItemData) == 0x000008, "Wrong alignment on WeaponCustomPerkSlotItem_C_SetItemData");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_SetItemData) == 0x0002E0, "Wrong size on WeaponCustomPerkSlotItem_C_SetItemData");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, Param_Index) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::Param_Index' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, LocalPerkMaster) == 0x000008, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::LocalPerkMaster' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000050, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000051, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, Temp_bool_Variable) == 0x000052, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, Temp_text_Variable) == 0x000058, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, Temp_bool_Variable_1) == 0x000070, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, Temp_bool_Variable_2) == 0x000071, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, Temp_bool_Variable_3) == 0x000072, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_GetMasterDataManager_IsValid) == 0x000073, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000078, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000080, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x000084, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_GetItemName_OutName) == 0x0000A0, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_GetItemName_ReturnValue) == 0x0000B0, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists) == 0x0000B1, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue) == 0x0000B8, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E0, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_FindAbilityMaster_bIsValid) == 0x0000F8, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_FindAbilityMaster_AbilityMaster) == 0x000100, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_GetAbilityTextDataCollection_ReturnValue) == 0x000148, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_GetAbilityTextDataCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy) == 0x000198, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy) == 0x0001B4, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001D0, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001E8, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0001E9, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_Greater_IntInt_ReturnValue) == 0x0001EA, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, K2Node_Select_Default) == 0x0001F0, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_BooleanAND_ReturnValue) == 0x0001F8, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_ConvertAbilityEffectValueText_ReturnValue) == 0x000200, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_ConvertAbilityEffectValueText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000210, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, K2Node_Select_Default_1) == 0x000228, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_ConvertAbilityEffectValueText_ReturnValue_1) == 0x000230, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_ConvertAbilityEffectValueText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000240, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_ConvertAbilityEffectValueText_ReturnValue_2) == 0x000258, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_ConvertAbilityEffectValueText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_ConvertAbilityEffectValueText_ReturnValue_3) == 0x000268, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_ConvertAbilityEffectValueText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000278, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000290, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, K2Node_Select_Default_2) == 0x0002A8, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, K2Node_Select_Default_3) == 0x0002C0, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetItemData, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0002C8, "Member 'WeaponCustomPerkSlotItem_C_SetItemData::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetEmpty
// 0x0028 (0x0028 - 0x0000)
struct WeaponCustomPerkSlotItem_C_SetEmpty final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_SetEmpty) == 0x000008, "Wrong alignment on WeaponCustomPerkSlotItem_C_SetEmpty");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_SetEmpty) == 0x000028, "Wrong size on WeaponCustomPerkSlotItem_C_SetEmpty");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetEmpty, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_SetEmpty::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetEmpty, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WeaponCustomPerkSlotItem_C_SetEmpty::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.UpdateSlotHeight
// 0x0010 (0x0010 - 0x0000)
struct WeaponCustomPerkSlotItem_C_UpdateSlotHeight final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_UpdateSlotHeight) == 0x000008, "Wrong alignment on WeaponCustomPerkSlotItem_C_UpdateSlotHeight");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_UpdateSlotHeight) == 0x000010, "Wrong size on WeaponCustomPerkSlotItem_C_UpdateSlotHeight");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_UpdateSlotHeight, Param_Index) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_UpdateSlotHeight::Param_Index' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_UpdateSlotHeight, Temp_int_Variable) == 0x000004, "Member 'WeaponCustomPerkSlotItem_C_UpdateSlotHeight::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_UpdateSlotHeight, K2Node_Select_Default) == 0x000008, "Member 'WeaponCustomPerkSlotItem_C_UpdateSlotHeight::K2Node_Select_Default' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.UpdateProtectBtn
// 0x0010 (0x0010 - 0x0000)
struct WeaponCustomPerkSlotItem_C_UpdateProtectBtn final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_681F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_UpdateProtectBtn) == 0x000008, "Wrong alignment on WeaponCustomPerkSlotItem_C_UpdateProtectBtn");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_UpdateProtectBtn) == 0x000010, "Wrong size on WeaponCustomPerkSlotItem_C_UpdateProtectBtn");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_UpdateProtectBtn, Temp_bool_Variable) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_UpdateProtectBtn::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_UpdateProtectBtn, K2Node_Select_Default) == 0x000008, "Member 'WeaponCustomPerkSlotItem_C_UpdateProtectBtn::K2Node_Select_Default' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetNewPerkVisible
// 0x0018 (0x0018 - 0x0000)
struct WeaponCustomPerkSlotItem_C_SetNewPerkVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6820[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_SetNewPerkVisible) == 0x000008, "Wrong alignment on WeaponCustomPerkSlotItem_C_SetNewPerkVisible");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_SetNewPerkVisible) == 0x000018, "Wrong size on WeaponCustomPerkSlotItem_C_SetNewPerkVisible");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetNewPerkVisible, bVisible) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_SetNewPerkVisible::bVisible' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetNewPerkVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'WeaponCustomPerkSlotItem_C_SetNewPerkVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetNewPerkVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'WeaponCustomPerkSlotItem_C_SetNewPerkVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetNewPerkVisible, Temp_bool_Variable) == 0x000003, "Member 'WeaponCustomPerkSlotItem_C_SetNewPerkVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetNewPerkVisible, K2Node_Select_Default) == 0x000004, "Member 'WeaponCustomPerkSlotItem_C_SetNewPerkVisible::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetNewPerkVisible, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'WeaponCustomPerkSlotItem_C_SetNewPerkVisible::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetNewPerkVisible, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'WeaponCustomPerkSlotItem_C_SetNewPerkVisible::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetChangeData
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomPerkSlotItem_C_SetChangeData final
{
public:
	bool                                          bChangeData;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_SetChangeData) == 0x000001, "Wrong alignment on WeaponCustomPerkSlotItem_C_SetChangeData");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_SetChangeData) == 0x000001, "Wrong size on WeaponCustomPerkSlotItem_C_SetChangeData");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_SetChangeData, bChangeData) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_SetChangeData::bChangeData' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.ActivateCraftResult
// 0x0010 (0x0010 - 0x0000)
struct WeaponCustomPerkSlotItem_C_ActivateCraftResult final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6821[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_ActivateCraftResult) == 0x000008, "Wrong alignment on WeaponCustomPerkSlotItem_C_ActivateCraftResult");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_ActivateCraftResult) == 0x000010, "Wrong size on WeaponCustomPerkSlotItem_C_ActivateCraftResult");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ActivateCraftResult, bActive) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_ActivateCraftResult::bActive' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ActivateCraftResult, Temp_bool_Variable) == 0x000001, "Member 'WeaponCustomPerkSlotItem_C_ActivateCraftResult::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_ActivateCraftResult, K2Node_Select_Default) == 0x000008, "Member 'WeaponCustomPerkSlotItem_C_ActivateCraftResult::K2Node_Select_Default' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.IsProtected
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomPerkSlotItem_C_IsProtected final
{
public:
	bool                                          Param_IsProtected;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_IsProtected) == 0x000001, "Wrong alignment on WeaponCustomPerkSlotItem_C_IsProtected");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_IsProtected) == 0x000001, "Wrong size on WeaponCustomPerkSlotItem_C_IsProtected");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_IsProtected, Param_IsProtected) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_IsProtected::Param_IsProtected' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.GetData
// 0x001C (0x001C - 0x0000)
struct WeaponCustomPerkSlotItem_C_GetData final
{
public:
	struct FSBCharacterWeaponPerkData             Data;                                              // 0x0000(0x001C)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_GetData) == 0x000004, "Wrong alignment on WeaponCustomPerkSlotItem_C_GetData");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_GetData) == 0x00001C, "Wrong size on WeaponCustomPerkSlotItem_C_GetData");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_GetData, Data) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_GetData::Data' has a wrong offset!");

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.IsEmpty
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomPerkSlotItem_C_IsEmpty final
{
public:
	bool                                          Param_bIsEmpty;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomPerkSlotItem_C_IsEmpty) == 0x000001, "Wrong alignment on WeaponCustomPerkSlotItem_C_IsEmpty");
static_assert(sizeof(WeaponCustomPerkSlotItem_C_IsEmpty) == 0x000001, "Wrong size on WeaponCustomPerkSlotItem_C_IsEmpty");
static_assert(offsetof(WeaponCustomPerkSlotItem_C_IsEmpty, Param_bIsEmpty) == 0x000000, "Member 'WeaponCustomPerkSlotItem_C_IsEmpty::Param_bIsEmpty' has a wrong offset!");

}

