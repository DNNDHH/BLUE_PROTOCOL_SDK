#pragma once

 

// Package: BP_EF_Avaritelia

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EF_Avaritelia.BP_EF_Avaritelia_C
// 0x00B0 (0x02C0 - 0x0210)
class UBP_EF_Avaritelia_C final : public USceneComponent
{
public:
	uint8                                         Pad_7CE6[0x8];                                     // 0x0208(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Avaritelia;                                        // 0x0218(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor)
	bool                                          CoAvaritelia;                                      // 0x0219(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CE7[0x2];                                     // 0x021A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CoAvaCenter;                                       // 0x021C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CoAvaEyeColor;                                     // 0x0224(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CoAvaEyeStrength;                                  // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       ParticleComp;                                      // 0x0238(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>       Mid;                                               // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                        WaveAvariteliaEffect;                              // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         SizeScale;                                         // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RateScale;                                         // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CE8[0x8];                                     // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             WaveAvaEffTrans;                                   // 0x0270(0x0030)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor)
	int32                                         ParticleCompIndex;                                 // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActivateAvaritiaEffect;                          // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CE9[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          PlayEvent;                                         // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          StopEvent;                                         // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EF_Avaritelia(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void PartsLoaded(bool Result);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void CreateCoAvaritiaMID();
	void SetCoAvaritiaParam();
	void SpawnAravitiaEffect();
	void SetAvaritiaEffectTransform();
	void ActivateAvariteliaEffect();
	void DeactivateAvariteliaEffect();
	void DestroyAvariteliaEffect();
	void CheckOwnerHidden();
	void PlaySound();
	void StopSound();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EF_Avaritelia_C">();
	}
	static class UBP_EF_Avaritelia_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EF_Avaritelia_C>();
	}
};
static_assert(alignof(UBP_EF_Avaritelia_C) == 0x000010, "Wrong alignment on UBP_EF_Avaritelia_C");
static_assert(sizeof(UBP_EF_Avaritelia_C) == 0x0002C0, "Wrong size on UBP_EF_Avaritelia_C");
static_assert(offsetof(UBP_EF_Avaritelia_C, UberGraphFrame) == 0x000210, "Member 'UBP_EF_Avaritelia_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, Avaritelia) == 0x000218, "Member 'UBP_EF_Avaritelia_C::Avaritelia' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, CoAvaritelia) == 0x000219, "Member 'UBP_EF_Avaritelia_C::CoAvaritelia' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, CoAvaCenter) == 0x00021C, "Member 'UBP_EF_Avaritelia_C::CoAvaCenter' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, CoAvaEyeColor) == 0x000224, "Member 'UBP_EF_Avaritelia_C::CoAvaEyeColor' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, CoAvaEyeStrength) == 0x000234, "Member 'UBP_EF_Avaritelia_C::CoAvaEyeStrength' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, ParticleComp) == 0x000238, "Member 'UBP_EF_Avaritelia_C::ParticleComp' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, Mid) == 0x000248, "Member 'UBP_EF_Avaritelia_C::Mid' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, WaveAvariteliaEffect) == 0x000258, "Member 'UBP_EF_Avaritelia_C::WaveAvariteliaEffect' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, SizeScale) == 0x000260, "Member 'UBP_EF_Avaritelia_C::SizeScale' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, RateScale) == 0x000264, "Member 'UBP_EF_Avaritelia_C::RateScale' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, WaveAvaEffTrans) == 0x000270, "Member 'UBP_EF_Avaritelia_C::WaveAvaEffTrans' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, ParticleCompIndex) == 0x0002A0, "Member 'UBP_EF_Avaritelia_C::ParticleCompIndex' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, IsActivateAvaritiaEffect) == 0x0002A4, "Member 'UBP_EF_Avaritelia_C::IsActivateAvaritiaEffect' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, PlayEvent) == 0x0002A8, "Member 'UBP_EF_Avaritelia_C::PlayEvent' has a wrong offset!");
static_assert(offsetof(UBP_EF_Avaritelia_C, StopEvent) == 0x0002B0, "Member 'UBP_EF_Avaritelia_C::StopEvent' has a wrong offset!");

}

