#pragma once

 

// Package: CmnGauge1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnGauge1.CmnGauge1_C
// 0x0048 (0x02C0 - 0x0278)
class UCmnGauge1_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg1;                                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge1;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           GaugeSize1;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           GaugeColor;                                        // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GaugeWidth;                                        // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GaugeRate;                                         // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           GaugeBGColor;                                      // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CmnGauge1(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetRate(float InRate);
	void SetColor(const struct FLinearColor& Param_SetColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnGauge1_C">();
	}
	static class UCmnGauge1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnGauge1_C>();
	}
};
static_assert(alignof(UCmnGauge1_C) == 0x000008, "Wrong alignment on UCmnGauge1_C");
static_assert(sizeof(UCmnGauge1_C) == 0x0002C0, "Wrong size on UCmnGauge1_C");
static_assert(offsetof(UCmnGauge1_C, UberGraphFrame) == 0x000278, "Member 'UCmnGauge1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnGauge1_C, Bg1) == 0x000280, "Member 'UCmnGauge1_C::Bg1' has a wrong offset!");
static_assert(offsetof(UCmnGauge1_C, Gauge1) == 0x000288, "Member 'UCmnGauge1_C::Gauge1' has a wrong offset!");
static_assert(offsetof(UCmnGauge1_C, GaugeSize1) == 0x000290, "Member 'UCmnGauge1_C::GaugeSize1' has a wrong offset!");
static_assert(offsetof(UCmnGauge1_C, GaugeColor) == 0x000298, "Member 'UCmnGauge1_C::GaugeColor' has a wrong offset!");
static_assert(offsetof(UCmnGauge1_C, GaugeWidth) == 0x0002A8, "Member 'UCmnGauge1_C::GaugeWidth' has a wrong offset!");
static_assert(offsetof(UCmnGauge1_C, GaugeRate) == 0x0002AC, "Member 'UCmnGauge1_C::GaugeRate' has a wrong offset!");
static_assert(offsetof(UCmnGauge1_C, GaugeBGColor) == 0x0002B0, "Member 'UCmnGauge1_C::GaugeBGColor' has a wrong offset!");

}

