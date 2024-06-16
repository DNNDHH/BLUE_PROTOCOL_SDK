#pragma once

 

// Package: EngramCannonHUD_Detail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EngramCannonHUD_Detail.EngramCannonHUD_Detail_C
// 0x0028 (0x02A0 - 0x0278)
class UEngramCannonHUD_Detail_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 TargetMark;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ScriptPostProcessActor_C*           ScriptPostprocessActor;                            // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DamageEffectPostprocessEffect;                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoiseAnimationTime;                                // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EngramCannonHUD_Detail(int32 EntryPoint);
	void FinishDamageEffect();
	void Destruct();
	void PlayNoiseAnim();
	void PlayDamageEffect();
	void Finalize_Damage_Effect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EngramCannonHUD_Detail_C">();
	}
	static class UEngramCannonHUD_Detail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEngramCannonHUD_Detail_C>();
	}
};
static_assert(alignof(UEngramCannonHUD_Detail_C) == 0x000008, "Wrong alignment on UEngramCannonHUD_Detail_C");
static_assert(sizeof(UEngramCannonHUD_Detail_C) == 0x0002A0, "Wrong size on UEngramCannonHUD_Detail_C");
static_assert(offsetof(UEngramCannonHUD_Detail_C, UberGraphFrame) == 0x000278, "Member 'UEngramCannonHUD_Detail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_Detail_C, TargetMark) == 0x000280, "Member 'UEngramCannonHUD_Detail_C::TargetMark' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_Detail_C, ScriptPostprocessActor) == 0x000288, "Member 'UEngramCannonHUD_Detail_C::ScriptPostprocessActor' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_Detail_C, DamageEffectPostprocessEffect) == 0x000290, "Member 'UEngramCannonHUD_Detail_C::DamageEffectPostprocessEffect' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_Detail_C, NoiseAnimationTime) == 0x000298, "Member 'UEngramCannonHUD_Detail_C::NoiseAnimationTime' has a wrong offset!");

}

