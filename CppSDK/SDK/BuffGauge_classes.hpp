#pragma once

 

// Package: BuffGauge

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BuffGauge.BuffGauge_C
// 0x0008 (0x0280 - 0x0278)
class UBuffGauge_C final : public USBBuffGauge
{
public:
	class UWidgetAnimation*                       Update;                                            // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void PlayAnim(float InStartTime, float InAnimSpeed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuffGauge_C">();
	}
	static class UBuffGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuffGauge_C>();
	}
};
static_assert(alignof(UBuffGauge_C) == 0x000008, "Wrong alignment on UBuffGauge_C");
static_assert(sizeof(UBuffGauge_C) == 0x000280, "Wrong size on UBuffGauge_C");
static_assert(offsetof(UBuffGauge_C, Update) == 0x000278, "Member 'UBuffGauge_C::Update' has a wrong offset!");

}

