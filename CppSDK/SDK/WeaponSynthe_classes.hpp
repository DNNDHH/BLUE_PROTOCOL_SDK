#pragma once

 

// Package: WeaponSynthe

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "WeaponCustomBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthe.WeaponSynthe_C
// 0x01E8 (0x0708 - 0x0520)
class UWeaponSynthe_C final : public UWeaponCustomBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WeaponSynthe_C;                     // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimBtn;                                           // 0x0528(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimChangeList;                                    // 0x0530(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimDetailIn;                                      // 0x0538(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0540(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0548(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBack01_C*                           BtnBack;                                           // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BtnDecide;                                         // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_ButtonDecide_C*       BtnDecideApplyUpgrade;                             // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_ButtonDecide_C*       BtnDecideRadyUpgrade;                              // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnProbability;                                    // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Btns;                                          // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFusionItemList_C*                      FusionItemList;                                    // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_Infomation_C*         Infomation;                                        // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_LiquidMemoryActive_C*          LiquidMemory;                                      // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_Loading_C*            Loading;                                           // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_MoneyWindow_C*        MoneyWindow;                                       // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_Result_C*             Result;                                            // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_Craft_InAnime_C*              ShopMenu_Craft_InAnime;                            // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponCustomStorageView_C*             WeaponCustomStorageView;                           // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDesc_WeaponSynthe_C*                   WeaponStatusWindow;                                // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSyntheAnime_C*                   WeaponSyntheAnime;                                 // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_ItemBox_C*            WeaponSynthePart_ItemBox;                          // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Dialog_C*                           Dialog_0;                                          // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           SelectedFusionItem;                                // 0x05E8(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsWeaponSeleced;                                   // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCostLoading;                                     // 0x0701(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bResultShowing;                                    // 0x0702(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WeaponSynthe(int32 EntryPoint);
	void OnCloseError(EDialogResult Param_Result);
	void EventCreateDialog_LoadError();
	void BndEvt__WeaponSynthe_WeaponSyntheAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature();
	void EventCreateDialog_ShowMeTheMoney();
	void EventCreateDialog_NotSelectAbility();
	void BndEvt__WeaponSynthe_BtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__WeaponSynthe_SynthedOpenSlotRadyUpgrade_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__WeaponSynthe_SynthedOpenSlotApplyUpgrade_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void RequestWeaponMarge();
	void UnbindOnFinishedWeaponMarge();
	void BindOnFinishedWeaponMarge();
	void EventOnFinishedWeaponMerge(const int32 ErrorCode, const bool bWasSuccessful, const struct FOwnItemInfo& Info);
	void OnNewWeaponUseChecked(EDialogResult Param_Result);
	void CheckNewWeaponUse();
	void OnCheckedItemLock(EDialogResult Param_Result);
	void CheckItemLock();
	void BndEvt__WeaponSynthe_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void OnCostLoaded(bool bSuccess);
	void UnBind_On_Cost_Load();
	void Bind_On_Cost_Load();
	void BndEvt__WeaponSynthe_FusionItemList_K2Node_ComponentBoundEvent_1_OnSelectItemData__DelegateSignature(const struct FOwnItemInfo& Item);
	void BndEvt__WeaponSynthe_WeaponCustomStorageView_K2Node_ComponentBoundEvent_0_OnSelectListItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
	void SetActiveDecideButton(bool IsActiveApply);
	void ClickedBtnApplyUpgrade();
	void ClickedBtnRadyUpgrade();
	void UpdateEnableApplyButton();
	void UpdateVisibleProbabilityButton();
	void SetVisibleItemBox(bool InVisible);
	void SetVisibleMoney(bool InVisible);
	void UpdateMoney();
	void SetVisibleLiquidMemory(bool InVisible);
	void UpdateVisibleLiquidMemory();
	void BackWeaponSelect();
	void CheckInvalidFusionItem();
	void PlayAnimIn();
	void PlayAnimOut();
	void PlayAnimDetailIn();
	void PlayAnimChangeList(EUMGSequencePlayMode PlayMode);
	void OnSelectWeapon();
	void PlayAnimBtn();
	void BackItemSelect();
	void OnCompletedConfirmDialog(EDialogResult Param_Result);
	void OnInit();
	void OnTerm();
	void OnBind();
	void OnUnbind();
	void Reset();
	void SetEnableDecide(bool InEnabled);
	void SetVisibleWeaponStatusWindow(bool InVisible);
	void SetVisibleInfomation(bool InVisible);
	void SetVisibleLoading(bool InVisible);
	void SetVisibleSuccess(bool InVisible);
	void SetVisibleResult(bool InVisible);
	void OpenSuccess();
	void OpenResult();
	void FinishedSuccess();
	void ClickedDecide();
	void ClickedBack();

	void IsActiveLiquidMemory(bool* bActive) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthe_C">();
	}
	static class UWeaponSynthe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthe_C>();
	}
};
static_assert(alignof(UWeaponSynthe_C) == 0x000008, "Wrong alignment on UWeaponSynthe_C");
static_assert(sizeof(UWeaponSynthe_C) == 0x000708, "Wrong size on UWeaponSynthe_C");
static_assert(offsetof(UWeaponSynthe_C, UberGraphFrame_WeaponSynthe_C) == 0x000520, "Member 'UWeaponSynthe_C::UberGraphFrame_WeaponSynthe_C' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, AnimBtn) == 0x000528, "Member 'UWeaponSynthe_C::AnimBtn' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, AnimChangeList) == 0x000530, "Member 'UWeaponSynthe_C::AnimChangeList' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, AnimDetailIn) == 0x000538, "Member 'UWeaponSynthe_C::AnimDetailIn' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, AnimOut) == 0x000540, "Member 'UWeaponSynthe_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, AnimIn) == 0x000548, "Member 'UWeaponSynthe_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, BtnBack) == 0x000550, "Member 'UWeaponSynthe_C::BtnBack' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, BtnDecide) == 0x000558, "Member 'UWeaponSynthe_C::BtnDecide' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, BtnDecideApplyUpgrade) == 0x000560, "Member 'UWeaponSynthe_C::BtnDecideApplyUpgrade' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, BtnDecideRadyUpgrade) == 0x000568, "Member 'UWeaponSynthe_C::BtnDecideRadyUpgrade' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, BtnProbability) == 0x000570, "Member 'UWeaponSynthe_C::BtnProbability' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, Cvs_Btns) == 0x000578, "Member 'UWeaponSynthe_C::Cvs_Btns' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, FusionItemList) == 0x000580, "Member 'UWeaponSynthe_C::FusionItemList' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, Infomation) == 0x000588, "Member 'UWeaponSynthe_C::Infomation' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, LiquidMemory) == 0x000590, "Member 'UWeaponSynthe_C::LiquidMemory' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, Loading) == 0x000598, "Member 'UWeaponSynthe_C::Loading' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, MoneyWindow) == 0x0005A0, "Member 'UWeaponSynthe_C::MoneyWindow' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, MyWalletWidget) == 0x0005A8, "Member 'UWeaponSynthe_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, Result) == 0x0005B0, "Member 'UWeaponSynthe_C::Result' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, ShopMenu_Craft_InAnime) == 0x0005B8, "Member 'UWeaponSynthe_C::ShopMenu_Craft_InAnime' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, WeaponCustomStorageView) == 0x0005C0, "Member 'UWeaponSynthe_C::WeaponCustomStorageView' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, WeaponStatusWindow) == 0x0005C8, "Member 'UWeaponSynthe_C::WeaponStatusWindow' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, WeaponSyntheAnime) == 0x0005D0, "Member 'UWeaponSynthe_C::WeaponSyntheAnime' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, WeaponSynthePart_ItemBox) == 0x0005D8, "Member 'UWeaponSynthe_C::WeaponSynthePart_ItemBox' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, Dialog_0) == 0x0005E0, "Member 'UWeaponSynthe_C::Dialog_0' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, SelectedFusionItem) == 0x0005E8, "Member 'UWeaponSynthe_C::SelectedFusionItem' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, IsWeaponSeleced) == 0x000700, "Member 'UWeaponSynthe_C::IsWeaponSeleced' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, IsCostLoading) == 0x000701, "Member 'UWeaponSynthe_C::IsCostLoading' has a wrong offset!");
static_assert(offsetof(UWeaponSynthe_C, bResultShowing) == 0x000702, "Member 'UWeaponSynthe_C::bResultShowing' has a wrong offset!");

}

