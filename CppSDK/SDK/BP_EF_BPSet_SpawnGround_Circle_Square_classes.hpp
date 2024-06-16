#pragma once

 

// Package: BP_EF_BPSet_SpawnGround_Circle_Square

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EF_BPSet_SpawnGround_Circle_Square.BP_EF_BPSet_SpawnGround_Circle_Square_C
// 0x0108 (0x0408 - 0x0300)
class ABP_EF_BPSet_SpawnGround_Circle_Square_C final : public ASBProjectileEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                        ParticleSystem;                                    // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          GroundReactionParticle;                            // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_882C[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystem*>                GraundReactionParticle;                            // 0x0318(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         RotationType;                                      // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               ParticleRotate;                                    // 0x032C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          Circle;                                            // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_882D[0x3];                                     // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpawnAngle;                                        // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         RaySpawnHeight;                                    // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         RayLength;                                         // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         StartRange;                                        // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SpawnWaveCount;                                    // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SpawnWaveDelay;                                    // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SpawnWaveInterval;                                 // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SpawnCount;                                        // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SpawnAdd;                                          // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               ParticleRotate_Set;                                // 0x0360(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ParticleScale;                                     // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         ParticleScaleAdd;                                  // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_882E[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             NewEventDispatcher_0;                              // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SpawnWaveDelay_ON;                                 // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          AddActor_01;                                       // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_882F[0x6];                                     // 0x038A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Actor_01;                                          // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          AddActor_02;                                       // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8830[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Actor_02;                                          // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SpawnParticle;                                     // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8831[0x3];                                     // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpawnPoint;                                        // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnPointRandom;                                  // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8832[0x3];                                     // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ParticleVanishTime;                                // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       ParticleArrey;                                     // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          ParticleVanishSameTime;                            // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8833[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        VanishParticle;                                    // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Scale;                                             // 0x03D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ScaleLinkage;                                      // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8834[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                EffectRange;                                       // 0x03E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                AttackCollision;                                   // 0x03F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          LifeTimeLinkage;                                   // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8835[0x3];                                     // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CollisionLife;                                     // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void NewEventDispatcher_0__DelegateSignature();
	void ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Circle_Square(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void GroundHit_Circle(float Range, float Param_SpawnCount);
	void GroundHit_Square(float Range, float Param_SpawnCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EF_BPSet_SpawnGround_Circle_Square_C">();
	}
	static class ABP_EF_BPSet_SpawnGround_Circle_Square_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EF_BPSet_SpawnGround_Circle_Square_C>();
	}
};
static_assert(alignof(ABP_EF_BPSet_SpawnGround_Circle_Square_C) == 0x000008, "Wrong alignment on ABP_EF_BPSet_SpawnGround_Circle_Square_C");
static_assert(sizeof(ABP_EF_BPSet_SpawnGround_Circle_Square_C) == 0x000408, "Wrong size on ABP_EF_BPSet_SpawnGround_Circle_Square_C");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, UberGraphFrame) == 0x000300, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, ParticleSystem) == 0x000308, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, GroundReactionParticle) == 0x000310, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::GroundReactionParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, GraundReactionParticle) == 0x000318, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::GraundReactionParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, RotationType) == 0x000328, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::RotationType' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, ParticleRotate) == 0x00032C, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::ParticleRotate' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, Circle) == 0x000338, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::Circle' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, SpawnAngle) == 0x00033C, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::SpawnAngle' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, RaySpawnHeight) == 0x000340, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::RaySpawnHeight' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, RayLength) == 0x000344, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::RayLength' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, StartRange) == 0x000348, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::StartRange' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, SpawnWaveCount) == 0x00034C, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::SpawnWaveCount' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, SpawnWaveDelay) == 0x000350, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::SpawnWaveDelay' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, SpawnWaveInterval) == 0x000354, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::SpawnWaveInterval' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, SpawnCount) == 0x000358, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::SpawnCount' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, SpawnAdd) == 0x00035C, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::SpawnAdd' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, ParticleRotate_Set) == 0x000360, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::ParticleRotate_Set' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, ParticleScale) == 0x00036C, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::ParticleScale' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, ParticleScaleAdd) == 0x000370, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::ParticleScaleAdd' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, NewEventDispatcher_0) == 0x000378, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::NewEventDispatcher_0' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, SpawnWaveDelay_ON) == 0x000388, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::SpawnWaveDelay_ON' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, AddActor_01) == 0x000389, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::AddActor_01' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, Actor_01) == 0x000390, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::Actor_01' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, AddActor_02) == 0x000398, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::AddActor_02' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, Actor_02) == 0x0003A0, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::Actor_02' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, SpawnParticle) == 0x0003A8, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::SpawnParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, SpawnPoint) == 0x0003AC, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::SpawnPoint' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, SpawnPointRandom) == 0x0003B0, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::SpawnPointRandom' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, ParticleVanishTime) == 0x0003B4, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::ParticleVanishTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, ParticleArrey) == 0x0003B8, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::ParticleArrey' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, ParticleVanishSameTime) == 0x0003C8, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::ParticleVanishSameTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, VanishParticle) == 0x0003D0, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::VanishParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, Scale) == 0x0003D8, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::Scale' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, ScaleLinkage) == 0x0003E4, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::ScaleLinkage' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, EffectRange) == 0x0003E8, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::EffectRange' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, AttackCollision) == 0x0003F4, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::AttackCollision' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, LifeTimeLinkage) == 0x000400, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::LifeTimeLinkage' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Circle_Square_C, CollisionLife) == 0x000404, "Member 'ABP_EF_BPSet_SpawnGround_Circle_Square_C::CollisionLife' has a wrong offset!");

}

