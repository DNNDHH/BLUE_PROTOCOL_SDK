#pragma once

 

// Package: NumberInputDialog

#include "Basic.hpp"

#include "ENumberInputDialogResult_structs.hpp"
#include "SlateCore_structs.hpp"
#include "ENumberInputDialogPositionType_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NumberInputDialog.NumberInputDialog_C.OnHide__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct NumberInputDialog_C_OnHide__DelegateSignature final
{
public:
	ENumberInputDialogResult                      InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B49[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InNumber;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NumberInputDialog_C_OnHide__DelegateSignature) == 0x000004, "Wrong alignment on NumberInputDialog_C_OnHide__DelegateSignature");
static_assert(sizeof(NumberInputDialog_C_OnHide__DelegateSignature) == 0x000008, "Wrong size on NumberInputDialog_C_OnHide__DelegateSignature");
static_assert(offsetof(NumberInputDialog_C_OnHide__DelegateSignature, InResult) == 0x000000, "Member 'NumberInputDialog_C_OnHide__DelegateSignature::InResult' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_OnHide__DelegateSignature, InNumber) == 0x000004, "Member 'NumberInputDialog_C_OnHide__DelegateSignature::InNumber' has a wrong offset!");

// Function NumberInputDialog.NumberInputDialog_C.OnNumSliderUpdeta__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct NumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B4A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNumberInputDialog_C*                   CallerDialg;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature) == 0x000008, "Wrong alignment on NumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature");
static_assert(sizeof(NumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature) == 0x000010, "Wrong size on NumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature");
static_assert(offsetof(NumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature, Value) == 0x000000, "Member 'NumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature::Value' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature, CallerDialg) == 0x000008, "Member 'NumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature::CallerDialg' has a wrong offset!");

// Function NumberInputDialog.NumberInputDialog_C.ExecuteUbergraph_NumberInputDialog
// 0x0100 (0x0100 - 0x0000)
struct NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B4B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENumberInputDialogPositionType                Temp_byte_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B4C[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B4D[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetValue_Value;                           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0050(0x0028)()
	int32                                         K2Node_ComponentBoundEvent_NewValue;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Ratio;                  // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0080(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bPlayCloseSe;                   // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B4E[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetValue_Value_1;                         // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValue_Value_2;                         // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValue_Value_3;                         // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B4F[0x5];                                     // 0x00BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_1;                // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x00F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog) == 0x000008, "Wrong alignment on NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog");
static_assert(sizeof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog) == 0x000100, "Wrong size on NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, EntryPoint) == 0x000000, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_PlaySE_ReturnValue) == 0x000030, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_PlaySE_ReturnValue_1) == 0x000034, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, Temp_byte_Variable) == 0x000038, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_GetUIManager_IsValid) == 0x00003A, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_GetUIManager_ReturnValue) == 0x000040, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000048, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_GetValue_Value) == 0x00004C, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_GetValue_Value' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, K2Node_MakeStruct_SlateColor_1) == 0x000050, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, K2Node_ComponentBoundEvent_NewValue) == 0x000078, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::K2Node_ComponentBoundEvent_NewValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, K2Node_ComponentBoundEvent_Ratio) == 0x00007C, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::K2Node_ComponentBoundEvent_Ratio' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, K2Node_CustomEvent_InText) == 0x000080, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_PlayAnimation_ReturnValue) == 0x000098, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, K2Node_CustomEvent_bPlayCloseSe) == 0x0000A0, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::K2Node_CustomEvent_bPlayCloseSe' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_GetValue_Value_1) == 0x0000A4, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_GetValue_Value_1' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_GetValue_Value_2) == 0x0000AC, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_GetValue_Value_2' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000B0, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_GetValue_Value_3) == 0x0000B4, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_GetValue_Value_3' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, K2Node_Event_IsDesignTime) == 0x0000B8, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, K2Node_SwitchEnum_CmpSuccess) == 0x0000B9, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000BA, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C0, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000C8, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x0000D0, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_GetPosition_ReturnValue) == 0x0000D8, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x0000E0, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_PlaySE_ReturnValue_2) == 0x0000E8, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, CallFunc_GetPosition_ReturnValue_1) == 0x0000EC, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::CallFunc_GetPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog, K2Node_Select_Default) == 0x0000F4, "Member 'NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog::K2Node_Select_Default' has a wrong offset!");

// Function NumberInputDialog.NumberInputDialog_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct NumberInputDialog_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NumberInputDialog_C_PreConstruct) == 0x000001, "Wrong alignment on NumberInputDialog_C_PreConstruct");
static_assert(sizeof(NumberInputDialog_C_PreConstruct) == 0x000001, "Wrong size on NumberInputDialog_C_PreConstruct");
static_assert(offsetof(NumberInputDialog_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'NumberInputDialog_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function NumberInputDialog.NumberInputDialog_C.HideDialog
// 0x0001 (0x0001 - 0x0000)
struct NumberInputDialog_C_HideDialog final
{
public:
	bool                                          bPlayCloseSe;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NumberInputDialog_C_HideDialog) == 0x000001, "Wrong alignment on NumberInputDialog_C_HideDialog");
static_assert(sizeof(NumberInputDialog_C_HideDialog) == 0x000001, "Wrong size on NumberInputDialog_C_HideDialog");
static_assert(offsetof(NumberInputDialog_C_HideDialog, bPlayCloseSe) == 0x000000, "Member 'NumberInputDialog_C_HideDialog::bPlayCloseSe' has a wrong offset!");

// Function NumberInputDialog.NumberInputDialog_C.SetFreeText
// 0x0018 (0x0018 - 0x0000)
struct NumberInputDialog_C_SetFreeText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NumberInputDialog_C_SetFreeText) == 0x000008, "Wrong alignment on NumberInputDialog_C_SetFreeText");
static_assert(sizeof(NumberInputDialog_C_SetFreeText) == 0x000018, "Wrong size on NumberInputDialog_C_SetFreeText");
static_assert(offsetof(NumberInputDialog_C_SetFreeText, InText) == 0x000000, "Member 'NumberInputDialog_C_SetFreeText::InText' has a wrong offset!");

// Function NumberInputDialog.NumberInputDialog_C.BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct NumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature final
{
public:
	int32                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature) == 0x000004, "Wrong alignment on NumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature");
static_assert(sizeof(NumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature) == 0x000008, "Wrong size on NumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature");
static_assert(offsetof(NumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature, NewValue) == 0x000000, "Member 'NumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature::NewValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature, Ratio) == 0x000004, "Member 'NumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature::Ratio' has a wrong offset!");

// Function NumberInputDialog.NumberInputDialog_C.SetDialogNumber
// 0x0020 (0x0020 - 0x0000)
struct NumberInputDialog_C_SetDialogNumber final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberMax;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(NumberInputDialog_C_SetDialogNumber) == 0x000008, "Wrong alignment on NumberInputDialog_C_SetDialogNumber");
static_assert(sizeof(NumberInputDialog_C_SetDialogNumber) == 0x000020, "Wrong size on NumberInputDialog_C_SetDialogNumber");
static_assert(offsetof(NumberInputDialog_C_SetDialogNumber, Number) == 0x000000, "Member 'NumberInputDialog_C_SetDialogNumber::Number' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_SetDialogNumber, NumberMax) == 0x000004, "Member 'NumberInputDialog_C_SetDialogNumber::NumberMax' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_SetDialogNumber, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'NumberInputDialog_C_SetDialogNumber::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function NumberInputDialog.NumberInputDialog_C.SetDialogTexts
// 0x0060 (0x0060 - 0x0000)
struct NumberInputDialog_C_SetDialogTexts final
{
public:
	class FText                                   InCommentText;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InFreeText;                                        // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InButtonText;                                      // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NumberInputDialog_C_SetDialogTexts) == 0x000008, "Wrong alignment on NumberInputDialog_C_SetDialogTexts");
static_assert(sizeof(NumberInputDialog_C_SetDialogTexts) == 0x000060, "Wrong size on NumberInputDialog_C_SetDialogTexts");
static_assert(offsetof(NumberInputDialog_C_SetDialogTexts, InCommentText) == 0x000000, "Member 'NumberInputDialog_C_SetDialogTexts::InCommentText' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_SetDialogTexts, InFreeText) == 0x000018, "Member 'NumberInputDialog_C_SetDialogTexts::InFreeText' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_SetDialogTexts, InButtonText) == 0x000030, "Member 'NumberInputDialog_C_SetDialogTexts::InButtonText' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_SetDialogTexts, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'NumberInputDialog_C_SetDialogTexts::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_SetDialogTexts, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000058, "Member 'NumberInputDialog_C_SetDialogTexts::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputDialog_C_SetDialogTexts, K2Node_SwitchEnum_CmpSuccess) == 0x000059, "Member 'NumberInputDialog_C_SetDialogTexts::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function NumberInputDialog.NumberInputDialog_C.SetDialogPoint
// 0x0018 (0x0018 - 0x0000)
struct NumberInputDialog_C_SetDialogPoint final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NumberInputDialog_C_SetDialogPoint) == 0x000008, "Wrong alignment on NumberInputDialog_C_SetDialogPoint");
static_assert(sizeof(NumberInputDialog_C_SetDialogPoint) == 0x000018, "Wrong size on NumberInputDialog_C_SetDialogPoint");
static_assert(offsetof(NumberInputDialog_C_SetDialogPoint, InText) == 0x000000, "Member 'NumberInputDialog_C_SetDialogPoint::InText' has a wrong offset!");

}

