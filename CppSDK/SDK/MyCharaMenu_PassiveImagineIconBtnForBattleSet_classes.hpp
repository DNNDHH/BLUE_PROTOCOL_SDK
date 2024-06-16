#pragma once

 

// Package: MyCharaMenu_PassiveImagineIconBtnForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C
// 0x0DF8 (0x1070 - 0x0278)
class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnAlertIcon_C*                        AlertIcon;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BlankIconBtn;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnForPadCursorMove;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconEmpty;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULevelInfo1ForBattleSet_C*              ImagineLevel;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIconBtn;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher01;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForImagineIcon;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBPlayerPassiveImagineSlotType               ImagineSlotType;                                   // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_81A3[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           ImagineOwnItemInfo;                                // 0x02E0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsButtonOff;                                      // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81A4[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           BtnStyle1;                                         // 0x0400(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           BtnStyle2;                                         // 0x0678(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           BtnStyle3;                                         // 0x08F0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           BtnStyle4;                                         // 0x0B68(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           BtnStyle5;                                         // 0x0DE0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBClassType                                  ClassType;                                         // 0x1058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bForceLevelSyncOff;                                // 0x1059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsDhcBattleTopMenuMode;                           // 0x105A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81A5[0x5];                                     // 0x105B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CachedToolTipWidget;                               // 0x1060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsBtnForPadCursorMoveVisible;                     // 0x1068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81A6[0x3];                                     // 0x1069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StackBMax;                                         // 0x106C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32 InPassiveImagineItemId);
	void ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet(int32 EntryPoint);
	void Destruct();
	void BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_BlankIconBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetPassiveImagineSlotType(ESBPlayerPassiveImagineSlotType InSlotType);
	void GetPassiveImagineSlotType(ESBPlayerPassiveImagineSlotType* OutSlotType);
	void SetPassiveImagineByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType);
	void SetIconEmpty(bool InIsEmpty);
	void SetButtonOff();
	void SetAlertIconVisibility(bool InIsVisible);
	void SetPassiveImagineBlankIconStyle(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType);
	void SetForceLevelSyncOff(bool bInForceLevelSyncOff);
	void SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode);
	void SetBtnForPadCursorMoveVisible(bool InIsVisible);
	void CreateTooltipForBtnPadCursorMove(bool InNoTooltip, const struct FOwnItemInfo& InOwnItemInfo);
	void CreateTooltipForBtnPadCursorMoveDhcBattle(bool InNoTooltip, int32 InClassLevel, const struct FSBDhcBattlePlayerEquipImagineInfo& InPassiveImagineInfo);
	void SetIconTooltipEnable(bool InIsEnable);
	void SetPassiveImagineForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InImagineInfo, const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_PassiveImagineIconBtnForBattleSet_C">();
	}
	static class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C>();
	}
};
static_assert(alignof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C) == 0x000008, "Wrong alignment on UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C");
static_assert(sizeof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C) == 0x001070, "Wrong size on UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, AlertIcon) == 0x000280, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::AlertIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, BlankIconBtn) == 0x000288, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::BlankIconBtn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, BtnForPadCursorMove) == 0x000290, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::BtnForPadCursorMove' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, CommonIcon) == 0x000298, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, IconEmpty) == 0x0002A0, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::IconEmpty' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, ImagineLevel) == 0x0002A8, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::ImagineLevel' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, ItemIconBtn) == 0x0002B0, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::ItemIconBtn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, Switcher01) == 0x0002B8, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::Switcher01' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, SwitcherForImagineIcon) == 0x0002C0, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SwitcherForImagineIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, OnClicked) == 0x0002C8, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, ImagineSlotType) == 0x0002D8, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::ImagineSlotType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, ImagineOwnItemInfo) == 0x0002E0, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::ImagineOwnItemInfo' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, bIsButtonOff) == 0x0003F8, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::bIsButtonOff' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, BtnStyle1) == 0x000400, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::BtnStyle1' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, BtnStyle2) == 0x000678, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::BtnStyle2' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, BtnStyle3) == 0x0008F0, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::BtnStyle3' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, BtnStyle4) == 0x000B68, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::BtnStyle4' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, BtnStyle5) == 0x000DE0, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::BtnStyle5' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, ClassType) == 0x001058, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::ClassType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, bForceLevelSyncOff) == 0x001059, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::bForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, bIsDhcBattleTopMenuMode) == 0x00105A, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::bIsDhcBattleTopMenuMode' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, CachedToolTipWidget) == 0x001060, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, bIsBtnForPadCursorMoveVisible) == 0x001068, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::bIsBtnForPadCursorMoveVisible' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C, StackBMax) == 0x00106C, "Member 'UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::StackBMax' has a wrong offset!");

}

