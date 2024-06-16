#pragma once

 

// Package: BP_EF_Comp_Decal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EF_Comp_Decal.BP_EF_Comp_Decal_C
// 0x00D0 (0x02E0 - 0x0210)
class UBP_EF_Comp_Decal_C final : public USceneComponent
{
public:
	uint8                                         Pad_7129[0x8];                                     // 0x0208(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          UseDecal;                                          // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_712A[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterial*                              DecalMaterial;                                     // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseSideDecal;                                      // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_712B[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterial*                              DecalMaterial_Side;                                // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InheritRotation;                                   // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RandomRotation;                                    // 0x0231(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LifeTimeLinkage;                                   // 0x0232(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_712C[0x1];                                     // 0x0233(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DecalLifeTime;                                     // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ScaleLinkage;                                      // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ScaleLinkageZExclude;                              // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_712D[0x2];                                     // 0x023A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                DecalScale;                                        // 0x023C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DecalScale_Set;                                    // 0x0248(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentDecalScale;                                 // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DecalParameterAnimStart;                           // 0x0258(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DecalParameterAnimEnd;                             // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DMI_ParameterName;                                 // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DecalParamaterAnimIN_LifeSpan;                     // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_712E[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            DecalParameterAnimStart2;                          // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DecalParameterAnimEnd2;                            // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DMI_ParameterName2;                                // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DecalParamaterAnimIN_LifeSpan2;                    // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_712F[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       DynamicMaterial;                                   // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         DestroyOrderTime;                                  // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Do;                                                // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7130[0x3];                                     // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UDecalComponent*>                DecalComponent;                                    // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         DestroyGrace01;                                    // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DestroyGrace02;                                    // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RotationSet;                                       // 0x02C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Attach;                                            // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SpawnDecal(class USceneComponent* EffectComp, float InitialLifeTime, const struct FVector& AttackCollision, const struct FVector& CollisionScale, ESBEffectVisibleType VisibleType, TArray<class UDecalComponent*>* Param_DecalComponent, float* DestroyOderTime, float* DestroyGrace);
	void DecalScaleCTRL(const struct FVector& Scale);
	void DecalAnimCTRL(float Time);
	void DecalEndCTRL(float Time);
	void GetOwnerCharacter(class AActor** OwnerCharacter);
	void DestroyDecal();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EF_Comp_Decal_C">();
	}
	static class UBP_EF_Comp_Decal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EF_Comp_Decal_C>();
	}
};
static_assert(alignof(UBP_EF_Comp_Decal_C) == 0x000010, "Wrong alignment on UBP_EF_Comp_Decal_C");
static_assert(sizeof(UBP_EF_Comp_Decal_C) == 0x0002E0, "Wrong size on UBP_EF_Comp_Decal_C");
static_assert(offsetof(UBP_EF_Comp_Decal_C, UseDecal) == 0x000210, "Member 'UBP_EF_Comp_Decal_C::UseDecal' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalMaterial) == 0x000218, "Member 'UBP_EF_Comp_Decal_C::DecalMaterial' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, UseSideDecal) == 0x000220, "Member 'UBP_EF_Comp_Decal_C::UseSideDecal' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalMaterial_Side) == 0x000228, "Member 'UBP_EF_Comp_Decal_C::DecalMaterial_Side' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, InheritRotation) == 0x000230, "Member 'UBP_EF_Comp_Decal_C::InheritRotation' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, RandomRotation) == 0x000231, "Member 'UBP_EF_Comp_Decal_C::RandomRotation' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, LifeTimeLinkage) == 0x000232, "Member 'UBP_EF_Comp_Decal_C::LifeTimeLinkage' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalLifeTime) == 0x000234, "Member 'UBP_EF_Comp_Decal_C::DecalLifeTime' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, ScaleLinkage) == 0x000238, "Member 'UBP_EF_Comp_Decal_C::ScaleLinkage' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, ScaleLinkageZExclude) == 0x000239, "Member 'UBP_EF_Comp_Decal_C::ScaleLinkageZExclude' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalScale) == 0x00023C, "Member 'UBP_EF_Comp_Decal_C::DecalScale' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalScale_Set) == 0x000248, "Member 'UBP_EF_Comp_Decal_C::DecalScale_Set' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, CurrentDecalScale) == 0x000254, "Member 'UBP_EF_Comp_Decal_C::CurrentDecalScale' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalParameterAnimStart) == 0x000258, "Member 'UBP_EF_Comp_Decal_C::DecalParameterAnimStart' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalParameterAnimEnd) == 0x000260, "Member 'UBP_EF_Comp_Decal_C::DecalParameterAnimEnd' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DMI_ParameterName) == 0x000268, "Member 'UBP_EF_Comp_Decal_C::DMI_ParameterName' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalParamaterAnimIN_LifeSpan) == 0x000270, "Member 'UBP_EF_Comp_Decal_C::DecalParamaterAnimIN_LifeSpan' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalParameterAnimStart2) == 0x000278, "Member 'UBP_EF_Comp_Decal_C::DecalParameterAnimStart2' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalParameterAnimEnd2) == 0x000280, "Member 'UBP_EF_Comp_Decal_C::DecalParameterAnimEnd2' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DMI_ParameterName2) == 0x000288, "Member 'UBP_EF_Comp_Decal_C::DMI_ParameterName2' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalParamaterAnimIN_LifeSpan2) == 0x000290, "Member 'UBP_EF_Comp_Decal_C::DecalParamaterAnimIN_LifeSpan2' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DynamicMaterial) == 0x000298, "Member 'UBP_EF_Comp_Decal_C::DynamicMaterial' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DestroyOrderTime) == 0x0002A8, "Member 'UBP_EF_Comp_Decal_C::DestroyOrderTime' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, Do) == 0x0002AC, "Member 'UBP_EF_Comp_Decal_C::Do' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DecalComponent) == 0x0002B0, "Member 'UBP_EF_Comp_Decal_C::DecalComponent' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DestroyGrace01) == 0x0002C0, "Member 'UBP_EF_Comp_Decal_C::DestroyGrace01' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, DestroyGrace02) == 0x0002C4, "Member 'UBP_EF_Comp_Decal_C::DestroyGrace02' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, RotationSet) == 0x0002C8, "Member 'UBP_EF_Comp_Decal_C::RotationSet' has a wrong offset!");
static_assert(offsetof(UBP_EF_Comp_Decal_C, Attach) == 0x0002D4, "Member 'UBP_EF_Comp_Decal_C::Attach' has a wrong offset!");

}

