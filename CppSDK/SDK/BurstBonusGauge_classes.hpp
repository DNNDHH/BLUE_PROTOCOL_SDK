#pragma once

 

// Package: BurstBonusGauge

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BurstBonusGauge.BurstBonusGauge_C
// 0x0058 (0x02F0 - 0x0298)
class UBurstBonusGauge_C final : public USBBurstBonusGaugeWidget
{
public:
	class UWidgetAnimation*                       blink_2;                                           // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       blink_1;                                           // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgImage;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        GaugeSwitcher;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LV1Switcher;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LV2Switcher;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LV3Switcher;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LV4Switcher;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LV5Switcher;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         BlinkTime;                                         // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlinkFastTime;                                     // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateGaugeSwitcher();
	void OnSetup();
	void OnUpdateLV();
	void OnUpdateTime();
	void SetDefaultGaugeSize(const struct FVector2D& InDefaultGaugeSize);
	void SetGaugeSize(const struct FVector2D& InSize);
	void PlayAnimNormal();
	void PlayAnimBlink1();
	void PlayAnimBlink2();
	void StopAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BurstBonusGauge_C">();
	}
	static class UBurstBonusGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBurstBonusGauge_C>();
	}
};
static_assert(alignof(UBurstBonusGauge_C) == 0x000008, "Wrong alignment on UBurstBonusGauge_C");
static_assert(sizeof(UBurstBonusGauge_C) == 0x0002F0, "Wrong size on UBurstBonusGauge_C");
static_assert(offsetof(UBurstBonusGauge_C, blink_2) == 0x000298, "Member 'UBurstBonusGauge_C::blink_2' has a wrong offset!");
static_assert(offsetof(UBurstBonusGauge_C, blink_1) == 0x0002A0, "Member 'UBurstBonusGauge_C::blink_1' has a wrong offset!");
static_assert(offsetof(UBurstBonusGauge_C, Normal) == 0x0002A8, "Member 'UBurstBonusGauge_C::Normal' has a wrong offset!");
static_assert(offsetof(UBurstBonusGauge_C, BgImage) == 0x0002B0, "Member 'UBurstBonusGauge_C::BgImage' has a wrong offset!");
static_assert(offsetof(UBurstBonusGauge_C, GaugeSwitcher) == 0x0002B8, "Member 'UBurstBonusGauge_C::GaugeSwitcher' has a wrong offset!");
static_assert(offsetof(UBurstBonusGauge_C, LV1Switcher) == 0x0002C0, "Member 'UBurstBonusGauge_C::LV1Switcher' has a wrong offset!");
static_assert(offsetof(UBurstBonusGauge_C, LV2Switcher) == 0x0002C8, "Member 'UBurstBonusGauge_C::LV2Switcher' has a wrong offset!");
static_assert(offsetof(UBurstBonusGauge_C, LV3Switcher) == 0x0002D0, "Member 'UBurstBonusGauge_C::LV3Switcher' has a wrong offset!");
static_assert(offsetof(UBurstBonusGauge_C, LV4Switcher) == 0x0002D8, "Member 'UBurstBonusGauge_C::LV4Switcher' has a wrong offset!");
static_assert(offsetof(UBurstBonusGauge_C, LV5Switcher) == 0x0002E0, "Member 'UBurstBonusGauge_C::LV5Switcher' has a wrong offset!");
static_assert(offsetof(UBurstBonusGauge_C, BlinkTime) == 0x0002E8, "Member 'UBurstBonusGauge_C::BlinkTime' has a wrong offset!");
static_assert(offsetof(UBurstBonusGauge_C, BlinkFastTime) == 0x0002EC, "Member 'UBurstBonusGauge_C::BlinkFastTime' has a wrong offset!");

}

