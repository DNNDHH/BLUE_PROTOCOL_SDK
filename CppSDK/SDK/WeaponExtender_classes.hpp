#pragma once

 

// Package: WeaponExtender

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "WeaponCustomBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponExtender.WeaponExtender_C
// 0x01A0 (0x06C0 - 0x0520)
class UWeaponExtender_C final : public UWeaponCustomBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WeaponExtender_C;                   // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
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
	class UWeaponSlotExtendAnime_C*               WeaponSlotExtendAnime;                             // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_WindowWeaponStatusPerkSlot_C* WeaponStatusWindow;                                // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           TmpSelectWeapon;                                   // 0x05A0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBFusionTicketType                           TicketType;                                        // 0x06B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponExtender(int32 EntryPoint);
	void CustomEvent(EDialogResult Param_Result);
	void BndEvt__WeaponExtender_WeaponSlotExtendAnime_K2Node_ComponentBoundEvent_5_OnCompleteAnim__DelegateSignature();
	void CustomEvent_0(EDialogResult Param_Result);
	void BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__WeaponExtender_WeaponSyntheOpenSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature();
	void RequestUnlockPerkSlot();
	void UnbindOnFinishedUnlockPerkSlot();
	void BindOnFinishedUnlockPerkSlot();
	void EventOnFinishedUnlockPerkSlot(const int32 ErrorCode, const bool bWasSuccessful, const struct FOwnItemInfo& Info);
	void OnSelectWeapon();
	void GenerateTokens();
	void PlayAnimIn();
	void PlayAnimOut();
	void PlayAnimDetailIn();
	void GetRequestParameter(class FString* WeaponID, int32* TokenID);
	void OnInit();
	void OnBind();
	void OnUnbind();
	void Reset();
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

	class FText GetTokenConfirmDialogText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponExtender_C">();
	}
	static class UWeaponExtender_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponExtender_C>();
	}
};
static_assert(alignof(UWeaponExtender_C) == 0x000008, "Wrong alignment on UWeaponExtender_C");
static_assert(sizeof(UWeaponExtender_C) == 0x0006C0, "Wrong size on UWeaponExtender_C");
static_assert(offsetof(UWeaponExtender_C, UberGraphFrame_WeaponExtender_C) == 0x000520, "Member 'UWeaponExtender_C::UberGraphFrame_WeaponExtender_C' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, AnimDetailIn) == 0x000528, "Member 'UWeaponExtender_C::AnimDetailIn' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, AnimOut) == 0x000530, "Member 'UWeaponExtender_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, AnimIn) == 0x000538, "Member 'UWeaponExtender_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, BtnBack) == 0x000540, "Member 'UWeaponExtender_C::BtnBack' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, BtnDecide) == 0x000548, "Member 'UWeaponExtender_C::BtnDecide' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, Cvs_Decide) == 0x000550, "Member 'UWeaponExtender_C::Cvs_Decide' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, Infomation) == 0x000558, "Member 'UWeaponExtender_C::Infomation' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, Loading) == 0x000560, "Member 'UWeaponExtender_C::Loading' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, Result) == 0x000568, "Member 'UWeaponExtender_C::Result' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, Selector) == 0x000570, "Member 'UWeaponExtender_C::Selector' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, ShopMenu_Craft_InAnime) == 0x000578, "Member 'UWeaponExtender_C::ShopMenu_Craft_InAnime' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, TokenBox) == 0x000580, "Member 'UWeaponExtender_C::TokenBox' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, UIBlocker) == 0x000588, "Member 'UWeaponExtender_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, WeaponSlotExtendAnime) == 0x000590, "Member 'UWeaponExtender_C::WeaponSlotExtendAnime' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, WeaponStatusWindow) == 0x000598, "Member 'UWeaponExtender_C::WeaponStatusWindow' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, TmpSelectWeapon) == 0x0005A0, "Member 'UWeaponExtender_C::TmpSelectWeapon' has a wrong offset!");
static_assert(offsetof(UWeaponExtender_C, TicketType) == 0x0006B8, "Member 'UWeaponExtender_C::TicketType' has a wrong offset!");

}

