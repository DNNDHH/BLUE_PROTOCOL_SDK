#pragma once

 

// Package: WeaponCustomList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponCustomList.WeaponCustomList_C.OnSelectWeapon__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct WeaponCustomList_C_OnSelectWeapon__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectData;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponCustomList_C_OnSelectWeapon__DelegateSignature) == 0x000008, "Wrong alignment on WeaponCustomList_C_OnSelectWeapon__DelegateSignature");
static_assert(sizeof(WeaponCustomList_C_OnSelectWeapon__DelegateSignature) == 0x000118, "Wrong size on WeaponCustomList_C_OnSelectWeapon__DelegateSignature");
static_assert(offsetof(WeaponCustomList_C_OnSelectWeapon__DelegateSignature, SelectData) == 0x000000, "Member 'WeaponCustomList_C_OnSelectWeapon__DelegateSignature::SelectData' has a wrong offset!");

// Function WeaponCustomList.WeaponCustomList_C.ExecuteUbergraph_WeaponCustomList
// 0x0170 (0x0170 - 0x0000)
struct WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D3C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_OnSelectWeapn;                  // 0x0008(0x0118)()
	class UWeaponCustomListitem_C*                K2Node_CustomEvent_Select;                         // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Page;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D3D[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponCustomListitem_C*                CallFunc_Create_ReturnValue;                       // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponCustomListitem_C*                K2Node_DynamicCast_AsWeapon_Custom_Listitem;       // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D3E[0x2];                                     // 0x015A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D3F[0x2];                                     // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList) == 0x000008, "Wrong alignment on WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList");
static_assert(sizeof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList) == 0x000170, "Wrong size on WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, EntryPoint) == 0x000000, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, K2Node_CustomEvent_OnSelectWeapn) == 0x000008, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::K2Node_CustomEvent_OnSelectWeapn' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, K2Node_CustomEvent_Select) == 0x000120, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::K2Node_CustomEvent_Select' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, K2Node_ComponentBoundEvent_Page) == 0x000128, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::K2Node_ComponentBoundEvent_Page' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, Temp_int_Variable) == 0x00012C, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, CallFunc_Add_IntInt_ReturnValue) == 0x000130, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, CallFunc_Create_ReturnValue) == 0x000138, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, CallFunc_GetChildAt_ReturnValue) == 0x000140, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, CallFunc_AddChild_ReturnValue) == 0x000148, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, K2Node_DynamicCast_AsWeapon_Custom_Listitem) == 0x000150, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::K2Node_DynamicCast_AsWeapon_Custom_Listitem' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000159, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, CallFunc_GetChildrenCount_ReturnValue) == 0x00015C, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, Temp_int_Variable_1) == 0x000160, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000164, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000168, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000169, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList, CallFunc_Add_IntInt_ReturnValue_1) == 0x00016C, "Member 'WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function WeaponCustomList.WeaponCustomList_C.BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WeaponCustomList_C_BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature final
{
public:
	int32                                         Param_Page;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomList_C_BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature) == 0x000004, "Wrong alignment on WeaponCustomList_C_BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature");
static_assert(sizeof(WeaponCustomList_C_BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature) == 0x000004, "Wrong size on WeaponCustomList_C_BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature");
static_assert(offsetof(WeaponCustomList_C_BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature, Param_Page) == 0x000000, "Member 'WeaponCustomList_C_BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature::Param_Page' has a wrong offset!");

// Function WeaponCustomList.WeaponCustomList_C.OnSelect
// 0x0120 (0x0120 - 0x0000)
struct WeaponCustomList_C_OnSelect final
{
public:
	struct FOwnItemInfo                           OnSelectWeapn;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWeaponCustomListitem_C*                Select;                                            // 0x0118(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomList_C_OnSelect) == 0x000008, "Wrong alignment on WeaponCustomList_C_OnSelect");
static_assert(sizeof(WeaponCustomList_C_OnSelect) == 0x000120, "Wrong size on WeaponCustomList_C_OnSelect");
static_assert(offsetof(WeaponCustomList_C_OnSelect, OnSelectWeapn) == 0x000000, "Member 'WeaponCustomList_C_OnSelect::OnSelectWeapn' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_OnSelect, Select) == 0x000118, "Member 'WeaponCustomList_C_OnSelect::Select' has a wrong offset!");

// Function WeaponCustomList.WeaponCustomList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomList_C_PreConstruct) == 0x000001, "Wrong alignment on WeaponCustomList_C_PreConstruct");
static_assert(sizeof(WeaponCustomList_C_PreConstruct) == 0x000001, "Wrong size on WeaponCustomList_C_PreConstruct");
static_assert(offsetof(WeaponCustomList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WeaponCustomList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WeaponCustomList.WeaponCustomList_C.SetStorage
// 0x0018 (0x0018 - 0x0000)
struct WeaponCustomList_C_SetStorage final
{
public:
	class USBOwnItemListContainer*                Param_StorageData;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxPage_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomList_C_SetStorage) == 0x000008, "Wrong alignment on WeaponCustomList_C_SetStorage");
static_assert(sizeof(WeaponCustomList_C_SetStorage) == 0x000018, "Wrong size on WeaponCustomList_C_SetStorage");
static_assert(offsetof(WeaponCustomList_C_SetStorage, Param_StorageData) == 0x000000, "Member 'WeaponCustomList_C_SetStorage::Param_StorageData' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_SetStorage, CallFunc_GetTemporallyStorage_ReturnValue) == 0x000008, "Member 'WeaponCustomList_C_SetStorage::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_SetStorage, CallFunc_GetMaxPage_ReturnValue) == 0x000010, "Member 'WeaponCustomList_C_SetStorage::CallFunc_GetMaxPage_ReturnValue' has a wrong offset!");

// Function WeaponCustomList.WeaponCustomList_C.SetSortType
// 0x0002 (0x0002 - 0x0000)
struct WeaponCustomList_C_SetSortType final
{
public:
	ESBItemSortType                               Param_Sort_Type;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomList_C_SetSortType) == 0x000001, "Wrong alignment on WeaponCustomList_C_SetSortType");
static_assert(sizeof(WeaponCustomList_C_SetSortType) == 0x000002, "Wrong size on WeaponCustomList_C_SetSortType");
static_assert(offsetof(WeaponCustomList_C_SetSortType, Param_Sort_Type) == 0x000000, "Member 'WeaponCustomList_C_SetSortType::Param_Sort_Type' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_SetSortType, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WeaponCustomList_C_SetSortType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WeaponCustomList.WeaponCustomList_C.SetFilter
// 0x0010 (0x0010 - 0x0000)
struct WeaponCustomList_C_SetFilter final
{
public:
	TArray<struct FFilterGroup>                   Param_Filters;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponCustomList_C_SetFilter) == 0x000008, "Wrong alignment on WeaponCustomList_C_SetFilter");
static_assert(sizeof(WeaponCustomList_C_SetFilter) == 0x000010, "Wrong size on WeaponCustomList_C_SetFilter");
static_assert(offsetof(WeaponCustomList_C_SetFilter, Param_Filters) == 0x000000, "Member 'WeaponCustomList_C_SetFilter::Param_Filters' has a wrong offset!");

// Function WeaponCustomList.WeaponCustomList_C.GenerateList
// 0x0170 (0x0170 - 0x0000)
struct WeaponCustomList_C_GenerateList final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D40[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponCustomListitem_C*                CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D41[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetSortedPageIndexes_ReturnValue;         // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_BP_GetItem_ReturnValue;                   // 0x0040(0x0118)(ConstParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D42[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FOwnItemInfo& OnSelectWeapn, class UWeaponCustomListitem_C* Select)> K2Node_CreateDelegate_OutputDelegate;              // 0x015C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WeaponCustomList_C_GenerateList) == 0x000008, "Wrong alignment on WeaponCustomList_C_GenerateList");
static_assert(sizeof(WeaponCustomList_C_GenerateList) == 0x000170, "Wrong size on WeaponCustomList_C_GenerateList");
static_assert(offsetof(WeaponCustomList_C_GenerateList, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WeaponCustomList_C_GenerateList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_GenerateList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WeaponCustomList_C_GenerateList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_GenerateList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WeaponCustomList_C_GenerateList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_GenerateList, CallFunc_Create_ReturnValue) == 0x000010, "Member 'WeaponCustomList_C_GenerateList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_GenerateList, CallFunc_AddChild_ReturnValue) == 0x000018, "Member 'WeaponCustomList_C_GenerateList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_GenerateList, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WeaponCustomList_C_GenerateList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_GenerateList, CallFunc_GetSortedPageIndexes_ReturnValue) == 0x000028, "Member 'WeaponCustomList_C_GenerateList::CallFunc_GetSortedPageIndexes_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_GenerateList, CallFunc_Array_Get_Item) == 0x000038, "Member 'WeaponCustomList_C_GenerateList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_GenerateList, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'WeaponCustomList_C_GenerateList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_GenerateList, CallFunc_BP_GetItem_ReturnValue) == 0x000040, "Member 'WeaponCustomList_C_GenerateList::CallFunc_BP_GetItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_GenerateList, CallFunc_Less_IntInt_ReturnValue) == 0x000158, "Member 'WeaponCustomList_C_GenerateList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_GenerateList, K2Node_CreateDelegate_OutputDelegate) == 0x00015C, "Member 'WeaponCustomList_C_GenerateList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WeaponCustomList.WeaponCustomList_C.ApplySortFilter
// 0x0068 (0x0068 - 0x0000)
struct WeaponCustomList_C_ApplySortFilter final
{
public:
	TArray<struct FFilterGroup>                   TmpFilter;                                         // 0x0000(0x0010)(Edit, BlueprintVisible)
	struct FFilterGroup                           K2Node_MakeStruct_FilterGroup;                     // 0x0010(0x0010)()
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue;                    // 0x0020(0x0010)()
	int32                                         CallFunc_GetMaxPage_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D43[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           K2Node_MakeStruct_FilterGroup_1;                   // 0x0038(0x0010)()
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue_1;                  // 0x0048(0x0010)()
	TArray<struct FFilterGroup>                   K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm)
};
static_assert(alignof(WeaponCustomList_C_ApplySortFilter) == 0x000008, "Wrong alignment on WeaponCustomList_C_ApplySortFilter");
static_assert(sizeof(WeaponCustomList_C_ApplySortFilter) == 0x000068, "Wrong size on WeaponCustomList_C_ApplySortFilter");
static_assert(offsetof(WeaponCustomList_C_ApplySortFilter, TmpFilter) == 0x000000, "Member 'WeaponCustomList_C_ApplySortFilter::TmpFilter' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ApplySortFilter, K2Node_MakeStruct_FilterGroup) == 0x000010, "Member 'WeaponCustomList_C_ApplySortFilter::K2Node_MakeStruct_FilterGroup' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ApplySortFilter, CallFunc_AddFilter_ReturnValue) == 0x000020, "Member 'WeaponCustomList_C_ApplySortFilter::CallFunc_AddFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ApplySortFilter, CallFunc_GetMaxPage_ReturnValue) == 0x000030, "Member 'WeaponCustomList_C_ApplySortFilter::CallFunc_GetMaxPage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ApplySortFilter, K2Node_MakeStruct_FilterGroup_1) == 0x000038, "Member 'WeaponCustomList_C_ApplySortFilter::K2Node_MakeStruct_FilterGroup_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ApplySortFilter, CallFunc_AddFilter_ReturnValue_1) == 0x000048, "Member 'WeaponCustomList_C_ApplySortFilter::CallFunc_AddFilter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomList_C_ApplySortFilter, K2Node_MakeArray_Array) == 0x000058, "Member 'WeaponCustomList_C_ApplySortFilter::K2Node_MakeArray_Array' has a wrong offset!");

// Function WeaponCustomList.WeaponCustomList_C.SetBaseFilter
// 0x0010 (0x0010 - 0x0000)
struct WeaponCustomList_C_SetBaseFilter final
{
public:
	TArray<struct FFilterGroup>                   Param_BaseFilter;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponCustomList_C_SetBaseFilter) == 0x000008, "Wrong alignment on WeaponCustomList_C_SetBaseFilter");
static_assert(sizeof(WeaponCustomList_C_SetBaseFilter) == 0x000010, "Wrong size on WeaponCustomList_C_SetBaseFilter");
static_assert(offsetof(WeaponCustomList_C_SetBaseFilter, Param_BaseFilter) == 0x000000, "Member 'WeaponCustomList_C_SetBaseFilter::Param_BaseFilter' has a wrong offset!");

}

