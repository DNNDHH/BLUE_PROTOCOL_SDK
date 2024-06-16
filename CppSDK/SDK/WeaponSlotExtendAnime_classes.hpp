#pragma once

 

// Package: WeaponSlotExtendAnime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSlotExtendAnime.WeaponSlotExtendAnime_C
// 0x0030 (0x02A8 - 0x0278)
class UWeaponSlotExtendAnime_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim;                                              // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_88;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_0;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCompleteAnim;                                    // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnCompleteAnim__DelegateSignature();
	void ExecuteUbergraph_WeaponSlotExtendAnime(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Play();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSlotExtendAnime_C">();
	}
	static class UWeaponSlotExtendAnime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSlotExtendAnime_C>();
	}
};
static_assert(alignof(UWeaponSlotExtendAnime_C) == 0x000008, "Wrong alignment on UWeaponSlotExtendAnime_C");
static_assert(sizeof(UWeaponSlotExtendAnime_C) == 0x0002A8, "Wrong size on UWeaponSlotExtendAnime_C");
static_assert(offsetof(UWeaponSlotExtendAnime_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSlotExtendAnime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSlotExtendAnime_C, Anim) == 0x000280, "Member 'UWeaponSlotExtendAnime_C::Anim' has a wrong offset!");
static_assert(offsetof(UWeaponSlotExtendAnime_C, Image_88) == 0x000288, "Member 'UWeaponSlotExtendAnime_C::Image_88' has a wrong offset!");
static_assert(offsetof(UWeaponSlotExtendAnime_C, NiagaraSystemWidget_0) == 0x000290, "Member 'UWeaponSlotExtendAnime_C::NiagaraSystemWidget_0' has a wrong offset!");
static_assert(offsetof(UWeaponSlotExtendAnime_C, OnCompleteAnim) == 0x000298, "Member 'UWeaponSlotExtendAnime_C::OnCompleteAnim' has a wrong offset!");

}

