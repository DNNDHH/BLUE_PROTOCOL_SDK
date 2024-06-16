#pragma once

 

// Package: BP_ChoiceDialog

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.ExecuteUbergraph_BP_ChoiceDialog
// 0x0218 (0x0218 - 0x0000)
struct BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AEC[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UBP_ChoiceDialogItem_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AED[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AEE[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ChoiceDialogItem_C*                 CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_InDeltaTime;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0060(0x0088)()
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AEF[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ChoiceDialogItem_C*                 K2Node_DynamicCast_AsBP_Choice_Dialog_Item;        // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AF0[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InText_1;                             // 0x0108(0x0018)(ConstParm)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0120(0x0018)()
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ChoiceDialogItem_C*                 K2Node_CustomEvent_Widget;                         // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0148(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AF1[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildIndex_ReturnValue;                // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AF2[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           K2Node_CustomEvent_ItemTexts;                      // 0x0170(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7AF3[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0188(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AF4[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_InText;                               // 0x01C0(0x0018)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x01D8(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0215(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog) == 0x000008, "Wrong alignment on BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog");
static_assert(sizeof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog) == 0x000218, "Wrong size on BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, EntryPoint) == 0x000000, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, Temp_bool_Variable) == 0x000008, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, Temp_byte_Variable) == 0x00001C, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, Temp_byte_Variable_1) == 0x00001D, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_Create_ReturnValue) == 0x000028, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_PlaySE_ReturnValue_1) == 0x000030, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_CustomEvent_InDeltaTime) == 0x000034, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_CustomEvent_InDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000038, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_FMax_ReturnValue) == 0x00003C, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000040, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_BreakVector2D_X) == 0x000044, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_BreakVector2D_Y) == 0x000048, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00004C, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_BreakVector2D_X_1) == 0x000050, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_BreakVector2D_Y_1) == 0x000054, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_MakeVector2D_ReturnValue) == 0x000058, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_MakeStruct_SlateBrush) == 0x000060, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000E8, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_GetChildAt_ReturnValue) == 0x0000F0, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_DynamicCast_AsBP_Choice_Dialog_Item) == 0x0000F8, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_DynamicCast_AsBP_Choice_Dialog_Item' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_Event_InText_1) == 0x000108, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_Event_InText_1' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_Conv_FloatToText_ReturnValue) == 0x000120, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000138, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_CustomEvent_Widget) == 0x000140, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_Event_Animation) == 0x000148, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000150, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000151, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_PlayAnimation_ReturnValue) == 0x000158, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_PlayAnimation_ReturnValue_1) == 0x000160, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_GetChildIndex_ReturnValue) == 0x000168, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_GetChildIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_CustomEvent_ItemTexts) == 0x000170, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_CustomEvent_ItemTexts' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, Temp_int_Loop_Counter_Variable) == 0x000180, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_Array_Get_Item) == 0x000188, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_Add_IntInt_ReturnValue) == 0x0001A0, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_Array_Length_ReturnValue) == 0x0001A4, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_Less_IntInt_ReturnValue) == 0x0001A8, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_Conv_IntToString_ReturnValue) == 0x0001B0, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_Event_InText) == 0x0001C0, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_Event_MyGeometry) == 0x0001D8, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_Event_InDeltaTime) == 0x000210, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, K2Node_Select_Default) == 0x000214, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog, CallFunc_BooleanAND_ReturnValue) == 0x000215, "Member 'BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.Tick
// 0x003C (0x003C - 0x0000)
struct BP_ChoiceDialog_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChoiceDialog_C_Tick) == 0x000004, "Wrong alignment on BP_ChoiceDialog_C_Tick");
static_assert(sizeof(BP_ChoiceDialog_C_Tick) == 0x00003C, "Wrong size on BP_ChoiceDialog_C_Tick");
static_assert(offsetof(BP_ChoiceDialog_C_Tick, MyGeometry) == 0x000000, "Member 'BP_ChoiceDialog_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_ChoiceDialog_C_Tick, InDeltaTime) == 0x000038, "Member 'BP_ChoiceDialog_C_Tick::InDeltaTime' has a wrong offset!");

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetQuestion
// 0x0018 (0x0018 - 0x0000)
struct BP_ChoiceDialog_C_SetQuestion final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ChoiceDialog_C_SetQuestion) == 0x000008, "Wrong alignment on BP_ChoiceDialog_C_SetQuestion");
static_assert(sizeof(BP_ChoiceDialog_C_SetQuestion) == 0x000018, "Wrong size on BP_ChoiceDialog_C_SetQuestion");
static_assert(offsetof(BP_ChoiceDialog_C_SetQuestion, InText) == 0x000000, "Member 'BP_ChoiceDialog_C_SetQuestion::InText' has a wrong offset!");

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.AddItemFromArray
// 0x0010 (0x0010 - 0x0000)
struct BP_ChoiceDialog_C_AddItemFromArray final
{
public:
	TArray<class FText>                           ItemTexts;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ChoiceDialog_C_AddItemFromArray) == 0x000008, "Wrong alignment on BP_ChoiceDialog_C_AddItemFromArray");
static_assert(sizeof(BP_ChoiceDialog_C_AddItemFromArray) == 0x000010, "Wrong size on BP_ChoiceDialog_C_AddItemFromArray");
static_assert(offsetof(BP_ChoiceDialog_C_AddItemFromArray, ItemTexts) == 0x000000, "Member 'BP_ChoiceDialog_C_AddItemFromArray::ItemTexts' has a wrong offset!");

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct BP_ChoiceDialog_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChoiceDialog_C_OnAnimationFinished) == 0x000008, "Wrong alignment on BP_ChoiceDialog_C_OnAnimationFinished");
static_assert(sizeof(BP_ChoiceDialog_C_OnAnimationFinished) == 0x000008, "Wrong size on BP_ChoiceDialog_C_OnAnimationFinished");
static_assert(offsetof(BP_ChoiceDialog_C_OnAnimationFinished, Animation) == 0x000000, "Member 'BP_ChoiceDialog_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.OnClicked_Event_0
// 0x0008 (0x0008 - 0x0000)
struct BP_ChoiceDialog_C_OnClicked_Event_0 final
{
public:
	class UBP_ChoiceDialogItem_C*                 Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChoiceDialog_C_OnClicked_Event_0) == 0x000008, "Wrong alignment on BP_ChoiceDialog_C_OnClicked_Event_0");
static_assert(sizeof(BP_ChoiceDialog_C_OnClicked_Event_0) == 0x000008, "Wrong size on BP_ChoiceDialog_C_OnClicked_Event_0");
static_assert(offsetof(BP_ChoiceDialog_C_OnClicked_Event_0, Widget) == 0x000000, "Member 'BP_ChoiceDialog_C_OnClicked_Event_0::Widget' has a wrong offset!");

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.AddItem
// 0x0018 (0x0018 - 0x0000)
struct BP_ChoiceDialog_C_AddItem final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ChoiceDialog_C_AddItem) == 0x000008, "Wrong alignment on BP_ChoiceDialog_C_AddItem");
static_assert(sizeof(BP_ChoiceDialog_C_AddItem) == 0x000018, "Wrong size on BP_ChoiceDialog_C_AddItem");
static_assert(offsetof(BP_ChoiceDialog_C_AddItem, InText) == 0x000000, "Member 'BP_ChoiceDialog_C_AddItem::InText' has a wrong offset!");

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.UpdateTimeLimit
// 0x0004 (0x0004 - 0x0000)
struct BP_ChoiceDialog_C_UpdateTimeLimit final
{
public:
	float                                         InDeltaTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChoiceDialog_C_UpdateTimeLimit) == 0x000004, "Wrong alignment on BP_ChoiceDialog_C_UpdateTimeLimit");
static_assert(sizeof(BP_ChoiceDialog_C_UpdateTimeLimit) == 0x000004, "Wrong size on BP_ChoiceDialog_C_UpdateTimeLimit");
static_assert(offsetof(BP_ChoiceDialog_C_UpdateTimeLimit, InDeltaTime) == 0x000000, "Member 'BP_ChoiceDialog_C_UpdateTimeLimit::InDeltaTime' has a wrong offset!");

}

