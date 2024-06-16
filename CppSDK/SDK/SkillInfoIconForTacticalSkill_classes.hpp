#pragma once

 

// Package: SkillInfoIconForTacticalSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C
// 0x0068 (0x02E0 - 0x0278)
class USkillInfoIconForTacticalSkill_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimFadeUI;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            BtnForPadCursorMove;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButtonForTacticalSkill;                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SkillAbilityTypeTxt;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       TacticalSkill;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillLevelInfoForBattleSet_C*          TacticalSkillLevel;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            CachedToolTipWidget;                               // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          SkillActionPosition;                               // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_81F4[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkillId;                                           // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81F5[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnTacticalSkillIconPressed;                        // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel);
	void ExecuteUbergraph_SkillInfoIconForTacticalSkill(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForTacticalSkill1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void CreateTooltip(bool InIsNotUseTooltip);
	void SetSkillInfo(int32 InSkillId, int32 InSkillLevel, bool InIsInformationHidden, bool InIsSkillMastery);
	void SetLevel(int32 InLevel, int32 InSkillId);
	void SetSkillButtonOffBase(bool InIsButtonOff);
	void SetIsTacticalSkillEmpty(ESkillActionPosition InSAP, bool InIsEmpty);
	void SetTacticalSkillButtonOff();
	void UpdateTacticalSkillIcon(ESkillActionPosition InSAP, int32 InSkillId, bool InIsMastery);
	void InitSkillEmptyColor(ESkillActionPosition InSAP);
	void InitSkillStopUpdate(ESkillActionPosition InSAP);
	void SetTacticalSkillAbillityType(ESBSkillAbilityType InSkillAbilityType);
	void SwitchSkillBg(bool bBehind, bool bAnim);
	void SetBtnForPadCursorMoveVisible(bool InIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoIconForTacticalSkill_C">();
	}
	static class USkillInfoIconForTacticalSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoIconForTacticalSkill_C>();
	}
};
static_assert(alignof(USkillInfoIconForTacticalSkill_C) == 0x000008, "Wrong alignment on USkillInfoIconForTacticalSkill_C");
static_assert(sizeof(USkillInfoIconForTacticalSkill_C) == 0x0002E0, "Wrong size on USkillInfoIconForTacticalSkill_C");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, UberGraphFrame) == 0x000278, "Member 'USkillInfoIconForTacticalSkill_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, AnimFadeUI) == 0x000280, "Member 'USkillInfoIconForTacticalSkill_C::AnimFadeUI' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, BtnForPadCursorMove) == 0x000288, "Member 'USkillInfoIconForTacticalSkill_C::BtnForPadCursorMove' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, CanvasPanel_1) == 0x000290, "Member 'USkillInfoIconForTacticalSkill_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, SBButtonForTacticalSkill) == 0x000298, "Member 'USkillInfoIconForTacticalSkill_C::SBButtonForTacticalSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, SkillAbilityTypeTxt) == 0x0002A0, "Member 'USkillInfoIconForTacticalSkill_C::SkillAbilityTypeTxt' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, TacticalSkill) == 0x0002A8, "Member 'USkillInfoIconForTacticalSkill_C::TacticalSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, TacticalSkillLevel) == 0x0002B0, "Member 'USkillInfoIconForTacticalSkill_C::TacticalSkillLevel' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, CachedToolTipWidget) == 0x0002B8, "Member 'USkillInfoIconForTacticalSkill_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, SkillActionPosition) == 0x0002C0, "Member 'USkillInfoIconForTacticalSkill_C::SkillActionPosition' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, SkillId) == 0x0002C4, "Member 'USkillInfoIconForTacticalSkill_C::SkillId' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, SkillLevel) == 0x0002C8, "Member 'USkillInfoIconForTacticalSkill_C::SkillLevel' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForTacticalSkill_C, OnTacticalSkillIconPressed) == 0x0002D0, "Member 'USkillInfoIconForTacticalSkill_C::OnTacticalSkillIconPressed' has a wrong offset!");

}

