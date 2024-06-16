#pragma once

 

// Package: SimpleAlert

#include "Basic.hpp"


namespace SDK::Params
{

// Function SimpleAlert.SimpleAlert_C.ExecuteUbergraph_SimpleAlert
// 0x0068 (0x0068 - 0x0000)
struct SimpleAlert_C_ExecuteUbergraph_SimpleAlert final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4615[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	class FString                                 K2Node_CustomEvent_Message;                        // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_TextId;                         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4616[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0058(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SimpleAlert_C_ExecuteUbergraph_SimpleAlert) == 0x000008, "Wrong alignment on SimpleAlert_C_ExecuteUbergraph_SimpleAlert");
static_assert(sizeof(SimpleAlert_C_ExecuteUbergraph_SimpleAlert) == 0x000068, "Wrong size on SimpleAlert_C_ExecuteUbergraph_SimpleAlert");
static_assert(offsetof(SimpleAlert_C_ExecuteUbergraph_SimpleAlert, EntryPoint) == 0x000000, "Member 'SimpleAlert_C_ExecuteUbergraph_SimpleAlert::EntryPoint' has a wrong offset!");
static_assert(offsetof(SimpleAlert_C_ExecuteUbergraph_SimpleAlert, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'SimpleAlert_C_ExecuteUbergraph_SimpleAlert::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SimpleAlert_C_ExecuteUbergraph_SimpleAlert, K2Node_CustomEvent_Message) == 0x000020, "Member 'SimpleAlert_C_ExecuteUbergraph_SimpleAlert::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(SimpleAlert_C_ExecuteUbergraph_SimpleAlert, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'SimpleAlert_C_ExecuteUbergraph_SimpleAlert::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SimpleAlert_C_ExecuteUbergraph_SimpleAlert, K2Node_CustomEvent_TextId) == 0x000038, "Member 'SimpleAlert_C_ExecuteUbergraph_SimpleAlert::K2Node_CustomEvent_TextId' has a wrong offset!");
static_assert(offsetof(SimpleAlert_C_ExecuteUbergraph_SimpleAlert, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000040, "Member 'SimpleAlert_C_ExecuteUbergraph_SimpleAlert::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SimpleAlert_C_ExecuteUbergraph_SimpleAlert, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000050, "Member 'SimpleAlert_C_ExecuteUbergraph_SimpleAlert::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SimpleAlert_C_ExecuteUbergraph_SimpleAlert, K2Node_Event_Animation) == 0x000058, "Member 'SimpleAlert_C_ExecuteUbergraph_SimpleAlert::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(SimpleAlert_C_ExecuteUbergraph_SimpleAlert, CallFunc_BooleanAND_ReturnValue) == 0x000060, "Member 'SimpleAlert_C_ExecuteUbergraph_SimpleAlert::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SimpleAlert.SimpleAlert_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct SimpleAlert_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SimpleAlert_C_OnAnimationFinished) == 0x000008, "Wrong alignment on SimpleAlert_C_OnAnimationFinished");
static_assert(sizeof(SimpleAlert_C_OnAnimationFinished) == 0x000008, "Wrong size on SimpleAlert_C_OnAnimationFinished");
static_assert(offsetof(SimpleAlert_C_OnAnimationFinished, Animation) == 0x000000, "Member 'SimpleAlert_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function SimpleAlert.SimpleAlert_C.SetTextById
// 0x0008 (0x0008 - 0x0000)
struct SimpleAlert_C_SetTextById final
{
public:
	class FName                                   TextId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SimpleAlert_C_SetTextById) == 0x000004, "Wrong alignment on SimpleAlert_C_SetTextById");
static_assert(sizeof(SimpleAlert_C_SetTextById) == 0x000008, "Wrong size on SimpleAlert_C_SetTextById");
static_assert(offsetof(SimpleAlert_C_SetTextById, TextId) == 0x000000, "Member 'SimpleAlert_C_SetTextById::TextId' has a wrong offset!");

// Function SimpleAlert.SimpleAlert_C.SetText
// 0x0010 (0x0010 - 0x0000)
struct SimpleAlert_C_SetText final
{
public:
	class FString                                 Message;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SimpleAlert_C_SetText) == 0x000008, "Wrong alignment on SimpleAlert_C_SetText");
static_assert(sizeof(SimpleAlert_C_SetText) == 0x000010, "Wrong size on SimpleAlert_C_SetText");
static_assert(offsetof(SimpleAlert_C_SetText, Message) == 0x000000, "Member 'SimpleAlert_C_SetText::Message' has a wrong offset!");

}

