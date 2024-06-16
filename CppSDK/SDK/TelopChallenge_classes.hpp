#pragma once

 

// Package: TelopChallenge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopChallenge.TelopChallenge_C
// 0x0030 (0x0338 - 0x0308)
class UTelopChallenge_C final : public USBTelopBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             SubText;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchBgColor;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text;                                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TelopChallenge(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim();
	void StopAnim();
	void PlaySE(class UAkAudioEvent* SE);
	void OnTimerEvent();
	void SetBG(int32 Param_Index);

	bool IsPlayAnim() const;
	class USBRuntimeTextBlock* GetText() const;
	class UTextBlock* GetSubText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopChallenge_C">();
	}
	static class UTelopChallenge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopChallenge_C>();
	}
};
static_assert(alignof(UTelopChallenge_C) == 0x000008, "Wrong alignment on UTelopChallenge_C");
static_assert(sizeof(UTelopChallenge_C) == 0x000338, "Wrong size on UTelopChallenge_C");
static_assert(offsetof(UTelopChallenge_C, UberGraphFrame) == 0x000308, "Member 'UTelopChallenge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopChallenge_C, InOut) == 0x000310, "Member 'UTelopChallenge_C::InOut' has a wrong offset!");
static_assert(offsetof(UTelopChallenge_C, SubText) == 0x000318, "Member 'UTelopChallenge_C::SubText' has a wrong offset!");
static_assert(offsetof(UTelopChallenge_C, SwitchBgColor) == 0x000320, "Member 'UTelopChallenge_C::SwitchBgColor' has a wrong offset!");
static_assert(offsetof(UTelopChallenge_C, Text) == 0x000328, "Member 'UTelopChallenge_C::Text' has a wrong offset!");
static_assert(offsetof(UTelopChallenge_C, TimerHandle) == 0x000330, "Member 'UTelopChallenge_C::TimerHandle' has a wrong offset!");

}

