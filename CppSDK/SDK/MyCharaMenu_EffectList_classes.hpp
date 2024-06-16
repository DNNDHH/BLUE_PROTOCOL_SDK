#pragma once

 

// Package: MyCharaMenu_EffectList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_EffectList.MyCharaMenu_EffectList_C
// 0x01D0 (0x0480 - 0x02B0)
class UMyCharaMenu_EffectList_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimSubMenuIn;                                     // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                BorderCtrl;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem3_C*               BtnAbility;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem3_C*               BtnActive;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem3_C*               BtnDrink;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem3_C*               BtnPioneerAbility;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem3_C*               BtnTickets;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  ButtonFullScreen_DetailedStatus;                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_DetailedStatus_C*          DetailedStatus;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_EffectDetailsList_C*       EffectDetailsList;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EffectGrp1;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LeftSideParameters_C*      LeftSideParameters;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSync_C*                  LevelSync;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoveAnim;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_Ability_C*                 MyCharaMenu_Ability;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_ActiveEffects_C*           MyCharaMenu_ActiveEffects;                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_Drink_C*                   MyCharaMenu_Drink;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_Other_C*                   MyCharaMenu_Other;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_PioneerAbility_C*          MyCharaMenu_PioneerAbility;                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             SBox_Effects;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxBtnAbility;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxBtnActive;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxBtnDrink;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxBtnPioneerAbility;                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxBtnTickets;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SubMenuGrp;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Effect;                             // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 CurrEquipWeaponUniqueId;                           // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeEquipWeaponProc;                           // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAnimFinishedMyCharaOut;                          // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          TickCheck;                                         // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C86[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSubMenuChanged;                                  // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAchievementChangeButtonClicked;                  // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAcquiredAchievementLoaded;                       // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectAchievementSaved;                          // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<ESBCharaEquipType, class FString>        TypeString;                                        // 0x0428(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCommandMenu_MenuItem3_C*               SelectedBtn;                                       // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnChangeEquipWeaponProc__DelegateSignature(bool ProcStart);
	void OnAnimFinishedMyCharaOut__DelegateSignature();
	void OnSubMenuChanged__DelegateSignature(int32 Param_Index);
	void OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList);
	void OnAcquiredAchievementLoaded__DelegateSignature(bool InResult);
	void OnSelectAchievementSaved__DelegateSignature(bool InResult);
	void ExecuteUbergraph_MyCharaMenu_EffectList(int32 EntryPoint);
	void BndEvt__MyCharaMenu_EffectList_BtnPioneerAbility_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementListRef);
	void BndEvt__BtnTickets_K2Node_ComponentBoundEvent_8_EventClicked__DelegateSignature();
	void BndEvt__BtnDrink_K2Node_ComponentBoundEvent_7_EventClicked__DelegateSignature();
	void BndEvt__BtnAbility_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature();
	void BndEvt__BtnActive_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature();
	void BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature(bool InResult);
	void BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature(bool InResult);
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_3_OnDetailedStatusClicked__DelegateSignature();
	void Destruct();
	void Init();
	void Construct();
	void BndEvt__MyCharaMenu_BasicStatus_DetailedStatusButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ClsoeDetailedStatus();
	void EscDetailedStatus();
	void Close();
	void SetupEffectParameters();
	void AddEffectItemToList(const class FText& InEffectNameText);
	void AnimMyCharaOut();
	void Correct_EquipedUIDs();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_EffectList_C">();
	}
	static class UMyCharaMenu_EffectList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_EffectList_C>();
	}
};
static_assert(alignof(UMyCharaMenu_EffectList_C) == 0x000008, "Wrong alignment on UMyCharaMenu_EffectList_C");
static_assert(sizeof(UMyCharaMenu_EffectList_C) == 0x000480, "Wrong size on UMyCharaMenu_EffectList_C");
static_assert(offsetof(UMyCharaMenu_EffectList_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_EffectList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, AnimSubMenuIn) == 0x0002B8, "Member 'UMyCharaMenu_EffectList_C::AnimSubMenuIn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, AnimOut) == 0x0002C0, "Member 'UMyCharaMenu_EffectList_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, AnimIn) == 0x0002C8, "Member 'UMyCharaMenu_EffectList_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, BorderCtrl) == 0x0002D0, "Member 'UMyCharaMenu_EffectList_C::BorderCtrl' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, BtnAbility) == 0x0002D8, "Member 'UMyCharaMenu_EffectList_C::BtnAbility' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, BtnActive) == 0x0002E0, "Member 'UMyCharaMenu_EffectList_C::BtnActive' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, BtnDrink) == 0x0002E8, "Member 'UMyCharaMenu_EffectList_C::BtnDrink' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, BtnPioneerAbility) == 0x0002F0, "Member 'UMyCharaMenu_EffectList_C::BtnPioneerAbility' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, BtnTickets) == 0x0002F8, "Member 'UMyCharaMenu_EffectList_C::BtnTickets' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, ButtonFullScreen_DetailedStatus) == 0x000300, "Member 'UMyCharaMenu_EffectList_C::ButtonFullScreen_DetailedStatus' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, DetailedStatus) == 0x000308, "Member 'UMyCharaMenu_EffectList_C::DetailedStatus' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, EffectDetailsList) == 0x000310, "Member 'UMyCharaMenu_EffectList_C::EffectDetailsList' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, EffectGrp1) == 0x000318, "Member 'UMyCharaMenu_EffectList_C::EffectGrp1' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, LeftSideParameters) == 0x000320, "Member 'UMyCharaMenu_EffectList_C::LeftSideParameters' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, LevelSync) == 0x000328, "Member 'UMyCharaMenu_EffectList_C::LevelSync' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, MoveAnim) == 0x000330, "Member 'UMyCharaMenu_EffectList_C::MoveAnim' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, MyCharaMenu_Ability) == 0x000338, "Member 'UMyCharaMenu_EffectList_C::MyCharaMenu_Ability' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, MyCharaMenu_ActiveEffects) == 0x000340, "Member 'UMyCharaMenu_EffectList_C::MyCharaMenu_ActiveEffects' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, MyCharaMenu_Drink) == 0x000348, "Member 'UMyCharaMenu_EffectList_C::MyCharaMenu_Drink' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, MyCharaMenu_Other) == 0x000350, "Member 'UMyCharaMenu_EffectList_C::MyCharaMenu_Other' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, MyCharaMenu_PioneerAbility) == 0x000358, "Member 'UMyCharaMenu_EffectList_C::MyCharaMenu_PioneerAbility' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, MyWalletWidget) == 0x000360, "Member 'UMyCharaMenu_EffectList_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, SBox_Effects) == 0x000368, "Member 'UMyCharaMenu_EffectList_C::SBox_Effects' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, SizeBoxBtnAbility) == 0x000370, "Member 'UMyCharaMenu_EffectList_C::SizeBoxBtnAbility' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, SizeBoxBtnActive) == 0x000378, "Member 'UMyCharaMenu_EffectList_C::SizeBoxBtnActive' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, SizeBoxBtnDrink) == 0x000380, "Member 'UMyCharaMenu_EffectList_C::SizeBoxBtnDrink' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, SizeBoxBtnPioneerAbility) == 0x000388, "Member 'UMyCharaMenu_EffectList_C::SizeBoxBtnPioneerAbility' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, SizeBoxBtnTickets) == 0x000390, "Member 'UMyCharaMenu_EffectList_C::SizeBoxBtnTickets' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, SubMenuGrp) == 0x000398, "Member 'UMyCharaMenu_EffectList_C::SubMenuGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, UIBlocker) == 0x0003A0, "Member 'UMyCharaMenu_EffectList_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, WidgetSwitcher_Effect) == 0x0003A8, "Member 'UMyCharaMenu_EffectList_C::WidgetSwitcher_Effect' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, CurrEquipWeaponUniqueId) == 0x0003B0, "Member 'UMyCharaMenu_EffectList_C::CurrEquipWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, OnChangeEquipWeaponProc) == 0x0003C0, "Member 'UMyCharaMenu_EffectList_C::OnChangeEquipWeaponProc' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, OnAnimFinishedMyCharaOut) == 0x0003D0, "Member 'UMyCharaMenu_EffectList_C::OnAnimFinishedMyCharaOut' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, TickCheck) == 0x0003E0, "Member 'UMyCharaMenu_EffectList_C::TickCheck' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, OnSubMenuChanged) == 0x0003E8, "Member 'UMyCharaMenu_EffectList_C::OnSubMenuChanged' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, OnAchievementChangeButtonClicked) == 0x0003F8, "Member 'UMyCharaMenu_EffectList_C::OnAchievementChangeButtonClicked' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, OnAcquiredAchievementLoaded) == 0x000408, "Member 'UMyCharaMenu_EffectList_C::OnAcquiredAchievementLoaded' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, OnSelectAchievementSaved) == 0x000418, "Member 'UMyCharaMenu_EffectList_C::OnSelectAchievementSaved' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, TypeString) == 0x000428, "Member 'UMyCharaMenu_EffectList_C::TypeString' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectList_C, SelectedBtn) == 0x000478, "Member 'UMyCharaMenu_EffectList_C::SelectedBtn' has a wrong offset!");

}

