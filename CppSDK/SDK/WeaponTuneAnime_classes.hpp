#pragma once

 

// Package: WeaponTuneAnime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponTuneAnime.WeaponTuneAnime_C
// 0x0030 (0x02A8 - 0x0278)
class UWeaponTuneAnime_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim;                                              // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_247;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_0;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCompleteAnim;                                    // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnCompleteAnim__DelegateSignature();
	void ExecuteUbergraph_WeaponTuneAnime(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Play();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponTuneAnime_C">();
	}
	static class UWeaponTuneAnime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponTuneAnime_C>();
	}
};
static_assert(alignof(UWeaponTuneAnime_C) == 0x000008, "Wrong alignment on UWeaponTuneAnime_C");
static_assert(sizeof(UWeaponTuneAnime_C) == 0x0002A8, "Wrong size on UWeaponTuneAnime_C");
static_assert(offsetof(UWeaponTuneAnime_C, UberGraphFrame) == 0x000278, "Member 'UWeaponTuneAnime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponTuneAnime_C, Anim) == 0x000280, "Member 'UWeaponTuneAnime_C::Anim' has a wrong offset!");
static_assert(offsetof(UWeaponTuneAnime_C, Image_247) == 0x000288, "Member 'UWeaponTuneAnime_C::Image_247' has a wrong offset!");
static_assert(offsetof(UWeaponTuneAnime_C, NiagaraSystemWidget_0) == 0x000290, "Member 'UWeaponTuneAnime_C::NiagaraSystemWidget_0' has a wrong offset!");
static_assert(offsetof(UWeaponTuneAnime_C, OnCompleteAnim) == 0x000298, "Member 'UWeaponTuneAnime_C::OnCompleteAnim' has a wrong offset!");

}

