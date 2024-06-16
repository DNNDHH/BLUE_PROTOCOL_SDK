#pragma once

 

// Package: FilterSelector

#include "Basic.hpp"

#include "Filter_Item_structs.hpp"
#include "UMG_structs.hpp"
#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function FilterSelector.FilterSelector_C.OnFilterApply__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct FilterSelector_C_OnFilterApply__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(FilterSelector_C_OnFilterApply__DelegateSignature) == 0x000008, "Wrong alignment on FilterSelector_C_OnFilterApply__DelegateSignature");
static_assert(sizeof(FilterSelector_C_OnFilterApply__DelegateSignature) == 0x000010, "Wrong size on FilterSelector_C_OnFilterApply__DelegateSignature");
static_assert(offsetof(FilterSelector_C_OnFilterApply__DelegateSignature, Filters) == 0x000000, "Member 'FilterSelector_C_OnFilterApply__DelegateSignature::Filters' has a wrong offset!");

// Function FilterSelector.FilterSelector_C.ExecuteUbergraph_FilterSelector
// 0x00F0 (0x00F0 - 0x0000)
struct FilterSelector_C_ExecuteUbergraph_FilterSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USortVSpliter_C*                        CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9799[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   CallFunc_GetFilters_Filter1;                       // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_979A[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBItemFilterWidgetBase*                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFilter_Type                                  K2Node_CustomEvent_Filter_Type;                    // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  K2Node_CustomEvent_FilterType;                     // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible__Visibility;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible__Visibility_1;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_979B[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_979C[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible__Visibility_2;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible__Visibility_3;                  // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0067(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible__Visibility_4;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_979D[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible__Visibility_5;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_979E[0x2];                                     // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_979F[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilter_Item                           CallFunc_FindLatestFilterLayouts_FilterData1;      // 0x0080(0x0018)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97A0[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item_1;                         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBItemFilterWidgetBase*                CallFunc_Create_ReturnValue_1;                     // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97A1[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_6;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_2;      // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_3;      // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_4;      // 0x00C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_5;      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_6;      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_7;      // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97A2[0x1];                                     // 0x00CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_7;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible__Visibility_6;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97A3[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_8;                  // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible__Visibility_7;                  // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x00E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterSelector_C_ExecuteUbergraph_FilterSelector) == 0x000008, "Wrong alignment on FilterSelector_C_ExecuteUbergraph_FilterSelector");
static_assert(sizeof(FilterSelector_C_ExecuteUbergraph_FilterSelector) == 0x0000F0, "Wrong size on FilterSelector_C_ExecuteUbergraph_FilterSelector");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, EntryPoint) == 0x000000, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, Temp_int_Array_Index_Variable) == 0x000004, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Create_ReturnValue) == 0x000008, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, K2Node_Event_IsDesignTime) == 0x000010, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_GetFilters_Filter1) == 0x000018, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_GetFilters_Filter1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Get_Item) == 0x000030, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Add_ReturnValue_1) == 0x000044, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, Temp_int_Array_Index_Variable_1) == 0x000048, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00004C, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, K2Node_CustomEvent_Filter_Type) == 0x00004D, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::K2Node_CustomEvent_Filter_Type' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, K2Node_CustomEvent_FilterType) == 0x00004E, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::K2Node_CustomEvent_FilterType' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Not_PreBool_ReturnValue) == 0x00004F, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_IsVisible__Visibility) == 0x000050, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_IsVisible__Visibility' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_IsVisible__Visibility_1) == 0x000051, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_IsVisible__Visibility_1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_BooleanOR_ReturnValue) == 0x000052, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_GetChildrenCount_ReturnValue) == 0x000054, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Add_ReturnValue_2) == 0x00005C, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Add_ReturnValue_3) == 0x000060, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_IsVisible__Visibility_2) == 0x000064, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_IsVisible__Visibility_2' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_IsVisible__Visibility_3) == 0x000065, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_IsVisible__Visibility_3' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_BooleanOR_ReturnValue_1) == 0x000066, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_BooleanOR_ReturnValue_2) == 0x000067, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Add_ReturnValue_4) == 0x000068, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_IsVisible__Visibility_4) == 0x00006C, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_IsVisible__Visibility_4' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_BooleanOR_ReturnValue_3) == 0x00006D, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Add_ReturnValue_5) == 0x000070, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_IsVisible__Visibility_5) == 0x000074, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_IsVisible__Visibility_5' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_BooleanOR_ReturnValue_4) == 0x000075, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, Temp_int_Loop_Counter_Variable) == 0x000078, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_FindLatestFilterLayouts_FilterData1) == 0x000080, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_FindLatestFilterLayouts_FilterData1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Get_Item_1) == 0x0000A0, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Create_ReturnValue_1) == 0x0000A8, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x0000B0, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_AddChild_ReturnValue_1) == 0x0000B8, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Add_ReturnValue_6) == 0x0000C0, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_EqualEqual_ClassClass_ReturnValue_1) == 0x0000C4, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_EqualEqual_ClassClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_EqualEqual_ClassClass_ReturnValue_2) == 0x0000C5, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_EqualEqual_ClassClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_EqualEqual_ClassClass_ReturnValue_3) == 0x0000C6, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_EqualEqual_ClassClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_EqualEqual_ClassClass_ReturnValue_4) == 0x0000C7, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_EqualEqual_ClassClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_EqualEqual_ClassClass_ReturnValue_5) == 0x0000C8, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_EqualEqual_ClassClass_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_EqualEqual_ClassClass_ReturnValue_6) == 0x0000C9, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_EqualEqual_ClassClass_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_EqualEqual_ClassClass_ReturnValue_7) == 0x0000CA, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_EqualEqual_ClassClass_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Length_ReturnValue_1) == 0x0000CC, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Add_IntInt_ReturnValue) == 0x0000D0, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Add_ReturnValue_7) == 0x0000D4, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Add_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_IsVisible__Visibility_6) == 0x0000D8, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_IsVisible__Visibility_6' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_BooleanOR_ReturnValue_5) == 0x0000D9, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Array_Add_ReturnValue_8) == 0x0000DC, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Array_Add_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, Temp_int_Loop_Counter_Variable_1) == 0x0000E0, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_IsVisible__Visibility_7) == 0x0000E4, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_IsVisible__Visibility_7' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E5, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_BooleanOR_ReturnValue_6) == 0x0000E6, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_BooleanAND_ReturnValue) == 0x0000E7, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_ExecuteUbergraph_FilterSelector, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000E8, "Member 'FilterSelector_C_ExecuteUbergraph_FilterSelector::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function FilterSelector.FilterSelector_C.ChangeFilterType
// 0x0001 (0x0001 - 0x0000)
struct FilterSelector_C_ChangeFilterType final
{
public:
	EFilter_Type                                  FilterType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterSelector_C_ChangeFilterType) == 0x000001, "Wrong alignment on FilterSelector_C_ChangeFilterType");
static_assert(sizeof(FilterSelector_C_ChangeFilterType) == 0x000001, "Wrong size on FilterSelector_C_ChangeFilterType");
static_assert(offsetof(FilterSelector_C_ChangeFilterType, FilterType) == 0x000000, "Member 'FilterSelector_C_ChangeFilterType::FilterType' has a wrong offset!");

// Function FilterSelector.FilterSelector_C.ConstructFromExternal
// 0x0001 (0x0001 - 0x0000)
struct FilterSelector_C_ConstructFromExternal final
{
public:
	EFilter_Type                                  Param_Filter_Type;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterSelector_C_ConstructFromExternal) == 0x000001, "Wrong alignment on FilterSelector_C_ConstructFromExternal");
static_assert(sizeof(FilterSelector_C_ConstructFromExternal) == 0x000001, "Wrong size on FilterSelector_C_ConstructFromExternal");
static_assert(offsetof(FilterSelector_C_ConstructFromExternal, Param_Filter_Type) == 0x000000, "Member 'FilterSelector_C_ConstructFromExternal::Param_Filter_Type' has a wrong offset!");

// Function FilterSelector.FilterSelector_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FilterSelector_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterSelector_C_PreConstruct) == 0x000001, "Wrong alignment on FilterSelector_C_PreConstruct");
static_assert(sizeof(FilterSelector_C_PreConstruct) == 0x000001, "Wrong size on FilterSelector_C_PreConstruct");
static_assert(offsetof(FilterSelector_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FilterSelector_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function FilterSelector.FilterSelector_C.PlayAnimIn
// 0x0010 (0x0010 - 0x0000)
struct FilterSelector_C_PlayAnimIn final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97A4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterSelector_C_PlayAnimIn) == 0x000008, "Wrong alignment on FilterSelector_C_PlayAnimIn");
static_assert(sizeof(FilterSelector_C_PlayAnimIn) == 0x000010, "Wrong size on FilterSelector_C_PlayAnimIn");
static_assert(offsetof(FilterSelector_C_PlayAnimIn, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'FilterSelector_C_PlayAnimIn::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_PlayAnimIn, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'FilterSelector_C_PlayAnimIn::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function FilterSelector.FilterSelector_C.PlayAnimOut
// 0x0010 (0x0010 - 0x0000)
struct FilterSelector_C_PlayAnimOut final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97A5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterSelector_C_PlayAnimOut) == 0x000008, "Wrong alignment on FilterSelector_C_PlayAnimOut");
static_assert(sizeof(FilterSelector_C_PlayAnimOut) == 0x000010, "Wrong size on FilterSelector_C_PlayAnimOut");
static_assert(offsetof(FilterSelector_C_PlayAnimOut, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'FilterSelector_C_PlayAnimOut::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_PlayAnimOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'FilterSelector_C_PlayAnimOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function FilterSelector.FilterSelector_C.FindLatestFilterLayouts
// 0x0080 (0x0080 - 0x0000)
struct FilterSelector_C_FindLatestFilterLayouts final
{
public:
	struct FFilter_Item                           FilterData1;                                       // 0x0000(0x0018)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FFilter_Item                           FilterData;                                        // 0x0018(0x0018)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97A6[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0040(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97A7[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilter_Item                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x0060(0x0018)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterSelector_C_FindLatestFilterLayouts) == 0x000008, "Wrong alignment on FilterSelector_C_FindLatestFilterLayouts");
static_assert(sizeof(FilterSelector_C_FindLatestFilterLayouts) == 0x000080, "Wrong size on FilterSelector_C_FindLatestFilterLayouts");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, FilterData1) == 0x000000, "Member 'FilterSelector_C_FindLatestFilterLayouts::FilterData1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, FilterData) == 0x000018, "Member 'FilterSelector_C_FindLatestFilterLayouts::FilterData' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, Temp_int_Array_Index_Variable) == 0x000030, "Member 'FilterSelector_C_FindLatestFilterLayouts::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'FilterSelector_C_FindLatestFilterLayouts::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'FilterSelector_C_FindLatestFilterLayouts::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000040, "Member 'FilterSelector_C_FindLatestFilterLayouts::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, CallFunc_Array_Get_Item) == 0x000050, "Member 'FilterSelector_C_FindLatestFilterLayouts::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'FilterSelector_C_FindLatestFilterLayouts::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, CallFunc_GetDataTableRowFromName_OutRow) == 0x000060, "Member 'FilterSelector_C_FindLatestFilterLayouts::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000078, "Member 'FilterSelector_C_FindLatestFilterLayouts::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, CallFunc_Less_IntInt_ReturnValue) == 0x000079, "Member 'FilterSelector_C_FindLatestFilterLayouts::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_FindLatestFilterLayouts, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00007A, "Member 'FilterSelector_C_FindLatestFilterLayouts::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function FilterSelector.FilterSelector_C.GetFilters
// 0x0058 (0x0058 - 0x0000)
struct FilterSelector_C_GetFilters final
{
public:
	TArray<struct FFilterGroup>                   Filter1;                                           // 0x0000(0x0010)(Parm, OutParm)
	TArray<struct FFilterGroup>                   Filter;                                            // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBItemFilterWidgetBase*                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97A8[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           CallFunc_GetFilters_ReturnValue;                   // 0x0040(0x0010)(ConstParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterSelector_C_GetFilters) == 0x000008, "Wrong alignment on FilterSelector_C_GetFilters");
static_assert(sizeof(FilterSelector_C_GetFilters) == 0x000058, "Wrong size on FilterSelector_C_GetFilters");
static_assert(offsetof(FilterSelector_C_GetFilters, Filter1) == 0x000000, "Member 'FilterSelector_C_GetFilters::Filter1' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_GetFilters, Filter) == 0x000010, "Member 'FilterSelector_C_GetFilters::Filter' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_GetFilters, Temp_int_Array_Index_Variable) == 0x000020, "Member 'FilterSelector_C_GetFilters::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_GetFilters, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'FilterSelector_C_GetFilters::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_GetFilters, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'FilterSelector_C_GetFilters::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_GetFilters, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'FilterSelector_C_GetFilters::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_GetFilters, CallFunc_Array_Get_Item) == 0x000030, "Member 'FilterSelector_C_GetFilters::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_GetFilters, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'FilterSelector_C_GetFilters::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_GetFilters, CallFunc_GetFilters_ReturnValue) == 0x000040, "Member 'FilterSelector_C_GetFilters::CallFunc_GetFilters_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_GetFilters, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'FilterSelector_C_GetFilters::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function FilterSelector.FilterSelector_C.IsAnimInOutPlaying
// 0x0002 (0x0002 - 0x0000)
struct FilterSelector_C_IsAnimInOutPlaying final
{
public:
	bool                                          OutIsPlaying;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterSelector_C_IsAnimInOutPlaying) == 0x000001, "Wrong alignment on FilterSelector_C_IsAnimInOutPlaying");
static_assert(sizeof(FilterSelector_C_IsAnimInOutPlaying) == 0x000002, "Wrong size on FilterSelector_C_IsAnimInOutPlaying");
static_assert(offsetof(FilterSelector_C_IsAnimInOutPlaying, OutIsPlaying) == 0x000000, "Member 'FilterSelector_C_IsAnimInOutPlaying::OutIsPlaying' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_IsAnimInOutPlaying, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'FilterSelector_C_IsAnimInOutPlaying::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function FilterSelector.FilterSelector_C.IsVisible?
// 0x0010 (0x0010 - 0x0000)
struct FilterSelector_C_IsVisible_ final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_Visibility;                                  // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterSelector_C_IsVisible_) == 0x000008, "Wrong alignment on FilterSelector_C_IsVisible_");
static_assert(sizeof(FilterSelector_C_IsVisible_) == 0x000010, "Wrong size on FilterSelector_C_IsVisible_");
static_assert(offsetof(FilterSelector_C_IsVisible_, Widget) == 0x000000, "Member 'FilterSelector_C_IsVisible_::Widget' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_IsVisible_, Param_Visibility) == 0x000008, "Member 'FilterSelector_C_IsVisible_::Param_Visibility' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_IsVisible_, CallFunc_GetVisibility_ReturnValue) == 0x000009, "Member 'FilterSelector_C_IsVisible_::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterSelector_C_IsVisible_, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'FilterSelector_C_IsVisible_::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

