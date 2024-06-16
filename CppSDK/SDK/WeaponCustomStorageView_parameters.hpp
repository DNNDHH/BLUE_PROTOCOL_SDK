#pragma once

 

// Package: WeaponCustomStorageView

#include "Basic.hpp"

#include "SortTypeCategory_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.OnSelectListItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct WeaponCustomStorageView_C_OnSelectListItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponCustomStorageView_C_OnSelectListItem__DelegateSignature) == 0x000008, "Wrong alignment on WeaponCustomStorageView_C_OnSelectListItem__DelegateSignature");
static_assert(sizeof(WeaponCustomStorageView_C_OnSelectListItem__DelegateSignature) == 0x000118, "Wrong size on WeaponCustomStorageView_C_OnSelectListItem__DelegateSignature");
static_assert(offsetof(WeaponCustomStorageView_C_OnSelectListItem__DelegateSignature, SelectItem) == 0x000000, "Member 'WeaponCustomStorageView_C_OnSelectListItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.ExecuteUbergraph_WeaponCustomStorageView
// 0x0130 (0x0130 - 0x0000)
struct WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_ComponentBoundEvent_SortType;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D5B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x0008(0x0010)(ReferenceParm)
	struct FOwnItemInfo                           K2Node_ComponentBoundEvent_SelectData;             // 0x0018(0x0118)()
};
static_assert(alignof(WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView) == 0x000008, "Wrong alignment on WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView");
static_assert(sizeof(WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView) == 0x000130, "Wrong size on WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView");
static_assert(offsetof(WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView, EntryPoint) == 0x000000, "Member 'WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView, K2Node_ComponentBoundEvent_SortType) == 0x000004, "Member 'WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView::K2Node_ComponentBoundEvent_SortType' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView, K2Node_ComponentBoundEvent_Filters) == 0x000008, "Member 'WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView, K2Node_ComponentBoundEvent_SelectData) == 0x000018, "Member 'WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView::K2Node_ComponentBoundEvent_SelectData' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectData;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature) == 0x000008, "Wrong alignment on WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature");
static_assert(sizeof(WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature) == 0x000118, "Wrong size on WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature");
static_assert(offsetof(WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature, SelectData) == 0x000000, "Member 'WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature::SelectData' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature) == 0x000008, "Wrong alignment on WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature");
static_assert(sizeof(WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature) == 0x000010, "Wrong size on WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature");
static_assert(offsetof(WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature, Filters) == 0x000000, "Member 'WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature::Filters' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature final
{
public:
	ESBItemSortType                               SortType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong alignment on WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature");
static_assert(sizeof(WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature) == 0x000001, "Wrong size on WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature");
static_assert(offsetof(WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature, SortType) == 0x000000, "Member 'WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature::SortType' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetBag
// 0x0008 (0x0008 - 0x0000)
struct WeaponCustomStorageView_C_SetBag final
{
public:
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomStorageView_C_SetBag) == 0x000008, "Wrong alignment on WeaponCustomStorageView_C_SetBag");
static_assert(sizeof(WeaponCustomStorageView_C_SetBag) == 0x000008, "Wrong size on WeaponCustomStorageView_C_SetBag");
static_assert(offsetof(WeaponCustomStorageView_C_SetBag, CallFunc_GetEquipmentBag_ReturnValue) == 0x000000, "Member 'WeaponCustomStorageView_C_SetBag::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetStorage
// 0x0008 (0x0008 - 0x0000)
struct WeaponCustomStorageView_C_SetStorage final
{
public:
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomStorageView_C_SetStorage) == 0x000008, "Wrong alignment on WeaponCustomStorageView_C_SetStorage");
static_assert(sizeof(WeaponCustomStorageView_C_SetStorage) == 0x000008, "Wrong size on WeaponCustomStorageView_C_SetStorage");
static_assert(offsetof(WeaponCustomStorageView_C_SetStorage, CallFunc_GetCharacterStorage_ReturnValue) == 0x000000, "Member 'WeaponCustomStorageView_C_SetStorage::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetBaseFilter
// 0x0010 (0x0010 - 0x0000)
struct WeaponCustomStorageView_C_SetBaseFilter final
{
public:
	TArray<struct FFilterGroup>                   BaseFilter;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponCustomStorageView_C_SetBaseFilter) == 0x000008, "Wrong alignment on WeaponCustomStorageView_C_SetBaseFilter");
static_assert(sizeof(WeaponCustomStorageView_C_SetBaseFilter) == 0x000010, "Wrong size on WeaponCustomStorageView_C_SetBaseFilter");
static_assert(offsetof(WeaponCustomStorageView_C_SetBaseFilter, BaseFilter) == 0x000000, "Member 'WeaponCustomStorageView_C_SetBaseFilter::BaseFilter' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetFilterType
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomStorageView_C_SetFilterType final
{
public:
	EFilter_Type                                  FilterType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomStorageView_C_SetFilterType) == 0x000001, "Wrong alignment on WeaponCustomStorageView_C_SetFilterType");
static_assert(sizeof(WeaponCustomStorageView_C_SetFilterType) == 0x000001, "Wrong size on WeaponCustomStorageView_C_SetFilterType");
static_assert(offsetof(WeaponCustomStorageView_C_SetFilterType, FilterType) == 0x000000, "Member 'WeaponCustomStorageView_C_SetFilterType::FilterType' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetSortMode
// 0x0002 (0x0002 - 0x0000)
struct WeaponCustomStorageView_C_SetSortMode final
{
public:
	ESBSortFilterSaveType                         Param_Save_Type;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Param_Sort_Type_Category;                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomStorageView_C_SetSortMode) == 0x000001, "Wrong alignment on WeaponCustomStorageView_C_SetSortMode");
static_assert(sizeof(WeaponCustomStorageView_C_SetSortMode) == 0x000002, "Wrong size on WeaponCustomStorageView_C_SetSortMode");
static_assert(offsetof(WeaponCustomStorageView_C_SetSortMode, Param_Save_Type) == 0x000000, "Member 'WeaponCustomStorageView_C_SetSortMode::Param_Save_Type' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetSortMode, Param_Sort_Type_Category) == 0x000001, "Member 'WeaponCustomStorageView_C_SetSortMode::Param_Sort_Type_Category' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.UpdateStorageData
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomStorageView_C_UpdateStorageData final
{
public:
	bool                                          CallFunc_IsBag_isBag_;                             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomStorageView_C_UpdateStorageData) == 0x000001, "Wrong alignment on WeaponCustomStorageView_C_UpdateStorageData");
static_assert(sizeof(WeaponCustomStorageView_C_UpdateStorageData) == 0x000001, "Wrong size on WeaponCustomStorageView_C_UpdateStorageData");
static_assert(offsetof(WeaponCustomStorageView_C_UpdateStorageData, CallFunc_IsBag_isBag_) == 0x000000, "Member 'WeaponCustomStorageView_C_UpdateStorageData::CallFunc_IsBag_isBag_' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetHoverdStorage
// 0x00B0 (0x00B0 - 0x0000)
struct WeaponCustomStorageView_C_SetHoverdStorage final
{
public:
	bool                                          Param_IsHovered;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D5C[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D5D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0060(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0088(0x0028)()
};
static_assert(alignof(WeaponCustomStorageView_C_SetHoverdStorage) == 0x000008, "Wrong alignment on WeaponCustomStorageView_C_SetHoverdStorage");
static_assert(sizeof(WeaponCustomStorageView_C_SetHoverdStorage) == 0x0000B0, "Wrong size on WeaponCustomStorageView_C_SetHoverdStorage");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdStorage, Param_IsHovered) == 0x000000, "Member 'WeaponCustomStorageView_C_SetHoverdStorage::Param_IsHovered' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdStorage, Temp_bool_Variable) == 0x000001, "Member 'WeaponCustomStorageView_C_SetHoverdStorage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdStorage, Temp_bool_Variable_1) == 0x000002, "Member 'WeaponCustomStorageView_C_SetHoverdStorage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdStorage, K2Node_MakeStruct_LinearColor) == 0x000004, "Member 'WeaponCustomStorageView_C_SetHoverdStorage::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdStorage, K2Node_MakeStruct_LinearColor_1) == 0x000014, "Member 'WeaponCustomStorageView_C_SetHoverdStorage::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdStorage, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'WeaponCustomStorageView_C_SetHoverdStorage::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdStorage, K2Node_Select_Default) == 0x000050, "Member 'WeaponCustomStorageView_C_SetHoverdStorage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdStorage, K2Node_MakeStruct_SlateColor_1) == 0x000060, "Member 'WeaponCustomStorageView_C_SetHoverdStorage::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdStorage, K2Node_Select_Default_1) == 0x000088, "Member 'WeaponCustomStorageView_C_SetHoverdStorage::K2Node_Select_Default_1' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetHoverdBag
// 0x00B0 (0x00B0 - 0x0000)
struct WeaponCustomStorageView_C_SetHoverdBag final
{
public:
	bool                                          Param_IsHovered;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D5E[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0068(0x0028)()
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomStorageView_C_SetHoverdBag) == 0x000008, "Wrong alignment on WeaponCustomStorageView_C_SetHoverdBag");
static_assert(sizeof(WeaponCustomStorageView_C_SetHoverdBag) == 0x0000B0, "Wrong size on WeaponCustomStorageView_C_SetHoverdBag");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdBag, Param_IsHovered) == 0x000000, "Member 'WeaponCustomStorageView_C_SetHoverdBag::Param_IsHovered' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdBag, Temp_bool_Variable) == 0x000001, "Member 'WeaponCustomStorageView_C_SetHoverdBag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdBag, Temp_bool_Variable_1) == 0x000002, "Member 'WeaponCustomStorageView_C_SetHoverdBag::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdBag, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WeaponCustomStorageView_C_SetHoverdBag::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdBag, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'WeaponCustomStorageView_C_SetHoverdBag::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdBag, K2Node_MakeStruct_LinearColor) == 0x000058, "Member 'WeaponCustomStorageView_C_SetHoverdBag::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdBag, K2Node_Select_Default) == 0x000068, "Member 'WeaponCustomStorageView_C_SetHoverdBag::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdBag, K2Node_MakeStruct_LinearColor_1) == 0x000090, "Member 'WeaponCustomStorageView_C_SetHoverdBag::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomStorageView_C_SetHoverdBag, K2Node_Select_Default_1) == 0x0000A0, "Member 'WeaponCustomStorageView_C_SetHoverdBag::K2Node_Select_Default_1' has a wrong offset!");

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.IsBag
// 0x0001 (0x0001 - 0x0000)
struct WeaponCustomStorageView_C_IsBag final
{
public:
	bool                                          Param_IsBag_;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponCustomStorageView_C_IsBag) == 0x000001, "Wrong alignment on WeaponCustomStorageView_C_IsBag");
static_assert(sizeof(WeaponCustomStorageView_C_IsBag) == 0x000001, "Wrong size on WeaponCustomStorageView_C_IsBag");
static_assert(offsetof(WeaponCustomStorageView_C_IsBag, Param_IsBag_) == 0x000000, "Member 'WeaponCustomStorageView_C_IsBag::Param_IsBag_' has a wrong offset!");

}

