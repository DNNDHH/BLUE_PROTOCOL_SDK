#pragma once

 

// Package: PlayerEGauge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerEGauge.PlayerEGauge_C
// 0x0018 (0x02A8 - 0x0290)
class UPlayerEGauge_C final : public USBPlayerEGaugeWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                          Forward;                                           // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PlayerEGauge(int32 EntryPoint);
	void WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0();
	void Construct();
	void SetEditMode(bool bIsEdit);
	void OnInAnimation(bool bForward);
	void PlayAnim(EUMGSequencePlayMode PlayMode, float PlaybackSpeed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerEGauge_C">();
	}
	static class UPlayerEGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerEGauge_C>();
	}
};
static_assert(alignof(UPlayerEGauge_C) == 0x000008, "Wrong alignment on UPlayerEGauge_C");
static_assert(sizeof(UPlayerEGauge_C) == 0x0002A8, "Wrong size on UPlayerEGauge_C");
static_assert(offsetof(UPlayerEGauge_C, UberGraphFrame) == 0x000290, "Member 'UPlayerEGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerEGauge_C, AnimInOut) == 0x000298, "Member 'UPlayerEGauge_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UPlayerEGauge_C, Forward) == 0x0002A0, "Member 'UPlayerEGauge_C::Forward' has a wrong offset!");

}

