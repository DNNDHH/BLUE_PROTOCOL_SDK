#pragma once

 

// Package: CategoryList_Type1

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CategoryList_Type1.CategoryList_Type1_C.CategoryChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CategoryList_Type1_C_CategoryChanged__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_CategoryChanged__DelegateSignature) == 0x000004, "Wrong alignment on CategoryList_Type1_C_CategoryChanged__DelegateSignature");
static_assert(sizeof(CategoryList_Type1_C_CategoryChanged__DelegateSignature) == 0x000004, "Wrong size on CategoryList_Type1_C_CategoryChanged__DelegateSignature");
static_assert(offsetof(CategoryList_Type1_C_CategoryChanged__DelegateSignature, ItemIndex) == 0x000000, "Member 'CategoryList_Type1_C_CategoryChanged__DelegateSignature::ItemIndex' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.ExecuteUbergraph_CategoryList_Type1
// 0x00A0 (0x00A0 - 0x0000)
struct CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1E[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ListIndex_1;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1F[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ListIndex;                      // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ListIndex)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1A20[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryList_Type1_Group_C*            CallFunc_Map_Find_Value;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A21[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Map_Find_Value_1;                         // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A22[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x006C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A23[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryList_Type1_Item_C*             CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A24[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1) == 0x000008, "Wrong alignment on CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1");
static_assert(sizeof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1) == 0x0000A0, "Wrong size on CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, EntryPoint) == 0x000000, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::EntryPoint' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, Temp_int_Array_Index_Variable) == 0x000004, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, K2Node_Event_IsDesignTime) == 0x000008, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_Array_Get_Item) == 0x000010, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, K2Node_CustomEvent_ListIndex_1) == 0x000028, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::K2Node_CustomEvent_ListIndex_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00002D, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, K2Node_CustomEvent_ListIndex) == 0x000030, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::K2Node_CustomEvent_ListIndex' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_Map_Find_Value) == 0x000048, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_Map_Find_ReturnValue) == 0x000050, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_Map_Find_Value_1) == 0x000058, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_Map_Find_ReturnValue_1) == 0x000068, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_Map_Contains_ReturnValue) == 0x000069, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, K2Node_MakeStruct_Margin) == 0x00006C, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_Create_ReturnValue) == 0x000080, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000088, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_Array_Add_ReturnValue) == 0x000090, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000098, "Member 'CategoryList_Type1_C_ExecuteUbergraph_CategoryList_Type1::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.UpdateClickListItem
// 0x0004 (0x0004 - 0x0000)
struct CategoryList_Type1_C_UpdateClickListItem final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_UpdateClickListItem) == 0x000004, "Wrong alignment on CategoryList_Type1_C_UpdateClickListItem");
static_assert(sizeof(CategoryList_Type1_C_UpdateClickListItem) == 0x000004, "Wrong size on CategoryList_Type1_C_UpdateClickListItem");
static_assert(offsetof(CategoryList_Type1_C_UpdateClickListItem, ListIndex) == 0x000000, "Member 'CategoryList_Type1_C_UpdateClickListItem::ListIndex' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.ClickListItem
// 0x0004 (0x0004 - 0x0000)
struct CategoryList_Type1_C_ClickListItem final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_ClickListItem) == 0x000004, "Wrong alignment on CategoryList_Type1_C_ClickListItem");
static_assert(sizeof(CategoryList_Type1_C_ClickListItem) == 0x000004, "Wrong size on CategoryList_Type1_C_ClickListItem");
static_assert(offsetof(CategoryList_Type1_C_ClickListItem, ListIndex) == 0x000000, "Member 'CategoryList_Type1_C_ClickListItem::ListIndex' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CategoryList_Type1_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryList_Type1_C_PreConstruct) == 0x000001, "Wrong alignment on CategoryList_Type1_C_PreConstruct");
static_assert(sizeof(CategoryList_Type1_C_PreConstruct) == 0x000001, "Wrong size on CategoryList_Type1_C_PreConstruct");
static_assert(offsetof(CategoryList_Type1_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CategoryList_Type1_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.SetCategoryListSelected
// 0x0060 (0x0060 - 0x0000)
struct CategoryList_Type1_C_SetCategoryListSelected final
{
public:
	int32                                         InListIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A25[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A26[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCategoryList_Type1_Group_C*>    CallFunc_Map_Values_Values;                        // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCategoryList_Type1_Group_C*            CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A27[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryList_Type1_Item_C*             CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A28[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCategoryList_Type1_Group_C*            CallFunc_Map_Find_Value;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryList_Type1_C_SetCategoryListSelected) == 0x000008, "Wrong alignment on CategoryList_Type1_C_SetCategoryListSelected");
static_assert(sizeof(CategoryList_Type1_C_SetCategoryListSelected) == 0x000060, "Wrong size on CategoryList_Type1_C_SetCategoryListSelected");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, InListIndex) == 0x000000, "Member 'CategoryList_Type1_C_SetCategoryListSelected::InListIndex' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, bSelected) == 0x000004, "Member 'CategoryList_Type1_C_SetCategoryListSelected::bSelected' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, LoopEnd) == 0x000008, "Member 'CategoryList_Type1_C_SetCategoryListSelected::LoopEnd' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, Temp_bool_Variable) == 0x00000D, "Member 'CategoryList_Type1_C_SetCategoryListSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_Not_PreBool_ReturnValue) == 0x00000E, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, Temp_int_Variable) == 0x000010, "Member 'CategoryList_Type1_C_SetCategoryListSelected::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_Map_Values_Values) == 0x000018, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_Multiply_IntInt_ReturnValue) == 0x000028, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_Array_Get_Item) == 0x000030, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000038, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000039, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000048, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_Array_LastIndex_ReturnValue) == 0x00004C, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_Map_Find_Value) == 0x000050, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetCategoryListSelected, CallFunc_Map_Find_ReturnValue) == 0x000058, "Member 'CategoryList_Type1_C_SetCategoryListSelected::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.GetSelectedID
// 0x0008 (0x0008 - 0x0000)
struct CategoryList_Type1_C_GetSelectedID final
{
public:
	int32                                         Output;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_GetSelectedID) == 0x000004, "Wrong alignment on CategoryList_Type1_C_GetSelectedID");
static_assert(sizeof(CategoryList_Type1_C_GetSelectedID) == 0x000008, "Wrong size on CategoryList_Type1_C_GetSelectedID");
static_assert(offsetof(CategoryList_Type1_C_GetSelectedID, Output) == 0x000000, "Member 'CategoryList_Type1_C_GetSelectedID::Output' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_GetSelectedID, CallFunc_Array_Get_Item) == 0x000004, "Member 'CategoryList_Type1_C_GetSelectedID::CallFunc_Array_Get_Item' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.GetSelectedCategoryListIndex
// 0x0004 (0x0004 - 0x0000)
struct CategoryList_Type1_C_GetSelectedCategoryListIndex final
{
public:
	int32                                         Param_SelectedCategoryListIndex;                   // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_GetSelectedCategoryListIndex) == 0x000004, "Wrong alignment on CategoryList_Type1_C_GetSelectedCategoryListIndex");
static_assert(sizeof(CategoryList_Type1_C_GetSelectedCategoryListIndex) == 0x000004, "Wrong size on CategoryList_Type1_C_GetSelectedCategoryListIndex");
static_assert(offsetof(CategoryList_Type1_C_GetSelectedCategoryListIndex, Param_SelectedCategoryListIndex) == 0x000000, "Member 'CategoryList_Type1_C_GetSelectedCategoryListIndex::Param_SelectedCategoryListIndex' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.AddCategoryList
// 0x0038 (0x0038 - 0x0000)
struct CategoryList_Type1_C_AddCategoryList final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A29[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0018(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_AddCategoryList) == 0x000008, "Wrong alignment on CategoryList_Type1_C_AddCategoryList");
static_assert(sizeof(CategoryList_Type1_C_AddCategoryList) == 0x000038, "Wrong size on CategoryList_Type1_C_AddCategoryList");
static_assert(offsetof(CategoryList_Type1_C_AddCategoryList, ID) == 0x000000, "Member 'CategoryList_Type1_C_AddCategoryList::ID' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddCategoryList, Param_Name) == 0x000008, "Member 'CategoryList_Type1_C_AddCategoryList::Param_Name' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddCategoryList, Temp_string_Variable) == 0x000018, "Member 'CategoryList_Type1_C_AddCategoryList::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddCategoryList, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'CategoryList_Type1_C_AddCategoryList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddCategoryList, CallFunc_Array_Add_ReturnValue_1) == 0x00002C, "Member 'CategoryList_Type1_C_AddCategoryList::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddCategoryList, CallFunc_Array_Add_ReturnValue_2) == 0x000030, "Member 'CategoryList_Type1_C_AddCategoryList::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.SetNewIcon
// 0x0018 (0x0018 - 0x0000)
struct CategoryList_Type1_C_SetNewIcon final
{
public:
	int32                                         CategoryIndex;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A2A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryList_Type1_Item_C*             CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryList_Type1_C_SetNewIcon) == 0x000008, "Wrong alignment on CategoryList_Type1_C_SetNewIcon");
static_assert(sizeof(CategoryList_Type1_C_SetNewIcon) == 0x000018, "Wrong size on CategoryList_Type1_C_SetNewIcon");
static_assert(offsetof(CategoryList_Type1_C_SetNewIcon, CategoryIndex) == 0x000000, "Member 'CategoryList_Type1_C_SetNewIcon::CategoryIndex' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIcon, IsActive) == 0x000004, "Member 'CategoryList_Type1_C_SetNewIcon::IsActive' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIcon, CallFunc_Array_Get_Item) == 0x000008, "Member 'CategoryList_Type1_C_SetNewIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIcon, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000010, "Member 'CategoryList_Type1_C_SetNewIcon::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.SetNewIconAll
// 0x0028 (0x0028 - 0x0000)
struct CategoryList_Type1_C_SetNewIconAll final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A2B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A2C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryList_Type1_Item_C*             CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryList_Type1_C_SetNewIconAll) == 0x000008, "Wrong alignment on CategoryList_Type1_C_SetNewIconAll");
static_assert(sizeof(CategoryList_Type1_C_SetNewIconAll) == 0x000028, "Wrong size on CategoryList_Type1_C_SetNewIconAll");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconAll, IsActive) == 0x000000, "Member 'CategoryList_Type1_C_SetNewIconAll::IsActive' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconAll, Temp_int_Array_Index_Variable) == 0x000004, "Member 'CategoryList_Type1_C_SetNewIconAll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconAll, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'CategoryList_Type1_C_SetNewIconAll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconAll, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'CategoryList_Type1_C_SetNewIconAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconAll, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'CategoryList_Type1_C_SetNewIconAll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconAll, CallFunc_Array_Get_Item) == 0x000018, "Member 'CategoryList_Type1_C_SetNewIconAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconAll, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'CategoryList_Type1_C_SetNewIconAll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.GetIndex
// 0x000C (0x000C - 0x0000)
struct CategoryList_Type1_C_GetIndex final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_GetIndex) == 0x000004, "Wrong alignment on CategoryList_Type1_C_GetIndex");
static_assert(sizeof(CategoryList_Type1_C_GetIndex) == 0x00000C, "Wrong size on CategoryList_Type1_C_GetIndex");
static_assert(offsetof(CategoryList_Type1_C_GetIndex, ID) == 0x000000, "Member 'CategoryList_Type1_C_GetIndex::ID' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_GetIndex, ReturnValue) == 0x000004, "Member 'CategoryList_Type1_C_GetIndex::ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_GetIndex, CallFunc_Array_Find_ReturnValue) == 0x000008, "Member 'CategoryList_Type1_C_GetIndex::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.Check List New Icon Visible
// 0x0060 (0x0060 - 0x0000)
struct CategoryList_Type1_C_Check_List_New_Icon_Visible final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A2D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryList_Type1_Group_C*            Widget;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RetValue;                                          // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A2E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckListNewIconVisible_Result;           // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A2F[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A30[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryList_Type1_Group_C*            CallFunc_Map_Find_Value;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A31[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A32[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryList_Type1_Item_C*             CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A33[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryList_Type1_C_Check_List_New_Icon_Visible) == 0x000008, "Wrong alignment on CategoryList_Type1_C_Check_List_New_Icon_Visible");
static_assert(sizeof(CategoryList_Type1_C_Check_List_New_Icon_Visible) == 0x000060, "Wrong size on CategoryList_Type1_C_Check_List_New_Icon_Visible");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, Result) == 0x000000, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::Result' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, Widget) == 0x000008, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::Widget' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, RetValue) == 0x000010, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::RetValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, LoopEnd) == 0x000014, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::LoopEnd' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, Temp_bool_Variable) == 0x000018, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, Temp_bool_Variable_1) == 0x00001A, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001B, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_CheckListNewIconVisible_Result) == 0x00001D, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_CheckListNewIconVisible_Result' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_Array_LastIndex_ReturnValue) == 0x000020, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, Temp_int_Variable) == 0x000024, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000028, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_Map_Find_Value) == 0x000030, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, Temp_int_Variable_1) == 0x000040, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_Array_Get_Item) == 0x000048, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_BooleanAND_ReturnValue) == 0x000051, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_Add_IntInt_ReturnValue_1) == 0x000054, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000058, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_Check_List_New_Icon_Visible, CallFunc_BooleanAND_ReturnValue_1) == 0x000059, "Member 'CategoryList_Type1_C_Check_List_New_Icon_Visible::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.GetScrollOffset
// 0x0008 (0x0008 - 0x0000)
struct CategoryList_Type1_C_GetScrollOffset final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_GetScrollOffset) == 0x000004, "Wrong alignment on CategoryList_Type1_C_GetScrollOffset");
static_assert(sizeof(CategoryList_Type1_C_GetScrollOffset) == 0x000008, "Wrong size on CategoryList_Type1_C_GetScrollOffset");
static_assert(offsetof(CategoryList_Type1_C_GetScrollOffset, Offset) == 0x000000, "Member 'CategoryList_Type1_C_GetScrollOffset::Offset' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_GetScrollOffset, CallFunc_GetScrollOffset_ReturnValue) == 0x000004, "Member 'CategoryList_Type1_C_GetScrollOffset::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.SetScrollOffset
// 0x0004 (0x0004 - 0x0000)
struct CategoryList_Type1_C_SetScrollOffset final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_SetScrollOffset) == 0x000004, "Wrong alignment on CategoryList_Type1_C_SetScrollOffset");
static_assert(sizeof(CategoryList_Type1_C_SetScrollOffset) == 0x000004, "Wrong size on CategoryList_Type1_C_SetScrollOffset");
static_assert(offsetof(CategoryList_Type1_C_SetScrollOffset, Offset) == 0x000000, "Member 'CategoryList_Type1_C_SetScrollOffset::Offset' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.AddGroup
// 0x0048 (0x0048 - 0x0000)
struct CategoryList_Type1_C_AddGroup final
{
public:
	class FString                                 GroupName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Text;                                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0020(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_AddGroup) == 0x000008, "Wrong alignment on CategoryList_Type1_C_AddGroup");
static_assert(sizeof(CategoryList_Type1_C_AddGroup) == 0x000048, "Wrong size on CategoryList_Type1_C_AddGroup");
static_assert(offsetof(CategoryList_Type1_C_AddGroup, GroupName) == 0x000000, "Member 'CategoryList_Type1_C_AddGroup::GroupName' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroup, Text) == 0x000010, "Member 'CategoryList_Type1_C_AddGroup::Text' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroup, Temp_string_Variable) == 0x000020, "Member 'CategoryList_Type1_C_AddGroup::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroup, CallFunc_Map_Length_ReturnValue) == 0x000030, "Member 'CategoryList_Type1_C_AddGroup::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroup, CallFunc_Multiply_IntInt_ReturnValue) == 0x000034, "Member 'CategoryList_Type1_C_AddGroup::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroup, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'CategoryList_Type1_C_AddGroup::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroup, CallFunc_Array_Add_ReturnValue_1) == 0x00003C, "Member 'CategoryList_Type1_C_AddGroup::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroup, CallFunc_Array_Add_ReturnValue_2) == 0x000040, "Member 'CategoryList_Type1_C_AddGroup::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroup, CallFunc_Array_Add_ReturnValue_3) == 0x000044, "Member 'CategoryList_Type1_C_AddGroup::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.AddGroupList
// 0x0038 (0x0038 - 0x0000)
struct CategoryList_Type1_C_AddGroupList final
{
public:
	class FString                                 Group;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ID;                                                // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A34[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_Name;                                        // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_AddGroupList) == 0x000008, "Wrong alignment on CategoryList_Type1_C_AddGroupList");
static_assert(sizeof(CategoryList_Type1_C_AddGroupList) == 0x000038, "Wrong size on CategoryList_Type1_C_AddGroupList");
static_assert(offsetof(CategoryList_Type1_C_AddGroupList, Group) == 0x000000, "Member 'CategoryList_Type1_C_AddGroupList::Group' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroupList, ID) == 0x000010, "Member 'CategoryList_Type1_C_AddGroupList::ID' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroupList, Param_Name) == 0x000018, "Member 'CategoryList_Type1_C_AddGroupList::Param_Name' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroupList, CallFunc_Array_Add_ReturnValue) == 0x000028, "Member 'CategoryList_Type1_C_AddGroupList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroupList, CallFunc_Array_Add_ReturnValue_1) == 0x00002C, "Member 'CategoryList_Type1_C_AddGroupList::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_AddGroupList, CallFunc_Array_Add_ReturnValue_2) == 0x000030, "Member 'CategoryList_Type1_C_AddGroupList::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.MakeGroupWidget
// 0x0080 (0x0080 - 0x0000)
struct CategoryList_Type1_C_MakeGroupWidget final
{
public:
	class FString                                 GroupName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Text;                                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A35[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryList_Type1_Group_C*            WorkWidget;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCategoryList_Type1_Group_C*            CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A36[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCategoryList_Type1_Group_C*            CallFunc_Map_Find_Value;                           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryList_Type1_C_MakeGroupWidget) == 0x000008, "Wrong alignment on CategoryList_Type1_C_MakeGroupWidget");
static_assert(sizeof(CategoryList_Type1_C_MakeGroupWidget) == 0x000080, "Wrong size on CategoryList_Type1_C_MakeGroupWidget");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, GroupName) == 0x000000, "Member 'CategoryList_Type1_C_MakeGroupWidget::GroupName' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, Text) == 0x000010, "Member 'CategoryList_Type1_C_MakeGroupWidget::Text' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, Param_Index) == 0x000020, "Member 'CategoryList_Type1_C_MakeGroupWidget::Param_Index' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, WorkWidget) == 0x000028, "Member 'CategoryList_Type1_C_MakeGroupWidget::WorkWidget' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, CallFunc_Create_ReturnValue) == 0x000030, "Member 'CategoryList_Type1_C_MakeGroupWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, CallFunc_Array_Find_ReturnValue) == 0x000038, "Member 'CategoryList_Type1_C_MakeGroupWidget::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00003C, "Member 'CategoryList_Type1_C_MakeGroupWidget::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000040, "Member 'CategoryList_Type1_C_MakeGroupWidget::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'CategoryList_Type1_C_MakeGroupWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, K2Node_MakeStruct_Margin) == 0x000060, "Member 'CategoryList_Type1_C_MakeGroupWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, CallFunc_Map_Find_Value) == 0x000070, "Member 'CategoryList_Type1_C_MakeGroupWidget::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_MakeGroupWidget, CallFunc_Map_Find_ReturnValue) == 0x000078, "Member 'CategoryList_Type1_C_MakeGroupWidget::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.SetNewIconEx
// 0x0068 (0x0068 - 0x0000)
struct CategoryList_Type1_C_SetNewIconEx final
{
public:
	bool                                          InIsActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A37[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LargeCategoryId;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MediumCategoryId;                                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UCategoryList_Type1_Group_C*            CallFunc_Map_Find_Value;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A38[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryList_Type1_Item_C*             CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryList_Type1_C_SetNewIconEx) == 0x000008, "Wrong alignment on CategoryList_Type1_C_SetNewIconEx");
static_assert(sizeof(CategoryList_Type1_C_SetNewIconEx) == 0x000068, "Wrong size on CategoryList_Type1_C_SetNewIconEx");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconEx, InIsActive) == 0x000000, "Member 'CategoryList_Type1_C_SetNewIconEx::InIsActive' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconEx, LargeCategoryId) == 0x000004, "Member 'CategoryList_Type1_C_SetNewIconEx::LargeCategoryId' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconEx, MediumCategoryId) == 0x000008, "Member 'CategoryList_Type1_C_SetNewIconEx::MediumCategoryId' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconEx, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'CategoryList_Type1_C_SetNewIconEx::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconEx, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'CategoryList_Type1_C_SetNewIconEx::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconEx, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'CategoryList_Type1_C_SetNewIconEx::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconEx, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'CategoryList_Type1_C_SetNewIconEx::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconEx, CallFunc_Map_Find_Value) == 0x000048, "Member 'CategoryList_Type1_C_SetNewIconEx::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconEx, CallFunc_Map_Find_ReturnValue) == 0x000050, "Member 'CategoryList_Type1_C_SetNewIconEx::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconEx, CallFunc_Array_Get_Item) == 0x000058, "Member 'CategoryList_Type1_C_SetNewIconEx::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetNewIconEx, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'CategoryList_Type1_C_SetNewIconEx::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.SetEnableAllNewIconEx
// 0x0050 (0x0050 - 0x0000)
struct CategoryList_Type1_C_SetEnableAllNewIconEx final
{
public:
	bool                                          InIsActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A39[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A3A[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A3B[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCategoryList_Type1_Group_C*            CallFunc_Map_Find_Value;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryList_Type1_C_SetEnableAllNewIconEx) == 0x000008, "Wrong alignment on CategoryList_Type1_C_SetEnableAllNewIconEx");
static_assert(sizeof(CategoryList_Type1_C_SetEnableAllNewIconEx) == 0x000050, "Wrong size on CategoryList_Type1_C_SetEnableAllNewIconEx");
static_assert(offsetof(CategoryList_Type1_C_SetEnableAllNewIconEx, InIsActive) == 0x000000, "Member 'CategoryList_Type1_C_SetEnableAllNewIconEx::InIsActive' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetEnableAllNewIconEx, Temp_int_Array_Index_Variable) == 0x000004, "Member 'CategoryList_Type1_C_SetEnableAllNewIconEx::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetEnableAllNewIconEx, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'CategoryList_Type1_C_SetEnableAllNewIconEx::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetEnableAllNewIconEx, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'CategoryList_Type1_C_SetEnableAllNewIconEx::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetEnableAllNewIconEx, CallFunc_Map_Keys_Keys) == 0x000010, "Member 'CategoryList_Type1_C_SetEnableAllNewIconEx::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetEnableAllNewIconEx, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'CategoryList_Type1_C_SetEnableAllNewIconEx::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetEnableAllNewIconEx, CallFunc_Array_Get_Item) == 0x000028, "Member 'CategoryList_Type1_C_SetEnableAllNewIconEx::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetEnableAllNewIconEx, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'CategoryList_Type1_C_SetEnableAllNewIconEx::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetEnableAllNewIconEx, CallFunc_Map_Find_Value) == 0x000040, "Member 'CategoryList_Type1_C_SetEnableAllNewIconEx::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetEnableAllNewIconEx, CallFunc_Map_Find_ReturnValue) == 0x000048, "Member 'CategoryList_Type1_C_SetEnableAllNewIconEx::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.SetColorChange
// 0x0001 (0x0001 - 0x0000)
struct CategoryList_Type1_C_SetColorChange final
{
public:
	bool                                          Param_IsColorChange;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryList_Type1_C_SetColorChange) == 0x000001, "Wrong alignment on CategoryList_Type1_C_SetColorChange");
static_assert(sizeof(CategoryList_Type1_C_SetColorChange) == 0x000001, "Wrong size on CategoryList_Type1_C_SetColorChange");
static_assert(offsetof(CategoryList_Type1_C_SetColorChange, Param_IsColorChange) == 0x000000, "Member 'CategoryList_Type1_C_SetColorChange::Param_IsColorChange' has a wrong offset!");

// Function CategoryList_Type1.CategoryList_Type1_C.SetScrollBottomOffset
// 0x0020 (0x0020 - 0x0000)
struct CategoryList_Type1_C_SetScrollBottomOffset final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A3C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_C_SetScrollBottomOffset) == 0x000008, "Wrong alignment on CategoryList_Type1_C_SetScrollBottomOffset");
static_assert(sizeof(CategoryList_Type1_C_SetScrollBottomOffset) == 0x000020, "Wrong size on CategoryList_Type1_C_SetScrollBottomOffset");
static_assert(offsetof(CategoryList_Type1_C_SetScrollBottomOffset, Offset) == 0x000000, "Member 'CategoryList_Type1_C_SetScrollBottomOffset::Offset' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetScrollBottomOffset, K2Node_MakeStruct_Margin) == 0x000004, "Member 'CategoryList_Type1_C_SetScrollBottomOffset::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_C_SetScrollBottomOffset, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'CategoryList_Type1_C_SetScrollBottomOffset::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

