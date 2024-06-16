#pragma once

 

// Package: BP_GimmickBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GimmickBase.BP_GimmickBase_C
// 0x0078 (0x02B0 - 0x0238)
class ABP_GimmickBase_C : public ASBGimmickBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBFieldStatusComponent*                SBFieldStatus;                                     // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SceneMovePointRig;                                 // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone_Front;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SceneMovePoint;                                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBInteractionTargetComponent*          SBInteractionTarget;                               // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SceneRoot;                                         // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          TurnOnry;                                          // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TurnFront;                                         // 0x0289(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45E8[0x2];                                     // 0x028A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MoveEndDistance;                                   // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Replication;                                       // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Recycle;                                           // 0x0291(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45E9[0x2];                                     // 0x0292(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CooldownTime;                                      // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Blocker;                                           // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CheckAlive;                                        // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45EA[0x6];                                     // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Interaction;                                       // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Interaction__DelegateSignature(class AActor* OtherActor, const struct FRotator& ViewRotation);
	void ExecuteUbergraph_BP_GimmickBase(int32 EntryPoint);
	void OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation);
	void ReceiveBeginPlay();
	void EV_InteractionActive(bool Active);
	void RecycleSw();
	void CleanupBlocker(EFieldStatus NewStatus);
	void OnInteractionSw(class AActor* OtherActor, const struct FRotator& Rotator);
	void CustomEvent(class AActor* InOtherActor, const struct FRotator& ViewRotation);

	bool IsInteractionDisable(const class AActor* InOtherActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GimmickBase_C">();
	}
	static class ABP_GimmickBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GimmickBase_C>();
	}
};
static_assert(alignof(ABP_GimmickBase_C) == 0x000008, "Wrong alignment on ABP_GimmickBase_C");
static_assert(sizeof(ABP_GimmickBase_C) == 0x0002B0, "Wrong size on ABP_GimmickBase_C");
static_assert(offsetof(ABP_GimmickBase_C, UberGraphFrame) == 0x000238, "Member 'ABP_GimmickBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, SBFieldStatus) == 0x000240, "Member 'ABP_GimmickBase_C::SBFieldStatus' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, SceneMovePointRig) == 0x000248, "Member 'ABP_GimmickBase_C::SceneMovePointRig' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, Cone_Front) == 0x000250, "Member 'ABP_GimmickBase_C::Cone_Front' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, Cylinder) == 0x000258, "Member 'ABP_GimmickBase_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, SceneMovePoint) == 0x000260, "Member 'ABP_GimmickBase_C::SceneMovePoint' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, Sphere) == 0x000268, "Member 'ABP_GimmickBase_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, SBInteractionTarget) == 0x000270, "Member 'ABP_GimmickBase_C::SBInteractionTarget' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, SceneRoot) == 0x000278, "Member 'ABP_GimmickBase_C::SceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_GimmickBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, TurnOnry) == 0x000288, "Member 'ABP_GimmickBase_C::TurnOnry' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, TurnFront) == 0x000289, "Member 'ABP_GimmickBase_C::TurnFront' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, MoveEndDistance) == 0x00028C, "Member 'ABP_GimmickBase_C::MoveEndDistance' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, Replication) == 0x000290, "Member 'ABP_GimmickBase_C::Replication' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, Recycle) == 0x000291, "Member 'ABP_GimmickBase_C::Recycle' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, CooldownTime) == 0x000294, "Member 'ABP_GimmickBase_C::CooldownTime' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, Blocker) == 0x000298, "Member 'ABP_GimmickBase_C::Blocker' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, CheckAlive) == 0x000299, "Member 'ABP_GimmickBase_C::CheckAlive' has a wrong offset!");
static_assert(offsetof(ABP_GimmickBase_C, Interaction) == 0x0002A0, "Member 'ABP_GimmickBase_C::Interaction' has a wrong offset!");

}

