#pragma once

 

// Package: TextWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function TextWidget.TextWidget_C.SetText
// 0x0010 (0x0010 - 0x0000)
struct TextWidget_C_SetText final
{
public:
	class FString                                 Param_Text;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWidget_C_SetText) == 0x000008, "Wrong alignment on TextWidget_C_SetText");
static_assert(sizeof(TextWidget_C_SetText) == 0x000010, "Wrong size on TextWidget_C_SetText");
static_assert(offsetof(TextWidget_C_SetText, Param_Text) == 0x000000, "Member 'TextWidget_C_SetText::Param_Text' has a wrong offset!");

// Function TextWidget.TextWidget_C.SetTextId
// 0x0004 (0x0004 - 0x0000)
struct TextWidget_C_SetTextId final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWidget_C_SetTextId) == 0x000004, "Wrong alignment on TextWidget_C_SetTextId");
static_assert(sizeof(TextWidget_C_SetTextId) == 0x000004, "Wrong size on TextWidget_C_SetTextId");
static_assert(offsetof(TextWidget_C_SetTextId, InTextID) == 0x000000, "Member 'TextWidget_C_SetTextId::InTextID' has a wrong offset!");

// Function TextWidget.TextWidget_C.ExecuteUbergraph_TextWidget
// 0x0040 (0x0040 - 0x0000)
struct TextWidget_C_ExecuteUbergraph_TextWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InTextId;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_Text;                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(TextWidget_C_ExecuteUbergraph_TextWidget) == 0x000008, "Wrong alignment on TextWidget_C_ExecuteUbergraph_TextWidget");
static_assert(sizeof(TextWidget_C_ExecuteUbergraph_TextWidget) == 0x000040, "Wrong size on TextWidget_C_ExecuteUbergraph_TextWidget");
static_assert(offsetof(TextWidget_C_ExecuteUbergraph_TextWidget, EntryPoint) == 0x000000, "Member 'TextWidget_C_ExecuteUbergraph_TextWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(TextWidget_C_ExecuteUbergraph_TextWidget, K2Node_CustomEvent_InTextId) == 0x000004, "Member 'TextWidget_C_ExecuteUbergraph_TextWidget::K2Node_CustomEvent_InTextId' has a wrong offset!");
static_assert(offsetof(TextWidget_C_ExecuteUbergraph_TextWidget, K2Node_CustomEvent_Text) == 0x000008, "Member 'TextWidget_C_ExecuteUbergraph_TextWidget::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(TextWidget_C_ExecuteUbergraph_TextWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'TextWidget_C_ExecuteUbergraph_TextWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TextWidget_C_ExecuteUbergraph_TextWidget, CallFunc_GetTextFromAsset_ReturnValue) == 0x000030, "Member 'TextWidget_C_ExecuteUbergraph_TextWidget::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");

}
