#pragma once

 

// Package: FocusTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FocusTarget.FocusTarget_C
// 0x0018 (0x0338 - 0x0320)
class UFocusTarget_C final : public USBFocusTargetWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimHide;                                          // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FocusTarget(int32 EntryPoint);
	void WidgetAnimationEvt_AnimHide_K2Node_WidgetAnimationEvent_0();
	void OnUnbindFadeOutDeath(class ASBEnemyCharacter* InEnemyCharacter);
	void OnBindFadeOutDeath(class ASBEnemyCharacter* InEnemyCharacter);
	void OnFadeOutDeath();
	void OnPlayAnimIn();
	void OnStopAnimIn();
	void OnPlayAnimOut();
	void OnStopAnimOut();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FocusTarget_C">();
	}
	static class UFocusTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFocusTarget_C>();
	}
};
static_assert(alignof(UFocusTarget_C) == 0x000008, "Wrong alignment on UFocusTarget_C");
static_assert(sizeof(UFocusTarget_C) == 0x000338, "Wrong size on UFocusTarget_C");
static_assert(offsetof(UFocusTarget_C, UberGraphFrame) == 0x000320, "Member 'UFocusTarget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFocusTarget_C, AnimIn) == 0x000328, "Member 'UFocusTarget_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UFocusTarget_C, AnimHide) == 0x000330, "Member 'UFocusTarget_C::AnimHide' has a wrong offset!");

}

