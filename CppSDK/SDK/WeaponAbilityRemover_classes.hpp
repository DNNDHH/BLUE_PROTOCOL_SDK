#pragma once

 

// Package: WeaponAbilityRemover

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "WeaponCustomBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponAbilityRemover.WeaponAbilityRemover_C
// 0x01B0 (0x06D0 - 0x0520)
class UWeaponAbilityRemover_C final : public UWeaponCustomBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WeaponAbilityRemover_C;             // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimDetailIn;                                      // 0x0528(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0530(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0538(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBack01_C*                           BtnBack;                                           // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_ButtonDecide_C*       BtnDecide;                                         // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Decide;                                        // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_Infomation_C*         Infomation;                                        // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_Loading_C*            Loading;                                           // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_Result_C*             Result;                                            // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponCustomStorageView_C*             Selector;                                          // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_Craft_InAnime_C*              ShopMenu_Craft_InAnime;                            // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBox_C*           TokenBox;                                          // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponRemoveAnime_C*                   WeaponRemoveAnime;                                 // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_WindowWeaponStatusPerkSlot_C* WeaponStatusWindow;                                // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       TokenBoxItemRemove;                                // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       TokenBoxItemRecycle;                               // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           TmpSelectWeapon;                                   // 0x05B0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         RET_CODE_ITEM_WAREHOUSE_SIZE_OVER;                 // 0x06C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponAbilityRemover(int32 EntryPoint);
	void CustomEvent(EDialogResult Param_Result);
	void BndEvt__WeaponAbilityRemover_TokenBox_K2Node_ComponentBoundEvent_3_EventSelect__DelegateSignature();
	void BndEvt__WeaponAbilityRemover_WeaponRemoveAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature();
	void CustomEvent_0(EDialogResult Param_Result);
	void BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature(int32 SlotNo);
	void BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__WeaponAbilityRemover_SynthedOpenSlot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature();
	void RequestAbilityRemoved();
	void EventOnFinishedAbilityRemoved(const int32 ErrorCode, const bool bWasSuccessful, const struct FOwnItemInfo& Info);
	void UnbindOnFinishedAbilityRemoved();
	void BindOnFinishedAbilityRemoved();
	void OnSelectWeapon();
	void OnSelectPerk();
	void GenerateTokens();
	void SelectToken();
	void PlayAnimIn();
	void PlayAnimOut();
	void PlayAnimDetailIn();
	void UpdateDecide();
	void UpdateEnableRecycleCheckBox();
	void SetEnableRecycleCheckBox(bool bInIsEnabled);
	void OnInit();
	void OnBind();
	void OnUnbind();
	void Reset();
	void OnComplete(int32 ErrorCode);
	void ClickedDecide();
	void SetEnableDecide(bool InEnabled);
	void SetVisibleWeaponStatusWindow(bool InVisible);
	void SetVisibleTokenBox(bool InVisible);
	void SetVisibleInfomation(bool InVisible);
	void SetVisibleDecide(bool InVisible);
	void SetVisibleBlocker(bool InVisible);
	void SetVisibleLoading(bool InVisible);
	void SetVisibleSuccess(bool InVisible);
	void SetVisibleResult(bool InVisible);
	void OpenSuccess();
	void OpenResult();
	void FinishedSuccess();

	class FText GetFullStorageDialogText() const;
	void GetRequestParameter(class FString* OutWeaponID, int32* OutTokenID, TArray<int32>* OutSlots) const;
	void GetItemName(int32 ItemId, class FString* OutName) const;
	class FText GetTokenConfirmDialogText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponAbilityRemover_C">();
	}
	static class UWeaponAbilityRemover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponAbilityRemover_C>();
	}
};
static_assert(alignof(UWeaponAbilityRemover_C) == 0x000008, "Wrong alignment on UWeaponAbilityRemover_C");
static_assert(sizeof(UWeaponAbilityRemover_C) == 0x0006D0, "Wrong size on UWeaponAbilityRemover_C");
static_assert(offsetof(UWeaponAbilityRemover_C, UberGraphFrame_WeaponAbilityRemover_C) == 0x000520, "Member 'UWeaponAbilityRemover_C::UberGraphFrame_WeaponAbilityRemover_C' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, AnimDetailIn) == 0x000528, "Member 'UWeaponAbilityRemover_C::AnimDetailIn' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, AnimOut) == 0x000530, "Member 'UWeaponAbilityRemover_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, AnimIn) == 0x000538, "Member 'UWeaponAbilityRemover_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, BtnBack) == 0x000540, "Member 'UWeaponAbilityRemover_C::BtnBack' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, BtnDecide) == 0x000548, "Member 'UWeaponAbilityRemover_C::BtnDecide' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, Cvs_Decide) == 0x000550, "Member 'UWeaponAbilityRemover_C::Cvs_Decide' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, Infomation) == 0x000558, "Member 'UWeaponAbilityRemover_C::Infomation' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, Loading) == 0x000560, "Member 'UWeaponAbilityRemover_C::Loading' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, Result) == 0x000568, "Member 'UWeaponAbilityRemover_C::Result' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, Selector) == 0x000570, "Member 'UWeaponAbilityRemover_C::Selector' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, ShopMenu_Craft_InAnime) == 0x000578, "Member 'UWeaponAbilityRemover_C::ShopMenu_Craft_InAnime' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, TokenBox) == 0x000580, "Member 'UWeaponAbilityRemover_C::TokenBox' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, UIBlocker) == 0x000588, "Member 'UWeaponAbilityRemover_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, WeaponRemoveAnime) == 0x000590, "Member 'UWeaponAbilityRemover_C::WeaponRemoveAnime' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, WeaponStatusWindow) == 0x000598, "Member 'UWeaponAbilityRemover_C::WeaponStatusWindow' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, TokenBoxItemRemove) == 0x0005A0, "Member 'UWeaponAbilityRemover_C::TokenBoxItemRemove' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, TokenBoxItemRecycle) == 0x0005A8, "Member 'UWeaponAbilityRemover_C::TokenBoxItemRecycle' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, TmpSelectWeapon) == 0x0005B0, "Member 'UWeaponAbilityRemover_C::TmpSelectWeapon' has a wrong offset!");
static_assert(offsetof(UWeaponAbilityRemover_C, RET_CODE_ITEM_WAREHOUSE_SIZE_OVER) == 0x0006C8, "Member 'UWeaponAbilityRemover_C::RET_CODE_ITEM_WAREHOUSE_SIZE_OVER' has a wrong offset!");

}

