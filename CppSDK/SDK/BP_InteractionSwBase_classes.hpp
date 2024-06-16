#pragma once

 

// Package: BP_InteractionSwBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractionSwBase.BP_InteractionSwBase_C
// 0x0048 (0x0270 - 0x0228)
class ABP_InteractionSwBase_C : public ASBInteractionSwBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        Root;                                              // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FieldInteractionComponent_C*        InteractionComponent;                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBFieldStatusComponent*                FieldStatus;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Replication;                                       // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62AA[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Interaction;                                       // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Recycle;                                           // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62AB[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CooldownTime;                                      // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Blocker;                                           // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CheckAlive;                                        // 0x0269(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Interaction__DelegateSignature(class AActor* Other_Actor, const struct FRotator& View_Rotation);
	void ExecuteUbergraph_BP_InteractionSwBase(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnInteractionSw(class AActor* OtherActor, const struct FRotator& Rotator);
	void ReceiveTick(float DeltaSeconds);
	void OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation);
	void CleanupBlocker(EFieldStatus NewStatus);
	void RecycleSw();
	void UserConstructionScript();
	void OnRep_status();
	void OnRep_DoorStatus();
	void OnRep_NewDoorStatus();

	bool IsInteractionDisable(const class AActor* InOtherActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractionSwBase_C">();
	}
	static class ABP_InteractionSwBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteractionSwBase_C>();
	}
};
static_assert(alignof(ABP_InteractionSwBase_C) == 0x000008, "Wrong alignment on ABP_InteractionSwBase_C");
static_assert(sizeof(ABP_InteractionSwBase_C) == 0x000270, "Wrong size on ABP_InteractionSwBase_C");
static_assert(offsetof(ABP_InteractionSwBase_C, UberGraphFrame) == 0x000228, "Member 'ABP_InteractionSwBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_InteractionSwBase_C, Root) == 0x000230, "Member 'ABP_InteractionSwBase_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_InteractionSwBase_C, InteractionComponent) == 0x000238, "Member 'ABP_InteractionSwBase_C::InteractionComponent' has a wrong offset!");
static_assert(offsetof(ABP_InteractionSwBase_C, FieldStatus) == 0x000240, "Member 'ABP_InteractionSwBase_C::FieldStatus' has a wrong offset!");
static_assert(offsetof(ABP_InteractionSwBase_C, Replication) == 0x000248, "Member 'ABP_InteractionSwBase_C::Replication' has a wrong offset!");
static_assert(offsetof(ABP_InteractionSwBase_C, Interaction) == 0x000250, "Member 'ABP_InteractionSwBase_C::Interaction' has a wrong offset!");
static_assert(offsetof(ABP_InteractionSwBase_C, Recycle) == 0x000260, "Member 'ABP_InteractionSwBase_C::Recycle' has a wrong offset!");
static_assert(offsetof(ABP_InteractionSwBase_C, CooldownTime) == 0x000264, "Member 'ABP_InteractionSwBase_C::CooldownTime' has a wrong offset!");
static_assert(offsetof(ABP_InteractionSwBase_C, Blocker) == 0x000268, "Member 'ABP_InteractionSwBase_C::Blocker' has a wrong offset!");
static_assert(offsetof(ABP_InteractionSwBase_C, CheckAlive) == 0x000269, "Member 'ABP_InteractionSwBase_C::CheckAlive' has a wrong offset!");

}

