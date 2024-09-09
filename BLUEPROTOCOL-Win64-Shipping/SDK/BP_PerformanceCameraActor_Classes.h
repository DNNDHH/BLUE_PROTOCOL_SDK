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
	 * BlueprintGeneratedClass BP_PerformanceCameraActor.BP_PerformanceCameraActor_C
	 * Size -> 0x0019 (FullSize[0x0A89] - InheritedSize[0x0A70])
	 */
	class ABP_PerformanceCameraActor_C : public ASBPerformanceCamera
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A70(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D;                                 // 0x0A78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUI_PerformanceCamera_C*                             ScreenWidget;                                            // 0x0A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SetupSceneCapture_1;                                     // 0x0A88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetShowActorList(TArray<class AActor*>* ShowList);
		void CreateScreenWidget();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SetupSceneCapture();
		void ExecuteUbergraph_BP_PerformanceCameraActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
