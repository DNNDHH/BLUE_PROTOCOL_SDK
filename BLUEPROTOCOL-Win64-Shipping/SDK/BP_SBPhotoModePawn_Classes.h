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
	 * BlueprintGeneratedClass BP_SBPhotoModePawn.BP_SBPhotoModePawn_C
	 * Size -> 0x0021 (FullSize[0x02E9] - InheritedSize[0x02C8])
	 */
	class ABP_SBPhotoModePawn_C : public ASBPhotoModePawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                ChildActor;                                              // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        CameraActor;                                             // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_SBPhotoModeController_C*                         PhotoModeController;                                     // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCreateWorldCameraActor;                                 // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ShowDebugLine();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ReceivePossessed(class AController* NewController);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void CreateWorldCameraActor();
		void OnOverLimitDistance();
		void ResetPosition(const struct FVector& NewLocation);
		void BP_ResetCamera();
		void ExecuteUbergraph_BP_SBPhotoModePawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
