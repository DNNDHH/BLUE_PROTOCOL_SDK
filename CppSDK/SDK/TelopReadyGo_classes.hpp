#pragma once

 

// Package: TelopReadyGo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopReadyGo.TelopReadyGo_C
// 0x0010 (0x0318 - 0x0308)
class UTelopReadyGo_C final : public USBTelopBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TelopReadyGo(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim();
	void StopAnim();
	void PlaySE(class UAkAudioEvent* SE);

	bool IsPlayAnim() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopReadyGo_C">();
	}
	static class UTelopReadyGo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopReadyGo_C>();
	}
};
static_assert(alignof(UTelopReadyGo_C) == 0x000008, "Wrong alignment on UTelopReadyGo_C");
static_assert(sizeof(UTelopReadyGo_C) == 0x000318, "Wrong size on UTelopReadyGo_C");
static_assert(offsetof(UTelopReadyGo_C, UberGraphFrame) == 0x000308, "Member 'UTelopReadyGo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopReadyGo_C, InOut) == 0x000310, "Member 'UTelopReadyGo_C::InOut' has a wrong offset!");

}

