#pragma once

 

// Package: SkillInfoGaugeMainDefHeal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C
// 0x0070 (0x02F0 - 0x0280)
class USkillInfoGaugeMainDefHeal_C final : public USBSkillInfoBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimChargeStart;                                   // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimChargeEnd;                                     // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimUse;                                           // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Empty;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconDisable;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSet;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtKey;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTime;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTime;                                         // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillInfoGaugeMainDefHeal(int32 EntryPoint);
	void OnIconDisableChange(bool bVisible);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetGaugeValue(float InValue, float InRecastTime);
	void SetText(const class FText& InText);
	void PlayAnimUse(bool bInit);
	void PlayAnimChargeEnd();
	void SetEnabled(bool bEnabled);
	void PlayAnimChargeStart();
	void SetKeyGuideVisible(bool Param_IsVisible);
	void SetIsEmpty(bool InIsEmpty);
	void SetEmptyColor(const struct FLinearColor& InColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoGaugeMainDefHeal_C">();
	}
	static class USkillInfoGaugeMainDefHeal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoGaugeMainDefHeal_C>();
	}
};
static_assert(alignof(USkillInfoGaugeMainDefHeal_C) == 0x000008, "Wrong alignment on USkillInfoGaugeMainDefHeal_C");
static_assert(sizeof(USkillInfoGaugeMainDefHeal_C) == 0x0002F0, "Wrong size on USkillInfoGaugeMainDefHeal_C");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, UberGraphFrame) == 0x000280, "Member 'USkillInfoGaugeMainDefHeal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, AnimChargeStart) == 0x000288, "Member 'USkillInfoGaugeMainDefHeal_C::AnimChargeStart' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, AnimChargeEnd) == 0x000290, "Member 'USkillInfoGaugeMainDefHeal_C::AnimChargeEnd' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, AnimUse) == 0x000298, "Member 'USkillInfoGaugeMainDefHeal_C::AnimUse' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, Bg1) == 0x0002A0, "Member 'USkillInfoGaugeMainDefHeal_C::Bg1' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, Empty) == 0x0002A8, "Member 'USkillInfoGaugeMainDefHeal_C::Empty' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, Gauge) == 0x0002B0, "Member 'USkillInfoGaugeMainDefHeal_C::Gauge' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, Icon) == 0x0002B8, "Member 'USkillInfoGaugeMainDefHeal_C::Icon' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, IconDisable) == 0x0002C0, "Member 'USkillInfoGaugeMainDefHeal_C::IconDisable' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, SwitchSet) == 0x0002C8, "Member 'USkillInfoGaugeMainDefHeal_C::SwitchSet' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, TxtKey) == 0x0002D0, "Member 'USkillInfoGaugeMainDefHeal_C::TxtKey' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, TxtTime) == 0x0002D8, "Member 'USkillInfoGaugeMainDefHeal_C::TxtTime' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, GaugeMat) == 0x0002E0, "Member 'USkillInfoGaugeMainDefHeal_C::GaugeMat' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeMainDefHeal_C, StartTime) == 0x0002E8, "Member 'USkillInfoGaugeMainDefHeal_C::StartTime' has a wrong offset!");

}

