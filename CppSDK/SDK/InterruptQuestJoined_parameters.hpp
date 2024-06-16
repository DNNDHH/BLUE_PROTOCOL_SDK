#pragma once

 

// Package: InterruptQuestJoined

#include "Basic.hpp"


namespace SDK::Params
{

// Function InterruptQuestJoined.InterruptQuestJoined_C.ExecuteUbergraph_InterruptQuestJoined
// 0x0020 (0x0020 - 0x0000)
struct InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D84[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined) == 0x000008, "Wrong alignment on InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined");
static_assert(sizeof(InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined) == 0x000020, "Wrong size on InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined");
static_assert(offsetof(InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined, EntryPoint) == 0x000000, "Member 'InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined::EntryPoint' has a wrong offset!");
static_assert(offsetof(InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined, K2Node_Event_Animation) == 0x000008, "Member 'InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function InterruptQuestJoined.InterruptQuestJoined_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct InterruptQuestJoined_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterruptQuestJoined_C_OnAnimationFinished) == 0x000008, "Wrong alignment on InterruptQuestJoined_C_OnAnimationFinished");
static_assert(sizeof(InterruptQuestJoined_C_OnAnimationFinished) == 0x000008, "Wrong size on InterruptQuestJoined_C_OnAnimationFinished");
static_assert(offsetof(InterruptQuestJoined_C_OnAnimationFinished, Animation) == 0x000000, "Member 'InterruptQuestJoined_C_OnAnimationFinished::Animation' has a wrong offset!");

}

