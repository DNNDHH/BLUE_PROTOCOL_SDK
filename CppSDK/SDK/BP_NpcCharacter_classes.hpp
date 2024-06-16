#pragma once

 

// Package: BP_NpcCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NpcCharacter.BP_NpcCharacter_C
// 0x0070 (0x0980 - 0x0910)
class ABP_NpcCharacter_C final : public ASBNpcCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0910(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBStateInitializerComponent*           SBStateInitializer;                                // 0x0918(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBFootprintComponent*                  SBFootprint;                                       // 0x0920(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BalloonComponent_C*                 BP_BalloonComponent;                               // 0x0928(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UASAnimationSet*                        AnimSet;                                           // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Warp_Threshold;                                    // 0x0938(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           WarpColor;                                         // 0x093C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         EyeHighlightEmissive;                              // 0x094C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         EnemyDeath;                                        // 0x0950(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class FName                                   NPC_Stance;                                        // 0x0954(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Before_Stance;                                     // 0x095C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F04[0x4];                                     // 0x0964(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Enable_InteractionTags;                            // 0x0968(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_NpcCharacter(int32 EntryPoint);
	void OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation);
	void ReceivePostSpawnBySpawner();
	void NotifyDeactivated();
	void ReceiveTick(float DeltaSeconds);

	bool IsInteractionDisable(const class AActor* InOtherActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NpcCharacter_C">();
	}
	static class ABP_NpcCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NpcCharacter_C>();
	}
};
static_assert(alignof(ABP_NpcCharacter_C) == 0x000010, "Wrong alignment on ABP_NpcCharacter_C");
static_assert(sizeof(ABP_NpcCharacter_C) == 0x000980, "Wrong size on ABP_NpcCharacter_C");
static_assert(offsetof(ABP_NpcCharacter_C, UberGraphFrame) == 0x000910, "Member 'ABP_NpcCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_NpcCharacter_C, SBStateInitializer) == 0x000918, "Member 'ABP_NpcCharacter_C::SBStateInitializer' has a wrong offset!");
static_assert(offsetof(ABP_NpcCharacter_C, SBFootprint) == 0x000920, "Member 'ABP_NpcCharacter_C::SBFootprint' has a wrong offset!");
static_assert(offsetof(ABP_NpcCharacter_C, BP_BalloonComponent) == 0x000928, "Member 'ABP_NpcCharacter_C::BP_BalloonComponent' has a wrong offset!");
static_assert(offsetof(ABP_NpcCharacter_C, AnimSet) == 0x000930, "Member 'ABP_NpcCharacter_C::AnimSet' has a wrong offset!");
static_assert(offsetof(ABP_NpcCharacter_C, Warp_Threshold) == 0x000938, "Member 'ABP_NpcCharacter_C::Warp_Threshold' has a wrong offset!");
static_assert(offsetof(ABP_NpcCharacter_C, WarpColor) == 0x00093C, "Member 'ABP_NpcCharacter_C::WarpColor' has a wrong offset!");
static_assert(offsetof(ABP_NpcCharacter_C, EyeHighlightEmissive) == 0x00094C, "Member 'ABP_NpcCharacter_C::EyeHighlightEmissive' has a wrong offset!");
static_assert(offsetof(ABP_NpcCharacter_C, EnemyDeath) == 0x000950, "Member 'ABP_NpcCharacter_C::EnemyDeath' has a wrong offset!");
static_assert(offsetof(ABP_NpcCharacter_C, NPC_Stance) == 0x000954, "Member 'ABP_NpcCharacter_C::NPC_Stance' has a wrong offset!");
static_assert(offsetof(ABP_NpcCharacter_C, Before_Stance) == 0x00095C, "Member 'ABP_NpcCharacter_C::Before_Stance' has a wrong offset!");
static_assert(offsetof(ABP_NpcCharacter_C, Enable_InteractionTags) == 0x000968, "Member 'ABP_NpcCharacter_C::Enable_InteractionTags' has a wrong offset!");

}

