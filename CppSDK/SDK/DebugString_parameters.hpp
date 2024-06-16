#pragma once

 

// Package: DebugString

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DebugString.DebugString_C.ExecuteUbergraph_DebugString
// 0x00B0 (0x00B0 - 0x0000)
struct DebugString_C_ExecuteUbergraph_DebugString final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5052[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5053[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0018(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_1;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5054[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0048(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_GetDebugFunction_IsValid_2;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5055[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_2;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5056[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugString_C_ExecuteUbergraph_DebugString) == 0x000008, "Wrong alignment on DebugString_C_ExecuteUbergraph_DebugString");
static_assert(sizeof(DebugString_C_ExecuteUbergraph_DebugString) == 0x0000B0, "Wrong size on DebugString_C_ExecuteUbergraph_DebugString");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, EntryPoint) == 0x000000, "Member 'DebugString_C_ExecuteUbergraph_DebugString::EntryPoint' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_GetDebugFunction_IsValid) == 0x000004, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_GetDebugFunction_ReturnValue) == 0x000008, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_NotEqual_NameName_ReturnValue) == 0x000010, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, K2Node_ComponentBoundEvent_Text) == 0x000018, "Member 'DebugString_C_ExecuteUbergraph_DebugString::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, K2Node_ComponentBoundEvent_CommitMethod) == 0x000030, "Member 'DebugString_C_ExecuteUbergraph_DebugString::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_GetDebugFunction_IsValid_1) == 0x000031, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_GetDebugFunction_IsValid_1' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_GetDebugFunction_ReturnValue_1) == 0x000038, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_GetDebugFunction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_GetText_ReturnValue) == 0x000048, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_Conv_TextToString_ReturnValue) == 0x000060, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, K2Node_MakeArray_Array) == 0x000070, "Member 'DebugString_C_ExecuteUbergraph_DebugString::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_GetDebugFunction_IsValid_2) == 0x000080, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_GetDebugFunction_IsValid_2' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_GetDebugFunction_ReturnValue_2) == 0x000088, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_GetDebugFunction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_IsVisible_ReturnValue) == 0x000090, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000091, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_GetPlayerController_ReturnValue_1) == 0x000098, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_GetPlayerController_ReturnValue_2) == 0x0000A0, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugString_C_ExecuteUbergraph_DebugString, CallFunc_IsVisible_ReturnValue_1) == 0x0000A8, "Member 'DebugString_C_ExecuteUbergraph_DebugString::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");

// Function DebugString.DebugString_C.BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct DebugString_C_BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugString_C_BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on DebugString_C_BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(DebugString_C_BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on DebugString_C_BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(DebugString_C_BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'DebugString_C_BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(DebugString_C_BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'DebugString_C_BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_423_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function DebugString.DebugString_C.Set Menu Focus
// 0x0058 (0x0058 - 0x0000)
struct DebugString_C_Set_Menu_Focus final
{
public:
	bool                                          bFocus;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5057[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(DebugString_C_Set_Menu_Focus) == 0x000008, "Wrong alignment on DebugString_C_Set_Menu_Focus");
static_assert(sizeof(DebugString_C_Set_Menu_Focus) == 0x000058, "Wrong size on DebugString_C_Set_Menu_Focus");
static_assert(offsetof(DebugString_C_Set_Menu_Focus, bFocus) == 0x000000, "Member 'DebugString_C_Set_Menu_Focus::bFocus' has a wrong offset!");
static_assert(offsetof(DebugString_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'DebugString_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DebugString_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'DebugString_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

