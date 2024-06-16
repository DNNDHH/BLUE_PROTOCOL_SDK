#pragma once

 

// Package: BP_SBPhotoModePawn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SBPhotoModePawn.BP_SBPhotoModePawn_C
// 0x0028 (0x02F0 - 0x02C8)
class ABP_SBPhotoModePawn_C final : public ASBPhotoModePawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ChildActor;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           CameraActor;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SBPhotoModeController_C*            PhotoModeController;                               // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCreateWorldCameraActor;                           // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_SBPhotoModePawn(int32 EntryPoint);
	void BP_ResetCamera();
	void ResetPosition(const struct FVector& NewLocation);
	void OnOverLimitDistance();
	void CreateWorldCameraActor();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceivePossessed(class AController* NewController);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ShowDebugLine();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SBPhotoModePawn_C">();
	}
	static class ABP_SBPhotoModePawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SBPhotoModePawn_C>();
	}
};
static_assert(alignof(ABP_SBPhotoModePawn_C) == 0x000008, "Wrong alignment on ABP_SBPhotoModePawn_C");
static_assert(sizeof(ABP_SBPhotoModePawn_C) == 0x0002F0, "Wrong size on ABP_SBPhotoModePawn_C");
static_assert(offsetof(ABP_SBPhotoModePawn_C, UberGraphFrame) == 0x0002C8, "Member 'ABP_SBPhotoModePawn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModePawn_C, ChildActor) == 0x0002D0, "Member 'ABP_SBPhotoModePawn_C::ChildActor' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModePawn_C, CameraActor) == 0x0002D8, "Member 'ABP_SBPhotoModePawn_C::CameraActor' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModePawn_C, PhotoModeController) == 0x0002E0, "Member 'ABP_SBPhotoModePawn_C::PhotoModeController' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModePawn_C, bCreateWorldCameraActor) == 0x0002E8, "Member 'ABP_SBPhotoModePawn_C::bCreateWorldCameraActor' has a wrong offset!");

}

