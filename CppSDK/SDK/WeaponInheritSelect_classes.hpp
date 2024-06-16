#pragma once

 

// Package: WeaponInheritSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponInheritSelect.WeaponInheritSelect_C
// 0x0458 (0x06D0 - 0x0278)
class UWeaponInheritSelect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimBtn;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimSelect;                                        // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Decide;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Rest;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnVitalChange;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose03_C*                          CmnClose03;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_SlotChangeView;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_ViewMaster;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_158;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_454;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_634;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInhelitPerkView_C*                     InhelitPerkView;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpecialViewItem_C*                     SpecialViewItem;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnDecide;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnReset;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponAssetView_C*                     WeaponAssetView;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FOwnItemInfo                           Target;                                            // 0x0330(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FOwnItemInfo>                   Materials;                                         // 0x0448(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FSBStackBPerk>                  StackBPerk;                                        // 0x0458(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FOwnItemInfo                           SynthedTarget;                                     // 0x0478(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FOwnItemInfo                           VitalStatus;                                       // 0x0590(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUserWidget*                            ModalWindow;                                       // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SpecialParkUID;                                    // 0x06B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FSBStackBPerk>                  SelectedPerks;                                     // 0x06C0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void OnClose__DelegateSignature();
	void OnSelected__DelegateSignature(const class FString& SpecialPerkUID, TArray<struct FSBStackBPerk>& Param_SelectedPerks);
	void ExecuteUbergraph_WeaponInheritSelect(int32 EntryPoint);
	void BndEvt__WeaponInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void OnCheckedInhelit(EDialogResult Result);
	void OnRequestClose();
	void Destruct();
	void Construct();
	void BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
	void BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature(const struct FSBStackBPerk& PurgeTarget);
	void BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ChangePerks(const struct FSBStackBPerk& Before, const struct FSBStackBPerk& Select);
	void OnClosePerkSelect();
	void BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature(const struct FSBStackBPerk& ChangeTarget);
	void OnCloseVitalSelect();
	void OnSelectedNewVitalType(const struct FOwnItemInfo& OnSelect);
	void Initialize();
	void AddViewChild(class UWidget* Content);
	void RequestClose();
	void CloseWindow();
	void FindArgViralId(struct FOwnItemInfo* Array_Element);

	void IsModalWindowOpen(bool* IsOpen) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponInheritSelect_C">();
	}
	static class UWeaponInheritSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponInheritSelect_C>();
	}
};
static_assert(alignof(UWeaponInheritSelect_C) == 0x000008, "Wrong alignment on UWeaponInheritSelect_C");
static_assert(sizeof(UWeaponInheritSelect_C) == 0x0006D0, "Wrong size on UWeaponInheritSelect_C");
static_assert(offsetof(UWeaponInheritSelect_C, UberGraphFrame) == 0x000278, "Member 'UWeaponInheritSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, AnimOut) == 0x000280, "Member 'UWeaponInheritSelect_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, AnimBtn) == 0x000288, "Member 'UWeaponInheritSelect_C::AnimBtn' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, AnimIn) == 0x000290, "Member 'UWeaponInheritSelect_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, AnimSelect) == 0x000298, "Member 'UWeaponInheritSelect_C::AnimSelect' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Btn_Decide) == 0x0002A0, "Member 'UWeaponInheritSelect_C::Btn_Decide' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Btn_Rest) == 0x0002A8, "Member 'UWeaponInheritSelect_C::Btn_Rest' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, BtnVitalChange) == 0x0002B0, "Member 'UWeaponInheritSelect_C::BtnVitalChange' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, CmnClose03) == 0x0002B8, "Member 'UWeaponInheritSelect_C::CmnClose03' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Cvs_SlotChangeView) == 0x0002C0, "Member 'UWeaponInheritSelect_C::Cvs_SlotChangeView' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Cvs_ViewMaster) == 0x0002C8, "Member 'UWeaponInheritSelect_C::Cvs_ViewMaster' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Image) == 0x0002D0, "Member 'UWeaponInheritSelect_C::Image' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Image_158) == 0x0002D8, "Member 'UWeaponInheritSelect_C::Image_158' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Image_454) == 0x0002E0, "Member 'UWeaponInheritSelect_C::Image_454' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Image_634) == 0x0002E8, "Member 'UWeaponInheritSelect_C::Image_634' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, InhelitPerkView) == 0x0002F0, "Member 'UWeaponInheritSelect_C::InhelitPerkView' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, SpecialViewItem) == 0x0002F8, "Member 'UWeaponInheritSelect_C::SpecialViewItem' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Txt_BtnDecide) == 0x000300, "Member 'UWeaponInheritSelect_C::Txt_BtnDecide' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Txt_BtnReset) == 0x000308, "Member 'UWeaponInheritSelect_C::Txt_BtnReset' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, UIBlocker) == 0x000310, "Member 'UWeaponInheritSelect_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, WeaponAssetView) == 0x000318, "Member 'UWeaponInheritSelect_C::WeaponAssetView' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, OnClose) == 0x000320, "Member 'UWeaponInheritSelect_C::OnClose' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Target) == 0x000330, "Member 'UWeaponInheritSelect_C::Target' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, Materials) == 0x000448, "Member 'UWeaponInheritSelect_C::Materials' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, StackBPerk) == 0x000458, "Member 'UWeaponInheritSelect_C::StackBPerk' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, OnSelected) == 0x000468, "Member 'UWeaponInheritSelect_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, SynthedTarget) == 0x000478, "Member 'UWeaponInheritSelect_C::SynthedTarget' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, VitalStatus) == 0x000590, "Member 'UWeaponInheritSelect_C::VitalStatus' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, ModalWindow) == 0x0006A8, "Member 'UWeaponInheritSelect_C::ModalWindow' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, SpecialParkUID) == 0x0006B0, "Member 'UWeaponInheritSelect_C::SpecialParkUID' has a wrong offset!");
static_assert(offsetof(UWeaponInheritSelect_C, SelectedPerks) == 0x0006C0, "Member 'UWeaponInheritSelect_C::SelectedPerks' has a wrong offset!");

}

