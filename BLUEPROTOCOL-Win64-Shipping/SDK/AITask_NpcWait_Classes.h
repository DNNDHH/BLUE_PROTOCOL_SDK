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
	 * BlueprintGeneratedClass AITask_NpcWait.AITask_NpcWait_C
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UAITask_NpcWait_C : public USBAITask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void TaskFinish(class AAIController* Controller, class APawn* ControlledPawn, bool bInOwnerFinished);
		void RequestAnimation(bool Result);
		void TaskStart(class AAIController* Controller, class APawn* ControlledPawn);
		void ExecuteUbergraph_AITask_NpcWait(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
