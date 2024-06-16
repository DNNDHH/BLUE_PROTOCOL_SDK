#pragma once

 

// Package: StackBFailedAnimation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBFailedAnimation.StackBFailedAnimation_C
// 0x0038 (0x02B0 - 0x0278)
class UStackBFailedAnimation_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim;                                              // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           FailPanel;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_47;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAnimPlayed;                                      // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAnimPlayed__DelegateSignature();
	void ExecuteUbergraph_StackBFailedAnimation(int32 EntryPoint);
	void Play();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void AnimaterinComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBFailedAnimation_C">();
	}
	static class UStackBFailedAnimation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBFailedAnimation_C>();
	}
};
static_assert(alignof(UStackBFailedAnimation_C) == 0x000008, "Wrong alignment on UStackBFailedAnimation_C");
static_assert(sizeof(UStackBFailedAnimation_C) == 0x0002B0, "Wrong size on UStackBFailedAnimation_C");
static_assert(offsetof(UStackBFailedAnimation_C, UberGraphFrame) == 0x000278, "Member 'UStackBFailedAnimation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackBFailedAnimation_C, Anim) == 0x000280, "Member 'UStackBFailedAnimation_C::Anim' has a wrong offset!");
static_assert(offsetof(UStackBFailedAnimation_C, FailPanel) == 0x000288, "Member 'UStackBFailedAnimation_C::FailPanel' has a wrong offset!");
static_assert(offsetof(UStackBFailedAnimation_C, Image) == 0x000290, "Member 'UStackBFailedAnimation_C::Image' has a wrong offset!");
static_assert(offsetof(UStackBFailedAnimation_C, NiagaraSystemWidget_47) == 0x000298, "Member 'UStackBFailedAnimation_C::NiagaraSystemWidget_47' has a wrong offset!");
static_assert(offsetof(UStackBFailedAnimation_C, OnAnimPlayed) == 0x0002A0, "Member 'UStackBFailedAnimation_C::OnAnimPlayed' has a wrong offset!");

}

