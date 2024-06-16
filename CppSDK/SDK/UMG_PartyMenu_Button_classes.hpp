#pragma once

 

// Package: UMG_PartyMenu_Button

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EPartyButtonType_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PartyMenu_Button.UMG_PartyMenu_Button_C
// 0x00C0 (0x0338 - 0x0278)
class UUMG_PartyMenu_Button_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimUnHovered;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimHovered;                                       // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimUnSelected;                                    // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimSelected;                                      // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgGrd;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_BtnEffect_C*               CommandMenu_BtnEffect;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ContentButton;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrentMemberCountText;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EffectImage;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon1;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBase;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           InvitedGrp;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineEffect;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MaxMemberCountText;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         MemberCountGrp;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NoPartyGrp;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PartyGrp;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMessage;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOpenPartyMenu;                                   // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EPartyButtonType                              CurrentStatus;                                     // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPartyButtonType                              PrevStatus;                                        // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bActive;                                           // 0x0332(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnOpenPartyMenu__DelegateSignature();
	void ExecuteUbergraph_UMG_PartyMenu_Button(int32 EntryPoint);
	void Destruct();
	void PartyUnbindDelegates();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ContentButton_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ContentButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature();
	void CustomEvent_1(const int32 SelectIndex);
	void ResetButtonState();
	void CustomEvent_0(const EYesNoDialogResult Result);
	void SetButtonType(EPartyButtonType Type);
	void PlayBtnAnim(bool bInActive);
	void SetBtn(bool Param_bActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PartyMenu_Button_C">();
	}
	static class UUMG_PartyMenu_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PartyMenu_Button_C>();
	}
};
static_assert(alignof(UUMG_PartyMenu_Button_C) == 0x000008, "Wrong alignment on UUMG_PartyMenu_Button_C");
static_assert(sizeof(UUMG_PartyMenu_Button_C) == 0x000338, "Wrong size on UUMG_PartyMenu_Button_C");
static_assert(offsetof(UUMG_PartyMenu_Button_C, UberGraphFrame) == 0x000278, "Member 'UUMG_PartyMenu_Button_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, AnimUnHovered) == 0x000280, "Member 'UUMG_PartyMenu_Button_C::AnimUnHovered' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, AnimHovered) == 0x000288, "Member 'UUMG_PartyMenu_Button_C::AnimHovered' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, AnimUnSelected) == 0x000290, "Member 'UUMG_PartyMenu_Button_C::AnimUnSelected' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, AnimSelected) == 0x000298, "Member 'UUMG_PartyMenu_Button_C::AnimSelected' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, BgGrd) == 0x0002A0, "Member 'UUMG_PartyMenu_Button_C::BgGrd' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, CommandMenu_BtnEffect) == 0x0002A8, "Member 'UUMG_PartyMenu_Button_C::CommandMenu_BtnEffect' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, ContentButton) == 0x0002B0, "Member 'UUMG_PartyMenu_Button_C::ContentButton' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, CurrentMemberCountText) == 0x0002B8, "Member 'UUMG_PartyMenu_Button_C::CurrentMemberCountText' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, EffectImage) == 0x0002C0, "Member 'UUMG_PartyMenu_Button_C::EffectImage' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, Icon1) == 0x0002C8, "Member 'UUMG_PartyMenu_Button_C::Icon1' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, IconBase) == 0x0002D0, "Member 'UUMG_PartyMenu_Button_C::IconBase' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, InvitedGrp) == 0x0002D8, "Member 'UUMG_PartyMenu_Button_C::InvitedGrp' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, LineEffect) == 0x0002E0, "Member 'UUMG_PartyMenu_Button_C::LineEffect' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, LineImage) == 0x0002E8, "Member 'UUMG_PartyMenu_Button_C::LineImage' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, MaxMemberCountText) == 0x0002F0, "Member 'UUMG_PartyMenu_Button_C::MaxMemberCountText' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, MemberCountGrp) == 0x0002F8, "Member 'UUMG_PartyMenu_Button_C::MemberCountGrp' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, NoPartyGrp) == 0x000300, "Member 'UUMG_PartyMenu_Button_C::NoPartyGrp' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, PartyGrp) == 0x000308, "Member 'UUMG_PartyMenu_Button_C::PartyGrp' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, SwitchMessage) == 0x000310, "Member 'UUMG_PartyMenu_Button_C::SwitchMessage' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, Txt1) == 0x000318, "Member 'UUMG_PartyMenu_Button_C::Txt1' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, OnOpenPartyMenu) == 0x000320, "Member 'UUMG_PartyMenu_Button_C::OnOpenPartyMenu' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, CurrentStatus) == 0x000330, "Member 'UUMG_PartyMenu_Button_C::CurrentStatus' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, PrevStatus) == 0x000331, "Member 'UUMG_PartyMenu_Button_C::PrevStatus' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMenu_Button_C, bActive) == 0x000332, "Member 'UUMG_PartyMenu_Button_C::bActive' has a wrong offset!");

}

