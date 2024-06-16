#pragma once

 

// Package: WeaponSyntheAnime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSyntheAnime.WeaponSyntheAnime_C
// 0x0038 (0x02B0 - 0x0278)
class UWeaponSyntheAnime_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Testanimation;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_146;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_0;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCompleteAnim;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnCompleteAnim__DelegateSignature();
	void ExecuteUbergraph_WeaponSyntheAnime(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Play();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSyntheAnime_C">();
	}
	static class UWeaponSyntheAnime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSyntheAnime_C>();
	}
};
static_assert(alignof(UWeaponSyntheAnime_C) == 0x000008, "Wrong alignment on UWeaponSyntheAnime_C");
static_assert(sizeof(UWeaponSyntheAnime_C) == 0x0002B0, "Wrong size on UWeaponSyntheAnime_C");
static_assert(offsetof(UWeaponSyntheAnime_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSyntheAnime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSyntheAnime_C, Testanimation) == 0x000280, "Member 'UWeaponSyntheAnime_C::Testanimation' has a wrong offset!");
static_assert(offsetof(UWeaponSyntheAnime_C, Image_146) == 0x000288, "Member 'UWeaponSyntheAnime_C::Image_146' has a wrong offset!");
static_assert(offsetof(UWeaponSyntheAnime_C, NiagaraSystemWidget_0) == 0x000290, "Member 'UWeaponSyntheAnime_C::NiagaraSystemWidget_0' has a wrong offset!");
static_assert(offsetof(UWeaponSyntheAnime_C, UIBlocker) == 0x000298, "Member 'UWeaponSyntheAnime_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWeaponSyntheAnime_C, OnCompleteAnim) == 0x0002A0, "Member 'UWeaponSyntheAnime_C::OnCompleteAnim' has a wrong offset!");

}

