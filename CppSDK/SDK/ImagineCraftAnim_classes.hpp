#pragma once

 

// Package: ImagineCraftAnim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass imagineCraftAnim.imagineCraftAnim_C
// 0x0048 (0x02C0 - 0x0278)
class UImagineCraftAnim_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlur_0;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_parent;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FxBg;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_313;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SuccessPanel;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAnimFinished;                                    // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAnimFinished__DelegateSignature();
	void ExecuteUbergraph_imagineCraftAnim(int32 EntryPoint);
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void Play();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"imagineCraftAnim_C">();
	}
	static class UImagineCraftAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineCraftAnim_C>();
	}
};
static_assert(alignof(UImagineCraftAnim_C) == 0x000008, "Wrong alignment on UImagineCraftAnim_C");
static_assert(sizeof(UImagineCraftAnim_C) == 0x0002C0, "Wrong size on UImagineCraftAnim_C");
static_assert(offsetof(UImagineCraftAnim_C, UberGraphFrame) == 0x000278, "Member 'UImagineCraftAnim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineCraftAnim_C, AnimIn) == 0x000280, "Member 'UImagineCraftAnim_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UImagineCraftAnim_C, BackgroundBlur_0) == 0x000288, "Member 'UImagineCraftAnim_C::BackgroundBlur_0' has a wrong offset!");
static_assert(offsetof(UImagineCraftAnim_C, CanvasPanel_parent) == 0x000290, "Member 'UImagineCraftAnim_C::CanvasPanel_parent' has a wrong offset!");
static_assert(offsetof(UImagineCraftAnim_C, FxBg) == 0x000298, "Member 'UImagineCraftAnim_C::FxBg' has a wrong offset!");
static_assert(offsetof(UImagineCraftAnim_C, NiagaraSystemWidget_313) == 0x0002A0, "Member 'UImagineCraftAnim_C::NiagaraSystemWidget_313' has a wrong offset!");
static_assert(offsetof(UImagineCraftAnim_C, SuccessPanel) == 0x0002A8, "Member 'UImagineCraftAnim_C::SuccessPanel' has a wrong offset!");
static_assert(offsetof(UImagineCraftAnim_C, OnAnimFinished) == 0x0002B0, "Member 'UImagineCraftAnim_C::OnAnimFinished' has a wrong offset!");

}

