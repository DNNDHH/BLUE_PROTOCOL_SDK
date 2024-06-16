#pragma once

 

// Package: SkillInfoGaugeSpecial

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C
// 0x0068 (0x02F0 - 0x0288)
class USkillInfoGaugeSpecial_C final : public USBSkillInfoGaugeSpecialWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimChargeStart;                                   // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimChargeEnd;                                     // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimUse;                                           // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Empty;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconDisable;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtKey;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTime;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTime;                                         // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillInfoGaugeSpecial(int32 EntryPoint);
	void OnIconDisableChange(bool bVisible);
	void OnUpdateIconTexture(bool InbActive);
	void Construct();
	void Set_Gauge_Value(float InValue, float InRecastTime);
	void SetText(const class FText& InText);
	void PlayAnimUse(bool bInit);
	void PlayAnimChargeEnd();
	void SetEnabled(bool bEnabled);
	void PlayAnimChargeStart();
	void Update_Icon_Texture(bool Active);
	void SetKeyGuideVisible(bool Param_IsVisible);
	void SetIsEmpty(bool InIsEmpty);
	void SetEmptyColor(const struct FLinearColor& InColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoGaugeSpecial_C">();
	}
	static class USkillInfoGaugeSpecial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoGaugeSpecial_C>();
	}
};
static_assert(alignof(USkillInfoGaugeSpecial_C) == 0x000008, "Wrong alignment on USkillInfoGaugeSpecial_C");
static_assert(sizeof(USkillInfoGaugeSpecial_C) == 0x0002F0, "Wrong size on USkillInfoGaugeSpecial_C");
static_assert(offsetof(USkillInfoGaugeSpecial_C, UberGraphFrame) == 0x000288, "Member 'USkillInfoGaugeSpecial_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, AnimChargeStart) == 0x000290, "Member 'USkillInfoGaugeSpecial_C::AnimChargeStart' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, AnimChargeEnd) == 0x000298, "Member 'USkillInfoGaugeSpecial_C::AnimChargeEnd' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, AnimUse) == 0x0002A0, "Member 'USkillInfoGaugeSpecial_C::AnimUse' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, Bg1) == 0x0002A8, "Member 'USkillInfoGaugeSpecial_C::Bg1' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, Empty) == 0x0002B0, "Member 'USkillInfoGaugeSpecial_C::Empty' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, Gauge) == 0x0002B8, "Member 'USkillInfoGaugeSpecial_C::Gauge' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, Icon) == 0x0002C0, "Member 'USkillInfoGaugeSpecial_C::Icon' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, IconDisable) == 0x0002C8, "Member 'USkillInfoGaugeSpecial_C::IconDisable' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, TxtKey) == 0x0002D0, "Member 'USkillInfoGaugeSpecial_C::TxtKey' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, TxtTime) == 0x0002D8, "Member 'USkillInfoGaugeSpecial_C::TxtTime' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, GaugeMat) == 0x0002E0, "Member 'USkillInfoGaugeSpecial_C::GaugeMat' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeSpecial_C, StartTime) == 0x0002E8, "Member 'USkillInfoGaugeSpecial_C::StartTime' has a wrong offset!");

}

