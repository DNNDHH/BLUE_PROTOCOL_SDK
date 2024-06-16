#pragma once

 

// Package: DebugFloat

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DebugFloat.DebugFloat_C.ExecuteUbergraph_DebugFloat
// 0x00A0 (0x00A0 - 0x0000)
struct DebugFloat_C_ExecuteUbergraph_DebugFloat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5115[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_1;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5116[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_1;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0020(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5117[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0040(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_StringToFloat_ReturnValue;           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5118[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_2;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5119[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_2;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_511A[0x5];                                     // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugFloat_C_ExecuteUbergraph_DebugFloat) == 0x000008, "Wrong alignment on DebugFloat_C_ExecuteUbergraph_DebugFloat");
static_assert(sizeof(DebugFloat_C_ExecuteUbergraph_DebugFloat) == 0x0000A0, "Wrong size on DebugFloat_C_ExecuteUbergraph_DebugFloat");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, EntryPoint) == 0x000000, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::EntryPoint' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_GetDebugFunction_IsValid) == 0x000004, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_GetDebugFunction_ReturnValue) == 0x000008, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_NotEqual_NameName_ReturnValue) == 0x000010, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_GetDebugFunction_IsValid_1) == 0x000011, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_GetDebugFunction_IsValid_1' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_GetDebugFunction_ReturnValue_1) == 0x000018, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_GetDebugFunction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, K2Node_ComponentBoundEvent_Text) == 0x000020, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, K2Node_ComponentBoundEvent_CommitMethod) == 0x000038, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_GetText_ReturnValue) == 0x000040, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_Conv_TextToString_ReturnValue) == 0x000058, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_Conv_StringToFloat_ReturnValue) == 0x000068, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_Conv_StringToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_GetPlayerController_ReturnValue) == 0x000070, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_GetPlayerController_ReturnValue_1) == 0x000078, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_GetDebugFunction_IsValid_2) == 0x000080, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_GetDebugFunction_IsValid_2' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_GetDebugFunction_ReturnValue_2) == 0x000088, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_GetDebugFunction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_IsVisible_ReturnValue) == 0x000090, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000091, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_IsVisible_ReturnValue_1) == 0x000092, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_ExecuteUbergraph_DebugFloat, CallFunc_GetPlayerController_ReturnValue_2) == 0x000098, "Member 'DebugFloat_C_ExecuteUbergraph_DebugFloat::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");

// Function DebugFloat.DebugFloat_C.BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct DebugFloat_C_BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugFloat_C_BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on DebugFloat_C_BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(DebugFloat_C_BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on DebugFloat_C_BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(DebugFloat_C_BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'DebugFloat_C_BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'DebugFloat_C_BndEvt__EditableTextBox_Float_K2Node_ComponentBoundEvent_363_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function DebugFloat.DebugFloat_C.Set Menu Focus
// 0x0058 (0x0058 - 0x0000)
struct DebugFloat_C_Set_Menu_Focus final
{
public:
	bool                                          bFocus;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_511B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(DebugFloat_C_Set_Menu_Focus) == 0x000008, "Wrong alignment on DebugFloat_C_Set_Menu_Focus");
static_assert(sizeof(DebugFloat_C_Set_Menu_Focus) == 0x000058, "Wrong size on DebugFloat_C_Set_Menu_Focus");
static_assert(offsetof(DebugFloat_C_Set_Menu_Focus, bFocus) == 0x000000, "Member 'DebugFloat_C_Set_Menu_Focus::bFocus' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'DebugFloat_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DebugFloat_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'DebugFloat_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

