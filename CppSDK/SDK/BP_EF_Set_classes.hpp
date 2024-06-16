#pragma once

 

// Package: BP_EF_Set

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EF_Set.BP_EF_Set_C
// 0x0198 (0x0498 - 0x0300)
class ABP_EF_Set_C : public ASBProjectileEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_EF_Comp_GroundHit_C*                BP_EF_Comp_GroundHit;                              // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_EF_Comp_Particle_C*                 ParticleComp;                                      // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_EF_Comp_Decal_C*                    DecalComp;                                         // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TotalLoopTime;                                     // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero3_TraceGround_ON;                              // 0x0324(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CAD[0x3];                                     // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Zero3_DelayTime;                                   // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CAE[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Zero3_ParticleSystem;                              // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero3_UseGroundReaction;                           // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CAF[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystem*>                Zero3_GraundReactionParticle;                      // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Zero3_RotationType_0_3_;                           // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Zero3_CustomRotation;                              // 0x0354(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Zero3_Circle;                                      // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Zero4_TraceGroundPoint_ON;                         // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Zero5_ON;                                          // 0x0362(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB0[0x1];                                     // 0x0363(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Zero3_SpawnAngle;                                  // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero3_RaySpawnHeight;                              // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero3_RayLength;                                   // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero3_StartRange;                                  // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero3_SpawnWaveCount;                              // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero3_SpawnWaveDelay;                              // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB1[0x3];                                     // 0x0379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Zero3_SpawnWaveDelayTime;                          // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero3_SpawnWaveInterval;                           // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero3_SpawnCount;                                  // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero3_SpawnAdd;                                    // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero3_SpawnPointRandom;                            // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Zero3_ScaleLinkage;                                // 0x038D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB2[0x2];                                     // 0x038E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Zero3_EffectRange;                                 // 0x0390(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero3_ParticleScale;                               // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero3_ParticleScaleAdd;                            // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero4_DelayTime;                                   // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero4_DestroyTimer;                                // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB3[0x3];                                     // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Zero4_LifeTime;                                    // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Zero4_ParticleSystem;                              // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero4_UseGroundReaction;                           // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB4[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystem*>                Zero4_GraundReactionParticle;                      // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Zero4_ParticleScale;                               // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Zero4_RotationType_0_3_;                           // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Zero4_CustomRotation;                              // 0x03D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Zero4_RaySpawnHeght;                               // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero4_RayLength;                                   // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero4_SpawnOnlyOne;                                // 0x03EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB5[0x3];                                     // 0x03ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Zero4_TraceCountBySec;                             // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero4_SpawnNewParticle;                            // 0x03F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Zero4_TeaceEveryFlame;                             // 0x03F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Zero4_UseRespawnDistance;                          // 0x03F6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB6[0x1];                                     // 0x03F7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Zero4_RespawnDistande;                             // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zero5_DelayTime;                                   // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Zero5_BPSet05;                                     // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero3_SpawnParticle;                               // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Zero3_TraceGround_Attach;                          // 0x0409(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Zero3_ParticleVanishSameTime;                      // 0x040A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB7[0x1];                                     // 0x040B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Zero3_ParticleVanishTime;                          // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero3_LifeTimeLinkage;                             // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB8[0x7];                                     // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Zero3_VanishParticle;                              // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero3_AddActor_01;                                 // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB9[0x7];                                     // 0x0421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Zero3_Actor_01;                                    // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero3_AddActor_02;                                 // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CBA[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Zero3_Actor_02;                                    // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero4_SpawnParticle;                               // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Zero4_AddActor_01;                                 // 0x0441(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CBB[0x6];                                     // 0x0442(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Zero4_Actor_01;                                    // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero4_AddActor_02;                                 // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CBC[0x7];                                     // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Zero4_Actor_02;                                    // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero6_ON;                                          // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CBD[0x3];                                     // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Zero6_DelayTime;                                   // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Zero6_BPSet06;                                     // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SelfDestroyTime;                                   // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero7_ON;                                          // 0x0474(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CBE[0x3];                                     // 0x0475(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Zero7_DelayTime;                                   // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CBF[0x4];                                     // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Zero7_BPSet07;                                     // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Zero4_RayUseActorRot;                              // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Zero4_TraceGroundPoint_Attach;                     // 0x0489(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CC0[0x2];                                     // 0x048A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time;                                              // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DecalLifeSpan;                                     // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ParticleLifeSpan;                                  // 0x0494(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EF_Set(int32 EntryPoint);
	void ReceiveNotifyPrepareDestroy(bool bForce);
	void ReceiveNotifyUpdateAttackCollisionScale(const struct FVector& Scale);
	void EffectCheck();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EF_Set_C">();
	}
	static class ABP_EF_Set_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EF_Set_C>();
	}
};
static_assert(alignof(ABP_EF_Set_C) == 0x000008, "Wrong alignment on ABP_EF_Set_C");
static_assert(sizeof(ABP_EF_Set_C) == 0x000498, "Wrong size on ABP_EF_Set_C");
static_assert(offsetof(ABP_EF_Set_C, UberGraphFrame) == 0x000300, "Member 'ABP_EF_Set_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, BP_EF_Comp_GroundHit) == 0x000308, "Member 'ABP_EF_Set_C::BP_EF_Comp_GroundHit' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, ParticleComp) == 0x000310, "Member 'ABP_EF_Set_C::ParticleComp' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, DecalComp) == 0x000318, "Member 'ABP_EF_Set_C::DecalComp' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, TotalLoopTime) == 0x000320, "Member 'ABP_EF_Set_C::TotalLoopTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_TraceGround_ON) == 0x000324, "Member 'ABP_EF_Set_C::Zero3_TraceGround_ON' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_DelayTime) == 0x000328, "Member 'ABP_EF_Set_C::Zero3_DelayTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_ParticleSystem) == 0x000330, "Member 'ABP_EF_Set_C::Zero3_ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_UseGroundReaction) == 0x000338, "Member 'ABP_EF_Set_C::Zero3_UseGroundReaction' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_GraundReactionParticle) == 0x000340, "Member 'ABP_EF_Set_C::Zero3_GraundReactionParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_RotationType_0_3_) == 0x000350, "Member 'ABP_EF_Set_C::Zero3_RotationType_0_3_' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_CustomRotation) == 0x000354, "Member 'ABP_EF_Set_C::Zero3_CustomRotation' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_Circle) == 0x000360, "Member 'ABP_EF_Set_C::Zero3_Circle' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_TraceGroundPoint_ON) == 0x000361, "Member 'ABP_EF_Set_C::Zero4_TraceGroundPoint_ON' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero5_ON) == 0x000362, "Member 'ABP_EF_Set_C::Zero5_ON' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_SpawnAngle) == 0x000364, "Member 'ABP_EF_Set_C::Zero3_SpawnAngle' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_RaySpawnHeight) == 0x000368, "Member 'ABP_EF_Set_C::Zero3_RaySpawnHeight' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_RayLength) == 0x00036C, "Member 'ABP_EF_Set_C::Zero3_RayLength' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_StartRange) == 0x000370, "Member 'ABP_EF_Set_C::Zero3_StartRange' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_SpawnWaveCount) == 0x000374, "Member 'ABP_EF_Set_C::Zero3_SpawnWaveCount' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_SpawnWaveDelay) == 0x000378, "Member 'ABP_EF_Set_C::Zero3_SpawnWaveDelay' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_SpawnWaveDelayTime) == 0x00037C, "Member 'ABP_EF_Set_C::Zero3_SpawnWaveDelayTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_SpawnWaveInterval) == 0x000380, "Member 'ABP_EF_Set_C::Zero3_SpawnWaveInterval' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_SpawnCount) == 0x000384, "Member 'ABP_EF_Set_C::Zero3_SpawnCount' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_SpawnAdd) == 0x000388, "Member 'ABP_EF_Set_C::Zero3_SpawnAdd' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_SpawnPointRandom) == 0x00038C, "Member 'ABP_EF_Set_C::Zero3_SpawnPointRandom' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_ScaleLinkage) == 0x00038D, "Member 'ABP_EF_Set_C::Zero3_ScaleLinkage' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_EffectRange) == 0x000390, "Member 'ABP_EF_Set_C::Zero3_EffectRange' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_ParticleScale) == 0x00039C, "Member 'ABP_EF_Set_C::Zero3_ParticleScale' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_ParticleScaleAdd) == 0x0003A0, "Member 'ABP_EF_Set_C::Zero3_ParticleScaleAdd' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_DelayTime) == 0x0003A4, "Member 'ABP_EF_Set_C::Zero4_DelayTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_DestroyTimer) == 0x0003A8, "Member 'ABP_EF_Set_C::Zero4_DestroyTimer' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_LifeTime) == 0x0003AC, "Member 'ABP_EF_Set_C::Zero4_LifeTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_ParticleSystem) == 0x0003B0, "Member 'ABP_EF_Set_C::Zero4_ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_UseGroundReaction) == 0x0003B8, "Member 'ABP_EF_Set_C::Zero4_UseGroundReaction' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_GraundReactionParticle) == 0x0003C0, "Member 'ABP_EF_Set_C::Zero4_GraundReactionParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_ParticleScale) == 0x0003D0, "Member 'ABP_EF_Set_C::Zero4_ParticleScale' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_RotationType_0_3_) == 0x0003D4, "Member 'ABP_EF_Set_C::Zero4_RotationType_0_3_' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_CustomRotation) == 0x0003D8, "Member 'ABP_EF_Set_C::Zero4_CustomRotation' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_RaySpawnHeght) == 0x0003E4, "Member 'ABP_EF_Set_C::Zero4_RaySpawnHeght' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_RayLength) == 0x0003E8, "Member 'ABP_EF_Set_C::Zero4_RayLength' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_SpawnOnlyOne) == 0x0003EC, "Member 'ABP_EF_Set_C::Zero4_SpawnOnlyOne' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_TraceCountBySec) == 0x0003F0, "Member 'ABP_EF_Set_C::Zero4_TraceCountBySec' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_SpawnNewParticle) == 0x0003F4, "Member 'ABP_EF_Set_C::Zero4_SpawnNewParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_TeaceEveryFlame) == 0x0003F5, "Member 'ABP_EF_Set_C::Zero4_TeaceEveryFlame' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_UseRespawnDistance) == 0x0003F6, "Member 'ABP_EF_Set_C::Zero4_UseRespawnDistance' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_RespawnDistande) == 0x0003F8, "Member 'ABP_EF_Set_C::Zero4_RespawnDistande' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero5_DelayTime) == 0x0003FC, "Member 'ABP_EF_Set_C::Zero5_DelayTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero5_BPSet05) == 0x000400, "Member 'ABP_EF_Set_C::Zero5_BPSet05' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_SpawnParticle) == 0x000408, "Member 'ABP_EF_Set_C::Zero3_SpawnParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_TraceGround_Attach) == 0x000409, "Member 'ABP_EF_Set_C::Zero3_TraceGround_Attach' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_ParticleVanishSameTime) == 0x00040A, "Member 'ABP_EF_Set_C::Zero3_ParticleVanishSameTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_ParticleVanishTime) == 0x00040C, "Member 'ABP_EF_Set_C::Zero3_ParticleVanishTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_LifeTimeLinkage) == 0x000410, "Member 'ABP_EF_Set_C::Zero3_LifeTimeLinkage' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_VanishParticle) == 0x000418, "Member 'ABP_EF_Set_C::Zero3_VanishParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_AddActor_01) == 0x000420, "Member 'ABP_EF_Set_C::Zero3_AddActor_01' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_Actor_01) == 0x000428, "Member 'ABP_EF_Set_C::Zero3_Actor_01' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_AddActor_02) == 0x000430, "Member 'ABP_EF_Set_C::Zero3_AddActor_02' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero3_Actor_02) == 0x000438, "Member 'ABP_EF_Set_C::Zero3_Actor_02' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_SpawnParticle) == 0x000440, "Member 'ABP_EF_Set_C::Zero4_SpawnParticle' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_AddActor_01) == 0x000441, "Member 'ABP_EF_Set_C::Zero4_AddActor_01' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_Actor_01) == 0x000448, "Member 'ABP_EF_Set_C::Zero4_Actor_01' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_AddActor_02) == 0x000450, "Member 'ABP_EF_Set_C::Zero4_AddActor_02' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_Actor_02) == 0x000458, "Member 'ABP_EF_Set_C::Zero4_Actor_02' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero6_ON) == 0x000460, "Member 'ABP_EF_Set_C::Zero6_ON' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero6_DelayTime) == 0x000464, "Member 'ABP_EF_Set_C::Zero6_DelayTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero6_BPSet06) == 0x000468, "Member 'ABP_EF_Set_C::Zero6_BPSet06' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, SelfDestroyTime) == 0x000470, "Member 'ABP_EF_Set_C::SelfDestroyTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero7_ON) == 0x000474, "Member 'ABP_EF_Set_C::Zero7_ON' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero7_DelayTime) == 0x000478, "Member 'ABP_EF_Set_C::Zero7_DelayTime' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero7_BPSet07) == 0x000480, "Member 'ABP_EF_Set_C::Zero7_BPSet07' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_RayUseActorRot) == 0x000488, "Member 'ABP_EF_Set_C::Zero4_RayUseActorRot' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Zero4_TraceGroundPoint_Attach) == 0x000489, "Member 'ABP_EF_Set_C::Zero4_TraceGroundPoint_Attach' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, Time) == 0x00048C, "Member 'ABP_EF_Set_C::Time' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, DecalLifeSpan) == 0x000490, "Member 'ABP_EF_Set_C::DecalLifeSpan' has a wrong offset!");
static_assert(offsetof(ABP_EF_Set_C, ParticleLifeSpan) == 0x000494, "Member 'ABP_EF_Set_C::ParticleLifeSpan' has a wrong offset!");

}

