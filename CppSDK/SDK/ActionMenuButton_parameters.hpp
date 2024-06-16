#pragma once

 

// Package: ActionMenuButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ActionMenuButton.ActionMenuButton_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ActionMenuButton_C_OnClicked__DelegateSignature final
{
public:
	class UActionMenuButton_C*                    Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActionMenuButton_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ActionMenuButton_C_OnClicked__DelegateSignature");
static_assert(sizeof(ActionMenuButton_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on ActionMenuButton_C_OnClicked__DelegateSignature");
static_assert(offsetof(ActionMenuButton_C_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'ActionMenuButton_C_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function ActionMenuButton.ActionMenuButton_C.ExecuteUbergraph_ActionMenuButton
// 0x0060 (0x0060 - 0x0000)
struct ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton) == 0x000008, "Wrong alignment on ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton");
static_assert(sizeof(ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton) == 0x000060, "Wrong size on ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton");
static_assert(offsetof(ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton, EntryPoint) == 0x000000, "Member 'ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton, CallFunc_PlaySE_ReturnValue_1) == 0x000058, "Member 'ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");

// Function ActionMenuButton.ActionMenuButton_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct ActionMenuButton_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ActionMenuButton_C_SetText) == 0x000008, "Wrong alignment on ActionMenuButton_C_SetText");
static_assert(sizeof(ActionMenuButton_C_SetText) == 0x000018, "Wrong size on ActionMenuButton_C_SetText");
static_assert(offsetof(ActionMenuButton_C_SetText, InText) == 0x000000, "Member 'ActionMenuButton_C_SetText::InText' has a wrong offset!");

}

