#pragma once

 

// Package: BP_EF_BPSet_SpawnGround_Point

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C
// 0x00D0 (0x03D0 - 0x0300)
class ABP_EF_BPSet_SpawnGround_Point_C final : public ASBProjectileEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                        ParticleSystem;                                    // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         RaySpawnHeight;                                    // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         RayLength;                                         // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SpawnOnlyOne;                                      // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          SpawnNewParticle;                                  // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_777F[0x2];                                     // 0x031A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TraceCountBySec;                                   // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         RotationType_0_3_;                                 // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               CustomRotation;                                    // 0x0324(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                         ParticleScale;                                     // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               ParticleRotate_Set;                                // 0x0334(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         DeltaPre;                                          // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delta;                                             // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactPoint;                                       // 0x0348(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImoactPointPre;                                    // 0x0354(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstTime;                                         // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TraceEveryFlame;                                   // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_7780[0x2];                                     // 0x0362(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LifeTime;                                          // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DestroyTimer;                                      // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          AddActor_01;                                       // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_7781[0x6];                                     // 0x036A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Actor_01;                                          // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          AddActor_02;                                       // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_7782[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Actor_02;                                          // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SpawnParticle;                                     // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_7783[0x3];                                     // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ActorPositionSet;                                  // 0x038C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RespawnDistance;                                   // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          UseRespawnDistance;                                // 0x039C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          UseGraundReactionParticle;                         // 0x039D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_7784[0x2];                                     // 0x039E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystem*>                GroundReactionParticle;                            // 0x03A0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector                                Start;                                             // 0x03B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End;                                               // 0x03BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RayUseActorRot;                                    // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Point(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void TwoVectorDistance(const struct FVector& A, const struct FVector& B, float* NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EF_BPSet_SpawnGround_Point_C">();
	}
	static class ABP_EF_BPSet_SpawnGround_Point_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EF_BPSet_SpawnGround_Point_C>();
	}
};
static_assert(alignof(ABP_EF_BPSet_SpawnGround_Point_C) == 0x000008, "Wrong alignment on ABP_EF_BPSet_SpawnGround_Point_C");
static_assert(sizeof(ABP_EF_BPSet_SpawnGround_Point_C) == 0x0003D0, "Wrong size on ABP_EF_BPSet_SpawnGround_Point_C");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, UberGraphFrame) == 0x000300, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, ParticleSystem) == 0x000308, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, RaySpawnHeight) == 0x000310, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::RaySpawnHeight' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, RayLength) == 0x000314, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::RayLength' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, SpawnOnlyOne) == 0x000318, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::SpawnOnlyOne' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, SpawnNewParticle) == 0x000319, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::SpawnNewParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, TraceCountBySec) == 0x00031C, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::TraceCountBySec' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, RotationType_0_3_) == 0x000320, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::RotationType_0_3_' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, CustomRotation) == 0x000324, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::CustomRotation' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, ParticleScale) == 0x000330, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::ParticleScale' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, ParticleRotate_Set) == 0x000334, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::ParticleRotate_Set' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, DeltaPre) == 0x000340, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::DeltaPre' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, Delta) == 0x000344, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::Delta' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, ImpactPoint) == 0x000348, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::ImpactPoint' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, ImoactPointPre) == 0x000354, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::ImoactPointPre' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, FirstTime) == 0x000360, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::FirstTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, TraceEveryFlame) == 0x000361, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::TraceEveryFlame' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, LifeTime) == 0x000364, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::LifeTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, DestroyTimer) == 0x000368, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::DestroyTimer' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, AddActor_01) == 0x000369, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::AddActor_01' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, Actor_01) == 0x000370, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::Actor_01' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, AddActor_02) == 0x000378, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::AddActor_02' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, Actor_02) == 0x000380, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::Actor_02' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, SpawnParticle) == 0x000388, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::SpawnParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, ActorPositionSet) == 0x00038C, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::ActorPositionSet' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, RespawnDistance) == 0x000398, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::RespawnDistance' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, UseRespawnDistance) == 0x00039C, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::UseRespawnDistance' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, UseGraundReactionParticle) == 0x00039D, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::UseGraundReactionParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, GroundReactionParticle) == 0x0003A0, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::GroundReactionParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, Start) == 0x0003B0, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::Start' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, End) == 0x0003BC, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::End' has a wrong offset!");
static_assert(offsetof(ABP_EF_BPSet_SpawnGround_Point_C, RayUseActorRot) == 0x0003C8, "Member 'ABP_EF_BPSet_SpawnGround_Point_C::RayUseActorRot' has a wrong offset!");

}

