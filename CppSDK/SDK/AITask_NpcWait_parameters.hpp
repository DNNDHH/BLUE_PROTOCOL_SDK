#pragma once

 

// Package: AITask_NpcWait

#include "Basic.hpp"


namespace SDK::Params
{

// Function AITask_NpcWait.AITask_NpcWait_C.ExecuteUbergraph_AITask_NpcWait
// 0x00A8 (0x00A8 - 0x0000)
struct AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_864A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_Controller;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_Controller_1;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInOwnerFinished;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_864B[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBMobCharacter*                        K2Node_DynamicCast_AsSBMob_Character;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_864C[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBMobCharacter*                        K2Node_DynamicCast_AsSBMob_Character_1;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_864D[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_864E[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue_1;                        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSkipStartWaitSendCommand_ReturnValue;   // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_864F[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBNpcCharacter*                        K2Node_DynamicCast_AsSBNpc_Character;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8650[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBNpcCharacter*                        K2Node_DynamicCast_AsSBNpc_Character_1;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8651[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8652[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait) == 0x000008, "Wrong alignment on AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait");
static_assert(sizeof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait) == 0x0000A8, "Wrong size on AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, EntryPoint) == 0x000000, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::EntryPoint' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_Event_Controller) == 0x000008, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_Event_Controller' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_Event_ControlledPawn) == 0x000010, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_Event_Controller_1) == 0x000018, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_Event_Controller_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_Event_ControlledPawn_1) == 0x000020, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_Event_bInOwnerFinished) == 0x000028, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_Event_bInOwnerFinished' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_DynamicCast_AsSBMob_Character) == 0x000030, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_DynamicCast_AsSBMob_Character' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_DynamicCast_AsSBMob_Character_1) == 0x000040, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_DynamicCast_AsSBMob_Character_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, CallFunc_Conv_StringToName_ReturnValue) == 0x00004C, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, CallFunc_Len_ReturnValue) == 0x000054, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000058, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, CallFunc_Conv_StringToName_ReturnValue_1) == 0x00005C, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, CallFunc_Len_ReturnValue_1) == 0x000064, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::CallFunc_Len_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000068, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, CallFunc_IsSkipStartWaitSendCommand_ReturnValue) == 0x000069, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::CallFunc_IsSkipStartWaitSendCommand_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_DynamicCast_AsSBNpc_Character) == 0x000070, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_DynamicCast_AsSBNpc_Character' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_DynamicCast_AsSBNpc_Character_1) == 0x000080, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_DynamicCast_AsSBNpc_Character_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_DynamicCast_bSuccess_3) == 0x000088, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, CallFunc_MakeLiteralName_ReturnValue) == 0x00008C, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_CustomEvent_Result) == 0x000094, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait, K2Node_CreateDelegate_OutputDelegate) == 0x000098, "Member 'AITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function AITask_NpcWait.AITask_NpcWait_C.TaskStart
// 0x0010 (0x0010 - 0x0000)
struct AITask_NpcWait_C_TaskStart final
{
public:
	class AAIController*                          Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AITask_NpcWait_C_TaskStart) == 0x000008, "Wrong alignment on AITask_NpcWait_C_TaskStart");
static_assert(sizeof(AITask_NpcWait_C_TaskStart) == 0x000010, "Wrong size on AITask_NpcWait_C_TaskStart");
static_assert(offsetof(AITask_NpcWait_C_TaskStart, Controller) == 0x000000, "Member 'AITask_NpcWait_C_TaskStart::Controller' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_TaskStart, ControlledPawn) == 0x000008, "Member 'AITask_NpcWait_C_TaskStart::ControlledPawn' has a wrong offset!");

// Function AITask_NpcWait.AITask_NpcWait_C.RequestAnimation
// 0x0001 (0x0001 - 0x0000)
struct AITask_NpcWait_C_RequestAnimation final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AITask_NpcWait_C_RequestAnimation) == 0x000001, "Wrong alignment on AITask_NpcWait_C_RequestAnimation");
static_assert(sizeof(AITask_NpcWait_C_RequestAnimation) == 0x000001, "Wrong size on AITask_NpcWait_C_RequestAnimation");
static_assert(offsetof(AITask_NpcWait_C_RequestAnimation, Result) == 0x000000, "Member 'AITask_NpcWait_C_RequestAnimation::Result' has a wrong offset!");

// Function AITask_NpcWait.AITask_NpcWait_C.TaskFinish
// 0x0018 (0x0018 - 0x0000)
struct AITask_NpcWait_C_TaskFinish final
{
public:
	class AAIController*                          Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInOwnerFinished;                                  // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AITask_NpcWait_C_TaskFinish) == 0x000008, "Wrong alignment on AITask_NpcWait_C_TaskFinish");
static_assert(sizeof(AITask_NpcWait_C_TaskFinish) == 0x000018, "Wrong size on AITask_NpcWait_C_TaskFinish");
static_assert(offsetof(AITask_NpcWait_C_TaskFinish, Controller) == 0x000000, "Member 'AITask_NpcWait_C_TaskFinish::Controller' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_TaskFinish, ControlledPawn) == 0x000008, "Member 'AITask_NpcWait_C_TaskFinish::ControlledPawn' has a wrong offset!");
static_assert(offsetof(AITask_NpcWait_C_TaskFinish, bInOwnerFinished) == 0x000010, "Member 'AITask_NpcWait_C_TaskFinish::bInOwnerFinished' has a wrong offset!");

}

