#pragma once

 

// Package: OverlayMessage

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function OverlayMessage.OverlayMessage_C.OnHide__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct OverlayMessage_C_OnHide__DelegateSignature final
{
public:
	EDialogResult                                 Param_Result;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OverlayMessage_C_OnHide__DelegateSignature) == 0x000001, "Wrong alignment on OverlayMessage_C_OnHide__DelegateSignature");
static_assert(sizeof(OverlayMessage_C_OnHide__DelegateSignature) == 0x000001, "Wrong size on OverlayMessage_C_OnHide__DelegateSignature");
static_assert(offsetof(OverlayMessage_C_OnHide__DelegateSignature, Param_Result) == 0x000000, "Member 'OverlayMessage_C_OnHide__DelegateSignature::Param_Result' has a wrong offset!");

// Function OverlayMessage.OverlayMessage_C.ExecuteUbergraph_OverlayMessage
// 0x0168 (0x0168 - 0x0000)
struct OverlayMessage_C_ExecuteUbergraph_OverlayMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C14[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_InTextId_1;                           // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C15[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBButton_C*                            CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InTextId;                             // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C16[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBButton_C*>                    K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class USBButton_C*>                    K2Node_MakeArray_Array_1;                          // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0070(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0098(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x00C0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x00E8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x0110(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0150(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C17[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage) == 0x000008, "Wrong alignment on OverlayMessage_C_ExecuteUbergraph_OverlayMessage");
static_assert(sizeof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage) == 0x000168, "Wrong size on OverlayMessage_C_ExecuteUbergraph_OverlayMessage");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, EntryPoint) == 0x000000, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, K2Node_Event_InTextId_1) == 0x000008, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::K2Node_Event_InTextId_1' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, CallFunc_Array_Get_Item) == 0x000010, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, K2Node_Event_InTextId) == 0x000018, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::K2Node_Event_InTextId' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, K2Node_MakeArray_Array) == 0x000020, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, K2Node_MakeArray_Array_1) == 0x000030, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, CallFunc_PlaySE_ReturnValue) == 0x000040, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, CallFunc_PlaySE_ReturnValue_1) == 0x000044, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, K2Node_MakeStruct_SlateColor_1) == 0x000070, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, K2Node_MakeStruct_SlateColor_2) == 0x000098, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, K2Node_MakeStruct_SlateColor_3) == 0x0000C0, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, K2Node_MakeStruct_SlateColor_4) == 0x0000E8, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, K2Node_MakeStruct_SlateColor_5) == 0x000110, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, CallFunc_PlayAnimation_ReturnValue) == 0x000138, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, CallFunc_PlayAnimation_ReturnValue_1) == 0x000140, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, CallFunc_PlayAnimation_ReturnValue_2) == 0x000148, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, K2Node_Event_Animation) == 0x000150, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000158, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ExecuteUbergraph_OverlayMessage, CallFunc_Create_ReturnValue) == 0x000160, "Member 'OverlayMessage_C_ExecuteUbergraph_OverlayMessage::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function OverlayMessage.OverlayMessage_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct OverlayMessage_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OverlayMessage_C_OnAnimationFinished) == 0x000008, "Wrong alignment on OverlayMessage_C_OnAnimationFinished");
static_assert(sizeof(OverlayMessage_C_OnAnimationFinished) == 0x000008, "Wrong size on OverlayMessage_C_OnAnimationFinished");
static_assert(offsetof(OverlayMessage_C_OnAnimationFinished, Animation) == 0x000000, "Member 'OverlayMessage_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function OverlayMessage.OverlayMessage_C.StartYesNoDialog
// 0x0004 (0x0004 - 0x0000)
struct OverlayMessage_C_StartYesNoDialog final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OverlayMessage_C_StartYesNoDialog) == 0x000004, "Wrong alignment on OverlayMessage_C_StartYesNoDialog");
static_assert(sizeof(OverlayMessage_C_StartYesNoDialog) == 0x000004, "Wrong size on OverlayMessage_C_StartYesNoDialog");
static_assert(offsetof(OverlayMessage_C_StartYesNoDialog, InTextID) == 0x000000, "Member 'OverlayMessage_C_StartYesNoDialog::InTextID' has a wrong offset!");

// Function OverlayMessage.OverlayMessage_C.StartMessageDialog
// 0x0004 (0x0004 - 0x0000)
struct OverlayMessage_C_StartMessageDialog final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OverlayMessage_C_StartMessageDialog) == 0x000004, "Wrong alignment on OverlayMessage_C_StartMessageDialog");
static_assert(sizeof(OverlayMessage_C_StartMessageDialog) == 0x000004, "Wrong size on OverlayMessage_C_StartMessageDialog");
static_assert(offsetof(OverlayMessage_C_StartMessageDialog, InTextID) == 0x000000, "Member 'OverlayMessage_C_StartMessageDialog::InTextID' has a wrong offset!");

// Function OverlayMessage.OverlayMessage_C.ChangeCurrentButton
// 0x0018 (0x0018 - 0x0000)
struct OverlayMessage_C_ChangeCurrentButton final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C18[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBButton_C*                            CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            CallFunc_Array_Get_Item_1;                         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OverlayMessage_C_ChangeCurrentButton) == 0x000008, "Wrong alignment on OverlayMessage_C_ChangeCurrentButton");
static_assert(sizeof(OverlayMessage_C_ChangeCurrentButton) == 0x000018, "Wrong size on OverlayMessage_C_ChangeCurrentButton");
static_assert(offsetof(OverlayMessage_C_ChangeCurrentButton, Param_Index) == 0x000000, "Member 'OverlayMessage_C_ChangeCurrentButton::Param_Index' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ChangeCurrentButton, CallFunc_Array_Get_Item) == 0x000008, "Member 'OverlayMessage_C_ChangeCurrentButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_ChangeCurrentButton, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'OverlayMessage_C_ChangeCurrentButton::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function OverlayMessage.OverlayMessage_C.SetResultForButton
// 0x0010 (0x0010 - 0x0000)
struct OverlayMessage_C_SetResultForButton final
{
public:
	class USBButton_C*                            Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OverlayMessage_C_SetResultForButton) == 0x000008, "Wrong alignment on OverlayMessage_C_SetResultForButton");
static_assert(sizeof(OverlayMessage_C_SetResultForButton) == 0x000010, "Wrong size on OverlayMessage_C_SetResultForButton");
static_assert(offsetof(OverlayMessage_C_SetResultForButton, Button) == 0x000000, "Member 'OverlayMessage_C_SetResultForButton::Button' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_SetResultForButton, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000008, "Member 'OverlayMessage_C_SetResultForButton::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_SetResultForButton, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000009, "Member 'OverlayMessage_C_SetResultForButton::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OverlayMessage_C_SetResultForButton, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x00000A, "Member 'OverlayMessage_C_SetResultForButton::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");

}

