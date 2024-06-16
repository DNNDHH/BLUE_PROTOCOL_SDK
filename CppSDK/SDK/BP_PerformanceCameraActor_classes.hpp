#pragma once

 

// Package: BP_PerformanceCameraActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PerformanceCameraActor.BP_PerformanceCameraActor_C
// 0x0020 (0x0A90 - 0x0A70)
class ABP_PerformanceCameraActor_C final : public ASBPerformanceCamera
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUI_PerformanceCamera_C*                ScreenWidget;                                      // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetupSceneCapture_0;                               // 0x0A88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PerformanceCameraActor(int32 EntryPoint);
	void SetupSceneCapture();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void CreateScreenWidget();
	void GetShowActorList(TArray<class AActor*>* ShowList);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PerformanceCameraActor_C">();
	}
	static class ABP_PerformanceCameraActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PerformanceCameraActor_C>();
	}
};
static_assert(alignof(ABP_PerformanceCameraActor_C) == 0x000010, "Wrong alignment on ABP_PerformanceCameraActor_C");
static_assert(sizeof(ABP_PerformanceCameraActor_C) == 0x000A90, "Wrong size on ABP_PerformanceCameraActor_C");
static_assert(offsetof(ABP_PerformanceCameraActor_C, UberGraphFrame) == 0x000A70, "Member 'ABP_PerformanceCameraActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PerformanceCameraActor_C, SceneCaptureComponent2D) == 0x000A78, "Member 'ABP_PerformanceCameraActor_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_PerformanceCameraActor_C, ScreenWidget) == 0x000A80, "Member 'ABP_PerformanceCameraActor_C::ScreenWidget' has a wrong offset!");
static_assert(offsetof(ABP_PerformanceCameraActor_C, SetupSceneCapture_0) == 0x000A88, "Member 'ABP_PerformanceCameraActor_C::SetupSceneCapture_0' has a wrong offset!");

}

