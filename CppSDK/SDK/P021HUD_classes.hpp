#pragma once

 

// Package: P021HUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P021HUD.P021HUD_C
// 0x0060 (0x0320 - 0x02C0)
class UP021HUD_C final : public USBClassHUDP021
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimGainLineEffect;                                // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimGainMax;                                       // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimEffectFever1;                                  // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimEffectFever2;                                  // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimBGColor2;                                      // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimBGColor1;                                      // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimBGColor0;                                      // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimEffectMax;                                     // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CPRoot;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPVisibleSetting;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_P021HUD(int32 EntryPoint);
	void WidgetAnimationEvt_AnimGainLineEffect_K2Node_WidgetAnimationEvent_0();
	void WidgetAnimationEvt_AnimEffectFever1_K2Node_WidgetAnimationEvent_1();
	void UnbindVisibleSetting();
	void BindVisibleSetting();
	void OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void CustomEvent_1(class UObject* Sender, class UObject* Param);
	void CustomEvent(class UObject* Sender, class UObject* Param);
	void UnbindFeverStart();
	void BindFeverStart();
	void UnbindFeverEnd();
	void BindFeverEnd();
	void CustomEvent_0(class UObject* Sender, class UObject* Param);
	void UnbindChangeVoltageRate();
	void BindChangeVoltageRate();
	void PlayAnim(const class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay, EUMGSequencePlayMode PlayMode);
	void StopAnim(const class UWidgetAnimation* InAnimation);
	void PlayAnimForwardInOut();
	void PlayAnimReverseInOut();
	void OnBind();
	void OnUnbind();
	void OnInitialize();
	void OnTerminate();
	void PlayAnimEffectMax();
	void StopAnimEffectMax();
	void PlayAnimBG(int32 InBGIndex);
	void PlayAnimEffectFever1();
	void StopAnimEffectFever1();
	void PlayAnimEffectFever2();
	void StopAnimEffectFever2();
	void PlayAnimGainMax();
	void StopAnimGainMax();
	void PlayAnimGainLineEffect();
	void StopAnimGainLineEffect();
	void PlayAnimForwardNoise();
	void PlayAnimReverseNoise();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P021HUD_C">();
	}
	static class UP021HUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP021HUD_C>();
	}
};
static_assert(alignof(UP021HUD_C) == 0x000008, "Wrong alignment on UP021HUD_C");
static_assert(sizeof(UP021HUD_C) == 0x000320, "Wrong size on UP021HUD_C");
static_assert(offsetof(UP021HUD_C, UberGraphFrame) == 0x0002C0, "Member 'UP021HUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP021HUD_C, AnimGainLineEffect) == 0x0002C8, "Member 'UP021HUD_C::AnimGainLineEffect' has a wrong offset!");
static_assert(offsetof(UP021HUD_C, AnimGainMax) == 0x0002D0, "Member 'UP021HUD_C::AnimGainMax' has a wrong offset!");
static_assert(offsetof(UP021HUD_C, AnimEffectFever1) == 0x0002D8, "Member 'UP021HUD_C::AnimEffectFever1' has a wrong offset!");
static_assert(offsetof(UP021HUD_C, AnimEffectFever2) == 0x0002E0, "Member 'UP021HUD_C::AnimEffectFever2' has a wrong offset!");
static_assert(offsetof(UP021HUD_C, AnimBGColor2) == 0x0002E8, "Member 'UP021HUD_C::AnimBGColor2' has a wrong offset!");
static_assert(offsetof(UP021HUD_C, AnimBGColor1) == 0x0002F0, "Member 'UP021HUD_C::AnimBGColor1' has a wrong offset!");
static_assert(offsetof(UP021HUD_C, AnimBGColor0) == 0x0002F8, "Member 'UP021HUD_C::AnimBGColor0' has a wrong offset!");
static_assert(offsetof(UP021HUD_C, AnimEffectMax) == 0x000300, "Member 'UP021HUD_C::AnimEffectMax' has a wrong offset!");
static_assert(offsetof(UP021HUD_C, AnimInOut) == 0x000308, "Member 'UP021HUD_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UP021HUD_C, CPRoot) == 0x000310, "Member 'UP021HUD_C::CPRoot' has a wrong offset!");
static_assert(offsetof(UP021HUD_C, CPVisibleSetting) == 0x000318, "Member 'UP021HUD_C::CPVisibleSetting' has a wrong offset!");

}

