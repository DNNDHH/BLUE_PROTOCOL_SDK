#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass AITask_NpcTalk.AITask_NpcTalk_C
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UAITask_NpcTalk_C : public USBAITask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    ScriptHandle;                                            // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LB9Z[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       AIController;                                            // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ResetPlayerInteractionActionDeltaTime();
		void IsNpcIsQuestReceptionist(const class FName& InProfileDatId, bool* Flag);
		void CheckMobCharacterQuestPrecondition(class ASBMobCharacter* InMobCharacter, bool* Flag);
		void SetNeedTurn();
		void OnEndScript(class ASBScriptActor* InScriptActor, int32_t InScriptHandle);
		void TaskFinish(class AAIController* Controller, class APawn* ControlledPawn, bool bInOwnerFinished);
		void TaskStart(class AAIController* Controller, class APawn* ControlledPawn);
		void ExecuteUbergraph_AITask_NpcTalk(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
