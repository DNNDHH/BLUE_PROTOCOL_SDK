#pragma once

 

// Package: BP_EF_Comp_GroundHit

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C
// 0x0080 (0x0290 - 0x0210)
class UBP_EF_Comp_GroundHit_C final : public USceneComponent
{
public:
	uint8                                         Pad_9F7F[0x8];                                     // 0x0208(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          SpawnGroundHitParticle;                            // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F80[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        StartParticle;                                     // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EffectRange;                                       // 0x0220(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LifeTimeLinkage;                                   // 0x022C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F81[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TraceTime;                                         // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ScaleLinkage;                                      // 0x0234(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ScaleLinkage3Vector;                               // 0x0235(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F82[0x2];                                     // 0x0236(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ScaleSet;                                          // 0x0238(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TraceGroundDo;                                     // 0x0244(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F83[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LifeTimeSet;                                       // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F84[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystemComponent*>       StartParticleArray;                                // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             NewEventDispatcher_0;                              // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SpawnCount;                                        // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TraceHeight;                                       // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TraceDistance;                                     // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ParamaterName;                                     // 0x027C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEffectVisibleType                          VisibleType;                                       // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void NewEventDispatcher_0__DelegateSignature();
	void TraceGroundParticleSpawn(class USceneComponent* EffectComp, float InitialLifeTime, const struct FVector& AttackCollision, const struct FVector& CollisionScale);
	void TraceGroundParticleEndCTRL(class USceneComponent* EffectComp);
	void TraceGroundParticleCTRL(const struct FVector& Scale);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EF_Comp_GroundHit_C">();
	}
	static class UBP_EF_Comp_GroundHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EF_Comp_GroundHit_C>();
	}
};
static_assert(alignof(UBP_EF_Comp_GroundHit_C) == 0x000010, "Wrong alignment on UBP_EF_Comp_GroundHit_C");
static_assert(sizeof(UBP_EF_Comp_GroundHit_C) == 0x000290, "Wrong size on UBP_EF_Comp_GroundHit_C");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, SpawnGroundHitParticle) == 0x000210, "Member 'UBP_EF_Comp_GroundHit_C::SpawnGroundHitParticle' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, StartParticle) == 0x000218, "Member 'UBP_EF_Comp_GroundHit_C::StartParticle' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, EffectRange) == 0x000220, "Member 'UBP_EF_Comp_GroundHit_C::EffectRange' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, LifeTimeLinkage) == 0x00022C, "Member 'UBP_EF_Comp_GroundHit_C::LifeTimeLinkage' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, TraceTime) == 0x000230, "Member 'UBP_EF_Comp_GroundHit_C::TraceTime' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, ScaleLinkage) == 0x000234, "Member 'UBP_EF_Comp_GroundHit_C::ScaleLinkage' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, ScaleLinkage3Vector) == 0x000235, "Member 'UBP_EF_Comp_GroundHit_C::ScaleLinkage3Vector' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, ScaleSet) == 0x000238, "Member 'UBP_EF_Comp_GroundHit_C::ScaleSet' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, TraceGroundDo) == 0x000244, "Member 'UBP_EF_Comp_GroundHit_C::TraceGroundDo' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, LifeTimeSet) == 0x000248, "Member 'UBP_EF_Comp_GroundHit_C::LifeTimeSet' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, StartParticleArray) == 0x000250, "Member 'UBP_EF_Comp_GroundHit_C::StartParticleArray' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, NewEventDispatcher_0) == 0x000260, "Member 'UBP_EF_Comp_GroundHit_C::NewEventDispatcher_0' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, SpawnCount) == 0x000270, "Member 'UBP_EF_Comp_GroundHit_C::SpawnCount' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, TraceHeight) == 0x000274, "Member 'UBP_EF_Comp_GroundHit_C::TraceHeight' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, TraceDistance) == 0x000278, "Member 'UBP_EF_Comp_GroundHit_C::TraceDistance' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, ParamaterName) == 0x00027C, "Member 'UBP_EF_Comp_GroundHit_C::ParamaterName' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_GroundHit_C, VisibleType) == 0x000284, "Member 'UBP_EF_Comp_GroundHit_C::VisibleType' has a wrong offset!");

}

