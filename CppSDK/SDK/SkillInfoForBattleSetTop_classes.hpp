#pragma once

 

// Package: SkillInfoForBattleSetTop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C
// 0x0140 (0x03B8 - 0x0278)
class USkillInfoForBattleSetTop_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimSwitchSkillPalette;                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USkillInfoIconForBattleImagine_C*       BattleImagine1;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForBattleImagine_C*       BattleImagine2;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBForBattleImagine;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBForRegularSkill;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBForSkillInfoGrp;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBForTacticalSkillGrp1;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBForTacticalSkillGrp2;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_BattleImagineInfo;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_RegularSkillInfo;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_TacticalSkillInfo;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_ULTSkillInfo;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    InfoTitleTxt;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForMainSkill_C*           MainSkill;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnSkillPaletteSwitchBtn_C*            SkillPaletteGrpSwitchBtn;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForSubSkill_C*            SubSkill;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill1;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill2;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill3;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill4;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill5;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill6;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill7;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill8;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerMostFront;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconULTSkill_C*               ULTSkill;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTacticalSkillIconPressed;                        // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBattleImagineIconPresssed;                       // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsStorageMode;                                    // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_665B[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       TempCanvasPanelSlot;                               // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SkillPaletteFrontPosition;                         // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SkillPaletteBackPosition;                          // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkillInfoIconForTacticalSkill_C*> TacticalSkillGrpArray1;                            // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USkillInfoIconForTacticalSkill_C*> TacticalSkillGrpArray2;                            // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void OnTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel);
	void OnBattleImagineIconPresssed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
	void ExecuteUbergraph_SkillInfoForBattleSetTop(int32 EntryPoint);
	void Destruct();
	void OnTacticalSkillIconSelected(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SetUIBlockerMostFrontEnable(bool InIsEnabled);
	void BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette);
	void BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
	void BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetupAllSkill();
	void SetupTacticalSkill();
	void SetupMainSubULTSkill();
	void SetupBattleImagine();
	void SetStorageMode(bool InIsStorageMode);
	void SetSkillPaletteGrpSwtichEnable(bool InIsEnabled);
	void StartSkillPaletteGrpSwitchAnimation(bool InSwitchToSubSkillPalette, bool InIsAnimation);
	void SwitchTacticalSkillBg(bool IsSubSkillPaletteAtFront, bool IsAnimation);
	void SetupTacticalSkillPosition(bool IsSkillPaletteGrp2AtFront);
	void SetSkillPaletteType(bool bInIsSubSkillPalette, bool bInIgnoreSwitchBtn);
	void BindTacticalSkillIconEvents(bool bInUnbindEvent);
	void SetupTacticalSkillButtonEnable(bool bInIsSkillPaletteGrp2AtFront);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoForBattleSetTop_C">();
	}
	static class USkillInfoForBattleSetTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoForBattleSetTop_C>();
	}
};
static_assert(alignof(USkillInfoForBattleSetTop_C) == 0x000008, "Wrong alignment on USkillInfoForBattleSetTop_C");
static_assert(sizeof(USkillInfoForBattleSetTop_C) == 0x0003B8, "Wrong size on USkillInfoForBattleSetTop_C");
static_assert(offsetof(USkillInfoForBattleSetTop_C, UberGraphFrame) == 0x000278, "Member 'USkillInfoForBattleSetTop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, AnimSwitchSkillPalette) == 0x000280, "Member 'USkillInfoForBattleSetTop_C::AnimSwitchSkillPalette' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, BattleImagine1) == 0x000288, "Member 'USkillInfoForBattleSetTop_C::BattleImagine1' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, BattleImagine2) == 0x000290, "Member 'USkillInfoForBattleSetTop_C::BattleImagine2' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, Bg01) == 0x000298, "Member 'USkillInfoForBattleSetTop_C::Bg01' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, HBForBattleImagine) == 0x0002A0, "Member 'USkillInfoForBattleSetTop_C::HBForBattleImagine' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, HBForRegularSkill) == 0x0002A8, "Member 'USkillInfoForBattleSetTop_C::HBForRegularSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, HBForSkillInfoGrp) == 0x0002B0, "Member 'USkillInfoForBattleSetTop_C::HBForSkillInfoGrp' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, HBForTacticalSkillGrp1) == 0x0002B8, "Member 'USkillInfoForBattleSetTop_C::HBForTacticalSkillGrp1' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, HBForTacticalSkillGrp2) == 0x0002C0, "Member 'USkillInfoForBattleSetTop_C::HBForTacticalSkillGrp2' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, HLine_BattleImagineInfo) == 0x0002C8, "Member 'USkillInfoForBattleSetTop_C::HLine_BattleImagineInfo' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, HLine_RegularSkillInfo) == 0x0002D0, "Member 'USkillInfoForBattleSetTop_C::HLine_RegularSkillInfo' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, HLine_TacticalSkillInfo) == 0x0002D8, "Member 'USkillInfoForBattleSetTop_C::HLine_TacticalSkillInfo' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, HLine_ULTSkillInfo) == 0x0002E0, "Member 'USkillInfoForBattleSetTop_C::HLine_ULTSkillInfo' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, InfoTitleTxt) == 0x0002E8, "Member 'USkillInfoForBattleSetTop_C::InfoTitleTxt' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, MainSkill) == 0x0002F0, "Member 'USkillInfoForBattleSetTop_C::MainSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, SkillPaletteGrpSwitchBtn) == 0x0002F8, "Member 'USkillInfoForBattleSetTop_C::SkillPaletteGrpSwitchBtn' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, SubSkill) == 0x000300, "Member 'USkillInfoForBattleSetTop_C::SubSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, TacticalSkill1) == 0x000308, "Member 'USkillInfoForBattleSetTop_C::TacticalSkill1' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, TacticalSkill2) == 0x000310, "Member 'USkillInfoForBattleSetTop_C::TacticalSkill2' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, TacticalSkill3) == 0x000318, "Member 'USkillInfoForBattleSetTop_C::TacticalSkill3' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, TacticalSkill4) == 0x000320, "Member 'USkillInfoForBattleSetTop_C::TacticalSkill4' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, TacticalSkill5) == 0x000328, "Member 'USkillInfoForBattleSetTop_C::TacticalSkill5' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, TacticalSkill6) == 0x000330, "Member 'USkillInfoForBattleSetTop_C::TacticalSkill6' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, TacticalSkill7) == 0x000338, "Member 'USkillInfoForBattleSetTop_C::TacticalSkill7' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, TacticalSkill8) == 0x000340, "Member 'USkillInfoForBattleSetTop_C::TacticalSkill8' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, UIBlockerMostFront) == 0x000348, "Member 'USkillInfoForBattleSetTop_C::UIBlockerMostFront' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, ULTSkill) == 0x000350, "Member 'USkillInfoForBattleSetTop_C::ULTSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, OnTacticalSkillIconPressed) == 0x000358, "Member 'USkillInfoForBattleSetTop_C::OnTacticalSkillIconPressed' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, OnBattleImagineIconPresssed) == 0x000368, "Member 'USkillInfoForBattleSetTop_C::OnBattleImagineIconPresssed' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, bIsStorageMode) == 0x000378, "Member 'USkillInfoForBattleSetTop_C::bIsStorageMode' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, TempCanvasPanelSlot) == 0x000380, "Member 'USkillInfoForBattleSetTop_C::TempCanvasPanelSlot' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, SkillPaletteFrontPosition) == 0x000388, "Member 'USkillInfoForBattleSetTop_C::SkillPaletteFrontPosition' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, SkillPaletteBackPosition) == 0x000390, "Member 'USkillInfoForBattleSetTop_C::SkillPaletteBackPosition' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, TacticalSkillGrpArray1) == 0x000398, "Member 'USkillInfoForBattleSetTop_C::TacticalSkillGrpArray1' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleSetTop_C, TacticalSkillGrpArray2) == 0x0003A8, "Member 'USkillInfoForBattleSetTop_C::TacticalSkillGrpArray2' has a wrong offset!");

}

