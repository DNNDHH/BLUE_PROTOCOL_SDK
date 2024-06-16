#pragma once

 

// Package: DebugChildButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DebugChildButton.DebugChildButton_C.EventDispatcher_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct DebugChildButton_C_EventDispatcher_OnClicked__DelegateSignature final
{
public:
	class UDebugChildButton_C*                    DebugButton;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugChildButton_C_EventDispatcher_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on DebugChildButton_C_EventDispatcher_OnClicked__DelegateSignature");
static_assert(sizeof(DebugChildButton_C_EventDispatcher_OnClicked__DelegateSignature) == 0x000008, "Wrong size on DebugChildButton_C_EventDispatcher_OnClicked__DelegateSignature");
static_assert(offsetof(DebugChildButton_C_EventDispatcher_OnClicked__DelegateSignature, DebugButton) == 0x000000, "Member 'DebugChildButton_C_EventDispatcher_OnClicked__DelegateSignature::DebugButton' has a wrong offset!");

// Function DebugChildButton.DebugChildButton_C.ExecuteUbergraph_DebugChildButton
// 0x0080 (0x0080 - 0x0000)
struct DebugChildButton_C_ExecuteUbergraph_DebugChildButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5134[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugMenu_C*                           CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5135[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugMenu_C*                           K2Node_DynamicCast_AsDebug_Menu;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5136[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_1;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5137[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_1;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_2;               // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5138[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_2;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_3;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5139[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_3;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcChildMenuPosition_Position;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton) == 0x000008, "Wrong alignment on DebugChildButton_C_ExecuteUbergraph_DebugChildButton");
static_assert(sizeof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton) == 0x000080, "Wrong size on DebugChildButton_C_ExecuteUbergraph_DebugChildButton");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, EntryPoint) == 0x000000, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_Create_ReturnValue) == 0x000008, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_Conv_StringToName_ReturnValue) == 0x000018, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, K2Node_DynamicCast_AsDebug_Menu) == 0x000020, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::K2Node_DynamicCast_AsDebug_Menu' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_MakeLiteralByte_ReturnValue) == 0x000029, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_GetDebugFunction_IsValid) == 0x00002A, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_GetDebugFunction_ReturnValue) == 0x000030, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_GetPlayerController_ReturnValue) == 0x000038, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_GetDebugFunction_IsValid_1) == 0x000040, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_GetDebugFunction_IsValid_1' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_GetDebugFunction_ReturnValue_1) == 0x000048, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_GetDebugFunction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_IsVisible_ReturnValue) == 0x000050, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_IsVisible_ReturnValue_1) == 0x000051, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_GetDebugFunction_IsValid_2) == 0x000052, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_GetDebugFunction_IsValid_2' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_GetDebugFunction_ReturnValue_2) == 0x000058, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_GetDebugFunction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_GetDebugFunction_IsValid_3) == 0x000060, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_GetDebugFunction_IsValid_3' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_GetDebugFunction_ReturnValue_3) == 0x000068, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_GetDebugFunction_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_GetPlayerController_ReturnValue_1) == 0x000070, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_ExecuteUbergraph_DebugChildButton, CallFunc_CalcChildMenuPosition_Position) == 0x000078, "Member 'DebugChildButton_C_ExecuteUbergraph_DebugChildButton::CallFunc_CalcChildMenuPosition_Position' has a wrong offset!");

// Function DebugChildButton.DebugChildButton_C.Set Menu Focus
// 0x0058 (0x0058 - 0x0000)
struct DebugChildButton_C_Set_Menu_Focus final
{
public:
	bool                                          bFocus;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_513A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(DebugChildButton_C_Set_Menu_Focus) == 0x000008, "Wrong alignment on DebugChildButton_C_Set_Menu_Focus");
static_assert(sizeof(DebugChildButton_C_Set_Menu_Focus) == 0x000058, "Wrong size on DebugChildButton_C_Set_Menu_Focus");
static_assert(offsetof(DebugChildButton_C_Set_Menu_Focus, bFocus) == 0x000000, "Member 'DebugChildButton_C_Set_Menu_Focus::bFocus' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'DebugChildButton_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_Set_Menu_Focus, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'DebugChildButton_C_Set_Menu_Focus::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function DebugChildButton.DebugChildButton_C.GetText
// 0x0030 (0x0030 - 0x0000)
struct DebugChildButton_C_GetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
};
static_assert(alignof(DebugChildButton_C_GetText) == 0x000008, "Wrong alignment on DebugChildButton_C_GetText");
static_assert(sizeof(DebugChildButton_C_GetText) == 0x000030, "Wrong size on DebugChildButton_C_GetText");
static_assert(offsetof(DebugChildButton_C_GetText, Text) == 0x000000, "Member 'DebugChildButton_C_GetText::Text' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_GetText, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'DebugChildButton_C_GetText::CallFunc_GetText_ReturnValue' has a wrong offset!");

// Function DebugChildButton.DebugChildButton_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct DebugChildButton_C_SetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(DebugChildButton_C_SetText) == 0x000008, "Wrong alignment on DebugChildButton_C_SetText");
static_assert(sizeof(DebugChildButton_C_SetText) == 0x000018, "Wrong size on DebugChildButton_C_SetText");
static_assert(offsetof(DebugChildButton_C_SetText, Text) == 0x000000, "Member 'DebugChildButton_C_SetText::Text' has a wrong offset!");

// Function DebugChildButton.DebugChildButton_C.CalcChildMenuPosition
// 0x0034 (0x0034 - 0x0000)
struct DebugChildButton_C_CalcChildMenuPosition final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugChildButton_C_CalcChildMenuPosition) == 0x000004, "Wrong alignment on DebugChildButton_C_CalcChildMenuPosition");
static_assert(sizeof(DebugChildButton_C_CalcChildMenuPosition) == 0x000034, "Wrong size on DebugChildButton_C_CalcChildMenuPosition");
static_assert(offsetof(DebugChildButton_C_CalcChildMenuPosition, Position) == 0x000000, "Member 'DebugChildButton_C_CalcChildMenuPosition::Position' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_CalcChildMenuPosition, CallFunc_GetDesiredSize_ReturnValue) == 0x000008, "Member 'DebugChildButton_C_CalcChildMenuPosition::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_CalcChildMenuPosition, CallFunc_BreakVector2D_X) == 0x000010, "Member 'DebugChildButton_C_CalcChildMenuPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_CalcChildMenuPosition, CallFunc_BreakVector2D_Y) == 0x000014, "Member 'DebugChildButton_C_CalcChildMenuPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_CalcChildMenuPosition, CallFunc_Add_FloatFloat_ReturnValue) == 0x000018, "Member 'DebugChildButton_C_CalcChildMenuPosition::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_CalcChildMenuPosition, CallFunc_BreakVector2D_X_1) == 0x00001C, "Member 'DebugChildButton_C_CalcChildMenuPosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_CalcChildMenuPosition, CallFunc_BreakVector2D_Y_1) == 0x000020, "Member 'DebugChildButton_C_CalcChildMenuPosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_CalcChildMenuPosition, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000024, "Member 'DebugChildButton_C_CalcChildMenuPosition::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_CalcChildMenuPosition, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x000028, "Member 'DebugChildButton_C_CalcChildMenuPosition::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugChildButton_C_CalcChildMenuPosition, CallFunc_MakeVector2D_ReturnValue) == 0x00002C, "Member 'DebugChildButton_C_CalcChildMenuPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}

