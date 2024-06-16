#pragma once

 

// Package: EGauge

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EGauge.EGauge_C
// 0x0030 (0x0378 - 0x0348)
class UEGauge_C final : public USBEGaugeWidget
{
public:
	class UWidgetAnimation*                       blink;                                             // 0x0348(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineLV1;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineLV2;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextTime;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnPlayAnimNormal();
	void OnPlayAnimBlink();
	void DebugPrintTime();
	void SetDefaultGaugeSize(const struct FVector2D& InDefaultGaugeSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EGauge_C">();
	}
	static class UEGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEGauge_C>();
	}
};
static_assert(alignof(UEGauge_C) == 0x000008, "Wrong alignment on UEGauge_C");
static_assert(sizeof(UEGauge_C) == 0x000378, "Wrong size on UEGauge_C");
static_assert(offsetof(UEGauge_C, blink) == 0x000348, "Member 'UEGauge_C::blink' has a wrong offset!");
static_assert(offsetof(UEGauge_C, Normal) == 0x000350, "Member 'UEGauge_C::Normal' has a wrong offset!");
static_assert(offsetof(UEGauge_C, BG) == 0x000358, "Member 'UEGauge_C::BG' has a wrong offset!");
static_assert(offsetof(UEGauge_C, LineLV1) == 0x000360, "Member 'UEGauge_C::LineLV1' has a wrong offset!");
static_assert(offsetof(UEGauge_C, LineLV2) == 0x000368, "Member 'UEGauge_C::LineLV2' has a wrong offset!");
static_assert(offsetof(UEGauge_C, TextTime) == 0x000370, "Member 'UEGauge_C::TextTime' has a wrong offset!");

}

