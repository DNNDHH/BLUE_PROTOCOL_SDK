#pragma once

 

// Package: BP_CameraLocationChecker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraLocationChecker.BP_CameraLocationChecker_C
// 0x0020 (0x0258 - 0x0238)
class ABP_CameraLocationChecker_C final : public ASBPostProcessChecker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          LUTOverridden;                                     // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86E0[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LUTWeight;                                         // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CameraLocationChecker(int32 EntryPoint);
	void CheckPostPorcessVolumeLUT(float DeltaSecnd);
	void InitPostProcessLUT();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraLocationChecker_C">();
	}
	static class ABP_CameraLocationChecker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CameraLocationChecker_C>();
	}
};
static_assert(alignof(ABP_CameraLocationChecker_C) == 0x000008, "Wrong alignment on ABP_CameraLocationChecker_C");
static_assert(sizeof(ABP_CameraLocationChecker_C) == 0x000258, "Wrong size on ABP_CameraLocationChecker_C");
static_assert(offsetof(ABP_CameraLocationChecker_C, UberGraphFrame) == 0x000238, "Member 'ABP_CameraLocationChecker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CameraLocationChecker_C, Sphere) == 0x000240, "Member 'ABP_CameraLocationChecker_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_CameraLocationChecker_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_CameraLocationChecker_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CameraLocationChecker_C, LUTOverridden) == 0x000250, "Member 'ABP_CameraLocationChecker_C::LUTOverridden' has a wrong offset!");
static_assert(offsetof(ABP_CameraLocationChecker_C, LUTWeight) == 0x000254, "Member 'ABP_CameraLocationChecker_C::LUTWeight' has a wrong offset!");

}

