#pragma once

 

// Package: FusionItemList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function FusionItemList.FusionItemList_C.OnSelectItemData__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct FusionItemList_C_OnSelectItemData__DelegateSignature final
{
public:
	struct FOwnItemInfo                           Item;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FusionItemList_C_OnSelectItemData__DelegateSignature) == 0x000008, "Wrong alignment on FusionItemList_C_OnSelectItemData__DelegateSignature");
static_assert(sizeof(FusionItemList_C_OnSelectItemData__DelegateSignature) == 0x000118, "Wrong size on FusionItemList_C_OnSelectItemData__DelegateSignature");
static_assert(offsetof(FusionItemList_C_OnSelectItemData__DelegateSignature, Item) == 0x000000, "Member 'FusionItemList_C_OnSelectItemData__DelegateSignature::Item' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.ExecuteUbergraph_FusionItemList
// 0x0148 (0x0148 - 0x0000)
struct FusionItemList_C_ExecuteUbergraph_FusionItemList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D62[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_OwnItem;                        // 0x0008(0x0118)()
	class UFusionitemListItem_C*                  K2Node_CustomEvent_OnSelected;                     // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Page;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D63[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x0130(0x0010)(ReferenceParm)
	ESBItemSortType                               K2Node_ComponentBoundEvent_SortType;               // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FusionItemList_C_ExecuteUbergraph_FusionItemList) == 0x000008, "Wrong alignment on FusionItemList_C_ExecuteUbergraph_FusionItemList");
static_assert(sizeof(FusionItemList_C_ExecuteUbergraph_FusionItemList) == 0x000148, "Wrong size on FusionItemList_C_ExecuteUbergraph_FusionItemList");
static_assert(offsetof(FusionItemList_C_ExecuteUbergraph_FusionItemList, EntryPoint) == 0x000000, "Member 'FusionItemList_C_ExecuteUbergraph_FusionItemList::EntryPoint' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_ExecuteUbergraph_FusionItemList, K2Node_CustomEvent_OwnItem) == 0x000008, "Member 'FusionItemList_C_ExecuteUbergraph_FusionItemList::K2Node_CustomEvent_OwnItem' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_ExecuteUbergraph_FusionItemList, K2Node_CustomEvent_OnSelected) == 0x000120, "Member 'FusionItemList_C_ExecuteUbergraph_FusionItemList::K2Node_CustomEvent_OnSelected' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_ExecuteUbergraph_FusionItemList, K2Node_ComponentBoundEvent_Page) == 0x000128, "Member 'FusionItemList_C_ExecuteUbergraph_FusionItemList::K2Node_ComponentBoundEvent_Page' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_ExecuteUbergraph_FusionItemList, K2Node_ComponentBoundEvent_Filters) == 0x000130, "Member 'FusionItemList_C_ExecuteUbergraph_FusionItemList::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_ExecuteUbergraph_FusionItemList, K2Node_ComponentBoundEvent_SortType) == 0x000140, "Member 'FusionItemList_C_ExecuteUbergraph_FusionItemList::K2Node_ComponentBoundEvent_SortType' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_ExecuteUbergraph_FusionItemList, K2Node_Event_IsDesignTime) == 0x000141, "Member 'FusionItemList_C_ExecuteUbergraph_FusionItemList::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct FusionItemList_C_BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature final
{
public:
	ESBItemSortType                               Param_SortType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FusionItemList_C_BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong alignment on FusionItemList_C_BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature");
static_assert(sizeof(FusionItemList_C_BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong size on FusionItemList_C_BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature");
static_assert(offsetof(FusionItemList_C_BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature, Param_SortType) == 0x000000, "Member 'FusionItemList_C_BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature::Param_SortType' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct FusionItemList_C_BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Param_Filters;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(FusionItemList_C_BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature) == 0x000008, "Wrong alignment on FusionItemList_C_BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature");
static_assert(sizeof(FusionItemList_C_BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature) == 0x000010, "Wrong size on FusionItemList_C_BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature");
static_assert(offsetof(FusionItemList_C_BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature, Param_Filters) == 0x000000, "Member 'FusionItemList_C_BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature::Param_Filters' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct FusionItemList_C_BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature final
{
public:
	int32                                         Param_Page;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FusionItemList_C_BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature) == 0x000004, "Wrong alignment on FusionItemList_C_BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature");
static_assert(sizeof(FusionItemList_C_BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature) == 0x000004, "Wrong size on FusionItemList_C_BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature");
static_assert(offsetof(FusionItemList_C_BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature, Param_Page) == 0x000000, "Member 'FusionItemList_C_BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature::Param_Page' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.OnSelectItem
// 0x0120 (0x0120 - 0x0000)
struct FusionItemList_C_OnSelectItem final
{
public:
	struct FOwnItemInfo                           OwnItem;                                           // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFusionitemListItem_C*                  OnSelected;                                        // 0x0118(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FusionItemList_C_OnSelectItem) == 0x000008, "Wrong alignment on FusionItemList_C_OnSelectItem");
static_assert(sizeof(FusionItemList_C_OnSelectItem) == 0x000120, "Wrong size on FusionItemList_C_OnSelectItem");
static_assert(offsetof(FusionItemList_C_OnSelectItem, OwnItem) == 0x000000, "Member 'FusionItemList_C_OnSelectItem::OwnItem' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_OnSelectItem, OnSelected) == 0x000118, "Member 'FusionItemList_C_OnSelectItem::OnSelected' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FusionItemList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FusionItemList_C_PreConstruct) == 0x000001, "Wrong alignment on FusionItemList_C_PreConstruct");
static_assert(sizeof(FusionItemList_C_PreConstruct) == 0x000001, "Wrong size on FusionItemList_C_PreConstruct");
static_assert(offsetof(FusionItemList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FusionItemList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.Initialize
// 0x00B0 (0x00B0 - 0x0000)
struct FusionItemList_C_Initialize final
{
public:
	TArray<struct FFilterGroup>                   TmpFilter;                                         // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D64[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           CallFunc_Array_Get_Item;                           // 0x0028(0x0010)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               CallFunc_Array_Get_Item_1;                         // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D65[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_ByteToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D66[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D67[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D68[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           K2Node_MakeStruct_FilterGroup;                     // 0x0078(0x0010)()
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue;                    // 0x0088(0x0010)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxPage_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FusionItemList_C_Initialize) == 0x000008, "Wrong alignment on FusionItemList_C_Initialize");
static_assert(sizeof(FusionItemList_C_Initialize) == 0x0000B0, "Wrong size on FusionItemList_C_Initialize");
static_assert(offsetof(FusionItemList_C_Initialize, TmpFilter) == 0x000000, "Member 'FusionItemList_C_Initialize::TmpFilter' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'FusionItemList_C_Initialize::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'FusionItemList_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, Temp_int_Array_Index_Variable) == 0x000018, "Member 'FusionItemList_C_Initialize::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'FusionItemList_C_Initialize::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, Temp_int_Loop_Counter_Variable_1) == 0x000020, "Member 'FusionItemList_C_Initialize::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Array_Get_Item) == 0x000028, "Member 'FusionItemList_C_Initialize::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'FusionItemList_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'FusionItemList_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Array_Get_Item_1) == 0x00003D, "Member 'FusionItemList_C_Initialize::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Conv_ByteToString_ReturnValue) == 0x000040, "Member 'FusionItemList_C_Initialize::CallFunc_Conv_ByteToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Array_Length_ReturnValue_1) == 0x000050, "Member 'FusionItemList_C_Initialize::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'FusionItemList_C_Initialize::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Less_IntInt_ReturnValue_1) == 0x000068, "Member 'FusionItemList_C_Initialize::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Add_IntInt_ReturnValue_1) == 0x00006C, "Member 'FusionItemList_C_Initialize::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Array_Length_ReturnValue_2) == 0x000070, "Member 'FusionItemList_C_Initialize::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Less_IntInt_ReturnValue_2) == 0x000074, "Member 'FusionItemList_C_Initialize::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, K2Node_MakeStruct_FilterGroup) == 0x000078, "Member 'FusionItemList_C_Initialize::K2Node_MakeStruct_FilterGroup' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_AddFilter_ReturnValue) == 0x000088, "Member 'FusionItemList_C_Initialize::CallFunc_AddFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_Array_Add_ReturnValue) == 0x000098, "Member 'FusionItemList_C_Initialize::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_GetMaxPage_ReturnValue) == 0x00009C, "Member 'FusionItemList_C_Initialize::CallFunc_GetMaxPage_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_GetCharacterStorage_ReturnValue) == 0x0000A0, "Member 'FusionItemList_C_Initialize::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_Initialize, CallFunc_GetTemporallyStorage_ReturnValue) == 0x0000A8, "Member 'FusionItemList_C_Initialize::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.SetFusionWepon
// 0x0268 (0x0268 - 0x0000)
struct FusionItemList_C_SetFusionWepon final
{
public:
	struct FOwnItemInfo                           Weapon;                                            // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOwnItemInfo                           FusionWeapon;                                      // 0x0118(0x0118)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterWeaponPerkData             CallFunc_Array_Get_Item;                           // 0x0240(0x001C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D69[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FusionItemList_C_SetFusionWepon) == 0x000008, "Wrong alignment on FusionItemList_C_SetFusionWepon");
static_assert(sizeof(FusionItemList_C_SetFusionWepon) == 0x000268, "Wrong size on FusionItemList_C_SetFusionWepon");
static_assert(offsetof(FusionItemList_C_SetFusionWepon, Weapon) == 0x000000, "Member 'FusionItemList_C_SetFusionWepon::Weapon' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_SetFusionWepon, FusionWeapon) == 0x000118, "Member 'FusionItemList_C_SetFusionWepon::FusionWeapon' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_SetFusionWepon, Temp_int_Array_Index_Variable) == 0x000230, "Member 'FusionItemList_C_SetFusionWepon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_SetFusionWepon, Temp_int_Loop_Counter_Variable) == 0x000234, "Member 'FusionItemList_C_SetFusionWepon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_SetFusionWepon, CallFunc_Add_IntInt_ReturnValue) == 0x000238, "Member 'FusionItemList_C_SetFusionWepon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_SetFusionWepon, CallFunc_Subtract_IntInt_ReturnValue) == 0x00023C, "Member 'FusionItemList_C_SetFusionWepon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_SetFusionWepon, CallFunc_Array_Get_Item) == 0x000240, "Member 'FusionItemList_C_SetFusionWepon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_SetFusionWepon, CallFunc_Array_Length_ReturnValue) == 0x00025C, "Member 'FusionItemList_C_SetFusionWepon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_SetFusionWepon, CallFunc_Less_IntInt_ReturnValue) == 0x000260, "Member 'FusionItemList_C_SetFusionWepon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_SetFusionWepon, CallFunc_Array_Add_ReturnValue) == 0x000264, "Member 'FusionItemList_C_SetFusionWepon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.SetEmptySlotNum
// 0x0004 (0x0004 - 0x0000)
struct FusionItemList_C_SetEmptySlotNum final
{
public:
	int32                                         SlotNum;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FusionItemList_C_SetEmptySlotNum) == 0x000004, "Wrong alignment on FusionItemList_C_SetEmptySlotNum");
static_assert(sizeof(FusionItemList_C_SetEmptySlotNum) == 0x000004, "Wrong size on FusionItemList_C_SetEmptySlotNum");
static_assert(offsetof(FusionItemList_C_SetEmptySlotNum, SlotNum) == 0x000000, "Member 'FusionItemList_C_SetEmptySlotNum::SlotNum' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.InitializeFusionItemList 
// 0x0020 (0x0020 - 0x0000)
struct FusionItemList_C_InitializeFusionItemList_ final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D6A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFusionitemListItem_C*                  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D6B[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FusionItemList_C_InitializeFusionItemList_) == 0x000008, "Wrong alignment on FusionItemList_C_InitializeFusionItemList_");
static_assert(sizeof(FusionItemList_C_InitializeFusionItemList_) == 0x000020, "Wrong size on FusionItemList_C_InitializeFusionItemList_");
static_assert(offsetof(FusionItemList_C_InitializeFusionItemList_, Temp_int_Variable) == 0x000000, "Member 'FusionItemList_C_InitializeFusionItemList_::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_InitializeFusionItemList_, CallFunc_Create_ReturnValue) == 0x000008, "Member 'FusionItemList_C_InitializeFusionItemList_::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_InitializeFusionItemList_, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'FusionItemList_C_InitializeFusionItemList_::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_InitializeFusionItemList_, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'FusionItemList_C_InitializeFusionItemList_::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_InitializeFusionItemList_, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'FusionItemList_C_InitializeFusionItemList_::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.CreateFusionItemList 
// 0x0168 (0x0168 - 0x0000)
struct FusionItemList_C_CreateFusionItemList_ final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FOwnItemInfo& OwnItem, class UFusionitemListItem_C* OnSelected)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5D6C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFusionitemListItem_C*                  CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetSortedPageIndexes_ReturnValue;         // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D6D[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetItem_ReturnValue;                   // 0x0050(0x0118)(ConstParm)
};
static_assert(alignof(FusionItemList_C_CreateFusionItemList_) == 0x000008, "Wrong alignment on FusionItemList_C_CreateFusionItemList_");
static_assert(sizeof(FusionItemList_C_CreateFusionItemList_) == 0x000168, "Wrong size on FusionItemList_C_CreateFusionItemList_");
static_assert(offsetof(FusionItemList_C_CreateFusionItemList_, Temp_int_Array_Index_Variable) == 0x000000, "Member 'FusionItemList_C_CreateFusionItemList_::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_CreateFusionItemList_, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'FusionItemList_C_CreateFusionItemList_::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_CreateFusionItemList_, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'FusionItemList_C_CreateFusionItemList_::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_CreateFusionItemList_, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'FusionItemList_C_CreateFusionItemList_::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_CreateFusionItemList_, CallFunc_Create_ReturnValue) == 0x000020, "Member 'FusionItemList_C_CreateFusionItemList_::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_CreateFusionItemList_, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'FusionItemList_C_CreateFusionItemList_::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_CreateFusionItemList_, CallFunc_GetSortedPageIndexes_ReturnValue) == 0x000030, "Member 'FusionItemList_C_CreateFusionItemList_::CallFunc_GetSortedPageIndexes_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_CreateFusionItemList_, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'FusionItemList_C_CreateFusionItemList_::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_CreateFusionItemList_, CallFunc_Array_Get_Item) == 0x000044, "Member 'FusionItemList_C_CreateFusionItemList_::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_CreateFusionItemList_, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'FusionItemList_C_CreateFusionItemList_::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_CreateFusionItemList_, CallFunc_BP_GetItem_ReturnValue) == 0x000050, "Member 'FusionItemList_C_CreateFusionItemList_::CallFunc_BP_GetItem_ReturnValue' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.DeleteFusionItemList
// 0x0050 (0x0050 - 0x0000)
struct FusionItemList_C_DeleteFusionItemList final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FOwnItemInfo& OwnItem, class UFusionitemListItem_C* OnSelected)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5D6E[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFusionitemListItem_C*                  K2Node_DynamicCast_AsFusionitem_List_Item;         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D6F[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FusionItemList_C_DeleteFusionItemList) == 0x000008, "Wrong alignment on FusionItemList_C_DeleteFusionItemList");
static_assert(sizeof(FusionItemList_C_DeleteFusionItemList) == 0x000050, "Wrong size on FusionItemList_C_DeleteFusionItemList");
static_assert(offsetof(FusionItemList_C_DeleteFusionItemList, Temp_int_Array_Index_Variable) == 0x000000, "Member 'FusionItemList_C_DeleteFusionItemList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_DeleteFusionItemList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'FusionItemList_C_DeleteFusionItemList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_DeleteFusionItemList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'FusionItemList_C_DeleteFusionItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_DeleteFusionItemList, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'FusionItemList_C_DeleteFusionItemList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_DeleteFusionItemList, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'FusionItemList_C_DeleteFusionItemList::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_DeleteFusionItemList, CallFunc_Array_Get_Item) == 0x000030, "Member 'FusionItemList_C_DeleteFusionItemList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_DeleteFusionItemList, K2Node_DynamicCast_AsFusionitem_List_Item) == 0x000038, "Member 'FusionItemList_C_DeleteFusionItemList::K2Node_DynamicCast_AsFusionitem_List_Item' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_DeleteFusionItemList, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'FusionItemList_C_DeleteFusionItemList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_DeleteFusionItemList, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'FusionItemList_C_DeleteFusionItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_DeleteFusionItemList, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'FusionItemList_C_DeleteFusionItemList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.UpdateSelected
// 0x0030 (0x0030 - 0x0000)
struct FusionItemList_C_UpdateSelected final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D70[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D71[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFusionitemListItem_C*                  K2Node_DynamicCast_AsFusionitem_List_Item;         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D72[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D73[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FusionItemList_C_UpdateSelected) == 0x000008, "Wrong alignment on FusionItemList_C_UpdateSelected");
static_assert(sizeof(FusionItemList_C_UpdateSelected) == 0x000030, "Wrong size on FusionItemList_C_UpdateSelected");
static_assert(offsetof(FusionItemList_C_UpdateSelected, bIsSelected) == 0x000000, "Member 'FusionItemList_C_UpdateSelected::bIsSelected' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateSelected, Temp_int_Variable) == 0x000004, "Member 'FusionItemList_C_UpdateSelected::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateSelected, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'FusionItemList_C_UpdateSelected::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateSelected, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'FusionItemList_C_UpdateSelected::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateSelected, K2Node_DynamicCast_AsFusionitem_List_Item) == 0x000018, "Member 'FusionItemList_C_UpdateSelected::K2Node_DynamicCast_AsFusionitem_List_Item' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateSelected, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'FusionItemList_C_UpdateSelected::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateSelected, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'FusionItemList_C_UpdateSelected::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateSelected, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'FusionItemList_C_UpdateSelected::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateSelected, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'FusionItemList_C_UpdateSelected::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.UpfateSlotNum
// 0x0038 (0x0038 - 0x0000)
struct FusionItemList_C_UpfateSlotNum final
{
public:
	bool                                          TmpSelected;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D74[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D75[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D76[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFusionitemListItem_C*                  K2Node_DynamicCast_AsFusionitem_List_Item;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D77[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FusionItemList_C_UpfateSlotNum) == 0x000008, "Wrong alignment on FusionItemList_C_UpfateSlotNum");
static_assert(sizeof(FusionItemList_C_UpfateSlotNum) == 0x000038, "Wrong size on FusionItemList_C_UpfateSlotNum");
static_assert(offsetof(FusionItemList_C_UpfateSlotNum, TmpSelected) == 0x000000, "Member 'FusionItemList_C_UpfateSlotNum::TmpSelected' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpfateSlotNum, Temp_int_Variable) == 0x000004, "Member 'FusionItemList_C_UpfateSlotNum::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpfateSlotNum, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'FusionItemList_C_UpfateSlotNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpfateSlotNum, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'FusionItemList_C_UpfateSlotNum::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpfateSlotNum, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'FusionItemList_C_UpfateSlotNum::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpfateSlotNum, K2Node_DynamicCast_AsFusionitem_List_Item) == 0x000020, "Member 'FusionItemList_C_UpfateSlotNum::K2Node_DynamicCast_AsFusionitem_List_Item' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpfateSlotNum, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'FusionItemList_C_UpfateSlotNum::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpfateSlotNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'FusionItemList_C_UpfateSlotNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpfateSlotNum, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'FusionItemList_C_UpfateSlotNum::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function FusionItemList.FusionItemList_C.UpdateEnable
// 0x0148 (0x0148 - 0x0000)
struct FusionItemList_C_UpdateEnable final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D78[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFusionitemListItem_C*                  K2Node_DynamicCast_AsFusionitem_List_Item;         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D79[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_GetItemData_ItemData;                     // 0x0028(0x0118)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FusionItemList_C_UpdateEnable) == 0x000008, "Wrong alignment on FusionItemList_C_UpdateEnable");
static_assert(sizeof(FusionItemList_C_UpdateEnable) == 0x000148, "Wrong size on FusionItemList_C_UpdateEnable");
static_assert(offsetof(FusionItemList_C_UpdateEnable, Temp_int_Variable) == 0x000000, "Member 'FusionItemList_C_UpdateEnable::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateEnable, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'FusionItemList_C_UpdateEnable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateEnable, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'FusionItemList_C_UpdateEnable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateEnable, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'FusionItemList_C_UpdateEnable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateEnable, K2Node_DynamicCast_AsFusionitem_List_Item) == 0x000018, "Member 'FusionItemList_C_UpdateEnable::K2Node_DynamicCast_AsFusionitem_List_Item' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateEnable, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'FusionItemList_C_UpdateEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateEnable, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'FusionItemList_C_UpdateEnable::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateEnable, CallFunc_GetItemData_ItemData) == 0x000028, "Member 'FusionItemList_C_UpdateEnable::CallFunc_GetItemData_ItemData' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateEnable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000140, "Member 'FusionItemList_C_UpdateEnable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateEnable, CallFunc_Array_Contains_ReturnValue) == 0x000141, "Member 'FusionItemList_C_UpdateEnable::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(FusionItemList_C_UpdateEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000142, "Member 'FusionItemList_C_UpdateEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

