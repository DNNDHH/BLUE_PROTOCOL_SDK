#pragma once

 

// Package: BP_TextInputDialog

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_TextInputDialog.BP_TextInputDialog_C.OnClose__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_TextInputDialog_C_OnClose__DelegateSignature final
{
public:
	EDialogResult                                 OnButton;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7045[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InputText;                                         // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_TextInputDialog_C_OnClose__DelegateSignature) == 0x000008, "Wrong alignment on BP_TextInputDialog_C_OnClose__DelegateSignature");
static_assert(sizeof(BP_TextInputDialog_C_OnClose__DelegateSignature) == 0x000020, "Wrong size on BP_TextInputDialog_C_OnClose__DelegateSignature");
static_assert(offsetof(BP_TextInputDialog_C_OnClose__DelegateSignature, OnButton) == 0x000000, "Member 'BP_TextInputDialog_C_OnClose__DelegateSignature::OnButton' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_OnClose__DelegateSignature, InputText) == 0x000008, "Member 'BP_TextInputDialog_C_OnClose__DelegateSignature::InputText' has a wrong offset!");

// Function BP_TextInputDialog.BP_TextInputDialog_C.ExecuteUbergraph_BP_TextInputDialog
// 0x00F8 (0x00F8 - 0x0000)
struct BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7046[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7047[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7048[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Message;                        // 0x0038(0x0018)()
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0050(0x0018)()
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0070(0x0018)(ConstParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_IntInt_ReturnValue;               // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7049[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNgWordWithTarget_IsValid;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNgWordWithTarget_ReturnValue;          // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog) == 0x000008, "Wrong alignment on BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog");
static_assert(sizeof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog) == 0x0000F8, "Wrong size on BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, EntryPoint) == 0x000000, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_Conv_TextToString_ReturnValue) == 0x000008, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_Len_ReturnValue) == 0x000018, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, K2Node_Event_Animation) == 0x000020, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000030, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, K2Node_CustomEvent_Message) == 0x000038, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, K2Node_CustomEvent_InText) == 0x000050, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_PlaySE_ReturnValue) == 0x000068, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_PlaySE_ReturnValue_1) == 0x00006C, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, K2Node_ComponentBoundEvent_Text) == 0x000070, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000088, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_Replace_ReturnValue) == 0x000098, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000D0, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_InRange_IntInt_ReturnValue) == 0x0000D8, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_InRange_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_PlaySE_ReturnValue_2) == 0x0000DC, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_Conv_TextToString_ReturnValue_2) == 0x0000E0, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_HasNgWordWithTarget_IsValid) == 0x0000F0, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_HasNgWordWithTarget_IsValid' has a wrong offset!");
static_assert(offsetof(BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog, CallFunc_HasNgWordWithTarget_ReturnValue) == 0x0000F1, "Member 'BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog::CallFunc_HasNgWordWithTarget_ReturnValue' has a wrong offset!");

// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_TextInputDialog_C_BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_TextInputDialog_C_BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on BP_TextInputDialog_C_BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(BP_TextInputDialog_C_BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on BP_TextInputDialog_C_BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(BP_TextInputDialog_C_BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'BP_TextInputDialog_C_BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function BP_TextInputDialog.BP_TextInputDialog_C.ChangeText
// 0x0018 (0x0018 - 0x0000)
struct BP_TextInputDialog_C_ChangeText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_TextInputDialog_C_ChangeText) == 0x000008, "Wrong alignment on BP_TextInputDialog_C_ChangeText");
static_assert(sizeof(BP_TextInputDialog_C_ChangeText) == 0x000018, "Wrong size on BP_TextInputDialog_C_ChangeText");
static_assert(offsetof(BP_TextInputDialog_C_ChangeText, InText) == 0x000000, "Member 'BP_TextInputDialog_C_ChangeText::InText' has a wrong offset!");

// Function BP_TextInputDialog.BP_TextInputDialog_C.Start InputDialog
// 0x0018 (0x0018 - 0x0000)
struct BP_TextInputDialog_C_Start_InputDialog final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_TextInputDialog_C_Start_InputDialog) == 0x000008, "Wrong alignment on BP_TextInputDialog_C_Start_InputDialog");
static_assert(sizeof(BP_TextInputDialog_C_Start_InputDialog) == 0x000018, "Wrong size on BP_TextInputDialog_C_Start_InputDialog");
static_assert(offsetof(BP_TextInputDialog_C_Start_InputDialog, Message) == 0x000000, "Member 'BP_TextInputDialog_C_Start_InputDialog::Message' has a wrong offset!");

// Function BP_TextInputDialog.BP_TextInputDialog_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct BP_TextInputDialog_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TextInputDialog_C_OnAnimationFinished) == 0x000008, "Wrong alignment on BP_TextInputDialog_C_OnAnimationFinished");
static_assert(sizeof(BP_TextInputDialog_C_OnAnimationFinished) == 0x000008, "Wrong size on BP_TextInputDialog_C_OnAnimationFinished");
static_assert(offsetof(BP_TextInputDialog_C_OnAnimationFinished, Animation) == 0x000000, "Member 'BP_TextInputDialog_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function BP_TextInputDialog.BP_TextInputDialog_C.SetMinInput
// 0x0004 (0x0004 - 0x0000)
struct BP_TextInputDialog_C_SetMinInput final
{
public:
	int32                                         Param_MinLength;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TextInputDialog_C_SetMinInput) == 0x000004, "Wrong alignment on BP_TextInputDialog_C_SetMinInput");
static_assert(sizeof(BP_TextInputDialog_C_SetMinInput) == 0x000004, "Wrong size on BP_TextInputDialog_C_SetMinInput");
static_assert(offsetof(BP_TextInputDialog_C_SetMinInput, Param_MinLength) == 0x000000, "Member 'BP_TextInputDialog_C_SetMinInput::Param_MinLength' has a wrong offset!");

// Function BP_TextInputDialog.BP_TextInputDialog_C.SetMaxInput
// 0x0004 (0x0004 - 0x0000)
struct BP_TextInputDialog_C_SetMaxInput final
{
public:
	int32                                         Param_MaxLength;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TextInputDialog_C_SetMaxInput) == 0x000004, "Wrong alignment on BP_TextInputDialog_C_SetMaxInput");
static_assert(sizeof(BP_TextInputDialog_C_SetMaxInput) == 0x000004, "Wrong size on BP_TextInputDialog_C_SetMaxInput");
static_assert(offsetof(BP_TextInputDialog_C_SetMaxInput, Param_MaxLength) == 0x000000, "Member 'BP_TextInputDialog_C_SetMaxInput::Param_MaxLength' has a wrong offset!");

// Function BP_TextInputDialog.BP_TextInputDialog_C.SetNgWordCheck
// 0x0001 (0x0001 - 0x0000)
struct BP_TextInputDialog_C_SetNgWordCheck final
{
public:
	bool                                          Param_CheckNgWord;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TextInputDialog_C_SetNgWordCheck) == 0x000001, "Wrong alignment on BP_TextInputDialog_C_SetNgWordCheck");
static_assert(sizeof(BP_TextInputDialog_C_SetNgWordCheck) == 0x000001, "Wrong size on BP_TextInputDialog_C_SetNgWordCheck");
static_assert(offsetof(BP_TextInputDialog_C_SetNgWordCheck, Param_CheckNgWord) == 0x000000, "Member 'BP_TextInputDialog_C_SetNgWordCheck::Param_CheckNgWord' has a wrong offset!");

// Function BP_TextInputDialog.BP_TextInputDialog_C.SetInitializeInput
// 0x0018 (0x0018 - 0x0000)
struct BP_TextInputDialog_C_SetInitializeInput final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_TextInputDialog_C_SetInitializeInput) == 0x000008, "Wrong alignment on BP_TextInputDialog_C_SetInitializeInput");
static_assert(sizeof(BP_TextInputDialog_C_SetInitializeInput) == 0x000018, "Wrong size on BP_TextInputDialog_C_SetInitializeInput");
static_assert(offsetof(BP_TextInputDialog_C_SetInitializeInput, InText) == 0x000000, "Member 'BP_TextInputDialog_C_SetInitializeInput::InText' has a wrong offset!");

// Function BP_TextInputDialog.BP_TextInputDialog_C.SetHint
// 0x0018 (0x0018 - 0x0000)
struct BP_TextInputDialog_C_SetHint final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_TextInputDialog_C_SetHint) == 0x000008, "Wrong alignment on BP_TextInputDialog_C_SetHint");
static_assert(sizeof(BP_TextInputDialog_C_SetHint) == 0x000018, "Wrong size on BP_TextInputDialog_C_SetHint");
static_assert(offsetof(BP_TextInputDialog_C_SetHint, InText) == 0x000000, "Member 'BP_TextInputDialog_C_SetHint::InText' has a wrong offset!");

}

