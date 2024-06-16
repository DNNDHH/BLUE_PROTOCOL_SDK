#pragma once

 

// Package: Notificatin_BrightAnim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Notificatin_BrightAnim.Notificatin_BrightAnim_C
// 0x0028 (0x02A0 - 0x0278)
class UNotificatin_BrightAnim_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimScaleLoop;                                     // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Notificatin_BrightAnim(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void Show();
	void Hide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Notificatin_BrightAnim_C">();
	}
	static class UNotificatin_BrightAnim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotificatin_BrightAnim_C>();
	}
};
static_assert(alignof(UNotificatin_BrightAnim_C) == 0x000008, "Wrong alignment on UNotificatin_BrightAnim_C");
static_assert(sizeof(UNotificatin_BrightAnim_C) == 0x0002A0, "Wrong size on UNotificatin_BrightAnim_C");
static_assert(offsetof(UNotificatin_BrightAnim_C, UberGraphFrame) == 0x000278, "Member 'UNotificatin_BrightAnim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNotificatin_BrightAnim_C, AnimOut) == 0x000280, "Member 'UNotificatin_BrightAnim_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UNotificatin_BrightAnim_C, AnimIn) == 0x000288, "Member 'UNotificatin_BrightAnim_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UNotificatin_BrightAnim_C, AnimScaleLoop) == 0x000290, "Member 'UNotificatin_BrightAnim_C::AnimScaleLoop' has a wrong offset!");
static_assert(offsetof(UNotificatin_BrightAnim_C, bVisible) == 0x000298, "Member 'UNotificatin_BrightAnim_C::bVisible' has a wrong offset!");

}

