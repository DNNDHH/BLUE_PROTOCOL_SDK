#pragma once

 

// Package: SkillInfoGaugeImagine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoGaugeImagine.SkillInfoGaugeImagine_C
// 0x0150 (0x03E8 - 0x0298)
class USkillInfoGaugeImagine_C final : public USBSkillInfoGaugeImagineWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimChargeStart;                                   // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimChargeEnd;                                     // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimUse;                                           // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ElementIcon;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Empty;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoGaugeHyouiActive_Effect_C*    HyouiActive_Effect;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBg;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconDisable;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KeyForEmpty;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LimitIcon;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PossessionIcon;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSet;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtKey;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTime;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTime;                                         // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ImagineName;                                       // 0x0334(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSetTexture;                                       // 0x033C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81C7[0x3];                                     // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class UTexture2D*>          IconBgImageList;                                   // 0x0340(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<ESBAttribute, class UTexture2D*>         ElementIconImageList;                              // 0x0390(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsKeyVisibilityPermanent;                          // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SkillInfoGaugeImagine(int32 EntryPoint);
	void OnIconDisableChange(bool bVisible);
	void SetSlotNum(int32 Num);
	void OnStopHyouiAnimation();
	void OnStartHyouiAnimation();
	void OnUpdateIconTexture(const class FString& InImagineUniqueId, const class FName& InImagineName);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetGaugeValue(float InValue, float InRecastTime);
	void SetText(const class FText& InText);
	void PlayAnimUse(bool bInit);
	void PlayAnimChargeEnd();
	void SetEnabled(bool bEnabled);
	void PlayAnimChargStart();
	void UpdateIconTexture(const class FString& InImagineUniqueId, class FName InImagineName, bool InUseImagineArtsName, const class FString& InImagineArtsName);
	void SetKeyGuideVisible(bool Param_IsVisible);
	void SetIconOpacity(bool IsEquipped);
	void SetIsEmpty(bool InIsEmpty);
	void SetEmptyColor(const struct FLinearColor& InColor);
	void SetLimitIconVisibility(bool InIsVisible);
	void SetKeyVisibilityPermanent(bool InIsVisibilityPermanent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoGaugeImagine_C">();
	}
	static class USkillInfoGaugeImagine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoGaugeImagine_C>();
	}
};
static_assert(alignof(USkillInfoGaugeImagine_C) == 0x000008, "Wrong alignment on USkillInfoGaugeImagine_C");
static_assert(sizeof(USkillInfoGaugeImagine_C) == 0x0003E8, "Wrong size on USkillInfoGaugeImagine_C");
static_assert(offsetof(USkillInfoGaugeImagine_C, UberGraphFrame) == 0x000298, "Member 'USkillInfoGaugeImagine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, AnimChargeStart) == 0x0002A0, "Member 'USkillInfoGaugeImagine_C::AnimChargeStart' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, AnimChargeEnd) == 0x0002A8, "Member 'USkillInfoGaugeImagine_C::AnimChargeEnd' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, AnimUse) == 0x0002B0, "Member 'USkillInfoGaugeImagine_C::AnimUse' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, Bg1) == 0x0002B8, "Member 'USkillInfoGaugeImagine_C::Bg1' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, ElementIcon) == 0x0002C0, "Member 'USkillInfoGaugeImagine_C::ElementIcon' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, Empty) == 0x0002C8, "Member 'USkillInfoGaugeImagine_C::Empty' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, Gauge) == 0x0002D0, "Member 'USkillInfoGaugeImagine_C::Gauge' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, HyouiActive_Effect) == 0x0002D8, "Member 'USkillInfoGaugeImagine_C::HyouiActive_Effect' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, Icon) == 0x0002E0, "Member 'USkillInfoGaugeImagine_C::Icon' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, IconBg) == 0x0002E8, "Member 'USkillInfoGaugeImagine_C::IconBg' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, IconDisable) == 0x0002F0, "Member 'USkillInfoGaugeImagine_C::IconDisable' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, KeyForEmpty) == 0x0002F8, "Member 'USkillInfoGaugeImagine_C::KeyForEmpty' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, LimitIcon) == 0x000300, "Member 'USkillInfoGaugeImagine_C::LimitIcon' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, PossessionIcon) == 0x000308, "Member 'USkillInfoGaugeImagine_C::PossessionIcon' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, SwitchSet) == 0x000310, "Member 'USkillInfoGaugeImagine_C::SwitchSet' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, TxtKey) == 0x000318, "Member 'USkillInfoGaugeImagine_C::TxtKey' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, TxtTime) == 0x000320, "Member 'USkillInfoGaugeImagine_C::TxtTime' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, GaugeMat) == 0x000328, "Member 'USkillInfoGaugeImagine_C::GaugeMat' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, StartTime) == 0x000330, "Member 'USkillInfoGaugeImagine_C::StartTime' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, ImagineName) == 0x000334, "Member 'USkillInfoGaugeImagine_C::ImagineName' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, bSetTexture) == 0x00033C, "Member 'USkillInfoGaugeImagine_C::bSetTexture' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, IconBgImageList) == 0x000340, "Member 'USkillInfoGaugeImagine_C::IconBgImageList' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, ElementIconImageList) == 0x000390, "Member 'USkillInfoGaugeImagine_C::ElementIconImageList' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeImagine_C, IsKeyVisibilityPermanent) == 0x0003E0, "Member 'USkillInfoGaugeImagine_C::IsKeyVisibilityPermanent' has a wrong offset!");

}

