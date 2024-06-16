#pragma once

 

// Package: WBP_ExpIncrease

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ENumberInputDialogResult_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnHide__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ExpIncrease_C_OnHide__DelegateSignature final
{
public:
	ENumberInputDialogResult                      InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78D2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InNumber;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpIncrease_C_OnHide__DelegateSignature) == 0x000004, "Wrong alignment on WBP_ExpIncrease_C_OnHide__DelegateSignature");
static_assert(sizeof(WBP_ExpIncrease_C_OnHide__DelegateSignature) == 0x000008, "Wrong size on WBP_ExpIncrease_C_OnHide__DelegateSignature");
static_assert(offsetof(WBP_ExpIncrease_C_OnHide__DelegateSignature, InResult) == 0x000000, "Member 'WBP_ExpIncrease_C_OnHide__DelegateSignature::InResult' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_OnHide__DelegateSignature, InNumber) == 0x000004, "Member 'WBP_ExpIncrease_C_OnHide__DelegateSignature::InNumber' has a wrong offset!");

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnExpSliderUpdeta__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_ExpIncrease_C_OnExpSliderUpdeta__DelegateSignature final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78D3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ExpIncrease_C*                     CallerDialg;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpIncrease_C_OnExpSliderUpdeta__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ExpIncrease_C_OnExpSliderUpdeta__DelegateSignature");
static_assert(sizeof(WBP_ExpIncrease_C_OnExpSliderUpdeta__DelegateSignature) == 0x000010, "Wrong size on WBP_ExpIncrease_C_OnExpSliderUpdeta__DelegateSignature");
static_assert(offsetof(WBP_ExpIncrease_C_OnExpSliderUpdeta__DelegateSignature, Value) == 0x000000, "Member 'WBP_ExpIncrease_C_OnExpSliderUpdeta__DelegateSignature::Value' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_OnExpSliderUpdeta__DelegateSignature, CallerDialg) == 0x000008, "Member 'WBP_ExpIncrease_C_OnExpSliderUpdeta__DelegateSignature::CallerDialg' has a wrong offset!");

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.ExecuteUbergraph_WBP_ExpIncrease
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78D4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78D5[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78D6[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78D7[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78D8[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetValue_Value;                           // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bPlayCloseSe;                   // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78D9[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetValue_Value_1;                         // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValue_Value_2;                         // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_1;                    // 0x00B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_NewValue;               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Ratio;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValue_Value_3;                         // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease) == 0x000008, "Wrong alignment on WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease");
static_assert(sizeof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease) == 0x0000E0, "Wrong size on WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, EntryPoint) == 0x000000, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, K2Node_Event_Animation) == 0x000008, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_PlaySE_ReturnValue) == 0x000068, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_PlaySE_ReturnValue_1) == 0x00006C, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_GetSize_ReturnValue) == 0x000074, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_GetUIManager_IsValid) == 0x00007C, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_GetUIManager_ReturnValue) == 0x000080, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000088, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_Not_PreBool_ReturnValue) == 0x000089, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_GetValue_Value) == 0x00008C, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_GetValue_Value' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_PlayAnimation_ReturnValue) == 0x000090, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_PlayAnimation_ReturnValue_1) == 0x000098, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, K2Node_CustomEvent_bPlayCloseSe) == 0x0000A0, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::K2Node_CustomEvent_bPlayCloseSe' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_GetValue_Value_1) == 0x0000A4, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_GetValue_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_GetValue_Value_2) == 0x0000AC, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_GetValue_Value_2' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000B0, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_GetSize_ReturnValue_1) == 0x0000B4, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_GetSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, K2Node_ComponentBoundEvent_NewValue) == 0x0000BC, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::K2Node_ComponentBoundEvent_NewValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, K2Node_ComponentBoundEvent_Ratio) == 0x0000C0, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::K2Node_ComponentBoundEvent_Ratio' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_GetValue_Value_3) == 0x0000C4, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_GetValue_Value_3' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000C8, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x0000D0, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease, CallFunc_PlaySE_ReturnValue_2) == 0x0000D8, "Member 'WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ExpIncrease_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature final
{
public:
	int32                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpIncrease_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature) == 0x000004, "Wrong alignment on WBP_ExpIncrease_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature");
static_assert(sizeof(WBP_ExpIncrease_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature) == 0x000008, "Wrong size on WBP_ExpIncrease_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature");
static_assert(offsetof(WBP_ExpIncrease_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature, NewValue) == 0x000000, "Member 'WBP_ExpIncrease_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature::NewValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature, Ratio) == 0x000004, "Member 'WBP_ExpIncrease_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature::Ratio' has a wrong offset!");

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.HideDialog
// 0x0001 (0x0001 - 0x0000)
struct WBP_ExpIncrease_C_HideDialog final
{
public:
	bool                                          bPlayCloseSe;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ExpIncrease_C_HideDialog) == 0x000001, "Wrong alignment on WBP_ExpIncrease_C_HideDialog");
static_assert(sizeof(WBP_ExpIncrease_C_HideDialog) == 0x000001, "Wrong size on WBP_ExpIncrease_C_HideDialog");
static_assert(offsetof(WBP_ExpIncrease_C_HideDialog, bPlayCloseSe) == 0x000000, "Member 'WBP_ExpIncrease_C_HideDialog::bPlayCloseSe' has a wrong offset!");

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WBP_ExpIncrease_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpIncrease_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WBP_ExpIncrease_C_OnAnimationFinished");
static_assert(sizeof(WBP_ExpIncrease_C_OnAnimationFinished) == 0x000008, "Wrong size on WBP_ExpIncrease_C_OnAnimationFinished");
static_assert(offsetof(WBP_ExpIncrease_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WBP_ExpIncrease_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogNumber
// 0x0020 (0x0020 - 0x0000)
struct WBP_ExpIncrease_C_SetDialogNumber final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberMax;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WBP_ExpIncrease_C_SetDialogNumber) == 0x000008, "Wrong alignment on WBP_ExpIncrease_C_SetDialogNumber");
static_assert(sizeof(WBP_ExpIncrease_C_SetDialogNumber) == 0x000020, "Wrong size on WBP_ExpIncrease_C_SetDialogNumber");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumber, Number) == 0x000000, "Member 'WBP_ExpIncrease_C_SetDialogNumber::Number' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumber, NumberMax) == 0x000004, "Member 'WBP_ExpIncrease_C_SetDialogNumber::NumberMax' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumber, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_ExpIncrease_C_SetDialogNumber::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogTexts
// 0x0048 (0x0048 - 0x0000)
struct WBP_ExpIncrease_C_SetDialogTexts final
{
public:
	class FText                                   InCommentText;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InButtonText;                                      // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InLVText;                                          // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ExpIncrease_C_SetDialogTexts) == 0x000008, "Wrong alignment on WBP_ExpIncrease_C_SetDialogTexts");
static_assert(sizeof(WBP_ExpIncrease_C_SetDialogTexts) == 0x000048, "Wrong size on WBP_ExpIncrease_C_SetDialogTexts");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogTexts, InCommentText) == 0x000000, "Member 'WBP_ExpIncrease_C_SetDialogTexts::InCommentText' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogTexts, InButtonText) == 0x000018, "Member 'WBP_ExpIncrease_C_SetDialogTexts::InButtonText' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogTexts, InLVText) == 0x000030, "Member 'WBP_ExpIncrease_C_SetDialogTexts::InLVText' has a wrong offset!");

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogNumsBefore
// 0x0060 (0x0060 - 0x0000)
struct WBP_ExpIncrease_C_SetDialogNumsBefore final
{
public:
	int32                                         LVNum1;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpNum1;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpMaxNum1;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78DA[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0048(0x0018)()
};
static_assert(alignof(WBP_ExpIncrease_C_SetDialogNumsBefore) == 0x000008, "Wrong alignment on WBP_ExpIncrease_C_SetDialogNumsBefore");
static_assert(sizeof(WBP_ExpIncrease_C_SetDialogNumsBefore) == 0x000060, "Wrong size on WBP_ExpIncrease_C_SetDialogNumsBefore");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsBefore, LVNum1) == 0x000000, "Member 'WBP_ExpIncrease_C_SetDialogNumsBefore::LVNum1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsBefore, ExpNum1) == 0x000004, "Member 'WBP_ExpIncrease_C_SetDialogNumsBefore::ExpNum1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsBefore, ExpMaxNum1) == 0x000008, "Member 'WBP_ExpIncrease_C_SetDialogNumsBefore::ExpMaxNum1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsBefore, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'WBP_ExpIncrease_C_SetDialogNumsBefore::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsBefore, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_ExpIncrease_C_SetDialogNumsBefore::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsBefore, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000028, "Member 'WBP_ExpIncrease_C_SetDialogNumsBefore::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsBefore, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'WBP_ExpIncrease_C_SetDialogNumsBefore::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsBefore, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000048, "Member 'WBP_ExpIncrease_C_SetDialogNumsBefore::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogNumsAfter
// 0x0060 (0x0060 - 0x0000)
struct WBP_ExpIncrease_C_SetDialogNumsAfter final
{
public:
	int32                                         LVNum2;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpNum2;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpMaxNum2;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78DB[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0048(0x0018)()
};
static_assert(alignof(WBP_ExpIncrease_C_SetDialogNumsAfter) == 0x000008, "Wrong alignment on WBP_ExpIncrease_C_SetDialogNumsAfter");
static_assert(sizeof(WBP_ExpIncrease_C_SetDialogNumsAfter) == 0x000060, "Wrong size on WBP_ExpIncrease_C_SetDialogNumsAfter");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsAfter, LVNum2) == 0x000000, "Member 'WBP_ExpIncrease_C_SetDialogNumsAfter::LVNum2' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsAfter, ExpNum2) == 0x000004, "Member 'WBP_ExpIncrease_C_SetDialogNumsAfter::ExpNum2' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsAfter, ExpMaxNum2) == 0x000008, "Member 'WBP_ExpIncrease_C_SetDialogNumsAfter::ExpMaxNum2' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsAfter, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'WBP_ExpIncrease_C_SetDialogNumsAfter::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsAfter, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_ExpIncrease_C_SetDialogNumsAfter::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsAfter, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000028, "Member 'WBP_ExpIncrease_C_SetDialogNumsAfter::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsAfter, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'WBP_ExpIncrease_C_SetDialogNumsAfter::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogNumsAfter, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000048, "Member 'WBP_ExpIncrease_C_SetDialogNumsAfter::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogComment
// 0x0018 (0x0018 - 0x0000)
struct WBP_ExpIncrease_C_SetDialogComment final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ExpIncrease_C_SetDialogComment) == 0x000008, "Wrong alignment on WBP_ExpIncrease_C_SetDialogComment");
static_assert(sizeof(WBP_ExpIncrease_C_SetDialogComment) == 0x000018, "Wrong size on WBP_ExpIncrease_C_SetDialogComment");
static_assert(offsetof(WBP_ExpIncrease_C_SetDialogComment, InText) == 0x000000, "Member 'WBP_ExpIncrease_C_SetDialogComment::InText' has a wrong offset!");

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetGauge
// 0x0040 (0x0040 - 0x0000)
struct WBP_ExpIncrease_C_SetGauge final
{
public:
	class UCanvasPanelSlot*                       Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InVec;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Naw;                                               // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max;                                               // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ExpIncrease_C_SetGauge) == 0x000008, "Wrong alignment on WBP_ExpIncrease_C_SetGauge");
static_assert(sizeof(WBP_ExpIncrease_C_SetGauge) == 0x000040, "Wrong size on WBP_ExpIncrease_C_SetGauge");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, Target) == 0x000000, "Member 'WBP_ExpIncrease_C_SetGauge::Target' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, InVec) == 0x000008, "Member 'WBP_ExpIncrease_C_SetGauge::InVec' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, Naw) == 0x000010, "Member 'WBP_ExpIncrease_C_SetGauge::Naw' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, Max) == 0x000014, "Member 'WBP_ExpIncrease_C_SetGauge::Max' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, CallFunc_GetSize_ReturnValue) == 0x000018, "Member 'WBP_ExpIncrease_C_SetGauge::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'WBP_ExpIncrease_C_SetGauge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, CallFunc_BreakVector2D_X) == 0x000024, "Member 'WBP_ExpIncrease_C_SetGauge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, CallFunc_BreakVector2D_Y) == 0x000028, "Member 'WBP_ExpIncrease_C_SetGauge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, CallFunc_FClamp_ReturnValue) == 0x00002C, "Member 'WBP_ExpIncrease_C_SetGauge::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000030, "Member 'WBP_ExpIncrease_C_SetGauge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, CallFunc_MakeVector2D_ReturnValue) == 0x000034, "Member 'WBP_ExpIncrease_C_SetGauge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpIncrease_C_SetGauge, CallFunc_NotEqual_Vector2DVector2D_ReturnValue) == 0x00003C, "Member 'WBP_ExpIncrease_C_SetGauge::CallFunc_NotEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");

}

