#pragma once

 

// Package: CommonWeaponAbilityInfoSlotDetailed

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed
// 0x0008 (0x0008 - 0x0000)
struct CommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed) == 0x000004, "Wrong alignment on CommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed");
static_assert(sizeof(CommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed) == 0x000008, "Wrong size on CommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed, EntryPoint) == 0x000000, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonWeaponAbilityInfoSlotDetailed_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityInfoSlotDetailed_C_PreConstruct) == 0x000001, "Wrong alignment on CommonWeaponAbilityInfoSlotDetailed_C_PreConstruct");
static_assert(sizeof(CommonWeaponAbilityInfoSlotDetailed_C_PreConstruct) == 0x000001, "Wrong size on CommonWeaponAbilityInfoSlotDetailed_C_PreConstruct");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.CreateEfficacyInfoItemList
// 0x0038 (0x0038 - 0x0000)
struct CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList final
{
public:
	int32                                         LocalLoopId;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6849[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonEquipmentAbilityEfficacyInfoItem_C* LocalInfoParts;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_684A[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonEquipmentAbilityEfficacyInfoItem_C* CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_684B[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList) == 0x000008, "Wrong alignment on CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList");
static_assert(sizeof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList) == 0x000038, "Wrong size on CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList, LocalLoopId) == 0x000000, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList::LocalLoopId' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList, LocalInfoParts) == 0x000008, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList::LocalInfoParts' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList, Temp_int_Variable) == 0x000010, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList, Temp_int_Variable_1) == 0x000014, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000019, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList, CallFunc_Create_ReturnValue) == 0x000020, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000030, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.SetupAbilityInfo
// 0x04C8 (0x04C8 - 0x0000)
struct CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo final
{
public:
	struct FSBCharacterWeaponPerkData             InWeaponPerkData;                                  // 0x0000(0x001C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_684C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       LocalEmptyAbilityConfig;                           // 0x0020(0x0038)(Edit, BlueprintVisible)
	TArray<struct FSBAbilityConfig>               LocalAbilityConfigs;                               // 0x0058(0x0010)(Edit, BlueprintVisible)
	class UCommonEquipmentAbilityEfficacyInfoItem_C* LocalInfoItemLast;                                 // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonEquipmentAbilityEfficacyInfoItem_C* LocalInfoItem;                                     // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                LocalChild;                                        // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalAbilityCnt;                                   // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_684D[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         LocalAbilityEffectNames;                           // 0x0088(0x0010)(Edit, BlueprintVisible)
	struct FSBAbilityTextData                     LocalAbilityTextData;                              // 0x0098(0x0050)(Edit, BlueprintVisible)
	struct FSBMasterFusionItem                    LocalFusionItemMaster;                             // 0x00E8(0x0018)(Edit, BlueprintVisible, NoDestructor)
	TArray<int32>                                 LocalAbilityValues;                                // 0x0100(0x0010)(Edit, BlueprintVisible)
	int32                                         LocalItemId;                                       // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterWeaponPerkData             LocalWeaponPerkData;                               // 0x0114(0x001C)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_684E[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0140(0x0010)(ReferenceParm)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_684F[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0158(0x00D0)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBAbilityConfig                       CallFunc_Array_Get_Item;                           // 0x0238(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6850[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       K2Node_Select_Default;                             // 0x0278(0x0038)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6851[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists; // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6852[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSyntheAbilityPickUp                 CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue; // 0x02C8(0x0028)()
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6853[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x02F8(0x0048)()
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid; // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6854[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig; // 0x0348(0x0038)()
	bool                                          CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1; // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6855[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityConfig                       CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1; // 0x0388(0x0038)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6856[0x3];                                     // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_2;                         // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6857[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonEquipmentAbilityEfficacyInfoItem_C* K2Node_DynamicCast_AsCommon_Equipment_Ability_Efficacy_Info_Item; // 0x03D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6858[0x2];                                     // 0x03E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x03E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6859[0x2];                                     // 0x03EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x03EC(0x0018)(NoDestructor)
	bool                                          CallFunc_GetFusionItemTextCollection_bIsValid;     // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_685A[0x3];                                     // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityTextData                     CallFunc_GetFusionItemTextCollection_ReturnValue;  // 0x0408(0x0050)(ConstParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_685B[0x4];                                     // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array_1;                          // 0x0460(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item_3;                         // 0x0470(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_685C[0x4];                                     // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0488(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x04A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x04A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_685D[0x2];                                     // 0x04A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x04A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x04A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x04B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_685E[0x2];                                     // 0x04B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x04B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_685F[0x3];                                     // 0x04B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x04BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo) == 0x000008, "Wrong alignment on CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo");
static_assert(sizeof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo) == 0x0004C8, "Wrong size on CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, InWeaponPerkData) == 0x000000, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::InWeaponPerkData' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalEmptyAbilityConfig) == 0x000020, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalEmptyAbilityConfig' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalAbilityConfigs) == 0x000058, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalAbilityConfigs' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalInfoItemLast) == 0x000068, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalInfoItemLast' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalInfoItem) == 0x000070, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalInfoItem' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalChild) == 0x000078, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalChild' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalAbilityCnt) == 0x000080, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalAbilityCnt' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalAbilityEffectNames) == 0x000088, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalAbilityEffectNames' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalAbilityTextData) == 0x000098, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalAbilityTextData' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalFusionItemMaster) == 0x0000E8, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalFusionItemMaster' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalAbilityValues) == 0x000100, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalAbilityValues' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalItemId) == 0x000110, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalItemId' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, LocalWeaponPerkData) == 0x000114, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::LocalWeaponPerkData' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, Temp_int_Variable) == 0x000130, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000134, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, Temp_bool_Variable) == 0x000138, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, K2Node_MakeArray_Array) == 0x000140, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_FindItemMaster_bIsValid) == 0x000150, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_FindItemMaster_ItemMaster) == 0x000158, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_GetItemText_ReturnValue) == 0x000228, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Array_Get_Item) == 0x000238, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue) == 0x000270, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000274, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, K2Node_Select_Default) == 0x000278, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_GetMasterDataManager_IsValid) == 0x0002B0, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002B8, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists) == 0x0002C0, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue) == 0x0002C8, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_FindAbilityMaster_bIsValid) == 0x0002F0, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_FindAbilityMaster_AbilityMaster) == 0x0002F8, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid) == 0x000340, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig) == 0x000348, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1) == 0x000380, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1) == 0x000388, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_GetAbilityConfigByAbilityDBRowName_OutAbilityConfig_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue) == 0x0003C0, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Array_Add_ReturnValue_1) == 0x0003C4, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue) == 0x0003C8, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Array_Get_Item_1) == 0x0003CC, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Array_Get_Item_2) == 0x0003D0, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, K2Node_DynamicCast_AsCommon_Equipment_Ability_Efficacy_Info_Item) == 0x0003D8, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::K2Node_DynamicCast_AsCommon_Equipment_Ability_Efficacy_Info_Item' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, K2Node_DynamicCast_bSuccess) == 0x0003E0, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x0003E1, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue_1) == 0x0003E4, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x0003E8, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_FindFusionItemMaster_IsValid) == 0x0003E9, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x0003EC, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_GetFusionItemTextCollection_bIsValid) == 0x000404, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_GetFusionItemTextCollection_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_GetFusionItemTextCollection_ReturnValue) == 0x000408, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_GetFusionItemTextCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x000458, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, K2Node_MakeArray_Array_1) == 0x000460, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Array_Get_Item_3) == 0x000470, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Array_Length_ReturnValue_2) == 0x000480, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000488, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Less_IntInt_ReturnValue_2) == 0x0004A0, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_BooleanAND_ReturnValue) == 0x0004A1, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, Temp_int_Variable_1) == 0x0004A4, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_GetChildAt_ReturnValue) == 0x0004A8, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_1) == 0x0004B0, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_2) == 0x0004B1, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_GetChildrenCount_ReturnValue) == 0x0004B4, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_IsValid_ReturnValue_3) == 0x0004B8, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x0004BC, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0004C0, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.GetAbilityPartsValueText
// 0x00E8 (0x00E8 - 0x0000)
struct CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6860[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OutText;                                           // 0x0008(0x0018)(Parm, OutParm)
	int32                                         LocalValue;                                        // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6861[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6862[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6863[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6864[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x00D0(0x0018)()
};
static_assert(alignof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText) == 0x000008, "Wrong alignment on CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText");
static_assert(sizeof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText) == 0x0000E8, "Wrong size on CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, InValue) == 0x000000, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::InValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, OutText) == 0x000008, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::OutText' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, LocalValue) == 0x000020, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::LocalValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, Temp_bool_Variable) == 0x000024, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, Temp_text_Variable) == 0x000028, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, Temp_bool_Variable_1) == 0x000040, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, Temp_string_Variable) == 0x000048, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, Temp_string_Variable_1) == 0x000058, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, CallFunc_Greater_IntInt_ReturnValue) == 0x000080, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, K2Node_Select_Default) == 0x000088, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A8, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText, K2Node_Select_Default_1) == 0x0000D0, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText::K2Node_Select_Default_1' has a wrong offset!");

// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.SetIsSlotEmpty
// 0x0008 (0x0008 - 0x0000)
struct CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty final
{
public:
	bool                                          InIsEmpty;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEmpty;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty) == 0x000001, "Wrong alignment on CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty");
static_assert(sizeof(CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty) == 0x000008, "Wrong size on CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty, InIsEmpty) == 0x000000, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty, LocalIsEmpty) == 0x000001, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty::LocalIsEmpty' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty, Temp_byte_Variable) == 0x000002, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty, Temp_byte_Variable_1) == 0x000003, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty, Temp_bool_Variable) == 0x000004, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty, K2Node_Select_Default) == 0x000006, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty, CallFunc_IsValid_ReturnValue_1) == 0x000007, "Member 'CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

