#pragma once

 

// Package: SelectMenu

#include "Basic.hpp"


namespace SDK::Params
{

// Function SelectMenu.SelectMenu_C.OnSelectItem__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct SelectMenu_C_OnSelectItem__DelegateSignature final
{
public:
	int32                                         SelectItem;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMenu_C_OnSelectItem__DelegateSignature) == 0x000004, "Wrong alignment on SelectMenu_C_OnSelectItem__DelegateSignature");
static_assert(sizeof(SelectMenu_C_OnSelectItem__DelegateSignature) == 0x000004, "Wrong size on SelectMenu_C_OnSelectItem__DelegateSignature");
static_assert(offsetof(SelectMenu_C_OnSelectItem__DelegateSignature, SelectItem) == 0x000000, "Member 'SelectMenu_C_OnSelectItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function SelectMenu.SelectMenu_C.ExecuteUbergraph_SelectMenu
// 0x0128 (0x0128 - 0x0000)
struct SelectMenu_C_ExecuteUbergraph_SelectMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79C8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USelectMenuItem_C*                      CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USelectMenuItem_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TArray<class FText>                           K2Node_CustomEvent_ItemArray_1;                    // 0x0030(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79C9[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0048(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79CA[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USelectMenuItem_C*                      K2Node_CustomEvent_SelectItem;                     // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildIndex_ReturnValue;                // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79CB[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CurrentItem_1;                  // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CurrentItem;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79CC[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79CD[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Array_Get_Item_1;                         // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USelectMenuItem_C*                      K2Node_DynamicCast_AsSelect_Menu_Item;             // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79CE[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Array_Get_Item_2;                         // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USelectMenuItem_C*                      K2Node_DynamicCast_AsSelect_Menu_Item_1;           // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79CF[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_SelectItemIndex;                // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_CustomEvent_ItemArray;                      // 0x00D0(0x0010)(ConstParm, ReferenceParm)
	class FText                                   K2Node_CustomEvent_Item;                           // 0x00E0(0x0018)()
	class FString                                 CallFunc_Array_Get_Item_3;                         // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0108(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectMenu_C_ExecuteUbergraph_SelectMenu) == 0x000008, "Wrong alignment on SelectMenu_C_ExecuteUbergraph_SelectMenu");
static_assert(sizeof(SelectMenu_C_ExecuteUbergraph_SelectMenu) == 0x000128, "Wrong size on SelectMenu_C_ExecuteUbergraph_SelectMenu");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, EntryPoint) == 0x000000, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Create_ReturnValue) == 0x000008, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, Temp_int_Array_Index_Variable) == 0x000010, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_CustomEvent_ItemArray_1) == 0x000030, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_CustomEvent_ItemArray_1' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, Temp_int_Loop_Counter_Variable_1) == 0x000040, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Array_Get_Item) == 0x000048, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Add_IntInt_ReturnValue_1) == 0x000060, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000070, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_CustomEvent_SelectItem) == 0x000078, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_CustomEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_GetChildIndex_ReturnValue) == 0x000080, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_GetChildIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000084, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Array_Add_ReturnValue) == 0x000088, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_CustomEvent_CurrentItem_1) == 0x00008C, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_CustomEvent_CurrentItem_1' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_CustomEvent_CurrentItem) == 0x000090, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_CustomEvent_CurrentItem' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000094, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Array_Length_ReturnValue_1) == 0x000098, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Less_IntInt_ReturnValue_1) == 0x00009C, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Array_Get_Item_1) == 0x0000A0, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_DynamicCast_AsSelect_Menu_Item) == 0x0000A8, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_DynamicCast_AsSelect_Menu_Item' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Array_Get_Item_2) == 0x0000B8, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_DynamicCast_AsSelect_Menu_Item_1) == 0x0000C0, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_DynamicCast_AsSelect_Menu_Item_1' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_CustomEvent_SelectItemIndex) == 0x0000CC, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_CustomEvent_SelectItemIndex' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_CustomEvent_ItemArray) == 0x0000D0, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_CustomEvent_ItemArray' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, K2Node_CustomEvent_Item) == 0x0000E0, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Array_Get_Item_3) == 0x0000F8, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000108, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Array_Length_ReturnValue_2) == 0x000120, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectMenu_C_ExecuteUbergraph_SelectMenu, CallFunc_Less_IntInt_ReturnValue_2) == 0x000124, "Member 'SelectMenu_C_ExecuteUbergraph_SelectMenu::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

// Function SelectMenu.SelectMenu_C.AddItem
// 0x0018 (0x0018 - 0x0000)
struct SelectMenu_C_AddItem final
{
public:
	class FText                                   Item;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SelectMenu_C_AddItem) == 0x000008, "Wrong alignment on SelectMenu_C_AddItem");
static_assert(sizeof(SelectMenu_C_AddItem) == 0x000018, "Wrong size on SelectMenu_C_AddItem");
static_assert(offsetof(SelectMenu_C_AddItem, Item) == 0x000000, "Member 'SelectMenu_C_AddItem::Item' has a wrong offset!");

// Function SelectMenu.SelectMenu_C.AddItemFromStringArray
// 0x0010 (0x0010 - 0x0000)
struct SelectMenu_C_AddItemFromStringArray final
{
public:
	TArray<class FString>                         ItemArray;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SelectMenu_C_AddItemFromStringArray) == 0x000008, "Wrong alignment on SelectMenu_C_AddItemFromStringArray");
static_assert(sizeof(SelectMenu_C_AddItemFromStringArray) == 0x000010, "Wrong size on SelectMenu_C_AddItemFromStringArray");
static_assert(offsetof(SelectMenu_C_AddItemFromStringArray, ItemArray) == 0x000000, "Member 'SelectMenu_C_AddItemFromStringArray::ItemArray' has a wrong offset!");

// Function SelectMenu.SelectMenu_C.ProcSelectItem
// 0x0004 (0x0004 - 0x0000)
struct SelectMenu_C_ProcSelectItem final
{
public:
	int32                                         SelectItemIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMenu_C_ProcSelectItem) == 0x000004, "Wrong alignment on SelectMenu_C_ProcSelectItem");
static_assert(sizeof(SelectMenu_C_ProcSelectItem) == 0x000004, "Wrong size on SelectMenu_C_ProcSelectItem");
static_assert(offsetof(SelectMenu_C_ProcSelectItem, SelectItemIndex) == 0x000000, "Member 'SelectMenu_C_ProcSelectItem::SelectItemIndex' has a wrong offset!");

// Function SelectMenu.SelectMenu_C.SetCurrentItem
// 0x0004 (0x0004 - 0x0000)
struct SelectMenu_C_SetCurrentItem final
{
public:
	int32                                         Param_CurrentItem;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMenu_C_SetCurrentItem) == 0x000004, "Wrong alignment on SelectMenu_C_SetCurrentItem");
static_assert(sizeof(SelectMenu_C_SetCurrentItem) == 0x000004, "Wrong size on SelectMenu_C_SetCurrentItem");
static_assert(offsetof(SelectMenu_C_SetCurrentItem, Param_CurrentItem) == 0x000000, "Member 'SelectMenu_C_SetCurrentItem::Param_CurrentItem' has a wrong offset!");

// Function SelectMenu.SelectMenu_C.ChangeCurrentItem
// 0x0004 (0x0004 - 0x0000)
struct SelectMenu_C_ChangeCurrentItem final
{
public:
	int32                                         Param_CurrentItem;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMenu_C_ChangeCurrentItem) == 0x000004, "Wrong alignment on SelectMenu_C_ChangeCurrentItem");
static_assert(sizeof(SelectMenu_C_ChangeCurrentItem) == 0x000004, "Wrong size on SelectMenu_C_ChangeCurrentItem");
static_assert(offsetof(SelectMenu_C_ChangeCurrentItem, Param_CurrentItem) == 0x000000, "Member 'SelectMenu_C_ChangeCurrentItem::Param_CurrentItem' has a wrong offset!");

// Function SelectMenu.SelectMenu_C.OnSelectMenuItem
// 0x0008 (0x0008 - 0x0000)
struct SelectMenu_C_OnSelectMenuItem final
{
public:
	class USelectMenuItem_C*                      SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectMenu_C_OnSelectMenuItem) == 0x000008, "Wrong alignment on SelectMenu_C_OnSelectMenuItem");
static_assert(sizeof(SelectMenu_C_OnSelectMenuItem) == 0x000008, "Wrong size on SelectMenu_C_OnSelectMenuItem");
static_assert(offsetof(SelectMenu_C_OnSelectMenuItem, SelectItem) == 0x000000, "Member 'SelectMenu_C_OnSelectMenuItem::SelectItem' has a wrong offset!");

// Function SelectMenu.SelectMenu_C.AddItemFromArray
// 0x0010 (0x0010 - 0x0000)
struct SelectMenu_C_AddItemFromArray final
{
public:
	TArray<class FText>                           ItemArray;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SelectMenu_C_AddItemFromArray) == 0x000008, "Wrong alignment on SelectMenu_C_AddItemFromArray");
static_assert(sizeof(SelectMenu_C_AddItemFromArray) == 0x000010, "Wrong size on SelectMenu_C_AddItemFromArray");
static_assert(offsetof(SelectMenu_C_AddItemFromArray, ItemArray) == 0x000000, "Member 'SelectMenu_C_AddItemFromArray::ItemArray' has a wrong offset!");

}

