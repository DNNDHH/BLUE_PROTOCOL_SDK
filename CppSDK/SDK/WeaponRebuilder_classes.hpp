#pragma once

 

// Package: WeaponRebuilder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "WeaponCustomBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponRebuilder.WeaponRebuilder_C
// 0x01A8 (0x06C8 - 0x0520)
class UWeaponRebuilder_C final : public UWeaponCustomBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WeaponRebuilder_C;                  // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimDetailIn;                                      // 0x0528(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0530(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0538(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBack01_C*                           BtnBack;                                           // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_ButtonDecide_C*       BtnDecide;                                         // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnProbability;                                    // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Decide;                                        // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_Infomation_C*         Infomation;                                        // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_Loading_C*            Loading;                                           // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    OpenSlotText;                                      // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_Result_C*             Result;                                            // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponCustomStorageView_C*             Selector;                                          // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_Craft_InAnime_C*              ShopMenu_Craft_InAnime;                            // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBox_C*           TokenBox;                                          // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_WindowWeaponStatusPerkSlot_C* WeaponStatusWindow;                                // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponTuneAnime_C*                     WeaponTuneAnime;                                   // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           TmpSelectWeapon;                                   // 0x05B0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WeaponRebuilder(int32 EntryPoint);
	void CustomEvent(EDialogResult Param_Result);
	void BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponRebuilder_WeaponTuneAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature();
	void CustomEvent_0(EDialogResult Param_Result);
	void BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__WeaponRebuilder_SynthedOpenSlot_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature(int32 ProtectNum);
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature();
	void RequestPerkRebuild();
	void UnbindOnFinishedPerkRebuild();
	void BindOnFinishedPerkRebuild();
	void EventOnFinishedWeaponTuning(const int32 ErrorCode, const bool bWasSuccessful, const struct FOwnItemInfo& Info);
	void OnSelectWeapon();
	void GenerateTokens();
	void PlayAnimIn();
	void PlayAnimOut();
	void PlayAnimDetailIn();
	void GetRequestParameter(class FString* OutWeaponID, int32* OutTuning_Token_ID, int32* OutProtect_Token_ID, TArray<int32>* OutLockSlots);
	void SetSlotTextColor(bool Param_IsHovered);
	void ClickedLock(int32 LockNum);
	void SetVisibleBtnProbability(bool Param_IsVisible);
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
		return StaticBPGeneratedClassImpl<"WeaponRebuilder_C">();
	}
	static class UWeaponRebuilder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponRebuilder_C>();
	}
};
static_assert(alignof(UWeaponRebuilder_C) == 0x000008, "Wrong alignment on UWeaponRebuilder_C");
static_assert(sizeof(UWeaponRebuilder_C) == 0x0006C8, "Wrong size on UWeaponRebuilder_C");
static_assert(offsetof(UWeaponRebuilder_C, UberGraphFrame_WeaponRebuilder_C) == 0x000520, "Member 'UWeaponRebuilder_C::UberGraphFrame_WeaponRebuilder_C' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, AnimDetailIn) == 0x000528, "Member 'UWeaponRebuilder_C::AnimDetailIn' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, AnimOut) == 0x000530, "Member 'UWeaponRebuilder_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, AnimIn) == 0x000538, "Member 'UWeaponRebuilder_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, BtnBack) == 0x000540, "Member 'UWeaponRebuilder_C::BtnBack' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, BtnDecide) == 0x000548, "Member 'UWeaponRebuilder_C::BtnDecide' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, BtnProbability) == 0x000550, "Member 'UWeaponRebuilder_C::BtnProbability' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, Cvs_Decide) == 0x000558, "Member 'UWeaponRebuilder_C::Cvs_Decide' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, Infomation) == 0x000560, "Member 'UWeaponRebuilder_C::Infomation' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, Loading) == 0x000568, "Member 'UWeaponRebuilder_C::Loading' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, OpenSlotText) == 0x000570, "Member 'UWeaponRebuilder_C::OpenSlotText' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, Result) == 0x000578, "Member 'UWeaponRebuilder_C::Result' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, Selector) == 0x000580, "Member 'UWeaponRebuilder_C::Selector' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, ShopMenu_Craft_InAnime) == 0x000588, "Member 'UWeaponRebuilder_C::ShopMenu_Craft_InAnime' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, TokenBox) == 0x000590, "Member 'UWeaponRebuilder_C::TokenBox' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, UIBlocker) == 0x000598, "Member 'UWeaponRebuilder_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, WeaponStatusWindow) == 0x0005A0, "Member 'UWeaponRebuilder_C::WeaponStatusWindow' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, WeaponTuneAnime) == 0x0005A8, "Member 'UWeaponRebuilder_C::WeaponTuneAnime' has a wrong offset!");
static_assert(offsetof(UWeaponRebuilder_C, TmpSelectWeapon) == 0x0005B0, "Member 'UWeaponRebuilder_C::TmpSelectWeapon' has a wrong offset!");

}

