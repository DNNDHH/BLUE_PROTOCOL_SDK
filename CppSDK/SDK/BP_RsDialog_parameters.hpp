#pragma once

 

// Package: BP_RsDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog.BP_RsDialog_C.ExecuteUbergraph_BP_RsDialog
// 0x0068 (0x0068 - 0x0000)
struct BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_MessageId;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_ErrorCode;                            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5575[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Message;                              // 0x0010(0x0018)(ConstParm)
	struct FSBCursorStateHandle                   CallFunc_ShowCursor_ReturnValue;                   // 0x0028(0x0004)(NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_InButtonWidget;         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5576[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5577[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SwitchId;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5578[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog) == 0x000008, "Wrong alignment on BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog");
static_assert(sizeof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog) == 0x000068, "Wrong size on BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, EntryPoint) == 0x000000, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, K2Node_Event_MessageId) == 0x000004, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::K2Node_Event_MessageId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, K2Node_Event_ErrorCode) == 0x000008, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::K2Node_Event_ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, K2Node_Event_Message) == 0x000010, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::K2Node_Event_Message' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, CallFunc_ShowCursor_ReturnValue) == 0x000028, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::CallFunc_ShowCursor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, CallFunc_PlaySE_ReturnValue) == 0x00002C, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, K2Node_ComponentBoundEvent_InButtonWidget) == 0x000030, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::K2Node_ComponentBoundEvent_InButtonWidget' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, K2Node_Event_Animation) == 0x000040, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, CallFunc_PlaySE_ReturnValue_1) == 0x000054, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, K2Node_CustomEvent_SwitchId) == 0x000058, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::K2Node_CustomEvent_SwitchId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog, CallFunc_PlayAnimation_ReturnValue_1) == 0x000060, "Member 'BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function BP_RsDialog.BP_RsDialog_C.DialogStart
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialog_C_DialogStart final
{
public:
	int32                                         SwitchId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_C_DialogStart) == 0x000004, "Wrong alignment on BP_RsDialog_C_DialogStart");
static_assert(sizeof(BP_RsDialog_C_DialogStart) == 0x000004, "Wrong size on BP_RsDialog_C_DialogStart");
static_assert(offsetof(BP_RsDialog_C_DialogStart, SwitchId) == 0x000000, "Member 'BP_RsDialog_C_DialogStart::SwitchId' has a wrong offset!");

// Function BP_RsDialog.BP_RsDialog_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct BP_RsDialog_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_C_OnAnimationFinished) == 0x000008, "Wrong alignment on BP_RsDialog_C_OnAnimationFinished");
static_assert(sizeof(BP_RsDialog_C_OnAnimationFinished) == 0x000008, "Wrong size on BP_RsDialog_C_OnAnimationFinished");
static_assert(offsetof(BP_RsDialog_C_OnAnimationFinished, Animation) == 0x000000, "Member 'BP_RsDialog_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function BP_RsDialog.BP_RsDialog_C.BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_RsDialog_C_BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	class UUserWidget*                            InButtonWidget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_C_BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_RsDialog_C_BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialog_C_BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong size on BP_RsDialog_C_BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialog_C_BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, InButtonWidget) == 0x000000, "Member 'BP_RsDialog_C_BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::InButtonWidget' has a wrong offset!");

// Function BP_RsDialog.BP_RsDialog_C.StartProcessingRsDialog
// 0x0018 (0x0018 - 0x0000)
struct BP_RsDialog_C_StartProcessingRsDialog final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_RsDialog_C_StartProcessingRsDialog) == 0x000008, "Wrong alignment on BP_RsDialog_C_StartProcessingRsDialog");
static_assert(sizeof(BP_RsDialog_C_StartProcessingRsDialog) == 0x000018, "Wrong size on BP_RsDialog_C_StartProcessingRsDialog");
static_assert(offsetof(BP_RsDialog_C_StartProcessingRsDialog, Message) == 0x000000, "Member 'BP_RsDialog_C_StartProcessingRsDialog::Message' has a wrong offset!");

// Function BP_RsDialog.BP_RsDialog_C.StartErrorMessageRsDialog
// 0x0008 (0x0008 - 0x0000)
struct BP_RsDialog_C_StartErrorMessageRsDialog final
{
public:
	int32                                         MessageId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_C_StartErrorMessageRsDialog) == 0x000004, "Wrong alignment on BP_RsDialog_C_StartErrorMessageRsDialog");
static_assert(sizeof(BP_RsDialog_C_StartErrorMessageRsDialog) == 0x000008, "Wrong size on BP_RsDialog_C_StartErrorMessageRsDialog");
static_assert(offsetof(BP_RsDialog_C_StartErrorMessageRsDialog, MessageId) == 0x000000, "Member 'BP_RsDialog_C_StartErrorMessageRsDialog::MessageId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_StartErrorMessageRsDialog, ErrorCode) == 0x000004, "Member 'BP_RsDialog_C_StartErrorMessageRsDialog::ErrorCode' has a wrong offset!");

// Function BP_RsDialog.BP_RsDialog_C.SetErrorMessage
// 0x00C0 (0x00C0 - 0x0000)
struct BP_RsDialog_C_SetErrorMessage final
{
public:
	int32                                         MessageId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
};
static_assert(alignof(BP_RsDialog_C_SetErrorMessage) == 0x000008, "Wrong alignment on BP_RsDialog_C_SetErrorMessage");
static_assert(sizeof(BP_RsDialog_C_SetErrorMessage) == 0x0000C0, "Wrong size on BP_RsDialog_C_SetErrorMessage");
static_assert(offsetof(BP_RsDialog_C_SetErrorMessage, MessageId) == 0x000000, "Member 'BP_RsDialog_C_SetErrorMessage::MessageId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_SetErrorMessage, ErrorCode) == 0x000004, "Member 'BP_RsDialog_C_SetErrorMessage::ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_SetErrorMessage, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'BP_RsDialog_C_SetErrorMessage::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_SetErrorMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'BP_RsDialog_C_SetErrorMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_SetErrorMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'BP_RsDialog_C_SetErrorMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_SetErrorMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'BP_RsDialog_C_SetErrorMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_SetErrorMessage, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'BP_RsDialog_C_SetErrorMessage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_SetErrorMessage, K2Node_MakeArray_Array) == 0x000098, "Member 'BP_RsDialog_C_SetErrorMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_C_SetErrorMessage, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'BP_RsDialog_C_SetErrorMessage::CallFunc_Format_ReturnValue' has a wrong offset!");

}

