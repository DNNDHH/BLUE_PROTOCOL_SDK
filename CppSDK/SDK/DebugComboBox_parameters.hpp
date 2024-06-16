#pragma once

 

// Package: DebugComboBox

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DebugComboBox.DebugComboBox_C.ExecuteUbergraph_DebugComboBox
// 0x0070 (0x0070 - 0x0000)
struct DebugComboBox_C_ExecuteUbergraph_DebugComboBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_512C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_1;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_512D[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSelectedOption_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_2;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_512E[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_2;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_512F[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5130[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox) == 0x000008, "Wrong alignment on DebugComboBox_C_ExecuteUbergraph_DebugComboBox");
static_assert(sizeof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox) == 0x000070, "Wrong size on DebugComboBox_C_ExecuteUbergraph_DebugComboBox");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, EntryPoint) == 0x000000, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_GetDebugFunction_IsValid) == 0x000004, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_GetDebugFunction_ReturnValue) == 0x000008, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, K2Node_ComponentBoundEvent_SelectedItem) == 0x000010, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, K2Node_ComponentBoundEvent_SelectionType) == 0x000020, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_GetDebugFunction_IsValid_1) == 0x000021, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_GetDebugFunction_IsValid_1' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_GetDebugFunction_ReturnValue_1) == 0x000028, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_GetDebugFunction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_GetSelectedOption_ReturnValue) == 0x000030, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_GetSelectedOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_GetDebugFunction_IsValid_2) == 0x000040, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_GetDebugFunction_IsValid_2' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_GetDebugFunction_ReturnValue_2) == 0x000048, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_GetDebugFunction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_IsVisible_ReturnValue) == 0x000050, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_NotEqual_NameName_ReturnValue) == 0x000051, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_IsVisible_ReturnValue_1) == 0x000052, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_GetPlayerController_ReturnValue) == 0x000058, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000060, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_ExecuteUbergraph_DebugComboBox, CallFunc_GetPlayerController_ReturnValue_1) == 0x000068, "Member 'DebugComboBox_C_ExecuteUbergraph_DebugComboBox::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");

// Function DebugComboBox.DebugComboBox_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct DebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on DebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(DebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on DebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(DebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'DebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'DebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function DebugComboBox.DebugComboBox_C.Set Menu Focus
// 0x0058 (0x0058 - 0x0000)
struct DebugComboBox_C_Set_Menu_Focus final
{
public:
	bool                                          bFocus;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5131[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(DebugComboBox_C_Set_Menu_Focus) == 0x000008, "Wrong alignment on DebugComboBox_C_Set_Menu_Focus");
static_assert(sizeof(DebugComboBox_C_Set_Menu_Focus) == 0x000058, "Wrong size on DebugComboBox_C_Set_Menu_Focus");
static_assert(offsetof(DebugComboBox_C_Set_Menu_Focus, bFocus) == 0x000000, "Member 'DebugComboBox_C_Set_Menu_Focus::bFocus' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'DebugComboBox_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'DebugComboBox_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function DebugComboBox.DebugComboBox_C.SetSpacerWidthFromStringLength
// 0x0058 (0x0058 - 0x0000)
struct DebugComboBox_C_SetSpacerWidthFromStringLength final
{
public:
	int32                                         Length;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5132[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_2;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugComboBox_C_SetSpacerWidthFromStringLength) == 0x000008, "Wrong alignment on DebugComboBox_C_SetSpacerWidthFromStringLength");
static_assert(sizeof(DebugComboBox_C_SetSpacerWidthFromStringLength) == 0x000058, "Wrong size on DebugComboBox_C_SetSpacerWidthFromStringLength");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, Length) == 0x000000, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::Length' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, CallFunc_Multiply_IntInt_ReturnValue) == 0x000030, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, CallFunc_Len_ReturnValue) == 0x000034, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x000038, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, CallFunc_BreakVector2D_X) == 0x00003C, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, CallFunc_BreakVector2D_Y) == 0x000040, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, CallFunc_Multiply_IntInt_ReturnValue_2) == 0x000048, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::CallFunc_Multiply_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00004C, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetSpacerWidthFromStringLength, CallFunc_MakeVector2D_ReturnValue) == 0x000050, "Member 'DebugComboBox_C_SetSpacerWidthFromStringLength::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function DebugComboBox.DebugComboBox_C.SetComboBoxStringFocus
// 0x0B00 (0x0B00 - 0x0000)
struct DebugComboBox_C_SetComboBoxStringFocus final
{
public:
	bool                                          bFocus;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5133[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            Color;                                             // 0x0008(0x0028)(Edit, BlueprintVisible)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0058(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x00E0(0x0278)()
	struct FComboButtonStyle                      K2Node_MakeStruct_ComboButtonStyle;                // 0x0358(0x03B8)()
	struct FComboBoxStyle                         K2Node_MakeStruct_ComboBoxStyle;                   // 0x0710(0x03F0)()
};
static_assert(alignof(DebugComboBox_C_SetComboBoxStringFocus) == 0x000008, "Wrong alignment on DebugComboBox_C_SetComboBoxStringFocus");
static_assert(sizeof(DebugComboBox_C_SetComboBoxStringFocus) == 0x000B00, "Wrong size on DebugComboBox_C_SetComboBoxStringFocus");
static_assert(offsetof(DebugComboBox_C_SetComboBoxStringFocus, bFocus) == 0x000000, "Member 'DebugComboBox_C_SetComboBoxStringFocus::bFocus' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetComboBoxStringFocus, Color) == 0x000008, "Member 'DebugComboBox_C_SetComboBoxStringFocus::Color' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetComboBoxStringFocus, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'DebugComboBox_C_SetComboBoxStringFocus::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetComboBoxStringFocus, K2Node_MakeStruct_SlateBrush) == 0x000058, "Member 'DebugComboBox_C_SetComboBoxStringFocus::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetComboBoxStringFocus, K2Node_MakeStruct_ButtonStyle) == 0x0000E0, "Member 'DebugComboBox_C_SetComboBoxStringFocus::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetComboBoxStringFocus, K2Node_MakeStruct_ComboButtonStyle) == 0x000358, "Member 'DebugComboBox_C_SetComboBoxStringFocus::K2Node_MakeStruct_ComboButtonStyle' has a wrong offset!");
static_assert(offsetof(DebugComboBox_C_SetComboBoxStringFocus, K2Node_MakeStruct_ComboBoxStyle) == 0x000710, "Member 'DebugComboBox_C_SetComboBoxStringFocus::K2Node_MakeStruct_ComboBoxStyle' has a wrong offset!");

}

