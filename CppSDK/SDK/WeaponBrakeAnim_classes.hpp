#pragma once

 

// Package: WeaponBrakeAnim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponBrakeAnim.WeaponBrakeAnim_C
// 0x0058 (0x02D0 - 0x0278)
class UWeaponBrakeAnim_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Play;                                              // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_43;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_44;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_45;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_46;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_47;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAnimFinished;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsQuitable;                                        // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnAnimFinished__DelegateSignature();
	void ExecuteUbergraph_WeaponBrakeAnim(int32 EntryPoint);
	void Replay();
	void EnableQuit();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponBrakeAnim_C">();
	}
	static class UWeaponBrakeAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponBrakeAnim_C>();
	}
};
static_assert(alignof(UWeaponBrakeAnim_C) == 0x000008, "Wrong alignment on UWeaponBrakeAnim_C");
static_assert(sizeof(UWeaponBrakeAnim_C) == 0x0002D0, "Wrong size on UWeaponBrakeAnim_C");
static_assert(offsetof(UWeaponBrakeAnim_C, UberGraphFrame) == 0x000278, "Member 'UWeaponBrakeAnim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponBrakeAnim_C, Play) == 0x000280, "Member 'UWeaponBrakeAnim_C::Play' has a wrong offset!");
static_assert(offsetof(UWeaponBrakeAnim_C, Image_43) == 0x000288, "Member 'UWeaponBrakeAnim_C::Image_43' has a wrong offset!");
static_assert(offsetof(UWeaponBrakeAnim_C, Image_44) == 0x000290, "Member 'UWeaponBrakeAnim_C::Image_44' has a wrong offset!");
static_assert(offsetof(UWeaponBrakeAnim_C, Image_45) == 0x000298, "Member 'UWeaponBrakeAnim_C::Image_45' has a wrong offset!");
static_assert(offsetof(UWeaponBrakeAnim_C, Image_46) == 0x0002A0, "Member 'UWeaponBrakeAnim_C::Image_46' has a wrong offset!");
static_assert(offsetof(UWeaponBrakeAnim_C, Image_47) == 0x0002A8, "Member 'UWeaponBrakeAnim_C::Image_47' has a wrong offset!");
static_assert(offsetof(UWeaponBrakeAnim_C, UIBlocker) == 0x0002B0, "Member 'UWeaponBrakeAnim_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWeaponBrakeAnim_C, OnAnimFinished) == 0x0002B8, "Member 'UWeaponBrakeAnim_C::OnAnimFinished' has a wrong offset!");
static_assert(offsetof(UWeaponBrakeAnim_C, IsQuitable) == 0x0002C8, "Member 'UWeaponBrakeAnim_C::IsQuitable' has a wrong offset!");

}

