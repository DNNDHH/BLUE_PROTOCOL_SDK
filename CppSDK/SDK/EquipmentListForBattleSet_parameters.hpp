#pragma once

 

// Package: EquipmentListForBattleSet

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "Engine_structs.hpp"
#include "SortTypeCategory_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnListItemSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EquipmentListForBattleSet_C_OnListItemSelected__DelegateSignature final
{
public:
	class UItemIconBtn_C*                         InSelectedListItem;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_OnListItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_OnListItemSelected__DelegateSignature");
static_assert(sizeof(EquipmentListForBattleSet_C_OnListItemSelected__DelegateSignature) == 0x000008, "Wrong size on EquipmentListForBattleSet_C_OnListItemSelected__DelegateSignature");
static_assert(offsetof(EquipmentListForBattleSet_C_OnListItemSelected__DelegateSignature, InSelectedListItem) == 0x000000, "Member 'EquipmentListForBattleSet_C_OnListItemSelected__DelegateSignature::InSelectedListItem' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnEquipChangeBtnPressed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct EquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8361[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InEquipmentUniqueId;                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature");
static_assert(sizeof(EquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature) == 0x000018, "Wrong size on EquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature");
static_assert(offsetof(EquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature, InInfoType) == 0x000000, "Member 'EquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature::InInfoType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature, InEquipmentUniqueId) == 0x000008, "Member 'EquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature::InEquipmentUniqueId' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnSortTypeSelected__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct EquipmentListForBattleSet_C_OnSortTypeSelected__DelegateSignature final
{
public:
	ESBItemSortType                               InSelectedSortType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_OnSortTypeSelected__DelegateSignature) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_OnSortTypeSelected__DelegateSignature");
static_assert(sizeof(EquipmentListForBattleSet_C_OnSortTypeSelected__DelegateSignature) == 0x000001, "Wrong size on EquipmentListForBattleSet_C_OnSortTypeSelected__DelegateSignature");
static_assert(offsetof(EquipmentListForBattleSet_C_OnSortTypeSelected__DelegateSignature, InSelectedSortType) == 0x000000, "Member 'EquipmentListForBattleSet_C_OnSortTypeSelected__DelegateSignature::InSelectedSortType' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnFilterBtnBagOrStoragePressed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct EquipmentListForBattleSet_C_OnFilterBtnBagOrStoragePressed__DelegateSignature final
{
public:
	bool                                          InIsFilterBtnStoragePressed;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_OnFilterBtnBagOrStoragePressed__DelegateSignature) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_OnFilterBtnBagOrStoragePressed__DelegateSignature");
static_assert(sizeof(EquipmentListForBattleSet_C_OnFilterBtnBagOrStoragePressed__DelegateSignature) == 0x000001, "Wrong size on EquipmentListForBattleSet_C_OnFilterBtnBagOrStoragePressed__DelegateSignature");
static_assert(offsetof(EquipmentListForBattleSet_C_OnFilterBtnBagOrStoragePressed__DelegateSignature, InIsFilterBtnStoragePressed) == 0x000000, "Member 'EquipmentListForBattleSet_C_OnFilterBtnBagOrStoragePressed__DelegateSignature::InIsFilterBtnStoragePressed' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ExecuteUbergraph_EquipmentListForBattleSet
// 0x0080 (0x0080 - 0x0000)
struct EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_ComponentBoundEvent_SortType;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8362[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_SelectItem;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSelectItemUniqueID_UniqueId;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8363[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8364[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8365[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8366[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x0068(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckIfSelectedEquipmentIsEquipped_OutIsEquipped; // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimInOutPlaying_OutIsPlaying;          // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet");
static_assert(sizeof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet) == 0x000080, "Wrong size on EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, EntryPoint) == 0x000000, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, K2Node_ComponentBoundEvent_SortType) == 0x000004, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::K2Node_ComponentBoundEvent_SortType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, K2Node_CustomEvent_SelectItem) == 0x000008, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::K2Node_CustomEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_GetSelectItemUniqueID_UniqueId) == 0x000010, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_GetSelectItemUniqueID_UniqueId' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_GetChildrenCount_ReturnValue) == 0x000024, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_GetChildrenCount_ReturnValue_1) == 0x00002C, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, Temp_int_Variable) == 0x000044, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_GetChildAt_ReturnValue) == 0x000048, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_IsValid_ReturnValue_2) == 0x000050, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000058, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000061, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, K2Node_ComponentBoundEvent_Filters) == 0x000068, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_IsValid_ReturnValue_3) == 0x000078, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_CheckIfSelectedEquipmentIsEquipped_OutIsEquipped) == 0x000079, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_CheckIfSelectedEquipmentIsEquipped_OutIsEquipped' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_Not_PreBool_ReturnValue) == 0x00007A, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_IsAnimInOutPlaying_OutIsPlaying) == 0x00007B, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_IsAnimInOutPlaying_OutIsPlaying' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_Not_PreBool_ReturnValue_1) == 0x00007C, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet, CallFunc_Not_PreBool_ReturnValue_2) == 0x00007D, "Member 'EquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature");
static_assert(sizeof(EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature) == 0x000010, "Wrong size on EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature");
static_assert(offsetof(EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature, Filters) == 0x000000, "Member 'EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature::Filters' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnItemIconBtnSelected
// 0x0008 (0x0008 - 0x0000)
struct EquipmentListForBattleSet_C_OnItemIconBtnSelected final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_OnItemIconBtnSelected) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_OnItemIconBtnSelected");
static_assert(sizeof(EquipmentListForBattleSet_C_OnItemIconBtnSelected) == 0x000008, "Wrong size on EquipmentListForBattleSet_C_OnItemIconBtnSelected");
static_assert(offsetof(EquipmentListForBattleSet_C_OnItemIconBtnSelected, SelectItem) == 0x000000, "Member 'EquipmentListForBattleSet_C_OnItemIconBtnSelected::SelectItem' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature final
{
public:
	ESBItemSortType                               Param_SortType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature");
static_assert(sizeof(EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong size on EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature");
static_assert(offsetof(EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature, Param_SortType) == 0x000000, "Member 'EquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature::Param_SortType' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Init
// 0x0009 (0x0009 - 0x0000)
struct EquipmentListForBattleSet_C_Init final
{
public:
	E_BattleSetInfoType                           InBattleSetInfoType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             InEquipType;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsStorageMode;                                   // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsStorageMode;                                // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             LocalEquipType;                                    // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_Init) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_Init");
static_assert(sizeof(EquipmentListForBattleSet_C_Init) == 0x000009, "Wrong size on EquipmentListForBattleSet_C_Init");
static_assert(offsetof(EquipmentListForBattleSet_C_Init, InBattleSetInfoType) == 0x000000, "Member 'EquipmentListForBattleSet_C_Init::InBattleSetInfoType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_Init, InEquipType) == 0x000001, "Member 'EquipmentListForBattleSet_C_Init::InEquipType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_Init, InIsStorageMode) == 0x000002, "Member 'EquipmentListForBattleSet_C_Init::InIsStorageMode' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_Init, LocalIsStorageMode) == 0x000003, "Member 'EquipmentListForBattleSet_C_Init::LocalIsStorageMode' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_Init, LocalEquipType) == 0x000004, "Member 'EquipmentListForBattleSet_C_Init::LocalEquipType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_Init, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'EquipmentListForBattleSet_C_Init::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_Init, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000006, "Member 'EquipmentListForBattleSet_C_Init::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_Init, Temp_bool_Variable) == 0x000007, "Member 'EquipmentListForBattleSet_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_Init, K2Node_Select_Default) == 0x000008, "Member 'EquipmentListForBattleSet_C_Init::K2Node_Select_Default' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.UpdateOwnItemListContainer
// 0x0030 (0x0030 - 0x0000)
struct EquipmentListForBattleSet_C_UpdateOwnItemListContainer final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8367[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                K2Node_Select_Default_1;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_UpdateOwnItemListContainer) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_UpdateOwnItemListContainer");
static_assert(sizeof(EquipmentListForBattleSet_C_UpdateOwnItemListContainer) == 0x000030, "Wrong size on EquipmentListForBattleSet_C_UpdateOwnItemListContainer");
static_assert(offsetof(EquipmentListForBattleSet_C_UpdateOwnItemListContainer, Temp_bool_Variable) == 0x000000, "Member 'EquipmentListForBattleSet_C_UpdateOwnItemListContainer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_UpdateOwnItemListContainer, Temp_bool_Variable_1) == 0x000001, "Member 'EquipmentListForBattleSet_C_UpdateOwnItemListContainer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_UpdateOwnItemListContainer, CallFunc_GetCharacterStorage_ReturnValue) == 0x000008, "Member 'EquipmentListForBattleSet_C_UpdateOwnItemListContainer::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_UpdateOwnItemListContainer, CallFunc_GetEquipmentBag_ReturnValue) == 0x000010, "Member 'EquipmentListForBattleSet_C_UpdateOwnItemListContainer::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_UpdateOwnItemListContainer, K2Node_Select_Default) == 0x000018, "Member 'EquipmentListForBattleSet_C_UpdateOwnItemListContainer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_UpdateOwnItemListContainer, K2Node_Select_Default_1) == 0x000020, "Member 'EquipmentListForBattleSet_C_UpdateOwnItemListContainer::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_UpdateOwnItemListContainer, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'EquipmentListForBattleSet_C_UpdateOwnItemListContainer::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.CreateList
// 0x00E0 (0x00E0 - 0x0000)
struct EquipmentListForBattleSet_C_CreateList final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8368[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalColumn;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalRow;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalColumnNumMax;                                 // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         LocalItemIconBtn;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLoopId;                                       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalMarginLeft;                                   // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalMarginTop;                                    // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalListNumMax;                                   // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalItemNum2;                                     // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalItemNum1;                                     // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     LocalItemType;                                     // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           LocalInfoType;                                     // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8369[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_836A[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_836B[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_836C[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemTypeNum_ReturnValue;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_836D[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_836E[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemTypeNum_ReturnValue_1;             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_836F[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0097(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8370[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x00AC(0x0010)(ZeroConstructor, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00BC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8371[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_CreateList) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_CreateList");
static_assert(sizeof(EquipmentListForBattleSet_C_CreateList) == 0x0000E0, "Wrong size on EquipmentListForBattleSet_C_CreateList");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, InInfoType) == 0x000000, "Member 'EquipmentListForBattleSet_C_CreateList::InInfoType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalColumn) == 0x000004, "Member 'EquipmentListForBattleSet_C_CreateList::LocalColumn' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalRow) == 0x000008, "Member 'EquipmentListForBattleSet_C_CreateList::LocalRow' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalColumnNumMax) == 0x00000C, "Member 'EquipmentListForBattleSet_C_CreateList::LocalColumnNumMax' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalItemIconBtn) == 0x000010, "Member 'EquipmentListForBattleSet_C_CreateList::LocalItemIconBtn' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalLoopId) == 0x000018, "Member 'EquipmentListForBattleSet_C_CreateList::LocalLoopId' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalMarginLeft) == 0x00001C, "Member 'EquipmentListForBattleSet_C_CreateList::LocalMarginLeft' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalMarginTop) == 0x000020, "Member 'EquipmentListForBattleSet_C_CreateList::LocalMarginTop' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalListNumMax) == 0x000024, "Member 'EquipmentListForBattleSet_C_CreateList::LocalListNumMax' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalItemNum2) == 0x000028, "Member 'EquipmentListForBattleSet_C_CreateList::LocalItemNum2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalItemNum1) == 0x00002C, "Member 'EquipmentListForBattleSet_C_CreateList::LocalItemNum1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalItemType) == 0x000030, "Member 'EquipmentListForBattleSet_C_CreateList::LocalItemType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, LocalInfoType) == 0x000031, "Member 'EquipmentListForBattleSet_C_CreateList::LocalInfoType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, Temp_int_Variable) == 0x000034, "Member 'EquipmentListForBattleSet_C_CreateList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, Temp_int_Variable_1) == 0x000038, "Member 'EquipmentListForBattleSet_C_CreateList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, K2Node_SwitchEnum_CmpSuccess) == 0x000040, "Member 'EquipmentListForBattleSet_C_CreateList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_Create_ReturnValue) == 0x000048, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, Temp_int_Variable_2) == 0x000050, "Member 'EquipmentListForBattleSet_C_CreateList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_GetChildrenCount_ReturnValue) == 0x000054, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_GetCharacterStorage_ReturnValue) == 0x000060, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_Max_ReturnValue) == 0x000068, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_IsValid_ReturnValue) == 0x00006C, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_GetItemTypeNum_ReturnValue) == 0x000070, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_GetItemTypeNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_GetEquipmentBag_ReturnValue) == 0x000078, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_GetItemTypeNum_ReturnValue_1) == 0x000084, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_GetItemTypeNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, Temp_int_Variable_3) == 0x000088, "Member 'EquipmentListForBattleSet_C_CreateList::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00008C, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, Temp_bool_Variable) == 0x000094, "Member 'EquipmentListForBattleSet_C_CreateList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_IsValid_ReturnValue_2) == 0x000095, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, Temp_bool_Variable_1) == 0x000096, "Member 'EquipmentListForBattleSet_C_CreateList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000097, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_Percent_IntInt_ReturnValue) == 0x000098, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_Divide_IntInt_ReturnValue) == 0x00009C, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, K2Node_Select_Default) == 0x0000A0, "Member 'EquipmentListForBattleSet_C_CreateList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, K2Node_Select_Default_1) == 0x0000A4, "Member 'EquipmentListForBattleSet_C_CreateList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, K2Node_CreateDelegate_OutputDelegate) == 0x0000AC, "Member 'EquipmentListForBattleSet_C_CreateList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, K2Node_MakeStruct_Margin) == 0x0000BC, "Member 'EquipmentListForBattleSet_C_CreateList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_AddChildToGrid_ReturnValue) == 0x0000D0, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CreateList, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000D8, "Member 'EquipmentListForBattleSet_C_CreateList::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.InitListSetting
// 0x01D0 (0x01D0 - 0x0000)
struct EquipmentListForBattleSet_C_InitListSetting final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIgnoreSortAndFilterInit;                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESortTypeCategory                             LocalSortTypeCategory;                             // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         LocalSortSaveType;                                 // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalEquipmentTextId;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIgnoreSortAndFilterInit;                      // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BattleSetInfoType                           LocalInfoType;                                     // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_2;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_3;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           Temp_byte_Variable_4;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_5;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_6;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_7;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_8;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_9;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_10;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_11;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Temp_byte_Variable_12;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           Temp_byte_Variable_13;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_14;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_15;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_16;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_17;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_18;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_19;                             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_20;                             // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_21;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_22;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFilter_Type                                  K2Node_Select_Default;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         K2Node_Select_Default_1;                           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               CallFunc_GetSortType_OutSortType;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Temp_byte_Variable_23;                             // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               CallFunc_GetSortType_OutSortType_1;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8372[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	ESortTypeCategory                             Temp_byte_Variable_24;                             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8373[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0108(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0120(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0160(0x0010)(ReferenceParm)
	E_BattleSetInfoType                           Temp_byte_Variable_25;                             // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8374[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0188(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01A0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESortTypeCategory                             Temp_byte_Variable_26;                             // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESortTypeCategory                             K2Node_Select_Default_3;                           // 0x01BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8375[0x2];                                     // 0x01BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   CallFunc_GetFilters_Filter1;                       // 0x01C0(0x0010)(ReferenceParm)
};
static_assert(alignof(EquipmentListForBattleSet_C_InitListSetting) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_InitListSetting");
static_assert(sizeof(EquipmentListForBattleSet_C_InitListSetting) == 0x0001D0, "Wrong size on EquipmentListForBattleSet_C_InitListSetting");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, InInfoType) == 0x000000, "Member 'EquipmentListForBattleSet_C_InitListSetting::InInfoType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, InIgnoreSortAndFilterInit) == 0x000001, "Member 'EquipmentListForBattleSet_C_InitListSetting::InIgnoreSortAndFilterInit' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, LocalSortTypeCategory) == 0x000002, "Member 'EquipmentListForBattleSet_C_InitListSetting::LocalSortTypeCategory' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, LocalSortSaveType) == 0x000003, "Member 'EquipmentListForBattleSet_C_InitListSetting::LocalSortSaveType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, LocalEquipmentTextId) == 0x000004, "Member 'EquipmentListForBattleSet_C_InitListSetting::LocalEquipmentTextId' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, LocalIgnoreSortAndFilterInit) == 0x000008, "Member 'EquipmentListForBattleSet_C_InitListSetting::LocalIgnoreSortAndFilterInit' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, LocalInfoType) == 0x000009, "Member 'EquipmentListForBattleSet_C_InitListSetting::LocalInfoType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable) == 0x00000A, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_1) == 0x00000B, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_2) == 0x00000C, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_3) == 0x00000D, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_4) == 0x00000E, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_5) == 0x00000F, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_6) == 0x000010, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_7) == 0x000011, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_8) == 0x000012, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_9) == 0x000013, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_10) == 0x000014, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_11) == 0x000015, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_12) == 0x000016, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_bool_Variable) == 0x000017, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_int_Variable) == 0x000018, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_int_Variable_1) == 0x00001C, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_13) == 0x000020, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_14) == 0x000021, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_15) == 0x000022, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_16) == 0x000023, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_17) == 0x000024, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_18) == 0x000025, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_19) == 0x000026, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_20) == 0x000027, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_21) == 0x000028, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_22) == 0x000029, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, K2Node_SwitchEnum_CmpSuccess) == 0x00002A, "Member 'EquipmentListForBattleSet_C_InitListSetting::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, K2Node_Select_Default) == 0x00002B, "Member 'EquipmentListForBattleSet_C_InitListSetting::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, K2Node_Select_Default_1) == 0x00002C, "Member 'EquipmentListForBattleSet_C_InitListSetting::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00002D, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_GetSortType_OutSortType) == 0x00002E, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_GetSortType_OutSortType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_23) == 0x00002F, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_GetSortType_OutSortType_1) == 0x000030, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_GetSortType_OutSortType_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_24) == 0x000060, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_24' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'EquipmentListForBattleSet_C_InitListSetting::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, K2Node_MakeArray_Array) == 0x0000A8, "Member 'EquipmentListForBattleSet_C_InitListSetting::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000B8, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C8, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000E0, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000108, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, K2Node_MakeStruct_FormatArgumentData_1) == 0x000120, "Member 'EquipmentListForBattleSet_C_InitListSetting::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, K2Node_MakeArray_Array_1) == 0x000160, "Member 'EquipmentListForBattleSet_C_InitListSetting::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_25) == 0x000170, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_25' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, K2Node_Select_Default_2) == 0x000174, "Member 'EquipmentListForBattleSet_C_InitListSetting::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000178, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000188, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_Format_ReturnValue_1) == 0x0001A0, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_IsValid_ReturnValue) == 0x0001B8, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, Temp_byte_Variable_26) == 0x0001B9, "Member 'EquipmentListForBattleSet_C_InitListSetting::Temp_byte_Variable_26' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_IsValid_ReturnValue_1) == 0x0001BA, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, K2Node_Select_Default_3) == 0x0001BB, "Member 'EquipmentListForBattleSet_C_InitListSetting::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_IsValid_ReturnValue_2) == 0x0001BC, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_IsValid_ReturnValue_3) == 0x0001BD, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_InitListSetting, CallFunc_GetFilters_Filter1) == 0x0001C0, "Member 'EquipmentListForBattleSet_C_InitListSetting::CallFunc_GetFilters_Filter1' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SortList
// 0x0368 (0x0368 - 0x0000)
struct EquipmentListForBattleSet_C_SortList final
{
public:
	bool                                          LocalIsImagineTypeMatch;                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBImagineCategoryType                        LocalImagineType;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8376[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         LocalItemIconBtn;                                  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                LocalGridChild;                                    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalItemId;                                       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8377[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalItemUniqueId;                                 // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0030(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         LocalSortedNum;                                    // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalLoopCnt;                                      // 0x0094(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalListItemCnt;                                  // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable;                                // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8378[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable_1;                              // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        Temp_byte_Variable_2;                              // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_3;                              // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8379[0x1];                                     // 0x00AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_4;                              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_5;                              // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_6;                              // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable_7;                              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_8;                              // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           Temp_byte_Variable_9;                              // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_837A[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x00C0(0x00B0)()
	bool                                          CallFunc_ExtractInnerImagineEquipPositionFlagByEquipType_OutEquipPositionMatch; // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0173(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x0176(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0177(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     K2Node_Select_Default_2;                           // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_837B[0x2];                                     // 0x017A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue;             // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_837C[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_837D[0x2];                                     // 0x0196(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetSortedItemAt_ReturnValue;           // 0x0198(0x0118)(ConstParm)
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x02B0(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_837E[0x3];                                     // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x034C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_837F[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0358(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0361(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0362(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_3;                           // 0x0363(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0365(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_SortList) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_SortList");
static_assert(sizeof(EquipmentListForBattleSet_C_SortList) == 0x000368, "Wrong size on EquipmentListForBattleSet_C_SortList");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, LocalIsImagineTypeMatch) == 0x000000, "Member 'EquipmentListForBattleSet_C_SortList::LocalIsImagineTypeMatch' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, LocalImagineType) == 0x000001, "Member 'EquipmentListForBattleSet_C_SortList::LocalImagineType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, LocalItemIconBtn) == 0x000008, "Member 'EquipmentListForBattleSet_C_SortList::LocalItemIconBtn' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, LocalGridChild) == 0x000010, "Member 'EquipmentListForBattleSet_C_SortList::LocalGridChild' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, LocalItemId) == 0x000018, "Member 'EquipmentListForBattleSet_C_SortList::LocalItemId' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, LocalItemUniqueId) == 0x000020, "Member 'EquipmentListForBattleSet_C_SortList::LocalItemUniqueId' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, LocalInventoryItemData) == 0x000030, "Member 'EquipmentListForBattleSet_C_SortList::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, LocalSortedNum) == 0x000090, "Member 'EquipmentListForBattleSet_C_SortList::LocalSortedNum' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, LocalLoopCnt) == 0x000094, "Member 'EquipmentListForBattleSet_C_SortList::LocalLoopCnt' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, LocalListItemCnt) == 0x000098, "Member 'EquipmentListForBattleSet_C_SortList::LocalListItemCnt' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_byte_Variable) == 0x00009C, "Member 'EquipmentListForBattleSet_C_SortList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x0000A0, "Member 'EquipmentListForBattleSet_C_SortList::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'EquipmentListForBattleSet_C_SortList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x0000A9, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_Greater_IntInt_ReturnValue) == 0x0000AA, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_Not_PreBool_ReturnValue) == 0x0000AB, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_byte_Variable_1) == 0x0000AC, "Member 'EquipmentListForBattleSet_C_SortList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_byte_Variable_2) == 0x0000AD, "Member 'EquipmentListForBattleSet_C_SortList::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_byte_Variable_3) == 0x0000AE, "Member 'EquipmentListForBattleSet_C_SortList::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_int_Variable) == 0x0000B0, "Member 'EquipmentListForBattleSet_C_SortList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_byte_Variable_4) == 0x0000B4, "Member 'EquipmentListForBattleSet_C_SortList::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_byte_Variable_5) == 0x0000B5, "Member 'EquipmentListForBattleSet_C_SortList::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_byte_Variable_6) == 0x0000B6, "Member 'EquipmentListForBattleSet_C_SortList::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000B7, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_byte_Variable_7) == 0x0000B8, "Member 'EquipmentListForBattleSet_C_SortList::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_byte_Variable_8) == 0x0000B9, "Member 'EquipmentListForBattleSet_C_SortList::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_byte_Variable_9) == 0x0000BA, "Member 'EquipmentListForBattleSet_C_SortList::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_FindImagineMaster_bIsValid) == 0x0000BB, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_FindImagineMaster_ImagineMaster) == 0x0000C0, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_ExtractInnerImagineEquipPositionFlagByEquipType_OutEquipPositionMatch) == 0x000170, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_ExtractInnerImagineEquipPositionFlagByEquipType_OutEquipPositionMatch' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000171, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, K2Node_SwitchEnum_CmpSuccess) == 0x000172, "Member 'EquipmentListForBattleSet_C_SortList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_BooleanAND_ReturnValue) == 0x000173, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_bool_Variable) == 0x000174, "Member 'EquipmentListForBattleSet_C_SortList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, K2Node_Select_Default) == 0x000175, "Member 'EquipmentListForBattleSet_C_SortList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, K2Node_Select_Default_1) == 0x000176, "Member 'EquipmentListForBattleSet_C_SortList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_IsValid_ReturnValue) == 0x000177, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, K2Node_Select_Default_2) == 0x000178, "Member 'EquipmentListForBattleSet_C_SortList::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000179, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_GetSotedIndexNum_ReturnValue) == 0x00017C, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_GetSotedIndexNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000180, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_int_Variable_1) == 0x000184, "Member 'EquipmentListForBattleSet_C_SortList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_int_Variable_2) == 0x000188, "Member 'EquipmentListForBattleSet_C_SortList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00018C, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_Add_IntInt_ReturnValue) == 0x000190, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_IsValid_ReturnValue_1) == 0x000194, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_BooleanAND_ReturnValue_1) == 0x000195, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_BP_GetSortedItemAt_ReturnValue) == 0x000198, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_BP_GetSortedItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_CreateInventoryData_InventoryData) == 0x0002B0, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_CreateInventoryData_IsSuccess) == 0x000348, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_Add_IntInt_ReturnValue_1) == 0x00034C, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_GetChildrenCount_ReturnValue) == 0x000350, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_GetChildAt_ReturnValue) == 0x000358, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_Less_IntInt_ReturnValue) == 0x000360, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_IsValid_ReturnValue_2) == 0x000361, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, Temp_bool_Variable_1) == 0x000362, "Member 'EquipmentListForBattleSet_C_SortList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, K2Node_Select_Default_3) == 0x000363, "Member 'EquipmentListForBattleSet_C_SortList::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_BooleanAND_ReturnValue_2) == 0x000364, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SortList, CallFunc_BooleanAND_ReturnValue_3) == 0x000365, "Member 'EquipmentListForBattleSet_C_SortList::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.HideListItemAll
// 0x0020 (0x0020 - 0x0000)
struct EquipmentListForBattleSet_C_HideListItemAll final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8380[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_HideListItemAll) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_HideListItemAll");
static_assert(sizeof(EquipmentListForBattleSet_C_HideListItemAll) == 0x000020, "Wrong size on EquipmentListForBattleSet_C_HideListItemAll");
static_assert(offsetof(EquipmentListForBattleSet_C_HideListItemAll, Temp_int_Variable) == 0x000000, "Member 'EquipmentListForBattleSet_C_HideListItemAll::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_HideListItemAll, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'EquipmentListForBattleSet_C_HideListItemAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_HideListItemAll, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'EquipmentListForBattleSet_C_HideListItemAll::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_HideListItemAll, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'EquipmentListForBattleSet_C_HideListItemAll::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_HideListItemAll, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'EquipmentListForBattleSet_C_HideListItemAll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_HideListItemAll, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'EquipmentListForBattleSet_C_HideListItemAll::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_HideListItemAll, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'EquipmentListForBattleSet_C_HideListItemAll::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_HideListItemAll, CallFunc_IsValid_ReturnValue_1) == 0x00001D, "Member 'EquipmentListForBattleSet_C_HideListItemAll::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ResetSelectedIconAll
// 0x0030 (0x0030 - 0x0000)
struct EquipmentListForBattleSet_C_ResetSelectedIconAll final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8381[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8382[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_ResetSelectedIconAll) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_ResetSelectedIconAll");
static_assert(sizeof(EquipmentListForBattleSet_C_ResetSelectedIconAll) == 0x000030, "Wrong size on EquipmentListForBattleSet_C_ResetSelectedIconAll");
static_assert(offsetof(EquipmentListForBattleSet_C_ResetSelectedIconAll, Temp_int_Variable) == 0x000000, "Member 'EquipmentListForBattleSet_C_ResetSelectedIconAll::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ResetSelectedIconAll, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'EquipmentListForBattleSet_C_ResetSelectedIconAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ResetSelectedIconAll, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'EquipmentListForBattleSet_C_ResetSelectedIconAll::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ResetSelectedIconAll, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'EquipmentListForBattleSet_C_ResetSelectedIconAll::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ResetSelectedIconAll, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'EquipmentListForBattleSet_C_ResetSelectedIconAll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ResetSelectedIconAll, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'EquipmentListForBattleSet_C_ResetSelectedIconAll::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ResetSelectedIconAll, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'EquipmentListForBattleSet_C_ResetSelectedIconAll::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ResetSelectedIconAll, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000020, "Member 'EquipmentListForBattleSet_C_ResetSelectedIconAll::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ResetSelectedIconAll, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'EquipmentListForBattleSet_C_ResetSelectedIconAll::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ResetSelectedIconAll, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'EquipmentListForBattleSet_C_ResetSelectedIconAll::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetIsEquipChangeBtnEnabled
// 0x0002 (0x0002 - 0x0000)
struct EquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled");
static_assert(sizeof(EquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled) == 0x000002, "Wrong size on EquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled");
static_assert(offsetof(EquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled, InIsEnabled) == 0x000000, "Member 'EquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled::InIsEnabled' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'EquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ChangeFilterType
// 0x0002 (0x0002 - 0x0000)
struct EquipmentListForBattleSet_C_ChangeFilterType final
{
public:
	EFilter_Type                                  InFilterType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_ChangeFilterType) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_ChangeFilterType");
static_assert(sizeof(EquipmentListForBattleSet_C_ChangeFilterType) == 0x000002, "Wrong size on EquipmentListForBattleSet_C_ChangeFilterType");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeFilterType, InFilterType) == 0x000000, "Member 'EquipmentListForBattleSet_C_ChangeFilterType::InFilterType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeFilterType, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'EquipmentListForBattleSet_C_ChangeFilterType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetListVisibility
// 0x0002 (0x0002 - 0x0000)
struct EquipmentListForBattleSet_C_SetListVisibility final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_SetListVisibility) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_SetListVisibility");
static_assert(sizeof(EquipmentListForBattleSet_C_SetListVisibility) == 0x000002, "Wrong size on EquipmentListForBattleSet_C_SetListVisibility");
static_assert(offsetof(EquipmentListForBattleSet_C_SetListVisibility, InVisibility) == 0x000000, "Member 'EquipmentListForBattleSet_C_SetListVisibility::InVisibility' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetListVisibility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'EquipmentListForBattleSet_C_SetListVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetStorageMode
// 0x001C (0x001C - 0x0000)
struct EquipmentListForBattleSet_C_SetStorageMode final
{
public:
	bool                                          InIsForStorage;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8383[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8384[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_SetStorageMode) == 0x000004, "Wrong alignment on EquipmentListForBattleSet_C_SetStorageMode");
static_assert(sizeof(EquipmentListForBattleSet_C_SetStorageMode) == 0x00001C, "Wrong size on EquipmentListForBattleSet_C_SetStorageMode");
static_assert(offsetof(EquipmentListForBattleSet_C_SetStorageMode, InIsForStorage) == 0x000000, "Member 'EquipmentListForBattleSet_C_SetStorageMode::InIsForStorage' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetStorageMode, Temp_int_Variable) == 0x000004, "Member 'EquipmentListForBattleSet_C_SetStorageMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetStorageMode, Temp_int_Variable_1) == 0x000008, "Member 'EquipmentListForBattleSet_C_SetStorageMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetStorageMode, Temp_bool_Variable) == 0x00000C, "Member 'EquipmentListForBattleSet_C_SetStorageMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetStorageMode, Temp_byte_Variable) == 0x00000D, "Member 'EquipmentListForBattleSet_C_SetStorageMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetStorageMode, Temp_byte_Variable_1) == 0x00000E, "Member 'EquipmentListForBattleSet_C_SetStorageMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetStorageMode, Temp_bool_Variable_1) == 0x00000F, "Member 'EquipmentListForBattleSet_C_SetStorageMode::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetStorageMode, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'EquipmentListForBattleSet_C_SetStorageMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetStorageMode, K2Node_Select_Default) == 0x000014, "Member 'EquipmentListForBattleSet_C_SetStorageMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetStorageMode, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'EquipmentListForBattleSet_C_SetStorageMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetStorageMode, K2Node_Select_Default_1) == 0x000019, "Member 'EquipmentListForBattleSet_C_SetStorageMode::K2Node_Select_Default_1' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayListInAnimForward
// 0x0010 (0x0010 - 0x0000)
struct EquipmentListForBattleSet_C_PlayListInAnimForward final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_PlayListInAnimForward) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_PlayListInAnimForward");
static_assert(sizeof(EquipmentListForBattleSet_C_PlayListInAnimForward) == 0x000010, "Wrong size on EquipmentListForBattleSet_C_PlayListInAnimForward");
static_assert(offsetof(EquipmentListForBattleSet_C_PlayListInAnimForward, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'EquipmentListForBattleSet_C_PlayListInAnimForward::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_PlayListInAnimForward, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'EquipmentListForBattleSet_C_PlayListInAnimForward::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayListInAnimReverse
// 0x0010 (0x0010 - 0x0000)
struct EquipmentListForBattleSet_C_PlayListInAnimReverse final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_PlayListInAnimReverse) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_PlayListInAnimReverse");
static_assert(sizeof(EquipmentListForBattleSet_C_PlayListInAnimReverse) == 0x000010, "Wrong size on EquipmentListForBattleSet_C_PlayListInAnimReverse");
static_assert(offsetof(EquipmentListForBattleSet_C_PlayListInAnimReverse, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'EquipmentListForBattleSet_C_PlayListInAnimReverse::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_PlayListInAnimReverse, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'EquipmentListForBattleSet_C_PlayListInAnimReverse::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ChangeActiveWindow
// 0x000C (0x000C - 0x0000)
struct EquipmentListForBattleSet_C_ChangeActiveWindow final
{
public:
	bool                                          InIsFilterSelectorWindowActive;                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InDoAnimation;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsFilterSelectorWindowActive;                 // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_ChangeActiveWindow) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_ChangeActiveWindow");
static_assert(sizeof(EquipmentListForBattleSet_C_ChangeActiveWindow) == 0x00000C, "Wrong size on EquipmentListForBattleSet_C_ChangeActiveWindow");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, InIsFilterSelectorWindowActive) == 0x000000, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::InIsFilterSelectorWindowActive' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, InDoAnimation) == 0x000001, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::InDoAnimation' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, LocalIsFilterSelectorWindowActive) == 0x000002, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::LocalIsFilterSelectorWindowActive' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, Temp_bool_Variable) == 0x000003, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000006, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000007, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, Temp_bool_Variable_1) == 0x000008, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000009, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, K2Node_Select_Default) == 0x00000A, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ChangeActiveWindow, K2Node_Select_Default_1) == 0x00000B, "Member 'EquipmentListForBattleSet_C_ChangeActiveWindow::K2Node_Select_Default_1' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.IsFilterSelectorOpened
// 0x0001 (0x0001 - 0x0000)
struct EquipmentListForBattleSet_C_IsFilterSelectorOpened final
{
public:
	bool                                          OutIsOpened;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_IsFilterSelectorOpened) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_IsFilterSelectorOpened");
static_assert(sizeof(EquipmentListForBattleSet_C_IsFilterSelectorOpened) == 0x000001, "Wrong size on EquipmentListForBattleSet_C_IsFilterSelectorOpened");
static_assert(offsetof(EquipmentListForBattleSet_C_IsFilterSelectorOpened, OutIsOpened) == 0x000000, "Member 'EquipmentListForBattleSet_C_IsFilterSelectorOpened::OutIsOpened' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetInfoType
// 0x0001 (0x0001 - 0x0000)
struct EquipmentListForBattleSet_C_SetInfoType final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_SetInfoType) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_SetInfoType");
static_assert(sizeof(EquipmentListForBattleSet_C_SetInfoType) == 0x000001, "Wrong size on EquipmentListForBattleSet_C_SetInfoType");
static_assert(offsetof(EquipmentListForBattleSet_C_SetInfoType, InInfoType) == 0x000000, "Member 'EquipmentListForBattleSet_C_SetInfoType::InInfoType' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetEquipType
// 0x0001 (0x0001 - 0x0000)
struct EquipmentListForBattleSet_C_SetEquipType final
{
public:
	ESBCharaEquipType                             InEquipType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_SetEquipType) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_SetEquipType");
static_assert(sizeof(EquipmentListForBattleSet_C_SetEquipType) == 0x000001, "Wrong size on EquipmentListForBattleSet_C_SetEquipType");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipType, InEquipType) == 0x000000, "Member 'EquipmentListForBattleSet_C_SetEquipType::InEquipType' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.GetEquipType
// 0x0001 (0x0001 - 0x0000)
struct EquipmentListForBattleSet_C_GetEquipType final
{
public:
	ESBCharaEquipType                             OutEquipType;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_GetEquipType) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_GetEquipType");
static_assert(sizeof(EquipmentListForBattleSet_C_GetEquipType) == 0x000001, "Wrong size on EquipmentListForBattleSet_C_GetEquipType");
static_assert(offsetof(EquipmentListForBattleSet_C_GetEquipType, OutEquipType) == 0x000000, "Member 'EquipmentListForBattleSet_C_GetEquipType::OutEquipType' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ExtractInnerImagineEquipPositionFlagByEquipType
// 0x000E (0x000E - 0x0000)
struct EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType final
{
public:
	ESBCharaEquipType                             InEquipType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InEquipPosition1;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InEquipPosition2;                                  // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InEquipPosition3;                                  // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InEquipPosition4;                                  // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InEquipPosition5;                                  // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OutEquipPositionMatch;                             // 0x0006(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEquipPosition5;                             // 0x0007(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEquipPosition4;                             // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEquipPosition3;                             // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEquipPosition2;                             // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEquipPosition1;                             // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             LocalEquipType;                                    // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType");
static_assert(sizeof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType) == 0x00000E, "Wrong size on EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, InEquipType) == 0x000000, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::InEquipType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, InEquipPosition1) == 0x000001, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::InEquipPosition1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, InEquipPosition2) == 0x000002, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::InEquipPosition2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, InEquipPosition3) == 0x000003, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::InEquipPosition3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, InEquipPosition4) == 0x000004, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::InEquipPosition4' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, InEquipPosition5) == 0x000005, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::InEquipPosition5' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, OutEquipPositionMatch) == 0x000006, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::OutEquipPositionMatch' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, LocalIsEquipPosition5) == 0x000007, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::LocalIsEquipPosition5' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, LocalIsEquipPosition4) == 0x000008, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::LocalIsEquipPosition4' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, LocalIsEquipPosition3) == 0x000009, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::LocalIsEquipPosition3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, LocalIsEquipPosition2) == 0x00000A, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::LocalIsEquipPosition2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, LocalIsEquipPosition1) == 0x00000B, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::LocalIsEquipPosition1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, LocalEquipType) == 0x00000C, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::LocalEquipType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType, K2Node_SwitchEnum_CmpSuccess) == 0x00000D, "Member 'EquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetFilterBtnSelected
// 0x00A4 (0x00A4 - 0x0000)
struct EquipmentListForBattleSet_C_SetFilterBtnSelected final
{
public:
	bool                                          InIsFilterBtnStorageSelected;                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8385[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalHeadingTextId;                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8386[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8387[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8388[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8389[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_2;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_838A[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_2;                           // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_3;                           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_4;                           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_838B[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakColor_R;                             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x006C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_838C[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakColor_R_1;                           // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G_1;                           // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B_1;                           // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A_1;                           // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue_1;                  // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_SetFilterBtnSelected) == 0x000004, "Wrong alignment on EquipmentListForBattleSet_C_SetFilterBtnSelected");
static_assert(sizeof(EquipmentListForBattleSet_C_SetFilterBtnSelected) == 0x0000A4, "Wrong size on EquipmentListForBattleSet_C_SetFilterBtnSelected");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, InIsFilterBtnStorageSelected) == 0x000000, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::InIsFilterBtnStorageSelected' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, LocalHeadingTextId) == 0x000004, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::LocalHeadingTextId' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_bool_Variable) == 0x000008, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_int_Variable) == 0x00000C, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_int_Variable_1) == 0x000010, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_bool_Variable_1) == 0x000014, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_int_Variable_2) == 0x000018, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_int_Variable_3) == 0x00001C, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_bool_Variable_2) == 0x000020, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_float_Variable) == 0x000024, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_float_Variable_1) == 0x000028, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_bool_Variable_3) == 0x00002C, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_float_Variable_2) == 0x000030, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_float_Variable_3) == 0x000034, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_bool_Variable_4) == 0x000038, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_int_Variable_4) == 0x00003C, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, K2Node_Select_Default) == 0x000040, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, K2Node_Select_Default_1) == 0x000044, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, K2Node_Select_Default_2) == 0x000048, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, K2Node_Select_Default_3) == 0x00004C, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, Temp_int_Variable_5) == 0x000050, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, K2Node_Select_Default_4) == 0x000054, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_BreakColor_R) == 0x00005C, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_BreakColor_G) == 0x000060, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_BreakColor_B) == 0x000064, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_BreakColor_A) == 0x000068, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_MakeColor_ReturnValue) == 0x00006C, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_IsValid_ReturnValue_1) == 0x00007C, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_BreakColor_R_1) == 0x000080, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_BreakColor_R_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_BreakColor_G_1) == 0x000084, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_BreakColor_G_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_BreakColor_B_1) == 0x000088, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_BreakColor_B_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_BreakColor_A_1) == 0x00008C, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_BreakColor_A_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_MakeColor_ReturnValue_1) == 0x000090, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_MakeColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterBtnSelected, CallFunc_IsValid_ReturnValue_2) == 0x0000A0, "Member 'EquipmentListForBattleSet_C_SetFilterBtnSelected::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SwitchEquipmentIconListBody
// 0x0014 (0x0014 - 0x0000)
struct EquipmentListForBattleSet_C_SwitchEquipmentIconListBody final
{
public:
	bool                                          InIsEquipmentIconListBodyEmpty;                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_838D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_838E[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_SwitchEquipmentIconListBody) == 0x000004, "Wrong alignment on EquipmentListForBattleSet_C_SwitchEquipmentIconListBody");
static_assert(sizeof(EquipmentListForBattleSet_C_SwitchEquipmentIconListBody) == 0x000014, "Wrong size on EquipmentListForBattleSet_C_SwitchEquipmentIconListBody");
static_assert(offsetof(EquipmentListForBattleSet_C_SwitchEquipmentIconListBody, InIsEquipmentIconListBodyEmpty) == 0x000000, "Member 'EquipmentListForBattleSet_C_SwitchEquipmentIconListBody::InIsEquipmentIconListBodyEmpty' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SwitchEquipmentIconListBody, Temp_int_Variable) == 0x000004, "Member 'EquipmentListForBattleSet_C_SwitchEquipmentIconListBody::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SwitchEquipmentIconListBody, Temp_int_Variable_1) == 0x000008, "Member 'EquipmentListForBattleSet_C_SwitchEquipmentIconListBody::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SwitchEquipmentIconListBody, Temp_bool_Variable) == 0x00000C, "Member 'EquipmentListForBattleSet_C_SwitchEquipmentIconListBody::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SwitchEquipmentIconListBody, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'EquipmentListForBattleSet_C_SwitchEquipmentIconListBody::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SwitchEquipmentIconListBody, K2Node_Select_Default) == 0x000010, "Member 'EquipmentListForBattleSet_C_SwitchEquipmentIconListBody::K2Node_Select_Default' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetEquipmentIconSelectedByUniqueId
// 0x0050 (0x0050 - 0x0000)
struct EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId final
{
public:
	class FString                                 InEquipmentUinqueId;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         LocalItemIconBtn;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_838F[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8390[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8391[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8392[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId");
static_assert(sizeof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId) == 0x000050, "Wrong size on EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, InEquipmentUinqueId) == 0x000000, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::InEquipmentUinqueId' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, LocalItemIconBtn) == 0x000010, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::LocalItemIconBtn' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, CallFunc_NotEqual_StrStr_ReturnValue) == 0x00001A, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, Temp_int_Variable) == 0x00001C, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000024, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, CallFunc_GetChildrenCount_ReturnValue) == 0x000030, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, CallFunc_IsValid_ReturnValue_2) == 0x000034, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003C, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000040, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId, CallFunc_IsValid_ReturnValue_3) == 0x000049, "Member 'EquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.CheckIfSelectedEquipmentIsEquipped
// 0x00B0 (0x00B0 - 0x0000)
struct EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped final
{
public:
	class FString                                 InEquipmentUniqueId;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBCharaEquipType                             InEquipType;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsEquipped;                                     // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             LocalEquipType;                                    // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8393[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalEquipmentUniqueId;                            // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0028(0x0028)(ConstParm)
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_1;           // 0x0050(0x0028)(ConstParm)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8394[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_2;           // 0x0080(0x0028)(ConstParm)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped) == 0x000008, "Wrong alignment on EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped");
static_assert(sizeof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped) == 0x0000B0, "Wrong size on EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, InEquipmentUniqueId) == 0x000000, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::InEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, InEquipType) == 0x000010, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::InEquipType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, OutIsEquipped) == 0x000011, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::OutIsEquipped' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, LocalEquipType) == 0x000012, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::LocalEquipType' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, LocalEquipmentUniqueId) == 0x000018, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::LocalEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000028, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, CallFunc_GetEquipItemInfo_ReturnValue_1) == 0x000050, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::CallFunc_GetEquipItemInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000078, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000079, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, CallFunc_BooleanOR_ReturnValue) == 0x00007A, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, CallFunc_GetEquipItemInfo_ReturnValue_2) == 0x000080, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::CallFunc_GetEquipItemInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, CallFunc_EqualEqual_StrStr_ReturnValue_2) == 0x0000A8, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::CallFunc_EqualEqual_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000A9, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000AA, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped, CallFunc_BooleanAND_ReturnValue) == 0x0000AB, "Member 'EquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayFilterSelectorAnimInOrOut
// 0x0002 (0x0002 - 0x0000)
struct EquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut final
{
public:
	bool                                          InPlayAnimIn;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut");
static_assert(sizeof(EquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut) == 0x000002, "Wrong size on EquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut");
static_assert(offsetof(EquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut, InPlayAnimIn) == 0x000000, "Member 'EquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut::InPlayAnimIn' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'EquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.IsFilterSelectorAnimInfOutPlaying
// 0x0003 (0x0003 - 0x0000)
struct EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying final
{
public:
	bool                                          OutIsPlaying;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimInOutPlaying_OutIsPlaying;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying) == 0x000001, "Wrong alignment on EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying");
static_assert(sizeof(EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying) == 0x000003, "Wrong size on EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying");
static_assert(offsetof(EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying, OutIsPlaying) == 0x000000, "Member 'EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying::OutIsPlaying' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying, CallFunc_IsAnimInOutPlaying_OutIsPlaying) == 0x000001, "Member 'EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying::CallFunc_IsAnimInOutPlaying_OutIsPlaying' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'EquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetFilterPosition
// 0x0020 (0x0020 - 0x0000)
struct EquipmentListForBattleSet_C_SetFilterPosition final
{
public:
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8395[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentListForBattleSet_C_SetFilterPosition) == 0x000004, "Wrong alignment on EquipmentListForBattleSet_C_SetFilterPosition");
static_assert(sizeof(EquipmentListForBattleSet_C_SetFilterPosition) == 0x000020, "Wrong size on EquipmentListForBattleSet_C_SetFilterPosition");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterPosition, CallFunc_GetDesiredSize_ReturnValue) == 0x000000, "Member 'EquipmentListForBattleSet_C_SetFilterPosition::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterPosition, CallFunc_BreakVector2D_X) == 0x000008, "Member 'EquipmentListForBattleSet_C_SetFilterPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterPosition, CallFunc_BreakVector2D_Y) == 0x00000C, "Member 'EquipmentListForBattleSet_C_SetFilterPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterPosition, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000010, "Member 'EquipmentListForBattleSet_C_SetFilterPosition::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterPosition, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'EquipmentListForBattleSet_C_SetFilterPosition::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentListForBattleSet_C_SetFilterPosition, CallFunc_MakeVector2D_ReturnValue) == 0x000018, "Member 'EquipmentListForBattleSet_C_SetFilterPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}

