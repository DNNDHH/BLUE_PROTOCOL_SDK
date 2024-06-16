#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskDemoWaiting

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskDemoWaiting.BP_PlayerLevelStartSequenceTaskDemoWaiting_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4010[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBScriptActor*                         CallFunc_GetActiveScriptActor_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting) == 0x000018, "Wrong size on BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting, CallFunc_GetActiveScriptActor_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting::CallFunc_GetActiveScriptActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

