#pragma once

 

// Package: BP_EF_Comp_Particle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EF_Comp_Particle.BP_EF_Comp_Particle_C
// 0x0090 (0x02A0 - 0x0210)
class UBP_EF_Comp_Particle_C final : public USceneComponent
{
public:
	uint8                                         Pad_9F70[0x8];                                     // 0x0208(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          SpawnParticle;                                     // 0x0218(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F71[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        StartParticle;                                     // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        LoopParticle;                                      // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        VanishParticle;                                    // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EffectRange;                                       // 0x0238(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LifeTimeLinkage;                                   // 0x0244(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F72[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ParticleLifeTime;                                  // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ScaleLinkage;                                      // 0x024C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ScaleLinkage3Vector;                               // 0x024D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F73[0x2];                                     // 0x024E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ScaleSet;                                          // 0x0250(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Do;                                                // 0x025C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F74[0x3];                                     // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LifeTimeSet;                                       // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F75[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystemComponent*>       StartParticleArray;                                // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       LoopParticleArray;                                 // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             NewEventDispatcher_0;                              // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SpawnCount;                                        // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEffectVisibleType                          VisibleType;                                       // 0x029C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSpawnedVanishParticle;                           // 0x029D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void NewEventDispatcher_0__DelegateSignature();
	void ExecuteUbergraph_BP_EF_Comp_Particle(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ParticleSpawn(class USceneComponent* EffectComp, float InitialLifeTime, const struct FVector& AttackCollision, const struct FVector& CollisionScale, float* DestroyOrderTime);
	void ParticleEndCTRL(class USceneComponent* EffectComp);
	void ParticleScaleCTRL(const struct FVector& Scale);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EF_Comp_Particle_C">();
	}
	static class UBP_EF_Comp_Particle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EF_Comp_Particle_C>();
	}
};
static_assert(alignof(UBP_EF_Comp_Particle_C) == 0x000010, "Wrong alignment on UBP_EF_Comp_Particle_C");
static_assert(sizeof(UBP_EF_Comp_Particle_C) == 0x0002A0, "Wrong size on UBP_EF_Comp_Particle_C");
static_assert(offsetof(UBP_EF_Comp_Particle_C, UberGraphFrame) == 0x000210, "Member 'UBP_EF_Comp_Particle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, SpawnParticle) == 0x000218, "Member 'UBP_EF_Comp_Particle_C::SpawnParticle' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, StartParticle) == 0x000220, "Member 'UBP_EF_Comp_Particle_C::StartParticle' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, LoopParticle) == 0x000228, "Member 'UBP_EF_Comp_Particle_C::LoopParticle' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, VanishParticle) == 0x000230, "Member 'UBP_EF_Comp_Particle_C::VanishParticle' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, EffectRange) == 0x000238, "Member 'UBP_EF_Comp_Particle_C::EffectRange' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, LifeTimeLinkage) == 0x000244, "Member 'UBP_EF_Comp_Particle_C::LifeTimeLinkage' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, ParticleLifeTime) == 0x000248, "Member 'UBP_EF_Comp_Particle_C::ParticleLifeTime' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, ScaleLinkage) == 0x00024C, "Member 'UBP_EF_Comp_Particle_C::ScaleLinkage' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, ScaleLinkage3Vector) == 0x00024D, "Member 'UBP_EF_Comp_Particle_C::ScaleLinkage3Vector' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, ScaleSet) == 0x000250, "Member 'UBP_EF_Comp_Particle_C::ScaleSet' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, Do) == 0x00025C, "Member 'UBP_EF_Comp_Particle_C::Do' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, LifeTimeSet) == 0x000260, "Member 'UBP_EF_Comp_Particle_C::LifeTimeSet' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, StartParticleArray) == 0x000268, "Member 'UBP_EF_Comp_Particle_C::StartParticleArray' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, LoopParticleArray) == 0x000278, "Member 'UBP_EF_Comp_Particle_C::LoopParticleArray' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, NewEventDispatcher_0) == 0x000288, "Member 'UBP_EF_Comp_Particle_C::NewEventDispatcher_0' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, SpawnCount) == 0x000298, "Member 'UBP_EF_Comp_Particle_C::SpawnCount' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, VisibleType) == 0x00029C, "Member 'UBP_EF_Comp_Particle_C::VisibleType' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Particle_C, IsSpawnedVanishParticle) == 0x00029D, "Member 'UBP_EF_Comp_Particle_C::IsSpawnedVanishParticle' has a wrong offset!");

}

