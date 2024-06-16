#pragma once

 

// Package: AITask_NpcTalk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AITask_NpcTalk.AITask_NpcTalk_C
// 0x0018 (0x00C0 - 0x00A8)
class UAITask_NpcTalk_C final : public USBAITask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ScriptHandle;                                      // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9ED1[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          AIController;                                      // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AITask_NpcTalk(int32 EntryPoint);
	void TaskStart(class AAIController* Controller, class APawn* ControlledPawn);
	void TaskFinish(class AAIController* Controller, class APawn* ControlledPawn, bool bInOwnerFinished);
	void OnEndScript(class ASBScriptActor* InScriptActor, int32 InScriptHandle);
	void SetNeedTurn();
	void CheckMobCharacterQuestPrecondition(class ASBMobCharacter* InMobCharacter, bool* Flag);
	void IsNpcIsQuestReceptionist(class FName InProfileDatId, bool* Flag);
	void ResetPlayerInteractionActionDeltaTime();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AITask_NpcTalk_C">();
	}
	static class UAITask_NpcTalk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAITask_NpcTalk_C>();
	}
};
static_assert(alignof(UAITask_NpcTalk_C) == 0x000008, "Wrong alignment on UAITask_NpcTalk_C");
static_assert(sizeof(UAITask_NpcTalk_C) == 0x0000C0, "Wrong size on UAITask_NpcTalk_C");
static_assert(offsetof(UAITask_NpcTalk_C, UberGraphFrame) == 0x0000A8, "Member 'UAITask_NpcTalk_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAITask_NpcTalk_C, ScriptHandle) == 0x0000B0, "Member 'UAITask_NpcTalk_C::ScriptHandle' has a wrong offset!");
static_assert(offsetof(UAITask_NpcTalk_C, AIController) == 0x0000B8, "Member 'UAITask_NpcTalk_C::AIController' has a wrong offset!");

}

