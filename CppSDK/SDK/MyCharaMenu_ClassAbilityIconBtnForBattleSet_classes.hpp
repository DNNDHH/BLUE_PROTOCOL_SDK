#pragma once

 

// Package: MyCharaMenu_ClassAbilityIconBtnForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C
// 0x0098 (0x0310 - 0x0278)
class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnForEmpty;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnForPadCursorMove;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillLevelInfoForBattleSet_C*          ClassAbilityLevel;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Passive1Icon;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Passive1IconBtn;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Passive1IconForBtn;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Passive2Icon;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Passive2IconBtn;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Passive2IconForBtn;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher01;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForPassive1;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForPassive2;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForPassiveType;                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnIconClicked;                                     // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SkillId;                                           // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPassive2;                                       // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsButtonOff;                                      // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_818B[0x6];                                     // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CachedToolTipWidget;                               // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnIconClicked__DelegateSignature(int32 InClassAbilityId);
	void ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet(int32 EntryPoint);
	void Destruct();
	void BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_BtnForEmpty_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive12conBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive1IconBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetSKill(int32 InSkillId, int32 InSkillLevel);
	void SetLevel(int32 InLevel);
	void SetIconTexture(class UTexture2D* InIconTexture, bool InIsPassive2);
	void SetButtonOff(bool InIsButtonOff);
	void SetIsEmpty(bool InIsEmpty);
	void SetUnopened(ESBSkillType InSkillType, ESBSkillAbilityType InSkillAbilityType, ESBClassType InClassType, int32 InReleaseLevel);
	void CreateTooltip(bool InNoTooltip, int32 InSkillId, int32 InSkillLevel);
	void CreateUnopenedTooltip(ESBSkillType InSkillType, ESBSkillAbilityType InSkillAbilityType, ESBClassType InClassType, int32 InReleaseLevel);
	void SetBtnForPadCursorMoveVisible(bool InIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_ClassAbilityIconBtnForBattleSet_C">();
	}
	static class UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C>();
	}
};
static_assert(alignof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C) == 0x000008, "Wrong alignment on UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C");
static_assert(sizeof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C) == 0x000310, "Wrong size on UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, BtnForEmpty) == 0x000280, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::BtnForEmpty' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, BtnForPadCursorMove) == 0x000288, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::BtnForPadCursorMove' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, ClassAbilityLevel) == 0x000290, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::ClassAbilityLevel' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, Passive1Icon) == 0x000298, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::Passive1Icon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, Passive1IconBtn) == 0x0002A0, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::Passive1IconBtn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, Passive1IconForBtn) == 0x0002A8, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::Passive1IconForBtn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, Passive2Icon) == 0x0002B0, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::Passive2Icon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, Passive2IconBtn) == 0x0002B8, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::Passive2IconBtn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, Passive2IconForBtn) == 0x0002C0, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::Passive2IconForBtn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, Switcher01) == 0x0002C8, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::Switcher01' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, SwitcherForPassive1) == 0x0002D0, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SwitcherForPassive1' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, SwitcherForPassive2) == 0x0002D8, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SwitcherForPassive2' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, SwitcherForPassiveType) == 0x0002E0, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SwitcherForPassiveType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, OnIconClicked) == 0x0002E8, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::OnIconClicked' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, SkillId) == 0x0002F8, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SkillId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, SkillLevel) == 0x0002FC, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SkillLevel' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, bIsPassive2) == 0x000300, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::bIsPassive2' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, bIsButtonOff) == 0x000301, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::bIsButtonOff' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C, CachedToolTipWidget) == 0x000308, "Member 'UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::CachedToolTipWidget' has a wrong offset!");

}

