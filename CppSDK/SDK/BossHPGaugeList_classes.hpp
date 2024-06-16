#pragma once

 

// Package: BossHPGaugeList

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BossHPGaugeList.BossHPGaugeList_C
// 0x0008 (0x02D8 - 0x02D0)
class UBossHPGaugeList_C final : public USBBossHPGaugeList
{
public:
	class UWidgetAnimation*                       AnimIn;                                            // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void OnInAnimationCall();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BossHPGaugeList_C">();
	}
	static class UBossHPGaugeList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBossHPGaugeList_C>();
	}
};
static_assert(alignof(UBossHPGaugeList_C) == 0x000008, "Wrong alignment on UBossHPGaugeList_C");
static_assert(sizeof(UBossHPGaugeList_C) == 0x0002D8, "Wrong size on UBossHPGaugeList_C");
static_assert(offsetof(UBossHPGaugeList_C, AnimIn) == 0x0002D0, "Member 'UBossHPGaugeList_C::AnimIn' has a wrong offset!");

}

