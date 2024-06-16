#pragma once

 

// Package: BP_ExtraNpcCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C
// 0x00C0 (0x09E0 - 0x0920)
class ABP_ExtraNpcCharacter_C final : public ASBExtraNpcCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0920(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBFootprintComponent*                  SBFootprint;                                       // 0x0928(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           InteractEvents;                                    // 0x0930(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           SelectEvents;                                      // 0x0940(0x0010)(Edit, BlueprintVisible)
	float                                         Warp_Threshold;                                    // 0x0950(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         EyeEmissive;                                       // 0x0954(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           WarpEmissiveColor;                                 // 0x0958(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class FString>              ScriptParamMap;                                    // 0x0968(0x0050)(Edit, BlueprintVisible)
	class FName                                   NPC_Stance;                                        // 0x09B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Before_Stance;                                     // 0x09C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Enable_InteractionTags;                            // 0x09C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_ExtraNpcCharacter(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceivePostSpawnBySpawner();
	void NotifyDeactivated();
	void OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation);

	void UnregisterFromManager() const;
	void RegisterWithManager() const;
	bool IsValidTargetFor(class AActor* TargetingActor) const;
	struct FVector GetTargetLocation() const;
	bool CanBeTargetedNow() const;
	bool IsInteractionDisable(const class AActor* InOtherActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ExtraNpcCharacter_C">();
	}
	static class ABP_ExtraNpcCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ExtraNpcCharacter_C>();
	}
};
static_assert(alignof(ABP_ExtraNpcCharacter_C) == 0x000010, "Wrong alignment on ABP_ExtraNpcCharacter_C");
static_assert(sizeof(ABP_ExtraNpcCharacter_C) == 0x0009E0, "Wrong size on ABP_ExtraNpcCharacter_C");
static_assert(offsetof(ABP_ExtraNpcCharacter_C, UberGraphFrame) == 0x000920, "Member 'ABP_ExtraNpcCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ExtraNpcCharacter_C, SBFootprint) == 0x000928, "Member 'ABP_ExtraNpcCharacter_C::SBFootprint' has a wrong offset!");
static_assert(offsetof(ABP_ExtraNpcCharacter_C, InteractEvents) == 0x000930, "Member 'ABP_ExtraNpcCharacter_C::InteractEvents' has a wrong offset!");
static_assert(offsetof(ABP_ExtraNpcCharacter_C, SelectEvents) == 0x000940, "Member 'ABP_ExtraNpcCharacter_C::SelectEvents' has a wrong offset!");
static_assert(offsetof(ABP_ExtraNpcCharacter_C, Warp_Threshold) == 0x000950, "Member 'ABP_ExtraNpcCharacter_C::Warp_Threshold' has a wrong offset!");
static_assert(offsetof(ABP_ExtraNpcCharacter_C, EyeEmissive) == 0x000954, "Member 'ABP_ExtraNpcCharacter_C::EyeEmissive' has a wrong offset!");
static_assert(offsetof(ABP_ExtraNpcCharacter_C, WarpEmissiveColor) == 0x000958, "Member 'ABP_ExtraNpcCharacter_C::WarpEmissiveColor' has a wrong offset!");
static_assert(offsetof(ABP_ExtraNpcCharacter_C, ScriptParamMap) == 0x000968, "Member 'ABP_ExtraNpcCharacter_C::ScriptParamMap' has a wrong offset!");
static_assert(offsetof(ABP_ExtraNpcCharacter_C, NPC_Stance) == 0x0009B8, "Member 'ABP_ExtraNpcCharacter_C::NPC_Stance' has a wrong offset!");
static_assert(offsetof(ABP_ExtraNpcCharacter_C, Before_Stance) == 0x0009C0, "Member 'ABP_ExtraNpcCharacter_C::Before_Stance' has a wrong offset!");
static_assert(offsetof(ABP_ExtraNpcCharacter_C, Enable_InteractionTags) == 0x0009C8, "Member 'ABP_ExtraNpcCharacter_C::Enable_InteractionTags' has a wrong offset!");

}

