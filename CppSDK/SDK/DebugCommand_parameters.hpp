#pragma once

 

// Package: DebugCommand

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DebugCommand.DebugCommand_C.ExecuteUbergraph_DebugCommand
// 0x0128 (0x0128 - 0x0000)
struct DebugCommand_C_ExecuteUbergraph_DebugCommand final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_511F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5120[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0028(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5121[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	bool                                          CallFunc_GetDebugFunction_IsValid_1;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5122[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_1;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_2;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5123[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_2;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_3;               // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5124[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_3;           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_4;               // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5125[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_4;           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue_2;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5126[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x00D0(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5127[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_5;               // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5128[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_5;           // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0110(0x0018)()
};
static_assert(alignof(DebugCommand_C_ExecuteUbergraph_DebugCommand) == 0x000008, "Wrong alignment on DebugCommand_C_ExecuteUbergraph_DebugCommand");
static_assert(sizeof(DebugCommand_C_ExecuteUbergraph_DebugCommand) == 0x000128, "Wrong size on DebugCommand_C_ExecuteUbergraph_DebugCommand");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, EntryPoint) == 0x000000, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::EntryPoint' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_IsValid) == 0x000004, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_ReturnValue) == 0x000008, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_NotEqual_NameName_ReturnValue) == 0x000010, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetText_ReturnValue) == 0x000028, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000040, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_IsValid_1) == 0x000080, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_IsValid_1' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_ReturnValue_1) == 0x000088, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_IsValid_2) == 0x000090, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_IsValid_2' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_ReturnValue_2) == 0x000098, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_IsVisible_ReturnValue) == 0x0000A0, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_IsValid_3) == 0x0000A1, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_IsValid_3' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_ReturnValue_3) == 0x0000A8, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_IsVisible_ReturnValue_1) == 0x0000B0, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_IsValid_4) == 0x0000B1, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_IsValid_4' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_ReturnValue_4) == 0x0000B8, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetPlayerController_ReturnValue) == 0x0000C0, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_IsVisible_ReturnValue_2) == 0x0000C8, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_IsVisible_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, K2Node_ComponentBoundEvent_Text) == 0x0000D0, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, K2Node_ComponentBoundEvent_CommitMethod) == 0x0000E8, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000F0, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetPlayerController_ReturnValue_2) == 0x0000F8, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_IsValid_5) == 0x000100, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_IsValid_5' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_GetDebugFunction_ReturnValue_5) == 0x000108, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_GetDebugFunction_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_ExecuteUbergraph_DebugCommand, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000110, "Member 'DebugCommand_C_ExecuteUbergraph_DebugCommand::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function DebugCommand.DebugCommand_C.BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct DebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on DebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(DebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on DebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(DebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'DebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'DebugCommand_C_BndEvt__EditableTextBox_Command_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function DebugCommand.DebugCommand_C.Set Menu Focus
// 0x0058 (0x0058 - 0x0000)
struct DebugCommand_C_Set_Menu_Focus final
{
public:
	bool                                          bFocus;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5129[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(DebugCommand_C_Set_Menu_Focus) == 0x000008, "Wrong alignment on DebugCommand_C_Set_Menu_Focus");
static_assert(sizeof(DebugCommand_C_Set_Menu_Focus) == 0x000058, "Wrong size on DebugCommand_C_Set_Menu_Focus");
static_assert(offsetof(DebugCommand_C_Set_Menu_Focus, bFocus) == 0x000000, "Member 'DebugCommand_C_Set_Menu_Focus::bFocus' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'DebugCommand_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DebugCommand_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'DebugCommand_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

