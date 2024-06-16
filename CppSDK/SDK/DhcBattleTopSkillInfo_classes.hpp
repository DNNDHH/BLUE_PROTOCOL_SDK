#pragma once

 

// Package: DhcBattleTopSkillInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C
// 0x0110 (0x0388 - 0x0278)
class UDhcBattleTopSkillInfo_C final : public UUserWidget
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
	TArray<class USkillInfoIconForTacticalSkill_C*> TacticalSkillGrpArray1;                            // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USkillInfoIconForTacticalSkill_C*> TacticalSkillGrpArray2;                            // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector2D                              SkillPaletteFrontPosition;                         // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SkillPaletteBackPosition;                          // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DhcBattleTopSkillInfo(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SetUIBlockerMostFrontEnable(bool InIsEnabled);
	void BndEvt__DhcBattleTopSkillInfo_SkillPaletteGrpSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Setup(TArray<struct FSBDhcBattlePlayerEquipImagineInfo>& InEquipBattleImagineInfo, TArray<struct FSBDhcBattlePlayerEquipArtsInfo>& InEquipArtsInfo, ESBClassType InClassType, int32 InClassLevel);
	void SetupTacticalSkill(TArray<int32>& InTacticalSkillIds, ESBClassType InClassType, int32 InClassLevel);
	void SetupRegularAndULTSkill(TArray<int32>& InRegularSkillIds, int32 InULTSkillId, int32 InClassLevel);
	void SetupBattleImagine(TArray<struct FSBDhcBattlePlayerEquipImagineInfo>& InBattleImagineInfos, ESBClassType InClassType, int32 InClassLevel);
	void SetSkillPaletteGrpSwtichEnable(bool bInIsEnabled);
	void StartSkillPaletteGrpSwitchAnimation(bool bInSwitchToSubSkillPalette, bool bInIsAnimation);
	void SwitchTacticalSkillBg(bool bInIsSubSkillPaletteAtFront, bool bInIsAnimation);
	void SetupTacticalSkillPosition(bool bInIsSkillPaletteGrp2AtFront);
	void SetSkillPaletteType(bool bInIsSubSkillPalette, bool bInIgnoreSwitchBtn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DhcBattleTopSkillInfo_C">();
	}
	static class UDhcBattleTopSkillInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDhcBattleTopSkillInfo_C>();
	}
};
static_assert(alignof(UDhcBattleTopSkillInfo_C) == 0x000008, "Wrong alignment on UDhcBattleTopSkillInfo_C");
static_assert(sizeof(UDhcBattleTopSkillInfo_C) == 0x000388, "Wrong size on UDhcBattleTopSkillInfo_C");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, UberGraphFrame) == 0x000278, "Member 'UDhcBattleTopSkillInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, AnimSwitchSkillPalette) == 0x000280, "Member 'UDhcBattleTopSkillInfo_C::AnimSwitchSkillPalette' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, BattleImagine1) == 0x000288, "Member 'UDhcBattleTopSkillInfo_C::BattleImagine1' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, BattleImagine2) == 0x000290, "Member 'UDhcBattleTopSkillInfo_C::BattleImagine2' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, Bg01) == 0x000298, "Member 'UDhcBattleTopSkillInfo_C::Bg01' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, HBForBattleImagine) == 0x0002A0, "Member 'UDhcBattleTopSkillInfo_C::HBForBattleImagine' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, HBForRegularSkill) == 0x0002A8, "Member 'UDhcBattleTopSkillInfo_C::HBForRegularSkill' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, HBForSkillInfoGrp) == 0x0002B0, "Member 'UDhcBattleTopSkillInfo_C::HBForSkillInfoGrp' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, HBForTacticalSkillGrp1) == 0x0002B8, "Member 'UDhcBattleTopSkillInfo_C::HBForTacticalSkillGrp1' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, HBForTacticalSkillGrp2) == 0x0002C0, "Member 'UDhcBattleTopSkillInfo_C::HBForTacticalSkillGrp2' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, HLine_BattleImagineInfo) == 0x0002C8, "Member 'UDhcBattleTopSkillInfo_C::HLine_BattleImagineInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, HLine_RegularSkillInfo) == 0x0002D0, "Member 'UDhcBattleTopSkillInfo_C::HLine_RegularSkillInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, HLine_TacticalSkillInfo) == 0x0002D8, "Member 'UDhcBattleTopSkillInfo_C::HLine_TacticalSkillInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, HLine_ULTSkillInfo) == 0x0002E0, "Member 'UDhcBattleTopSkillInfo_C::HLine_ULTSkillInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, InfoTitleTxt) == 0x0002E8, "Member 'UDhcBattleTopSkillInfo_C::InfoTitleTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, MainSkill) == 0x0002F0, "Member 'UDhcBattleTopSkillInfo_C::MainSkill' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, SkillPaletteGrpSwitchBtn) == 0x0002F8, "Member 'UDhcBattleTopSkillInfo_C::SkillPaletteGrpSwitchBtn' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, SubSkill) == 0x000300, "Member 'UDhcBattleTopSkillInfo_C::SubSkill' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, TacticalSkill1) == 0x000308, "Member 'UDhcBattleTopSkillInfo_C::TacticalSkill1' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, TacticalSkill2) == 0x000310, "Member 'UDhcBattleTopSkillInfo_C::TacticalSkill2' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, TacticalSkill3) == 0x000318, "Member 'UDhcBattleTopSkillInfo_C::TacticalSkill3' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, TacticalSkill4) == 0x000320, "Member 'UDhcBattleTopSkillInfo_C::TacticalSkill4' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, TacticalSkill5) == 0x000328, "Member 'UDhcBattleTopSkillInfo_C::TacticalSkill5' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, TacticalSkill6) == 0x000330, "Member 'UDhcBattleTopSkillInfo_C::TacticalSkill6' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, TacticalSkill7) == 0x000338, "Member 'UDhcBattleTopSkillInfo_C::TacticalSkill7' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, TacticalSkill8) == 0x000340, "Member 'UDhcBattleTopSkillInfo_C::TacticalSkill8' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, UIBlockerMostFront) == 0x000348, "Member 'UDhcBattleTopSkillInfo_C::UIBlockerMostFront' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, ULTSkill) == 0x000350, "Member 'UDhcBattleTopSkillInfo_C::ULTSkill' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, TacticalSkillGrpArray1) == 0x000358, "Member 'UDhcBattleTopSkillInfo_C::TacticalSkillGrpArray1' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, TacticalSkillGrpArray2) == 0x000368, "Member 'UDhcBattleTopSkillInfo_C::TacticalSkillGrpArray2' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, SkillPaletteFrontPosition) == 0x000378, "Member 'UDhcBattleTopSkillInfo_C::SkillPaletteFrontPosition' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopSkillInfo_C, SkillPaletteBackPosition) == 0x000380, "Member 'UDhcBattleTopSkillInfo_C::SkillPaletteBackPosition' has a wrong offset!");

}

