#pragma once

 

// Package: SkillInfoForBattleCordeEdit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C
// 0x0100 (0x0378 - 0x0278)
class USkillInfoForBattleCordeEdit_C final : public UUserWidget
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
	class USBRuntimeTextBlock*                    InfoTitleTxt;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForMainSkill_C*           MainSkill;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnSkillPaletteSwitchBtn_C*            SkillPaletteGrpSwitchBtn;                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForSubSkill_C*            SubSkill;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill1;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill2;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill3;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill4;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill5;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill6;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill7;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconForTacticalSkill_C*       TacticalSkill8;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerMostFront;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoIconULTSkill_C*               ULTSkill;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsStorageMode;                                    // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsTopInfoMode;                                    // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_826F[0x2];                                     // 0x033A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              SkillPaletteFrontPosition;                         // 0x033C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SkillPaletteBackPosition;                          // 0x0344(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8270[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkillInfoIconForTacticalSkill_C*> TacticalSkillGrpArray1;                            // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USkillInfoIconForTacticalSkill_C*> TacticalSkillGrpArray2;                            // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bIsSubPaletteReleased;                             // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SkillInfoForBattleCordeEdit(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void SetUIBlockerMostFrontEnable(bool InIsEnabled);
	void BndEvt__SkillInfoForBattleCordeEdit_SkillPaletteFrontBackSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette);
	void PreConstruct(bool IsDesignTime);
	void Setup(TArray<int32>& InTacticalSkillIds, TArray<int32>& InRegularSkillIds, int32 InULTSkillId, TArray<class FString>& InBattleImagineUniqueIds, bool InSetupByCurrEquip, ESBClassType InClassType);
	void SetupTacticalSkill(TArray<int32>& InTacticalSkillIds, bool InSetupByCurrEquip, bool InIsSubPaletteReleased);
	void SetupRegularAndULTSkill(TArray<int32>& InRegularSkillIds, int32 InULTSkillId, bool InSetupByCurrEquip);
	void SetupBattleImagine(TArray<class FString>& InBattleImagineUniqueIds, bool InSetupByCurrEquip, ESBClassType InClassType);
	void SetStorageMode(bool InIsStorageMode);
	void SetSkillPaletteGrpSwtichEnable(bool InIsEnabled);
	void StartSkillPaletteGrpSwitchAnimation(bool InSwitchToSubSkillPalette, bool InIsAnimation);
	void SwitchTacticalSkillBg(bool IsSkillPaletteGrp2AtFront, bool IsAnimation);
	void SetupTacticalSkillPosition(bool IsSkillPaletteGrp2AtFront);
	void SetSkillPaletteType(bool bInIsSubSkillPalette, bool bInIgnoreSwitchBtn);
	void IsSubPaletteReleased(bool* OutIsReleased);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoForBattleCordeEdit_C">();
	}
	static class USkillInfoForBattleCordeEdit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoForBattleCordeEdit_C>();
	}
};
static_assert(alignof(USkillInfoForBattleCordeEdit_C) == 0x000008, "Wrong alignment on USkillInfoForBattleCordeEdit_C");
static_assert(sizeof(USkillInfoForBattleCordeEdit_C) == 0x000378, "Wrong size on USkillInfoForBattleCordeEdit_C");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, UberGraphFrame) == 0x000278, "Member 'USkillInfoForBattleCordeEdit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, AnimSwitchSkillPalette) == 0x000280, "Member 'USkillInfoForBattleCordeEdit_C::AnimSwitchSkillPalette' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, BattleImagine1) == 0x000288, "Member 'USkillInfoForBattleCordeEdit_C::BattleImagine1' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, BattleImagine2) == 0x000290, "Member 'USkillInfoForBattleCordeEdit_C::BattleImagine2' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, Bg01) == 0x000298, "Member 'USkillInfoForBattleCordeEdit_C::Bg01' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, HBForBattleImagine) == 0x0002A0, "Member 'USkillInfoForBattleCordeEdit_C::HBForBattleImagine' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, HBForRegularSkill) == 0x0002A8, "Member 'USkillInfoForBattleCordeEdit_C::HBForRegularSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, HBForSkillInfoGrp) == 0x0002B0, "Member 'USkillInfoForBattleCordeEdit_C::HBForSkillInfoGrp' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, HBForTacticalSkillGrp1) == 0x0002B8, "Member 'USkillInfoForBattleCordeEdit_C::HBForTacticalSkillGrp1' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, HBForTacticalSkillGrp2) == 0x0002C0, "Member 'USkillInfoForBattleCordeEdit_C::HBForTacticalSkillGrp2' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, InfoTitleTxt) == 0x0002C8, "Member 'USkillInfoForBattleCordeEdit_C::InfoTitleTxt' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, MainSkill) == 0x0002D0, "Member 'USkillInfoForBattleCordeEdit_C::MainSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, SkillPaletteGrpSwitchBtn) == 0x0002D8, "Member 'USkillInfoForBattleCordeEdit_C::SkillPaletteGrpSwitchBtn' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, SubSkill) == 0x0002E0, "Member 'USkillInfoForBattleCordeEdit_C::SubSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, TacticalSkill1) == 0x0002E8, "Member 'USkillInfoForBattleCordeEdit_C::TacticalSkill1' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, TacticalSkill2) == 0x0002F0, "Member 'USkillInfoForBattleCordeEdit_C::TacticalSkill2' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, TacticalSkill3) == 0x0002F8, "Member 'USkillInfoForBattleCordeEdit_C::TacticalSkill3' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, TacticalSkill4) == 0x000300, "Member 'USkillInfoForBattleCordeEdit_C::TacticalSkill4' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, TacticalSkill5) == 0x000308, "Member 'USkillInfoForBattleCordeEdit_C::TacticalSkill5' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, TacticalSkill6) == 0x000310, "Member 'USkillInfoForBattleCordeEdit_C::TacticalSkill6' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, TacticalSkill7) == 0x000318, "Member 'USkillInfoForBattleCordeEdit_C::TacticalSkill7' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, TacticalSkill8) == 0x000320, "Member 'USkillInfoForBattleCordeEdit_C::TacticalSkill8' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, UIBlockerMostFront) == 0x000328, "Member 'USkillInfoForBattleCordeEdit_C::UIBlockerMostFront' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, ULTSkill) == 0x000330, "Member 'USkillInfoForBattleCordeEdit_C::ULTSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, bIsStorageMode) == 0x000338, "Member 'USkillInfoForBattleCordeEdit_C::bIsStorageMode' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, bIsTopInfoMode) == 0x000339, "Member 'USkillInfoForBattleCordeEdit_C::bIsTopInfoMode' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, SkillPaletteFrontPosition) == 0x00033C, "Member 'USkillInfoForBattleCordeEdit_C::SkillPaletteFrontPosition' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, SkillPaletteBackPosition) == 0x000344, "Member 'USkillInfoForBattleCordeEdit_C::SkillPaletteBackPosition' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, TacticalSkillGrpArray1) == 0x000350, "Member 'USkillInfoForBattleCordeEdit_C::TacticalSkillGrpArray1' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, TacticalSkillGrpArray2) == 0x000360, "Member 'USkillInfoForBattleCordeEdit_C::TacticalSkillGrpArray2' has a wrong offset!");
static_assert(offsetof(USkillInfoForBattleCordeEdit_C, bIsSubPaletteReleased) == 0x000370, "Member 'USkillInfoForBattleCordeEdit_C::bIsSubPaletteReleased' has a wrong offset!");

}

