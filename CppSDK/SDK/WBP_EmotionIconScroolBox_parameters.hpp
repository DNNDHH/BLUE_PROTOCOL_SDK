#pragma once

 

// Package: WBP_EmotionIconScroolBox

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.OnSelectEmotionItem__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_EmotionIconScroolBox_C_OnSelectEmotionItem__DelegateSignature final
{
public:
	class UEmotionMenu_Item_C*                    InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmotionIconScroolBox_C_OnSelectEmotionItem__DelegateSignature) == 0x000008, "Wrong alignment on WBP_EmotionIconScroolBox_C_OnSelectEmotionItem__DelegateSignature");
static_assert(sizeof(WBP_EmotionIconScroolBox_C_OnSelectEmotionItem__DelegateSignature) == 0x000008, "Wrong size on WBP_EmotionIconScroolBox_C_OnSelectEmotionItem__DelegateSignature");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_OnSelectEmotionItem__DelegateSignature, InSelectedItem) == 0x000000, "Member 'WBP_EmotionIconScroolBox_C_OnSelectEmotionItem__DelegateSignature::InSelectedItem' has a wrong offset!");

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.ExecuteUbergraph_WBP_EmotionIconScroolBox
// 0x0050 (0x0050 - 0x0000)
struct WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DEE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmotionMenu_Item_C*                    K2Node_CustomEvent_InSelectedItem;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UEmotionMenu_Item_C* InSelectedItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DEF[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DF0[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox) == 0x000008, "Wrong alignment on WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox");
static_assert(sizeof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox) == 0x000050, "Wrong size on WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox, EntryPoint) == 0x000000, "Member 'WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox, K2Node_CustomEvent_InSelectedItem) == 0x000008, "Member 'WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox::K2Node_CustomEvent_InSelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox, Temp_int_Variable) == 0x000010, "Member 'WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox, CallFunc_GetChildrenCount_ReturnValue) == 0x000030, "Member 'WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox, K2Node_DynamicCast_AsEmotion_Menu_Item) == 0x000038, "Member 'WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox::K2Node_DynamicCast_AsEmotion_Menu_Item' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.Event_OnSelectEmotionItem
// 0x0008 (0x0008 - 0x0000)
struct WBP_EmotionIconScroolBox_C_Event_OnSelectEmotionItem final
{
public:
	class UEmotionMenu_Item_C*                    InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmotionIconScroolBox_C_Event_OnSelectEmotionItem) == 0x000008, "Wrong alignment on WBP_EmotionIconScroolBox_C_Event_OnSelectEmotionItem");
static_assert(sizeof(WBP_EmotionIconScroolBox_C_Event_OnSelectEmotionItem) == 0x000008, "Wrong size on WBP_EmotionIconScroolBox_C_Event_OnSelectEmotionItem");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_Event_OnSelectEmotionItem, InSelectedItem) == 0x000000, "Member 'WBP_EmotionIconScroolBox_C_Event_OnSelectEmotionItem::InSelectedItem' has a wrong offset!");

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.CreateEmotionIcon
// 0x0018 (0x0018 - 0x0000)
struct WBP_EmotionIconScroolBox_C_CreateEmotionIcon final
{
public:
	TArray<class FString>                         InEmotionList;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmotionIconScroolBox_C_CreateEmotionIcon) == 0x000008, "Wrong alignment on WBP_EmotionIconScroolBox_C_CreateEmotionIcon");
static_assert(sizeof(WBP_EmotionIconScroolBox_C_CreateEmotionIcon) == 0x000018, "Wrong size on WBP_EmotionIconScroolBox_C_CreateEmotionIcon");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionIcon, InEmotionList) == 0x000000, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionIcon::InEmotionList' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionIcon, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.CreateEmotionEmptySlot
// 0x0060 (0x0060 - 0x0000)
struct WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot final
{
public:
	int32                                         InSlotCount;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginLeft;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MarginTop;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DF1[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UEmotionMenu_Item_C* InSelectedItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DF2[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DF3[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DF4[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UEmotionMenu_Item_C*                    CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot) == 0x000008, "Wrong alignment on WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot");
static_assert(sizeof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot) == 0x000060, "Wrong size on WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, InSlotCount) == 0x000000, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::InSlotCount' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, MarginLeft) == 0x000004, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::MarginLeft' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, MarginTop) == 0x000008, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::MarginTop' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, Temp_int_Variable) == 0x00000C, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, CallFunc_Percent_IntInt_ReturnValue) == 0x000030, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000034, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, CallFunc_Divide_IntInt_ReturnValue) == 0x000038, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00003C, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, K2Node_MakeStruct_Margin) == 0x000040, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, CallFunc_Create_ReturnValue) == 0x000050, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot, CallFunc_AddChildToGrid_ReturnValue) == 0x000058, "Member 'WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.RefreshEmotion
// 0x0050 (0x0050 - 0x0000)
struct WBP_EmotionIconScroolBox_C_RefreshEmotion final
{
public:
	TArray<class FString>                         InEmotionList;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DF5[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DF6[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item;            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_EmotionIconScroolBox_C_RefreshEmotion) == 0x000008, "Wrong alignment on WBP_EmotionIconScroolBox_C_RefreshEmotion");
static_assert(sizeof(WBP_EmotionIconScroolBox_C_RefreshEmotion) == 0x000050, "Wrong size on WBP_EmotionIconScroolBox_C_RefreshEmotion");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_RefreshEmotion, InEmotionList) == 0x000000, "Member 'WBP_EmotionIconScroolBox_C_RefreshEmotion::InEmotionList' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_RefreshEmotion, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_EmotionIconScroolBox_C_RefreshEmotion::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_RefreshEmotion, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_EmotionIconScroolBox_C_RefreshEmotion::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_RefreshEmotion, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_EmotionIconScroolBox_C_RefreshEmotion::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_RefreshEmotion, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_EmotionIconScroolBox_C_RefreshEmotion::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_RefreshEmotion, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WBP_EmotionIconScroolBox_C_RefreshEmotion::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_RefreshEmotion, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'WBP_EmotionIconScroolBox_C_RefreshEmotion::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_RefreshEmotion, CallFunc_GetChildAt_ReturnValue) == 0x000038, "Member 'WBP_EmotionIconScroolBox_C_RefreshEmotion::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_RefreshEmotion, K2Node_DynamicCast_AsEmotion_Menu_Item) == 0x000040, "Member 'WBP_EmotionIconScroolBox_C_RefreshEmotion::K2Node_DynamicCast_AsEmotion_Menu_Item' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_RefreshEmotion, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_EmotionIconScroolBox_C_RefreshEmotion::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.ClearEmotionSlot
// 0x0030 (0x0030 - 0x0000)
struct WBP_EmotionIconScroolBox_C_ClearEmotionSlot final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DF7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DF8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DF9[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DFA[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmotionIconScroolBox_C_ClearEmotionSlot) == 0x000008, "Wrong alignment on WBP_EmotionIconScroolBox_C_ClearEmotionSlot");
static_assert(sizeof(WBP_EmotionIconScroolBox_C_ClearEmotionSlot) == 0x000030, "Wrong size on WBP_EmotionIconScroolBox_C_ClearEmotionSlot");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ClearEmotionSlot, Temp_int_Variable) == 0x000000, "Member 'WBP_EmotionIconScroolBox_C_ClearEmotionSlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ClearEmotionSlot, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_EmotionIconScroolBox_C_ClearEmotionSlot::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ClearEmotionSlot, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'WBP_EmotionIconScroolBox_C_ClearEmotionSlot::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ClearEmotionSlot, K2Node_DynamicCast_AsEmotion_Menu_Item) == 0x000018, "Member 'WBP_EmotionIconScroolBox_C_ClearEmotionSlot::K2Node_DynamicCast_AsEmotion_Menu_Item' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ClearEmotionSlot, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_EmotionIconScroolBox_C_ClearEmotionSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ClearEmotionSlot, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'WBP_EmotionIconScroolBox_C_ClearEmotionSlot::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ClearEmotionSlot, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'WBP_EmotionIconScroolBox_C_ClearEmotionSlot::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_ClearEmotionSlot, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_EmotionIconScroolBox_C_ClearEmotionSlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.UpdateEmoteIconEnable
// 0x0050 (0x0050 - 0x0000)
struct WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DFB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DFC[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DFD[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEmotion_OutEmotion;                    // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DFE[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableEmoteIcon_bIsEnable;              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DFF[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable) == 0x000008, "Wrong alignment on WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable");
static_assert(sizeof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable) == 0x000050, "Wrong size on WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable, Temp_int_Variable) == 0x000000, "Member 'WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable, K2Node_DynamicCast_AsEmotion_Menu_Item) == 0x000018, "Member 'WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable::K2Node_DynamicCast_AsEmotion_Menu_Item' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable, CallFunc_GetEmotion_OutEmotion) == 0x000028, "Member 'WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable::CallFunc_GetEmotion_OutEmotion' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable, CallFunc_Conv_StringToName_ReturnValue) == 0x00003C, "Member 'WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable, CallFunc_IsEnableEmoteIcon_bIsEnable) == 0x000044, "Member 'WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable::CallFunc_IsEnableEmoteIcon_bIsEnable' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'WBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.IsEnableEmoteIcon
// 0x0020 (0x0020 - 0x0000)
struct WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon final
{
public:
	class FName                                   EmoteId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsEnable;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E00[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanPlayEmoteStatusByEmoteId_ReturnValue;  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon) == 0x000008, "Wrong alignment on WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon");
static_assert(sizeof(WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon) == 0x000020, "Wrong size on WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon, EmoteId) == 0x000000, "Member 'WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon::EmoteId' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon, bIsEnable) == 0x000008, "Member 'WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon::bIsEnable' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000010, "Member 'WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon, CallFunc_CanPlayEmoteStatusByEmoteId_ReturnValue) == 0x000018, "Member 'WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon::CallFunc_CanPlayEmoteStatusByEmoteId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.SetSelectedIcon
// 0x0038 (0x0038 - 0x0000)
struct WBP_EmotionIconScroolBox_C_SetSelectedIcon final
{
public:
	class UObject*                                InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E01[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E02[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E03[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E04[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmotionIconScroolBox_C_SetSelectedIcon) == 0x000008, "Wrong alignment on WBP_EmotionIconScroolBox_C_SetSelectedIcon");
static_assert(sizeof(WBP_EmotionIconScroolBox_C_SetSelectedIcon) == 0x000038, "Wrong size on WBP_EmotionIconScroolBox_C_SetSelectedIcon");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetSelectedIcon, InSelectedItem) == 0x000000, "Member 'WBP_EmotionIconScroolBox_C_SetSelectedIcon::InSelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetSelectedIcon, Temp_int_Variable) == 0x000008, "Member 'WBP_EmotionIconScroolBox_C_SetSelectedIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetSelectedIcon, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'WBP_EmotionIconScroolBox_C_SetSelectedIcon::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetSelectedIcon, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'WBP_EmotionIconScroolBox_C_SetSelectedIcon::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetSelectedIcon, K2Node_DynamicCast_AsEmotion_Menu_Item) == 0x000020, "Member 'WBP_EmotionIconScroolBox_C_SetSelectedIcon::K2Node_DynamicCast_AsEmotion_Menu_Item' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetSelectedIcon, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_EmotionIconScroolBox_C_SetSelectedIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetSelectedIcon, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_EmotionIconScroolBox_C_SetSelectedIcon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetSelectedIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000030, "Member 'WBP_EmotionIconScroolBox_C_SetSelectedIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetSelectedIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000031, "Member 'WBP_EmotionIconScroolBox_C_SetSelectedIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetSelectedIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'WBP_EmotionIconScroolBox_C_SetSelectedIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.SetDragableItem
// 0x0030 (0x0030 - 0x0000)
struct WBP_EmotionIconScroolBox_C_SetDragableItem final
{
public:
	bool                                          InDragable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E05[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E06[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmotionMenu_Item_C*                    K2Node_DynamicCast_AsEmotion_Menu_Item;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E07[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E08[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmotionIconScroolBox_C_SetDragableItem) == 0x000008, "Wrong alignment on WBP_EmotionIconScroolBox_C_SetDragableItem");
static_assert(sizeof(WBP_EmotionIconScroolBox_C_SetDragableItem) == 0x000030, "Wrong size on WBP_EmotionIconScroolBox_C_SetDragableItem");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetDragableItem, InDragable) == 0x000000, "Member 'WBP_EmotionIconScroolBox_C_SetDragableItem::InDragable' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetDragableItem, Temp_int_Variable) == 0x000004, "Member 'WBP_EmotionIconScroolBox_C_SetDragableItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetDragableItem, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_EmotionIconScroolBox_C_SetDragableItem::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetDragableItem, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'WBP_EmotionIconScroolBox_C_SetDragableItem::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetDragableItem, K2Node_DynamicCast_AsEmotion_Menu_Item) == 0x000018, "Member 'WBP_EmotionIconScroolBox_C_SetDragableItem::K2Node_DynamicCast_AsEmotion_Menu_Item' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetDragableItem, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_EmotionIconScroolBox_C_SetDragableItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetDragableItem, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'WBP_EmotionIconScroolBox_C_SetDragableItem::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetDragableItem, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'WBP_EmotionIconScroolBox_C_SetDragableItem::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmotionIconScroolBox_C_SetDragableItem, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_EmotionIconScroolBox_C_SetDragableItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

