#pragma once

 

// Package: DebugInt32

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DebugInt32.DebugInt32_C.ExecuteUbergraph_DebugInt32
// 0x0098 (0x0098 - 0x0000)
struct DebugInt32_C_ExecuteUbergraph_DebugInt32 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C06[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_1;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C07[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_1;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0020(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C08[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0040(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_2;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C09[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_2;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C0A[0x5];                                     // 0x0083(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugInt32_C_ExecuteUbergraph_DebugInt32) == 0x000008, "Wrong alignment on DebugInt32_C_ExecuteUbergraph_DebugInt32");
static_assert(sizeof(DebugInt32_C_ExecuteUbergraph_DebugInt32) == 0x000098, "Wrong size on DebugInt32_C_ExecuteUbergraph_DebugInt32");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, EntryPoint) == 0x000000, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::EntryPoint' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_GetDebugFunction_IsValid) == 0x000004, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_GetDebugFunction_ReturnValue) == 0x000008, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_NotEqual_NameName_ReturnValue) == 0x000010, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_GetDebugFunction_IsValid_1) == 0x000011, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_GetDebugFunction_IsValid_1' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_GetDebugFunction_ReturnValue_1) == 0x000018, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_GetDebugFunction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, K2Node_ComponentBoundEvent_Text) == 0x000020, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, K2Node_ComponentBoundEvent_CommitMethod) == 0x000038, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_GetText_ReturnValue) == 0x000040, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_GetPlayerController_ReturnValue) == 0x000058, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_Conv_TextToString_ReturnValue) == 0x000060, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_Conv_StringToInt_ReturnValue) == 0x000070, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_GetDebugFunction_IsValid_2) == 0x000074, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_GetDebugFunction_IsValid_2' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_GetDebugFunction_ReturnValue_2) == 0x000078, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_GetDebugFunction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_IsVisible_ReturnValue) == 0x000080, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000081, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_IsVisible_ReturnValue_1) == 0x000082, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_GetPlayerController_ReturnValue_1) == 0x000088, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_ExecuteUbergraph_DebugInt32, CallFunc_GetPlayerController_ReturnValue_2) == 0x000090, "Member 'DebugInt32_C_ExecuteUbergraph_DebugInt32::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");

// Function DebugInt32.DebugInt32_C.BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct DebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on DebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(DebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on DebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(DebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'DebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'DebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function DebugInt32.DebugInt32_C.Set Menu Focus
// 0x0058 (0x0058 - 0x0000)
struct DebugInt32_C_Set_Menu_Focus final
{
public:
	bool                                          bFocus;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C0B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(DebugInt32_C_Set_Menu_Focus) == 0x000008, "Wrong alignment on DebugInt32_C_Set_Menu_Focus");
static_assert(sizeof(DebugInt32_C_Set_Menu_Focus) == 0x000058, "Wrong size on DebugInt32_C_Set_Menu_Focus");
static_assert(offsetof(DebugInt32_C_Set_Menu_Focus, bFocus) == 0x000000, "Member 'DebugInt32_C_Set_Menu_Focus::bFocus' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'DebugInt32_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DebugInt32_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'DebugInt32_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

