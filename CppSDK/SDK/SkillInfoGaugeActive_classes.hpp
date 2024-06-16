#pragma once

 

// Package: SkillInfoGaugeActive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoGaugeActive.SkillInfoGaugeActive_C
// 0x01A8 (0x0440 - 0x0298)
class USkillInfoGaugeActive_C final : public USBSkillInfoGaugeActiveWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimChangeSize;                                    // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimChangeBG;                                      // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimSampleBerserkMode;                             // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimChargeStart;                                   // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimChargeEnd;                                     // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimUse;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BerserkModeImage;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg1B;                                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_1;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BuckCollapsed;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Berserk;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ElementIcon;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Empty;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EmptyB;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBg;                                            // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconDisable;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconDisableB;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KeyForEmpty;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UP020_Strengthen_C*                     P020_Strengthen;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtKey;                                            // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTime;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTime;                                         // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_706B[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             IconTexture;                                       // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             NewIconTexture;                                    // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillElementIconType                       IconElementType;                                   // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_706C[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ESBSkillIconBgType, class UTexture2D*>   IconBgImageList;                                   // 0x0390(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<ESBSkillElementIconType, class UTexture2D*> ElementIconList;                                   // 0x03E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBPlayerSkillActionComponent*          SkillActionComp;                                   // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsKeyVisibilityPermanent;                          // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SkillInfoGaugeActive(int32 EntryPoint);
	void OnIconDisableChange(bool bVisible);
	void OnStopBerserkMode();
	void OnStartBerserkMode();
	void OnAttackUpChange(bool InAttackUp, class USBPlayerSkillActionComponent* Param_SkillActionComp);
	void OnSetKeyGuideVisible(bool Param_IsVisible);
	void OnUpdateIconTexture(class UTexture2D* SkillIconSmall);
	void Construct();
	void SetGaugeValue(float InValue, float InRecastTime);
	void SetText(const class FText& InText);
	void PlayAnimUse(bool bInit);
	void PlayAnimChargeEnd();
	void SetEnabled(bool bEnabled);
	void UpdateIconTexture(class UTexture2D* Texture, int32 SkillId, bool ForceUpdate, bool IgnoreEquipActiveAbilityCheckForIconBgType);
	void PlayAnimChargeStart();
	void SetKeyGuideVisible(bool Param_IsVisible);
	void SetIconOpacity(bool IsEquipped);
	void GetIconBgType(int32 InSkillId, class ASBPlayerCharacter* InPlayerCharacter, bool bInIgnoreEquipActiveAbilityCheck, ESBSkillIconBgType* BgType);
	void UpdateAttackUp(bool InAttackUp, class USBPlayerSkillActionComponent* Param_SkillActionComp);
	void GetIconElementType(int32 InSkillId, class ASBPlayerCharacter* InPlayerCharacter, ESBSkillElementIconType* ElementType);
	void CheckBerserkModeSkill(bool* NewParam);
	void SetIsEmpty(bool InIsEmpty);
	void SetEmptyColor(const struct FLinearColor& InColor);
	void SetKeyVisibilityPermanent(bool InIsVisibilityPermanent);
	void SwitchSkillBg(bool bHud, bool bBehind, bool bAnim);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoGaugeActive_C">();
	}
	static class USkillInfoGaugeActive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoGaugeActive_C>();
	}
};
static_assert(alignof(USkillInfoGaugeActive_C) == 0x000008, "Wrong alignment on USkillInfoGaugeActive_C");
static_assert(sizeof(USkillInfoGaugeActive_C) == 0x000440, "Wrong size on USkillInfoGaugeActive_C");
static_assert(offsetof(USkillInfoGaugeActive_C, UberGraphFrame) == 0x000298, "Member 'USkillInfoGaugeActive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, AnimChangeSize) == 0x0002A0, "Member 'USkillInfoGaugeActive_C::AnimChangeSize' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, AnimChangeBG) == 0x0002A8, "Member 'USkillInfoGaugeActive_C::AnimChangeBG' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, AnimSampleBerserkMode) == 0x0002B0, "Member 'USkillInfoGaugeActive_C::AnimSampleBerserkMode' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, AnimChargeStart) == 0x0002B8, "Member 'USkillInfoGaugeActive_C::AnimChargeStart' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, AnimChargeEnd) == 0x0002C0, "Member 'USkillInfoGaugeActive_C::AnimChargeEnd' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, AnimUse) == 0x0002C8, "Member 'USkillInfoGaugeActive_C::AnimUse' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, BerserkModeImage) == 0x0002D0, "Member 'USkillInfoGaugeActive_C::BerserkModeImage' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, Bg1) == 0x0002D8, "Member 'USkillInfoGaugeActive_C::Bg1' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, Bg1B) == 0x0002E0, "Member 'USkillInfoGaugeActive_C::Bg1B' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, Border_1) == 0x0002E8, "Member 'USkillInfoGaugeActive_C::Border_1' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, BuckCollapsed) == 0x0002F0, "Member 'USkillInfoGaugeActive_C::BuckCollapsed' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, CanvasPanel_0) == 0x0002F8, "Member 'USkillInfoGaugeActive_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, CanvasPanel_Berserk) == 0x000300, "Member 'USkillInfoGaugeActive_C::CanvasPanel_Berserk' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, ElementIcon) == 0x000308, "Member 'USkillInfoGaugeActive_C::ElementIcon' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, Empty) == 0x000310, "Member 'USkillInfoGaugeActive_C::Empty' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, EmptyB) == 0x000318, "Member 'USkillInfoGaugeActive_C::EmptyB' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, Gauge) == 0x000320, "Member 'USkillInfoGaugeActive_C::Gauge' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, Icon) == 0x000328, "Member 'USkillInfoGaugeActive_C::Icon' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, IconBg) == 0x000330, "Member 'USkillInfoGaugeActive_C::IconBg' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, IconDisable) == 0x000338, "Member 'USkillInfoGaugeActive_C::IconDisable' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, IconDisableB) == 0x000340, "Member 'USkillInfoGaugeActive_C::IconDisableB' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, KeyForEmpty) == 0x000348, "Member 'USkillInfoGaugeActive_C::KeyForEmpty' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, P020_Strengthen) == 0x000350, "Member 'USkillInfoGaugeActive_C::P020_Strengthen' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, TxtKey) == 0x000358, "Member 'USkillInfoGaugeActive_C::TxtKey' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, TxtTime) == 0x000360, "Member 'USkillInfoGaugeActive_C::TxtTime' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, GaugeMat) == 0x000368, "Member 'USkillInfoGaugeActive_C::GaugeMat' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, StartTime) == 0x000370, "Member 'USkillInfoGaugeActive_C::StartTime' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, IconTexture) == 0x000378, "Member 'USkillInfoGaugeActive_C::IconTexture' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, NewIconTexture) == 0x000380, "Member 'USkillInfoGaugeActive_C::NewIconTexture' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, IconElementType) == 0x000388, "Member 'USkillInfoGaugeActive_C::IconElementType' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, IconBgImageList) == 0x000390, "Member 'USkillInfoGaugeActive_C::IconBgImageList' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, ElementIconList) == 0x0003E0, "Member 'USkillInfoGaugeActive_C::ElementIconList' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, SkillActionComp) == 0x000430, "Member 'USkillInfoGaugeActive_C::SkillActionComp' has a wrong offset!");
static_assert(offsetof(USkillInfoGaugeActive_C, IsKeyVisibilityPermanent) == 0x000438, "Member 'USkillInfoGaugeActive_C::IsKeyVisibilityPermanent' has a wrong offset!");

}

