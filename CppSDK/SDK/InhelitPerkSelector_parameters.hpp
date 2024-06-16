#pragma once

 

// Package: InhelitPerkSelector

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function InhelitPerkSelector.InhelitPerkSelector_C.OnSelectChange__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct InhelitPerkSelector_C_OnSelectChange__DelegateSignature final
{
public:
	struct FSBStackBPerk                          Before;                                            // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBStackBPerk                          Select;                                            // 0x0030(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(InhelitPerkSelector_C_OnSelectChange__DelegateSignature) == 0x000008, "Wrong alignment on InhelitPerkSelector_C_OnSelectChange__DelegateSignature");
static_assert(sizeof(InhelitPerkSelector_C_OnSelectChange__DelegateSignature) == 0x000060, "Wrong size on InhelitPerkSelector_C_OnSelectChange__DelegateSignature");
static_assert(offsetof(InhelitPerkSelector_C_OnSelectChange__DelegateSignature, Before) == 0x000000, "Member 'InhelitPerkSelector_C_OnSelectChange__DelegateSignature::Before' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_OnSelectChange__DelegateSignature, Select) == 0x000030, "Member 'InhelitPerkSelector_C_OnSelectChange__DelegateSignature::Select' has a wrong offset!");

// Function InhelitPerkSelector.InhelitPerkSelector_C.ExecuteUbergraph_InhelitPerkSelector
// 0x0138 (0x0138 - 0x0000)
struct InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6889[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkSlotButton_C*                      K2Node_CustomEvent_SelectedButton;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBPerk                          CallFunc_Map_Find_Value;                           // 0x0010(0x0030)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_688A[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0070(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0098(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x00C0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x00E8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x0110(0x0028)()
};
static_assert(alignof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector) == 0x000008, "Wrong alignment on InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector");
static_assert(sizeof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector) == 0x000138, "Wrong size on InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector");
static_assert(offsetof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector, EntryPoint) == 0x000000, "Member 'InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector, K2Node_CustomEvent_SelectedButton) == 0x000008, "Member 'InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector::K2Node_CustomEvent_SelectedButton' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector, CallFunc_Map_Find_Value) == 0x000010, "Member 'InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector, K2Node_MakeStruct_SlateColor_1) == 0x000070, "Member 'InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector, K2Node_MakeStruct_SlateColor_2) == 0x000098, "Member 'InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector, K2Node_MakeStruct_SlateColor_3) == 0x0000C0, "Member 'InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector, K2Node_MakeStruct_SlateColor_4) == 0x0000E8, "Member 'InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector, K2Node_MakeStruct_SlateColor_5) == 0x000110, "Member 'InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");

// Function InhelitPerkSelector.InhelitPerkSelector_C.OnSelectListItem
// 0x0008 (0x0008 - 0x0000)
struct InhelitPerkSelector_C_OnSelectListItem final
{
public:
	class UPerkSlotButton_C*                      SelectedButton;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InhelitPerkSelector_C_OnSelectListItem) == 0x000008, "Wrong alignment on InhelitPerkSelector_C_OnSelectListItem");
static_assert(sizeof(InhelitPerkSelector_C_OnSelectListItem) == 0x000008, "Wrong size on InhelitPerkSelector_C_OnSelectListItem");
static_assert(offsetof(InhelitPerkSelector_C_OnSelectListItem, SelectedButton) == 0x000000, "Member 'InhelitPerkSelector_C_OnSelectListItem::SelectedButton' has a wrong offset!");

// Function InhelitPerkSelector.InhelitPerkSelector_C.GenerateList
// 0x0100 (0x0100 - 0x0000)
struct InhelitPerkSelector_C_GenerateList final
{
public:
	int32                                         UsedSlot;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_688B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkSlotButton_C*                      CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPerkContains_IsContains;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_688C[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_688D[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBPerk                          CallFunc_Array_Get_Item;                           // 0x0030(0x0030)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_688E[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x0068(0x0018)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPerkSlotButton_C* SelectedButton)> K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_688F[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBPerk                          CallFunc_Array_Get_Item_1;                         // 0x00A8(0x0030)()
	bool                                          CallFunc_IsPerkSelected_bSelected;                 // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6890[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindFusionItemMaster_IsValid_1;           // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6891[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster_1; // 0x00E4(0x0018)(NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InhelitPerkSelector_C_GenerateList) == 0x000008, "Wrong alignment on InhelitPerkSelector_C_GenerateList");
static_assert(sizeof(InhelitPerkSelector_C_GenerateList) == 0x000100, "Wrong size on InhelitPerkSelector_C_GenerateList");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, UsedSlot) == 0x000000, "Member 'InhelitPerkSelector_C_GenerateList::UsedSlot' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, Temp_int_Array_Index_Variable) == 0x000004, "Member 'InhelitPerkSelector_C_GenerateList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'InhelitPerkSelector_C_GenerateList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'InhelitPerkSelector_C_GenerateList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Create_ReturnValue) == 0x000018, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_IsPerkContains_IsContains) == 0x000020, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_IsPerkContains_IsContains' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, Temp_int_Loop_Counter_Variable_1) == 0x000028, "Member 'InhelitPerkSelector_C_GenerateList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Array_Get_Item) == 0x000030, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_FindFusionItemMaster_IsValid) == 0x000065, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x000068, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000080, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Add_IntInt_ReturnValue_2) == 0x000084, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'InhelitPerkSelector_C_GenerateList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000098, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0000A0, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_IsPerkSelected_bSelected) == 0x0000D8, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_IsPerkSelected_bSelected' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Array_Length_ReturnValue_1) == 0x0000DC, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E0, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_FindFusionItemMaster_IsValid_1) == 0x0000E1, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_FindFusionItemMaster_IsValid_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_FindFusionItemMaster_OutFusionItemMaster_1) == 0x0000E4, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_FindFusionItemMaster_OutFusionItemMaster_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Greater_IntInt_ReturnValue) == 0x0000FC, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_BooleanOR_ReturnValue) == 0x0000FD, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_BooleanOR_ReturnValue_1) == 0x0000FE, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_GenerateList, CallFunc_Not_PreBool_ReturnValue) == 0x0000FF, "Member 'InhelitPerkSelector_C_GenerateList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function InhelitPerkSelector.InhelitPerkSelector_C.AllSelectNone
// 0x0030 (0x0030 - 0x0000)
struct InhelitPerkSelector_C_AllSelectNone final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6892[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6893[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkSlotButton_C*                      K2Node_DynamicCast_AsPerk_Slot_Button;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6894[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6895[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InhelitPerkSelector_C_AllSelectNone) == 0x000008, "Wrong alignment on InhelitPerkSelector_C_AllSelectNone");
static_assert(sizeof(InhelitPerkSelector_C_AllSelectNone) == 0x000030, "Wrong size on InhelitPerkSelector_C_AllSelectNone");
static_assert(offsetof(InhelitPerkSelector_C_AllSelectNone, Temp_int_Variable) == 0x000000, "Member 'InhelitPerkSelector_C_AllSelectNone::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_AllSelectNone, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'InhelitPerkSelector_C_AllSelectNone::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_AllSelectNone, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'InhelitPerkSelector_C_AllSelectNone::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_AllSelectNone, K2Node_DynamicCast_AsPerk_Slot_Button) == 0x000018, "Member 'InhelitPerkSelector_C_AllSelectNone::K2Node_DynamicCast_AsPerk_Slot_Button' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_AllSelectNone, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'InhelitPerkSelector_C_AllSelectNone::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_AllSelectNone, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'InhelitPerkSelector_C_AllSelectNone::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_AllSelectNone, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'InhelitPerkSelector_C_AllSelectNone::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_AllSelectNone, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'InhelitPerkSelector_C_AllSelectNone::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function InhelitPerkSelector.InhelitPerkSelector_C.IsPerkSelected
// 0x0080 (0x0080 - 0x0000)
struct InhelitPerkSelector_C_IsPerkSelected final
{
public:
	struct FSBStackBPerk                          Perk;                                              // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bSelected;                                         // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6896[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBPerk                          CallFunc_Array_Get_Item;                           // 0x0040(0x0030)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6897[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InhelitPerkSelector_C_IsPerkSelected) == 0x000008, "Wrong alignment on InhelitPerkSelector_C_IsPerkSelected");
static_assert(sizeof(InhelitPerkSelector_C_IsPerkSelected) == 0x000080, "Wrong size on InhelitPerkSelector_C_IsPerkSelected");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, Perk) == 0x000000, "Member 'InhelitPerkSelector_C_IsPerkSelected::Perk' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, bSelected) == 0x000030, "Member 'InhelitPerkSelector_C_IsPerkSelected::bSelected' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, Temp_int_Array_Index_Variable) == 0x000034, "Member 'InhelitPerkSelector_C_IsPerkSelected::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'InhelitPerkSelector_C_IsPerkSelected::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'InhelitPerkSelector_C_IsPerkSelected::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, CallFunc_Array_Get_Item) == 0x000040, "Member 'InhelitPerkSelector_C_IsPerkSelected::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000070, "Member 'InhelitPerkSelector_C_IsPerkSelected::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000071, "Member 'InhelitPerkSelector_C_IsPerkSelected::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000072, "Member 'InhelitPerkSelector_C_IsPerkSelected::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'InhelitPerkSelector_C_IsPerkSelected::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, CallFunc_BooleanAND_ReturnValue) == 0x000078, "Member 'InhelitPerkSelector_C_IsPerkSelected::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, CallFunc_Less_IntInt_ReturnValue) == 0x000079, "Member 'InhelitPerkSelector_C_IsPerkSelected::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, CallFunc_Not_PreBool_ReturnValue) == 0x00007A, "Member 'InhelitPerkSelector_C_IsPerkSelected::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkSelected, CallFunc_BooleanAND_ReturnValue_1) == 0x00007B, "Member 'InhelitPerkSelector_C_IsPerkSelected::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function InhelitPerkSelector.InhelitPerkSelector_C.IsPerkContains
// 0x0088 (0x0088 - 0x0000)
struct InhelitPerkSelector_C_IsPerkContains final
{
public:
	bool                                          IsContains;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6898[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             SelectedPerk;                                      // 0x0004(0x001C)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6899[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             CallFunc_GetData_data;                             // 0x0030(0x001C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBPerk                          CallFunc_Array_Get_Item;                           // 0x0050(0x0030)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InhelitPerkSelector_C_IsPerkContains) == 0x000008, "Wrong alignment on InhelitPerkSelector_C_IsPerkContains");
static_assert(sizeof(InhelitPerkSelector_C_IsPerkContains) == 0x000088, "Wrong size on InhelitPerkSelector_C_IsPerkContains");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkContains, IsContains) == 0x000000, "Member 'InhelitPerkSelector_C_IsPerkContains::IsContains' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkContains, SelectedPerk) == 0x000004, "Member 'InhelitPerkSelector_C_IsPerkContains::SelectedPerk' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkContains, Temp_int_Array_Index_Variable) == 0x000020, "Member 'InhelitPerkSelector_C_IsPerkContains::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkContains, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'InhelitPerkSelector_C_IsPerkContains::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkContains, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'InhelitPerkSelector_C_IsPerkContains::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkContains, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'InhelitPerkSelector_C_IsPerkContains::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkContains, CallFunc_GetData_data) == 0x000030, "Member 'InhelitPerkSelector_C_IsPerkContains::CallFunc_GetData_data' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkContains, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'InhelitPerkSelector_C_IsPerkContains::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkContains, CallFunc_Array_Get_Item) == 0x000050, "Member 'InhelitPerkSelector_C_IsPerkContains::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkContains, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'InhelitPerkSelector_C_IsPerkContains::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InhelitPerkSelector_C_IsPerkContains, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000081, "Member 'InhelitPerkSelector_C_IsPerkContains::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

