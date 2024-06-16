#pragma once

 

// Package: AITask_NpcTalk

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AITask_NpcTalk.AITask_NpcTalk_C.ExecuteUbergraph_AITask_NpcTalk
// 0x00A0 (0x00A0 - 0x0000)
struct AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9ED2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBScriptActor*                         K2Node_CustomEvent_InScriptActor;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InScriptHandle;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9ED3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBScriptManager*                       CallFunc_GetScriptManager_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_Controller_1;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInOwnerFinished;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ED4[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBScriptManager*                       CallFunc_GetScriptManager_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class ASBScriptActor* InScriptActor, int32 InScriptHandle)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	class AAIController*                          K2Node_Event_Controller;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBMobCharacter*                        K2Node_DynamicCast_AsSBMob_Character;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckMobCharacterQuestPrecondition_flag;  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ED5[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_StartScript_TalkByTriggerArray_ReturnValue; // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk) == 0x000008, "Wrong alignment on AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk");
static_assert(sizeof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk) == 0x0000A0, "Wrong size on AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, EntryPoint) == 0x000000, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::EntryPoint' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, K2Node_CustomEvent_InScriptActor) == 0x000008, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::K2Node_CustomEvent_InScriptActor' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, K2Node_CustomEvent_InScriptHandle) == 0x000010, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::K2Node_CustomEvent_InScriptHandle' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, CallFunc_GetScriptManager_ReturnValue) == 0x000018, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::CallFunc_GetScriptManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, K2Node_Event_Controller_1) == 0x000020, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::K2Node_Event_Controller_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, K2Node_Event_ControlledPawn_1) == 0x000028, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, K2Node_Event_bInOwnerFinished) == 0x000030, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::K2Node_Event_bInOwnerFinished' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000031, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, CallFunc_GetScriptManager_ReturnValue_1) == 0x000038, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::CallFunc_GetScriptManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, K2Node_Event_Controller) == 0x000078, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::K2Node_Event_Controller' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, K2Node_Event_ControlledPawn) == 0x000080, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, K2Node_DynamicCast_AsSBMob_Character) == 0x000088, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::K2Node_DynamicCast_AsSBMob_Character' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, CallFunc_CheckMobCharacterQuestPrecondition_flag) == 0x000091, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::CallFunc_CheckMobCharacterQuestPrecondition_flag' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, CallFunc_StartScript_TalkByTriggerArray_ReturnValue) == 0x000094, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::CallFunc_StartScript_TalkByTriggerArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000098, "Member 'AITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function AITask_NpcTalk.AITask_NpcTalk_C.TaskStart
// 0x0010 (0x0010 - 0x0000)
struct AITask_NpcTalk_C_TaskStart final
{
public:
	class AAIController*                          Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AITask_NpcTalk_C_TaskStart) == 0x000008, "Wrong alignment on AITask_NpcTalk_C_TaskStart");
static_assert(sizeof(AITask_NpcTalk_C_TaskStart) == 0x000010, "Wrong size on AITask_NpcTalk_C_TaskStart");
static_assert(offsetof(AITask_NpcTalk_C_TaskStart, Controller) == 0x000000, "Member 'AITask_NpcTalk_C_TaskStart::Controller' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_TaskStart, ControlledPawn) == 0x000008, "Member 'AITask_NpcTalk_C_TaskStart::ControlledPawn' has a wrong offset!");

// Function AITask_NpcTalk.AITask_NpcTalk_C.TaskFinish
// 0x0018 (0x0018 - 0x0000)
struct AITask_NpcTalk_C_TaskFinish final
{
public:
	class AAIController*                          Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInOwnerFinished;                                  // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AITask_NpcTalk_C_TaskFinish) == 0x000008, "Wrong alignment on AITask_NpcTalk_C_TaskFinish");
static_assert(sizeof(AITask_NpcTalk_C_TaskFinish) == 0x000018, "Wrong size on AITask_NpcTalk_C_TaskFinish");
static_assert(offsetof(AITask_NpcTalk_C_TaskFinish, Controller) == 0x000000, "Member 'AITask_NpcTalk_C_TaskFinish::Controller' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_TaskFinish, ControlledPawn) == 0x000008, "Member 'AITask_NpcTalk_C_TaskFinish::ControlledPawn' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_TaskFinish, bInOwnerFinished) == 0x000010, "Member 'AITask_NpcTalk_C_TaskFinish::bInOwnerFinished' has a wrong offset!");

// Function AITask_NpcTalk.AITask_NpcTalk_C.OnEndScript
// 0x0010 (0x0010 - 0x0000)
struct AITask_NpcTalk_C_OnEndScript final
{
public:
	class ASBScriptActor*                         InScriptActor;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InScriptHandle;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AITask_NpcTalk_C_OnEndScript) == 0x000008, "Wrong alignment on AITask_NpcTalk_C_OnEndScript");
static_assert(sizeof(AITask_NpcTalk_C_OnEndScript) == 0x000010, "Wrong size on AITask_NpcTalk_C_OnEndScript");
static_assert(offsetof(AITask_NpcTalk_C_OnEndScript, InScriptActor) == 0x000000, "Member 'AITask_NpcTalk_C_OnEndScript::InScriptActor' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_OnEndScript, InScriptHandle) == 0x000008, "Member 'AITask_NpcTalk_C_OnEndScript::InScriptHandle' has a wrong offset!");

// Function AITask_NpcTalk.AITask_NpcTalk_C.SetNeedTurn
// 0x0070 (0x0070 - 0x0000)
struct AITask_NpcTalk_C_SetNeedTurn final
{
public:
	class UAIFwBlackboardComponent*               CallFunc_GetAIFwBlackboard_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ED6[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetValueAsVector_ReturnValue;             // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeAxis_ReturnValue;                // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AITask_NpcTalk_C_SetNeedTurn) == 0x000008, "Wrong alignment on AITask_NpcTalk_C_SetNeedTurn");
static_assert(sizeof(AITask_NpcTalk_C_SetNeedTurn) == 0x000070, "Wrong size on AITask_NpcTalk_C_SetNeedTurn");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_GetAIFwBlackboard_ReturnValue) == 0x000000, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_GetAIFwBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_GetValueAsVector_ReturnValue) == 0x00000C, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_GetValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_K2_GetPawn_ReturnValue) == 0x000018, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00002C, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_FindLookAtRotation_ReturnValue) == 0x000038, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_BreakRotator_Roll) == 0x000044, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_BreakRotator_Pitch) == 0x000048, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_BreakRotator_Yaw) == 0x00004C, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_BreakRotator_Roll_1) == 0x000050, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_BreakRotator_Pitch_1) == 0x000054, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_BreakRotator_Yaw_1) == 0x000058, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00005C, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_NormalizeAxis_ReturnValue) == 0x000060, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_NormalizeAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_Abs_ReturnValue) == 0x000064, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_SetNeedTurn, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000068, "Member 'AITask_NpcTalk_C_SetNeedTurn::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function AITask_NpcTalk.AITask_NpcTalk_C.CheckMobCharacterQuestPrecondition
// 0x0020 (0x0020 - 0x0000)
struct AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition final
{
public:
	class ASBMobCharacter*                        InMobCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Flag;                                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ED7[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetProfileDataId_ReturnValue;             // 0x000C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNpcIsQuestReceptionist_flag;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ED8[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNpcQuestIconType_QuestId;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestIconType                                CallFunc_GetNpcQuestIconType_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPrecoditionForQuestScript_ReturnValue; // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition) == 0x000008, "Wrong alignment on AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition");
static_assert(sizeof(AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition) == 0x000020, "Wrong size on AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition");
static_assert(offsetof(AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition, InMobCharacter) == 0x000000, "Member 'AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition::InMobCharacter' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition, Flag) == 0x000008, "Member 'AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition::Flag' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition, CallFunc_GetProfileDataId_ReturnValue) == 0x00000C, "Member 'AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition::CallFunc_GetProfileDataId_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition, CallFunc_IsNpcIsQuestReceptionist_flag) == 0x000014, "Member 'AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition::CallFunc_IsNpcIsQuestReceptionist_flag' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition, CallFunc_GetNpcQuestIconType_QuestId) == 0x000018, "Member 'AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition::CallFunc_GetNpcQuestIconType_QuestId' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition, CallFunc_GetNpcQuestIconType_ReturnValue) == 0x00001C, "Member 'AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition::CallFunc_GetNpcQuestIconType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition, CallFunc_CheckPrecoditionForQuestScript_ReturnValue) == 0x00001D, "Member 'AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition::CallFunc_CheckPrecoditionForQuestScript_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00001E, "Member 'AITask_NpcTalk_C_CheckMobCharacterQuestPrecondition::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function AITask_NpcTalk.AITask_NpcTalk_C.IsNpcIsQuestReceptionist
// 0x0028 (0x0028 - 0x0000)
struct AITask_NpcTalk_C_IsNpcIsQuestReceptionist final
{
public:
	class FName                                   InProfileDatId;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Flag;                                              // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ED9[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AITask_NpcTalk_C_IsNpcIsQuestReceptionist) == 0x000008, "Wrong alignment on AITask_NpcTalk_C_IsNpcIsQuestReceptionist");
static_assert(sizeof(AITask_NpcTalk_C_IsNpcIsQuestReceptionist) == 0x000028, "Wrong size on AITask_NpcTalk_C_IsNpcIsQuestReceptionist");
static_assert(offsetof(AITask_NpcTalk_C_IsNpcIsQuestReceptionist, InProfileDatId) == 0x000000, "Member 'AITask_NpcTalk_C_IsNpcIsQuestReceptionist::InProfileDatId' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_IsNpcIsQuestReceptionist, Flag) == 0x000008, "Member 'AITask_NpcTalk_C_IsNpcIsQuestReceptionist::Flag' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_IsNpcIsQuestReceptionist, CallFunc_Conv_NameToString_ReturnValue) == 0x000010, "Member 'AITask_NpcTalk_C_IsNpcIsQuestReceptionist::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_IsNpcIsQuestReceptionist, CallFunc_Contains_ReturnValue) == 0x000020, "Member 'AITask_NpcTalk_C_IsNpcIsQuestReceptionist::CallFunc_Contains_ReturnValue' has a wrong offset!");

// Function AITask_NpcTalk.AITask_NpcTalk_C.ResetPlayerInteractionActionDeltaTime
// 0x0018 (0x0018 - 0x0000)
struct AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime final
{
public:
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerInteractionComponent*          CallFunc_GetPlayerInteractionComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime) == 0x000008, "Wrong alignment on AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime");
static_assert(sizeof(AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime) == 0x000018, "Wrong size on AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime");
static_assert(offsetof(AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000000, "Member 'AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime, CallFunc_GetPlayerInteractionComponent_ReturnValue) == 0x000008, "Member 'AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime::CallFunc_GetPlayerInteractionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'AITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

