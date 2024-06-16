#pragma once

 

// Package: BP_GatherPointTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GatherPointTarget.BP_GatherPointTarget_C
// 0x0060 (0x0340 - 0x02E0)
class ABP_GatherPointTarget_C final : public ASBFieldActorGatherPoint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBWidgetComponent2D*                   SBWidgetComponent2D;                               // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_ITM_Landmark_Gather_Action;                     // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBFieldStatusComponent*                FieldStatus;                                       // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         GatherPointPopupVisibleDistance;                   // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GatheringMotionBasicTime;                          // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GatheringMotionAdjustedTime;                       // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63A4[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        SpawnGatherPointEffect;                            // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        VisibleGatherPointEffect;                          // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        EndGatherPointEffect;                              // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGatherIcon_C*                          GatherIconIns;                                     // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GatherPointClipDistance;                           // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GatherPointTarget(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void MotionEnd();
	void OnGatherPointEnableDelegate(const bool IsElable);
	void PostInteractPoint(ESBGatherPointLotResult Result, const TArray<struct FGatherPointLotResult>& LotResults);
	void InteractPoint(class AActor* InOtherActor, const struct FRotator& ViewRotation);
	void Disappear();
	void Appear(const bool NotSpawnEffect);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetParticleSystemVisibleParam();
	void SetVisualHeight(const struct FVector& ParticleHeight, const struct FVector& InteractCursorHeight);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GatherPointTarget_C">();
	}
	static class ABP_GatherPointTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GatherPointTarget_C>();
	}
};
static_assert(alignof(ABP_GatherPointTarget_C) == 0x000010, "Wrong alignment on ABP_GatherPointTarget_C");
static_assert(sizeof(ABP_GatherPointTarget_C) == 0x000340, "Wrong size on ABP_GatherPointTarget_C");
static_assert(offsetof(ABP_GatherPointTarget_C, UberGraphFrame) == 0x0002E0, "Member 'ABP_GatherPointTarget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, SBWidgetComponent2D) == 0x0002E8, "Member 'ABP_GatherPointTarget_C::SBWidgetComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, PS_ITM_Landmark_Gather_Action) == 0x0002F0, "Member 'ABP_GatherPointTarget_C::PS_ITM_Landmark_Gather_Action' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, ParticleSystem) == 0x0002F8, "Member 'ABP_GatherPointTarget_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, FieldStatus) == 0x000300, "Member 'ABP_GatherPointTarget_C::FieldStatus' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, GatherPointPopupVisibleDistance) == 0x000308, "Member 'ABP_GatherPointTarget_C::GatherPointPopupVisibleDistance' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, GatheringMotionBasicTime) == 0x00030C, "Member 'ABP_GatherPointTarget_C::GatheringMotionBasicTime' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, GatheringMotionAdjustedTime) == 0x000310, "Member 'ABP_GatherPointTarget_C::GatheringMotionAdjustedTime' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, SpawnGatherPointEffect) == 0x000318, "Member 'ABP_GatherPointTarget_C::SpawnGatherPointEffect' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, VisibleGatherPointEffect) == 0x000320, "Member 'ABP_GatherPointTarget_C::VisibleGatherPointEffect' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, EndGatherPointEffect) == 0x000328, "Member 'ABP_GatherPointTarget_C::EndGatherPointEffect' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, GatherIconIns) == 0x000330, "Member 'ABP_GatherPointTarget_C::GatherIconIns' has a wrong offset!");
static_assert(offsetof(ABP_GatherPointTarget_C, GatherPointClipDistance) == 0x000338, "Member 'ABP_GatherPointTarget_C::GatherPointClipDistance' has a wrong offset!");

}

