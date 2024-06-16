#pragma once

 

// Package: MyCharacterMenu_CostumeAndMountSwitcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C
// 0x0140 (0x03F0 - 0x02B0)
class UMyCharacterMenu_CostumeAndMountSwitcher_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButtonFullScreen_C*                  ButtonFullScreen_BattleSet;                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_SubMenuLine_C*             CommandMenu_SubMenuLine;                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_ArmamentChange_C*          MyCharaMenu_ArmamentChange;                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_Costume_C*                 MyCharaMenu_Costume;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SubMenuGrp;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      TabButtons;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_BattleSet;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsFirstOpen;                                       // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5907[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSubMenuChanged;                                  // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAchievementChangeButtonClicked;                  // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAcquiredAchievementLoaded;                       // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectAchievementSaved;                          // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TmpClickedTabButtonId;                             // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpCurrTabButtonId;                                // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSetPlayerCaptureStudioHidden;                    // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 OpenBookMarkType;                                  // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         BookmarkTypeList;                                  // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnPlayerAvatarRotateActive;                        // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget*                                TempActiveWidget;                                  // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnResetPlayerAvatarRotate;                         // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPlayerCharacterEquippedCostumeChanged;           // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnIsCmnBackBtnVisible;                             // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEquippedWeaponSpawned;                           // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetCostumeOnFlag;                                // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ChangeTabFirst;                                    // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5908[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                TmpSwitcherChild;                                  // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSubMenuChanged__DelegateSignature(int32 Param_Index);
	void OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList);
	void OnAcquiredAchievementLoaded__DelegateSignature(bool InResult);
	void OnSelectAchievementSaved__DelegateSignature(bool InResult);
	void OnSetPlayerCaptureStudioHidden__DelegateSignature(bool IsHidden);
	void OnPlayerAvatarRotateActive__DelegateSignature(bool InIsActive);
	void OnPlayerCharacterEquippedCostumeChanged__DelegateSignature();
	void OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible);
	void OnEquippedWeaponSpawned__DelegateSignature();
	void OnResetPlayerAvatarRotate__DelegateSignature();
	void OnSetCostumeOnFlag__DelegateSignature(bool InIsCostumeOn);
	void ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher(int32 EntryPoint);
	void OnAdventureBoardBtn_Event();
	void Free_BattleSet_FullSrnBtn();
	void OnClickedDetailedStatus();
	void EscDetailedStatus();
	void Init_BattleSet_FullSrnBtn();
	void BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void OnClicked_BattleSet_DetailedStatus();
	void UpdateBookmarkStatusButton();
	void BookmarkUpdateRequest();
	void ChangeTab(int32 Param_TmpClickedTabButtonId);
	void OnSetPlayerCaptureStudioHidden_____(bool IsHidden);
	void Init(bool Param_IsFirstOpen, const class FString& Param_OpenBookMarkType);
	void BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 ButtonId);
	void SetTab(const class FString& ItemToFind);
	void Construct();
	void Destruct();
	void Update_Sub_Button_Excramation_Icon();
	void IsBattleSetButtonEnable(bool* OutIsEnable);
	void InitCostumeChangeMenu(class UMyCharaMenu_Costume_C* InCostumeChangeMenu);
	void GetWidgetSwitcherActiveWidget(class UWidget** OutWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharacterMenu_CostumeAndMountSwitcher_C">();
	}
	static class UMyCharacterMenu_CostumeAndMountSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharacterMenu_CostumeAndMountSwitcher_C>();
	}
};
static_assert(alignof(UMyCharacterMenu_CostumeAndMountSwitcher_C) == 0x000008, "Wrong alignment on UMyCharacterMenu_CostumeAndMountSwitcher_C");
static_assert(sizeof(UMyCharacterMenu_CostumeAndMountSwitcher_C) == 0x0003F0, "Wrong size on UMyCharacterMenu_CostumeAndMountSwitcher_C");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, ButtonFullScreen_BattleSet) == 0x0002B8, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::ButtonFullScreen_BattleSet' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, CommandMenu_SubMenuLine) == 0x0002C0, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::CommandMenu_SubMenuLine' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, MyCharaMenu_ArmamentChange) == 0x0002C8, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::MyCharaMenu_ArmamentChange' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, MyCharaMenu_Costume) == 0x0002D0, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::MyCharaMenu_Costume' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, SubMenuGrp) == 0x0002D8, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::SubMenuGrp' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, TabButtons) == 0x0002E0, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::TabButtons' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, UIBlocker_BattleSet) == 0x0002E8, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::UIBlocker_BattleSet' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, WidgetSwitcher_0) == 0x0002F0, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, IsFirstOpen) == 0x0002F8, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::IsFirstOpen' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OnSubMenuChanged) == 0x000300, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSubMenuChanged' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OnAchievementChangeButtonClicked) == 0x000310, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OnAchievementChangeButtonClicked' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OnAcquiredAchievementLoaded) == 0x000320, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OnAcquiredAchievementLoaded' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OnSelectAchievementSaved) == 0x000330, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSelectAchievementSaved' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, TmpClickedTabButtonId) == 0x000340, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::TmpClickedTabButtonId' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, TmpCurrTabButtonId) == 0x000344, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::TmpCurrTabButtonId' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OnSetPlayerCaptureStudioHidden) == 0x000348, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSetPlayerCaptureStudioHidden' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OpenBookMarkType) == 0x000358, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OpenBookMarkType' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, BookmarkTypeList) == 0x000368, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::BookmarkTypeList' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OnPlayerAvatarRotateActive) == 0x000378, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OnPlayerAvatarRotateActive' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, TempActiveWidget) == 0x000388, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::TempActiveWidget' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OnResetPlayerAvatarRotate) == 0x000390, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OnResetPlayerAvatarRotate' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OnPlayerCharacterEquippedCostumeChanged) == 0x0003A0, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OnPlayerCharacterEquippedCostumeChanged' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OnIsCmnBackBtnVisible) == 0x0003B0, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OnIsCmnBackBtnVisible' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OnEquippedWeaponSpawned) == 0x0003C0, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OnEquippedWeaponSpawned' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, OnSetCostumeOnFlag) == 0x0003D0, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSetCostumeOnFlag' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, ChangeTabFirst) == 0x0003E0, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::ChangeTabFirst' has a wrong offset!");
static_assert(offsetof(UMyCharacterMenu_CostumeAndMountSwitcher_C, TmpSwitcherChild) == 0x0003E8, "Member 'UMyCharacterMenu_CostumeAndMountSwitcher_C::TmpSwitcherChild' has a wrong offset!");

}

