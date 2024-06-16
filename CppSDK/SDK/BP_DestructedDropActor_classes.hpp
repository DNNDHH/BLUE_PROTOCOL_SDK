#pragma once

 

// Package: BP_DestructedDropActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "BP_TreasureBoxTarget_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DestructedDropActor.BP_DestructedDropActor_C
// 0x0030 (0x0468 - 0x0438)
class ABP_DestructedDropActor_C final : public ABP_TreasureBoxTarget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DestructedDropActor_C;           // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBParticleSystemComponent*             SBParticleSystem;                                  // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       OverlapSphereCollision;                            // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         LotRate;                                           // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MoneyLotRate;                                      // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BuffLotRate;                                       // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinMoney;                                          // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MaxMoney;                                          // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	ESBTreasureBoxRewardType                      RewardType;                                        // 0x0464(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsDropItem;                                        // 0x0465(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_BP_DestructedDropActor(int32 EntryPoint);
	void PostBuffActivate(class AActor* InOtherActor);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DestructedDropActor_C">();
	}
	static class ABP_DestructedDropActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DestructedDropActor_C>();
	}
};
static_assert(alignof(ABP_DestructedDropActor_C) == 0x000008, "Wrong alignment on ABP_DestructedDropActor_C");
static_assert(sizeof(ABP_DestructedDropActor_C) == 0x000468, "Wrong size on ABP_DestructedDropActor_C");
static_assert(offsetof(ABP_DestructedDropActor_C, UberGraphFrame_BP_DestructedDropActor_C) == 0x000438, "Member 'ABP_DestructedDropActor_C::UberGraphFrame_BP_DestructedDropActor_C' has a wrong offset!");
static_assert(offsetof(ABP_DestructedDropActor_C, SBParticleSystem) == 0x000440, "Member 'ABP_DestructedDropActor_C::SBParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_DestructedDropActor_C, OverlapSphereCollision) == 0x000448, "Member 'ABP_DestructedDropActor_C::OverlapSphereCollision' has a wrong offset!");
static_assert(offsetof(ABP_DestructedDropActor_C, LotRate) == 0x000450, "Member 'ABP_DestructedDropActor_C::LotRate' has a wrong offset!");
static_assert(offsetof(ABP_DestructedDropActor_C, MoneyLotRate) == 0x000454, "Member 'ABP_DestructedDropActor_C::MoneyLotRate' has a wrong offset!");
static_assert(offsetof(ABP_DestructedDropActor_C, BuffLotRate) == 0x000458, "Member 'ABP_DestructedDropActor_C::BuffLotRate' has a wrong offset!");
static_assert(offsetof(ABP_DestructedDropActor_C, MinMoney) == 0x00045C, "Member 'ABP_DestructedDropActor_C::MinMoney' has a wrong offset!");
static_assert(offsetof(ABP_DestructedDropActor_C, MaxMoney) == 0x000460, "Member 'ABP_DestructedDropActor_C::MaxMoney' has a wrong offset!");
static_assert(offsetof(ABP_DestructedDropActor_C, RewardType) == 0x000464, "Member 'ABP_DestructedDropActor_C::RewardType' has a wrong offset!");
static_assert(offsetof(ABP_DestructedDropActor_C, IsDropItem) == 0x000465, "Member 'ABP_DestructedDropActor_C::IsDropItem' has a wrong offset!");

}

