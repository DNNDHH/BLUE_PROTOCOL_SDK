#pragma once

 

// Package: SpecialViewSelect

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SpecialViewSelect.SpecialViewSelect_C.OnSelected__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct SpecialViewSelect_C_OnSelected__DelegateSignature final
{
public:
	struct FOwnItemInfo                           OnSelect;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SpecialViewSelect_C_OnSelected__DelegateSignature) == 0x000008, "Wrong alignment on SpecialViewSelect_C_OnSelected__DelegateSignature");
static_assert(sizeof(SpecialViewSelect_C_OnSelected__DelegateSignature) == 0x000118, "Wrong size on SpecialViewSelect_C_OnSelected__DelegateSignature");
static_assert(offsetof(SpecialViewSelect_C_OnSelected__DelegateSignature, OnSelect) == 0x000000, "Member 'SpecialViewSelect_C_OnSelected__DelegateSignature::OnSelect' has a wrong offset!");

// Function SpecialViewSelect.SpecialViewSelect_C.ExecuteUbergraph_SpecialViewSelect
// 0x0118 (0x0118 - 0x0000)
struct SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6885[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_BP_GetSelectedItem_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpecialViewItem_C*                     K2Node_DynamicCast_AsSpecial_View_Item;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6886[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0048(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0070(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0098(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x00C0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x00E8(0x0028)()
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect) == 0x000008, "Wrong alignment on SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect");
static_assert(sizeof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect) == 0x000118, "Wrong size on SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect");
static_assert(offsetof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect, EntryPoint) == 0x000000, "Member 'SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect, CallFunc_BP_GetSelectedItem_ReturnValue) == 0x000008, "Member 'SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect::CallFunc_BP_GetSelectedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect, K2Node_DynamicCast_AsSpecial_View_Item) == 0x000010, "Member 'SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect::K2Node_DynamicCast_AsSpecial_View_Item' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect, K2Node_MakeStruct_SlateColor_1) == 0x000048, "Member 'SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect, K2Node_MakeStruct_SlateColor_2) == 0x000070, "Member 'SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect, K2Node_MakeStruct_SlateColor_3) == 0x000098, "Member 'SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect, K2Node_MakeStruct_SlateColor_4) == 0x0000C0, "Member 'SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect, K2Node_MakeStruct_SlateColor_5) == 0x0000E8, "Member 'SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect, K2Node_ComponentBoundEvent_Item) == 0x000110, "Member 'SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect::K2Node_ComponentBoundEvent_Item' has a wrong offset!");

// Function SpecialViewSelect.SpecialViewSelect_C.BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SpecialViewSelect_C_BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpecialViewSelect_C_BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature) == 0x000008, "Wrong alignment on SpecialViewSelect_C_BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature");
static_assert(sizeof(SpecialViewSelect_C_BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature) == 0x000008, "Wrong size on SpecialViewSelect_C_BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature");
static_assert(offsetof(SpecialViewSelect_C_BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature, Item) == 0x000000, "Member 'SpecialViewSelect_C_BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature::Item' has a wrong offset!");

// Function SpecialViewSelect.SpecialViewSelect_C.InitializeList
// 0x0150 (0x0150 - 0x0000)
struct SpecialViewSelect_C_InitializeList final
{
public:
	TArray<struct FOwnItemInfo>                   Additems;                                          // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6887[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USpecialViewItem_C*                     CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0028(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6888[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpecialViewSelect_C_InitializeList) == 0x000008, "Wrong alignment on SpecialViewSelect_C_InitializeList");
static_assert(sizeof(SpecialViewSelect_C_InitializeList) == 0x000150, "Wrong size on SpecialViewSelect_C_InitializeList");
static_assert(offsetof(SpecialViewSelect_C_InitializeList, Additems) == 0x000000, "Member 'SpecialViewSelect_C_InitializeList::Additems' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_InitializeList, Temp_int_Array_Index_Variable) == 0x000010, "Member 'SpecialViewSelect_C_InitializeList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_InitializeList, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'SpecialViewSelect_C_InitializeList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_InitializeList, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'SpecialViewSelect_C_InitializeList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_InitializeList, CallFunc_Create_ReturnValue) == 0x000020, "Member 'SpecialViewSelect_C_InitializeList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_InitializeList, CallFunc_Array_Get_Item) == 0x000028, "Member 'SpecialViewSelect_C_InitializeList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_InitializeList, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'SpecialViewSelect_C_InitializeList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_InitializeList, CallFunc_Less_IntInt_ReturnValue) == 0x000144, "Member 'SpecialViewSelect_C_InitializeList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialViewSelect_C_InitializeList, CallFunc_Array_Add_ReturnValue) == 0x000148, "Member 'SpecialViewSelect_C_InitializeList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

