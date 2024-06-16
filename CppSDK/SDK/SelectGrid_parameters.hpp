#pragma once

 

// Package: SelectGrid

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SortTypeCategory_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SelectGrid.SelectGrid_C.SelectedItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct SelectGrid_C_SelectedItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           Param_SelectItem;                                  // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SelectGrid_C_SelectedItem__DelegateSignature) == 0x000008, "Wrong alignment on SelectGrid_C_SelectedItem__DelegateSignature");
static_assert(sizeof(SelectGrid_C_SelectedItem__DelegateSignature) == 0x000118, "Wrong size on SelectGrid_C_SelectedItem__DelegateSignature");
static_assert(offsetof(SelectGrid_C_SelectedItem__DelegateSignature, Param_SelectItem) == 0x000000, "Member 'SelectGrid_C_SelectedItem__DelegateSignature::Param_SelectItem' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.ExecuteUbergraph_SelectGrid
// 0x0138 (0x0138 - 0x0000)
struct SelectGrid_C_ExecuteUbergraph_SelectGrid final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D97[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x0008(0x0010)(ReferenceParm)
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectItem;             // 0x0018(0x0118)()
	ESBItemSortType                               K2Node_ComponentBoundEvent_SortType;               // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSelectBag_IsBag;                        // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSelectBag_IsBag_1;                      // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D98[0x1];                                     // 0x0133(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_PageCurrent;            // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectGrid_C_ExecuteUbergraph_SelectGrid) == 0x000008, "Wrong alignment on SelectGrid_C_ExecuteUbergraph_SelectGrid");
static_assert(sizeof(SelectGrid_C_ExecuteUbergraph_SelectGrid) == 0x000138, "Wrong size on SelectGrid_C_ExecuteUbergraph_SelectGrid");
static_assert(offsetof(SelectGrid_C_ExecuteUbergraph_SelectGrid, EntryPoint) == 0x000000, "Member 'SelectGrid_C_ExecuteUbergraph_SelectGrid::EntryPoint' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_ExecuteUbergraph_SelectGrid, K2Node_ComponentBoundEvent_Filters) == 0x000008, "Member 'SelectGrid_C_ExecuteUbergraph_SelectGrid::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_ExecuteUbergraph_SelectGrid, K2Node_ComponentBoundEvent_SelectItem) == 0x000018, "Member 'SelectGrid_C_ExecuteUbergraph_SelectGrid::K2Node_ComponentBoundEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_ExecuteUbergraph_SelectGrid, K2Node_ComponentBoundEvent_SortType) == 0x000130, "Member 'SelectGrid_C_ExecuteUbergraph_SelectGrid::K2Node_ComponentBoundEvent_SortType' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_ExecuteUbergraph_SelectGrid, CallFunc_IsSelectBag_IsBag) == 0x000131, "Member 'SelectGrid_C_ExecuteUbergraph_SelectGrid::CallFunc_IsSelectBag_IsBag' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_ExecuteUbergraph_SelectGrid, CallFunc_IsSelectBag_IsBag_1) == 0x000132, "Member 'SelectGrid_C_ExecuteUbergraph_SelectGrid::CallFunc_IsSelectBag_IsBag_1' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_ExecuteUbergraph_SelectGrid, K2Node_ComponentBoundEvent_PageCurrent) == 0x000134, "Member 'SelectGrid_C_ExecuteUbergraph_SelectGrid::K2Node_ComponentBoundEvent_PageCurrent' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct SelectGrid_C_BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature final
{
public:
	int32                                         PageCurrent;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectGrid_C_BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature) == 0x000004, "Wrong alignment on SelectGrid_C_BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature");
static_assert(sizeof(SelectGrid_C_BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature) == 0x000004, "Wrong size on SelectGrid_C_BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature");
static_assert(offsetof(SelectGrid_C_BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature, PageCurrent) == 0x000000, "Member 'SelectGrid_C_BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature::PageCurrent' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct SelectGrid_C_BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature final
{
public:
	ESBItemSortType                               SortType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectGrid_C_BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong alignment on SelectGrid_C_BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature");
static_assert(sizeof(SelectGrid_C_BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong size on SelectGrid_C_BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature");
static_assert(offsetof(SelectGrid_C_BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature, SortType) == 0x000000, "Member 'SelectGrid_C_BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature::SortType' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct SelectGrid_C_BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           Param_SelectItem;                                  // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SelectGrid_C_BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature) == 0x000008, "Wrong alignment on SelectGrid_C_BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature");
static_assert(sizeof(SelectGrid_C_BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature) == 0x000118, "Wrong size on SelectGrid_C_BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature");
static_assert(offsetof(SelectGrid_C_BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature, Param_SelectItem) == 0x000000, "Member 'SelectGrid_C_BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature::Param_SelectItem' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct SelectGrid_C_BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SelectGrid_C_BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature) == 0x000008, "Wrong alignment on SelectGrid_C_BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature");
static_assert(sizeof(SelectGrid_C_BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature) == 0x000010, "Wrong size on SelectGrid_C_BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature");
static_assert(offsetof(SelectGrid_C_BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature, Filters) == 0x000000, "Member 'SelectGrid_C_BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature::Filters' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.SetStorage
// 0x0050 (0x0050 - 0x0000)
struct SelectGrid_C_SetStorage final
{
public:
	ESBItemSortType                               CallFunc_GetSortType_OutSortType;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D99[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetPageMax_MaxPage;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D9A[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array_1;                          // 0x0020(0x0010)(ReferenceParm)
	TArray<class FString>                         K2Node_Select_Default;                             // 0x0030(0x0010)(ReferenceParm)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectGrid_C_SetStorage) == 0x000008, "Wrong alignment on SelectGrid_C_SetStorage");
static_assert(sizeof(SelectGrid_C_SetStorage) == 0x000050, "Wrong size on SelectGrid_C_SetStorage");
static_assert(offsetof(SelectGrid_C_SetStorage, CallFunc_GetSortType_OutSortType) == 0x000000, "Member 'SelectGrid_C_SetStorage::CallFunc_GetSortType_OutSortType' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetStorage, Temp_bool_Variable) == 0x000001, "Member 'SelectGrid_C_SetStorage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetStorage, K2Node_MakeArray_Array) == 0x000008, "Member 'SelectGrid_C_SetStorage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetStorage, CallFunc_GetPageMax_MaxPage) == 0x000018, "Member 'SelectGrid_C_SetStorage::CallFunc_GetPageMax_MaxPage' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetStorage, CallFunc_IsEmpty_ReturnValue) == 0x00001C, "Member 'SelectGrid_C_SetStorage::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetStorage, K2Node_MakeArray_Array_1) == 0x000020, "Member 'SelectGrid_C_SetStorage::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetStorage, K2Node_Select_Default) == 0x000030, "Member 'SelectGrid_C_SetStorage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetStorage, CallFunc_GetCharacterStorage_ReturnValue) == 0x000040, "Member 'SelectGrid_C_SetStorage::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetStorage, CallFunc_GetTemporallyStorage_ReturnValue) == 0x000048, "Member 'SelectGrid_C_SetStorage::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.SetBag
// 0x0048 (0x0048 - 0x0000)
struct SelectGrid_C_SetBag final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               CallFunc_GetSortType_OutSortType;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D9B[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array_1;                          // 0x0020(0x0010)(ReferenceParm)
	class USBTemporallyStorage*                   CallFunc_GetTemporallyStorage_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_Select_Default;                             // 0x0038(0x0010)(ReferenceParm)
};
static_assert(alignof(SelectGrid_C_SetBag) == 0x000008, "Wrong alignment on SelectGrid_C_SetBag");
static_assert(sizeof(SelectGrid_C_SetBag) == 0x000048, "Wrong size on SelectGrid_C_SetBag");
static_assert(offsetof(SelectGrid_C_SetBag, Temp_bool_Variable) == 0x000000, "Member 'SelectGrid_C_SetBag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetBag, CallFunc_GetSortType_OutSortType) == 0x000001, "Member 'SelectGrid_C_SetBag::CallFunc_GetSortType_OutSortType' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetBag, CallFunc_IsEmpty_ReturnValue) == 0x000002, "Member 'SelectGrid_C_SetBag::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetBag, K2Node_MakeArray_Array) == 0x000008, "Member 'SelectGrid_C_SetBag::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetBag, CallFunc_GetEquipmentBag_ReturnValue) == 0x000018, "Member 'SelectGrid_C_SetBag::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetBag, K2Node_MakeArray_Array_1) == 0x000020, "Member 'SelectGrid_C_SetBag::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetBag, CallFunc_GetTemporallyStorage_ReturnValue) == 0x000030, "Member 'SelectGrid_C_SetBag::CallFunc_GetTemporallyStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetBag, K2Node_Select_Default) == 0x000038, "Member 'SelectGrid_C_SetBag::K2Node_Select_Default' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.SetBaseFilterSimple
// 0x0018 (0x0018 - 0x0000)
struct SelectGrid_C_SetBaseFilterSimple final
{
public:
	EItemFilterType                               Filter;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D9C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           AddFilter;                                         // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(SelectGrid_C_SetBaseFilterSimple) == 0x000008, "Wrong alignment on SelectGrid_C_SetBaseFilterSimple");
static_assert(sizeof(SelectGrid_C_SetBaseFilterSimple) == 0x000018, "Wrong size on SelectGrid_C_SetBaseFilterSimple");
static_assert(offsetof(SelectGrid_C_SetBaseFilterSimple, Filter) == 0x000000, "Member 'SelectGrid_C_SetBaseFilterSimple::Filter' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetBaseFilterSimple, AddFilter) == 0x000008, "Member 'SelectGrid_C_SetBaseFilterSimple::AddFilter' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.SetBaseFilterCustom
// 0x0010 (0x0010 - 0x0000)
struct SelectGrid_C_SetBaseFilterCustom final
{
public:
	struct FFilterGroup                           Filter;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SelectGrid_C_SetBaseFilterCustom) == 0x000008, "Wrong alignment on SelectGrid_C_SetBaseFilterCustom");
static_assert(sizeof(SelectGrid_C_SetBaseFilterCustom) == 0x000010, "Wrong size on SelectGrid_C_SetBaseFilterCustom");
static_assert(offsetof(SelectGrid_C_SetBaseFilterCustom, Filter) == 0x000000, "Member 'SelectGrid_C_SetBaseFilterCustom::Filter' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.SetBaseFilteVerbose
// 0x0010 (0x0010 - 0x0000)
struct SelectGrid_C_SetBaseFilteVerbose final
{
public:
	TArray<struct FFilterGroup>                   BaseFilter;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SelectGrid_C_SetBaseFilteVerbose) == 0x000008, "Wrong alignment on SelectGrid_C_SetBaseFilteVerbose");
static_assert(sizeof(SelectGrid_C_SetBaseFilteVerbose) == 0x000010, "Wrong size on SelectGrid_C_SetBaseFilteVerbose");
static_assert(offsetof(SelectGrid_C_SetBaseFilteVerbose, BaseFilter) == 0x000000, "Member 'SelectGrid_C_SetBaseFilteVerbose::BaseFilter' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.SetHoverdStorage
// 0x00B0 (0x00B0 - 0x0000)
struct SelectGrid_C_SetHoverdStorage final
{
public:
	bool                                          Param_IsHovered;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D9D[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D9E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0060(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0088(0x0028)()
};
static_assert(alignof(SelectGrid_C_SetHoverdStorage) == 0x000008, "Wrong alignment on SelectGrid_C_SetHoverdStorage");
static_assert(sizeof(SelectGrid_C_SetHoverdStorage) == 0x0000B0, "Wrong size on SelectGrid_C_SetHoverdStorage");
static_assert(offsetof(SelectGrid_C_SetHoverdStorage, Param_IsHovered) == 0x000000, "Member 'SelectGrid_C_SetHoverdStorage::Param_IsHovered' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdStorage, Temp_bool_Variable) == 0x000001, "Member 'SelectGrid_C_SetHoverdStorage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdStorage, Temp_bool_Variable_1) == 0x000002, "Member 'SelectGrid_C_SetHoverdStorage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdStorage, K2Node_MakeStruct_LinearColor) == 0x000004, "Member 'SelectGrid_C_SetHoverdStorage::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdStorage, K2Node_MakeStruct_LinearColor_1) == 0x000014, "Member 'SelectGrid_C_SetHoverdStorage::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdStorage, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'SelectGrid_C_SetHoverdStorage::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdStorage, K2Node_Select_Default) == 0x000050, "Member 'SelectGrid_C_SetHoverdStorage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdStorage, K2Node_MakeStruct_SlateColor_1) == 0x000060, "Member 'SelectGrid_C_SetHoverdStorage::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdStorage, K2Node_Select_Default_1) == 0x000088, "Member 'SelectGrid_C_SetHoverdStorage::K2Node_Select_Default_1' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.SetHoverdBag
// 0x00B0 (0x00B0 - 0x0000)
struct SelectGrid_C_SetHoverdBag final
{
public:
	bool                                          Param_IsHovered;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D9F[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0068(0x0028)()
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectGrid_C_SetHoverdBag) == 0x000008, "Wrong alignment on SelectGrid_C_SetHoverdBag");
static_assert(sizeof(SelectGrid_C_SetHoverdBag) == 0x0000B0, "Wrong size on SelectGrid_C_SetHoverdBag");
static_assert(offsetof(SelectGrid_C_SetHoverdBag, Param_IsHovered) == 0x000000, "Member 'SelectGrid_C_SetHoverdBag::Param_IsHovered' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdBag, Temp_bool_Variable) == 0x000001, "Member 'SelectGrid_C_SetHoverdBag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdBag, Temp_bool_Variable_1) == 0x000002, "Member 'SelectGrid_C_SetHoverdBag::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdBag, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'SelectGrid_C_SetHoverdBag::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdBag, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'SelectGrid_C_SetHoverdBag::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdBag, K2Node_MakeStruct_LinearColor) == 0x000058, "Member 'SelectGrid_C_SetHoverdBag::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdBag, K2Node_Select_Default) == 0x000068, "Member 'SelectGrid_C_SetHoverdBag::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdBag, K2Node_MakeStruct_LinearColor_1) == 0x000090, "Member 'SelectGrid_C_SetHoverdBag::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetHoverdBag, K2Node_Select_Default_1) == 0x0000A0, "Member 'SelectGrid_C_SetHoverdBag::K2Node_Select_Default_1' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.SetFilterType
// 0x0001 (0x0001 - 0x0000)
struct SelectGrid_C_SetFilterType final
{
public:
	EFilter_Type                                  FilterType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectGrid_C_SetFilterType) == 0x000001, "Wrong alignment on SelectGrid_C_SetFilterType");
static_assert(sizeof(SelectGrid_C_SetFilterType) == 0x000001, "Wrong size on SelectGrid_C_SetFilterType");
static_assert(offsetof(SelectGrid_C_SetFilterType, FilterType) == 0x000000, "Member 'SelectGrid_C_SetFilterType::FilterType' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.SetBaseSortType
// 0x0002 (0x0002 - 0x0000)
struct SelectGrid_C_SetBaseSortType final
{
public:
	ESBSortFilterSaveType                         SaveType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             SortTypeCategory;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectGrid_C_SetBaseSortType) == 0x000001, "Wrong alignment on SelectGrid_C_SetBaseSortType");
static_assert(sizeof(SelectGrid_C_SetBaseSortType) == 0x000002, "Wrong size on SelectGrid_C_SetBaseSortType");
static_assert(offsetof(SelectGrid_C_SetBaseSortType, SaveType) == 0x000000, "Member 'SelectGrid_C_SetBaseSortType::SaveType' has a wrong offset!");
static_assert(offsetof(SelectGrid_C_SetBaseSortType, SortTypeCategory) == 0x000001, "Member 'SelectGrid_C_SetBaseSortType::SortTypeCategory' has a wrong offset!");

// Function SelectGrid.SelectGrid_C.IsSelectBag
// 0x0001 (0x0001 - 0x0000)
struct SelectGrid_C_IsSelectBag final
{
public:
	bool                                          IsBag;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectGrid_C_IsSelectBag) == 0x000001, "Wrong alignment on SelectGrid_C_IsSelectBag");
static_assert(sizeof(SelectGrid_C_IsSelectBag) == 0x000001, "Wrong size on SelectGrid_C_IsSelectBag");
static_assert(offsetof(SelectGrid_C_IsSelectBag, IsBag) == 0x000000, "Member 'SelectGrid_C_IsSelectBag::IsBag' has a wrong offset!");

}

