#pragma once

 

// Package: BP_AIControllerNpc

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIControllerNpc.BP_AIControllerNpc_C
// 0x0020 (0x0370 - 0x0350)
class ABP_AIControllerNpc_C final : public ASBAIController_Npc
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class USBUtilityOption*>               UtilityOptions;                                    // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsBindnteraction;                                  // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AIControllerNpc(int32 EntryPoint);
	void ReceivePossess(class APawn* PossessedPawn);
	void OnOwnerActivate(class ASBMobCharacter* InMobCharacter);
	void OnOwnerDeactivate(class ASBMobCharacter* InMobCharacter);
	void ReceiveUnPossess(class APawn* UnpossessedPawn);
	void OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation);
	void RegisterUtilityOption();
	void StartTalk(class AActor* TalkTarget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIControllerNpc_C">();
	}
	static class ABP_AIControllerNpc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AIControllerNpc_C>();
	}
};
static_assert(alignof(ABP_AIControllerNpc_C) == 0x000008, "Wrong alignment on ABP_AIControllerNpc_C");
static_assert(sizeof(ABP_AIControllerNpc_C) == 0x000370, "Wrong size on ABP_AIControllerNpc_C");
static_assert(offsetof(ABP_AIControllerNpc_C, UberGraphFrame) == 0x000350, "Member 'ABP_AIControllerNpc_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AIControllerNpc_C, UtilityOptions) == 0x000358, "Member 'ABP_AIControllerNpc_C::UtilityOptions' has a wrong offset!");
static_assert(offsetof(ABP_AIControllerNpc_C, IsBindnteraction) == 0x000368, "Member 'ABP_AIControllerNpc_C::IsBindnteraction' has a wrong offset!");

}

