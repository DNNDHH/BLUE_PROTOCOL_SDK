#pragma once

 

// Package: FixedPhrase_Menu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function FixedPhrase_Menu.FixedPhrase_Menu_C.ExecuteUbergraph_FixedPhrase_Menu
// 0x0010 (0x0010 - 0x0000)
struct FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InIndex;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFixedPhrase_Item_C*                    K2Node_CustomEvent_InItem;                         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu) == 0x000008, "Wrong alignment on FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu");
static_assert(sizeof(FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu) == 0x000010, "Wrong size on FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu");
static_assert(offsetof(FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu, EntryPoint) == 0x000000, "Member 'FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu::EntryPoint' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu, K2Node_CustomEvent_InIndex) == 0x000004, "Member 'FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu::K2Node_CustomEvent_InIndex' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu, K2Node_CustomEvent_InItem) == 0x000008, "Member 'FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu::K2Node_CustomEvent_InItem' has a wrong offset!");

// Function FixedPhrase_Menu.FixedPhrase_Menu_C.OnClick
// 0x0010 (0x0010 - 0x0000)
struct FixedPhrase_Menu_C_OnClick final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47DA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFixedPhrase_Item_C*                    InItem;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FixedPhrase_Menu_C_OnClick) == 0x000008, "Wrong alignment on FixedPhrase_Menu_C_OnClick");
static_assert(sizeof(FixedPhrase_Menu_C_OnClick) == 0x000010, "Wrong size on FixedPhrase_Menu_C_OnClick");
static_assert(offsetof(FixedPhrase_Menu_C_OnClick, InIndex) == 0x000000, "Member 'FixedPhrase_Menu_C_OnClick::InIndex' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_OnClick, InItem) == 0x000008, "Member 'FixedPhrase_Menu_C_OnClick::InItem' has a wrong offset!");

// Function FixedPhrase_Menu.FixedPhrase_Menu_C.CreateFixedPhrase
// 0x0060 (0x0060 - 0x0000)
struct FixedPhrase_Menu_C_CreateFixedPhrase final
{
public:
	float                                         MarginTop;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginLeft;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxLen;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47DB[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFixedPhrase_Item_C*                    CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetFixedPhraseIndex, class UFixedPhrase_Item_C* InSelectedItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTextNumFromAsset_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FixedPhrase_Menu_C_CreateFixedPhrase) == 0x000008, "Wrong alignment on FixedPhrase_Menu_C_CreateFixedPhrase");
static_assert(sizeof(FixedPhrase_Menu_C_CreateFixedPhrase) == 0x000060, "Wrong size on FixedPhrase_Menu_C_CreateFixedPhrase");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, MarginTop) == 0x000000, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::MarginTop' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, MarginLeft) == 0x000004, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::MarginLeft' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, MaxLen) == 0x000008, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::MaxLen' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, K2Node_MakeStruct_Margin) == 0x00000C, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, CallFunc_Create_ReturnValue) == 0x000020, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, Temp_int_Variable) == 0x000038, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, CallFunc_Divide_IntInt_ReturnValue) == 0x00003C, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, CallFunc_Percent_IntInt_ReturnValue) == 0x000040, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, CallFunc_AddChildToGrid_ReturnValue) == 0x000048, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, CallFunc_GetTextNumFromAsset_ReturnValue) == 0x000050, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::CallFunc_GetTextNumFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, CallFunc_Subtract_IntInt_ReturnValue) == 0x000054, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000058, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000059, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_CreateFixedPhrase, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00005A, "Member 'FixedPhrase_Menu_C_CreateFixedPhrase::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function FixedPhrase_Menu.FixedPhrase_Menu_C.SetDragable
// 0x0028 (0x0028 - 0x0000)
struct FixedPhrase_Menu_C_SetDragable final
{
public:
	bool                                          InDragable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47DC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47DD[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFixedPhrase_Item_C*                    K2Node_DynamicCast_AsFixed_Phrase_Item;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47DE[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FixedPhrase_Menu_C_SetDragable) == 0x000008, "Wrong alignment on FixedPhrase_Menu_C_SetDragable");
static_assert(sizeof(FixedPhrase_Menu_C_SetDragable) == 0x000028, "Wrong size on FixedPhrase_Menu_C_SetDragable");
static_assert(offsetof(FixedPhrase_Menu_C_SetDragable, InDragable) == 0x000000, "Member 'FixedPhrase_Menu_C_SetDragable::InDragable' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_SetDragable, Temp_int_Variable) == 0x000004, "Member 'FixedPhrase_Menu_C_SetDragable::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_SetDragable, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'FixedPhrase_Menu_C_SetDragable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_SetDragable, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'FixedPhrase_Menu_C_SetDragable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_SetDragable, K2Node_DynamicCast_AsFixed_Phrase_Item) == 0x000018, "Member 'FixedPhrase_Menu_C_SetDragable::K2Node_DynamicCast_AsFixed_Phrase_Item' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_SetDragable, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'FixedPhrase_Menu_C_SetDragable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_SetDragable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'FixedPhrase_Menu_C_SetDragable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_SetDragable, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'FixedPhrase_Menu_C_SetDragable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function FixedPhrase_Menu.FixedPhrase_Menu_C.SelectFixedPhrase
// 0x0020 (0x0020 - 0x0000)
struct FixedPhrase_Menu_C_SelectFixedPhrase final
{
public:
	int32                                         InFixedPhraseId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47DF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFixedPhrase_Item_C*                    InFixedPhraseItem;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FixedPhrase_Menu_C_SelectFixedPhrase) == 0x000008, "Wrong alignment on FixedPhrase_Menu_C_SelectFixedPhrase");
static_assert(sizeof(FixedPhrase_Menu_C_SelectFixedPhrase) == 0x000020, "Wrong size on FixedPhrase_Menu_C_SelectFixedPhrase");
static_assert(offsetof(FixedPhrase_Menu_C_SelectFixedPhrase, InFixedPhraseId) == 0x000000, "Member 'FixedPhrase_Menu_C_SelectFixedPhrase::InFixedPhraseId' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_SelectFixedPhrase, InFixedPhraseItem) == 0x000008, "Member 'FixedPhrase_Menu_C_SelectFixedPhrase::InFixedPhraseItem' has a wrong offset!");
static_assert(offsetof(FixedPhrase_Menu_C_SelectFixedPhrase, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'FixedPhrase_Menu_C_SelectFixedPhrase::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");

}

