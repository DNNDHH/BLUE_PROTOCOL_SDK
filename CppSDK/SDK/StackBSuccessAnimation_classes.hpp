#pragma once

 

// Package: StackBSuccessAnimation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBSuccessAnimation.StackBSuccessAnimation_C
// 0x0038 (0x02B0 - 0x0278)
class UStackBSuccessAnimation_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim;                                              // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_85;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SuccessPanel;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAnimPlayed;                                      // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAnimPlayed__DelegateSignature();
	void ExecuteUbergraph_StackBSuccessAnimation(int32 EntryPoint);
	void Play();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void AnimaterinComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBSuccessAnimation_C">();
	}
	static class UStackBSuccessAnimation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBSuccessAnimation_C>();
	}
};
static_assert(alignof(UStackBSuccessAnimation_C) == 0x000008, "Wrong alignment on UStackBSuccessAnimation_C");
static_assert(sizeof(UStackBSuccessAnimation_C) == 0x0002B0, "Wrong size on UStackBSuccessAnimation_C");
static_assert(offsetof(UStackBSuccessAnimation_C, UberGraphFrame) == 0x000278, "Member 'UStackBSuccessAnimation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackBSuccessAnimation_C, Anim) == 0x000280, "Member 'UStackBSuccessAnimation_C::Anim' has a wrong offset!");
static_assert(offsetof(UStackBSuccessAnimation_C, Image) == 0x000288, "Member 'UStackBSuccessAnimation_C::Image' has a wrong offset!");
static_assert(offsetof(UStackBSuccessAnimation_C, NiagaraSystemWidget_85) == 0x000290, "Member 'UStackBSuccessAnimation_C::NiagaraSystemWidget_85' has a wrong offset!");
static_assert(offsetof(UStackBSuccessAnimation_C, SuccessPanel) == 0x000298, "Member 'UStackBSuccessAnimation_C::SuccessPanel' has a wrong offset!");
static_assert(offsetof(UStackBSuccessAnimation_C, OnAnimPlayed) == 0x0002A0, "Member 'UStackBSuccessAnimation_C::OnAnimPlayed' has a wrong offset!");

}

