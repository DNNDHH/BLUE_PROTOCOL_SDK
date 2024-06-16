#pragma once

 

// Package: CharacterCardHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterCardHUD.CharacterCardHUD_C
// 0x0060 (0x02E0 - 0x0280)
class UCharacterCardHUD_C final : public USBCharacterCardHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutAnim;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HUDOnOffGrp;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextKeyIcon_C*                       KeyTxt;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                           ActionBindNameList;                                // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsHUDVisible;                                     // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsHUDShowOrHideExecuting;                         // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsHUDOpening;                                     // 0x02C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsHUDClosing;                                     // 0x02C3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsListenForInputAction;                           // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsHUDCloseRegistered;                             // 0x02C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_623E[0x2];                                     // 0x02C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsSetMenuMode;                                    // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsDebugMode;                                      // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClosed__DelegateSignature();
	void ExecuteUbergraph_CharacterCardHUD(int32 EntryPoint);
	void OnCharacterCardShowHideKeyPressed();
	void OnIsNewMemberFoundInParty();
	void OnCloseCharacterCardForDebug();
	void InitializeForDebug();
	void OnCloseCharacterCard(const bool InResetMenuModeOnly);
	void OnCloseHUD();
	void ForceAdventurerCardClose();
	void OnInitialize(const TArray<class FString>& InPartyMemberCharacterIds);
	void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0();
	void BndEvt__CharacterCardHUD_CharacterCardList_K2Node_ComponentBoundEvent_0_OnGetCharacterCardInfos__DelegateSignature();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void ShowHUD();
	void HideHUD();
	void ExecShowOrHideHUD();
	void GetIsAdventurerCardOpened(bool* bOutIsOpened);
	void SetMenuMode();
	void ResetMenuMode();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterCardHUD_C">();
	}
	static class UCharacterCardHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterCardHUD_C>();
	}
};
static_assert(alignof(UCharacterCardHUD_C) == 0x000008, "Wrong alignment on UCharacterCardHUD_C");
static_assert(sizeof(UCharacterCardHUD_C) == 0x0002E0, "Wrong size on UCharacterCardHUD_C");
static_assert(offsetof(UCharacterCardHUD_C, UberGraphFrame) == 0x000280, "Member 'UCharacterCardHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, OutAnim) == 0x000288, "Member 'UCharacterCardHUD_C::OutAnim' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, InAnim) == 0x000290, "Member 'UCharacterCardHUD_C::InAnim' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, Bg01) == 0x000298, "Member 'UCharacterCardHUD_C::Bg01' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, HUDOnOffGrp) == 0x0002A0, "Member 'UCharacterCardHUD_C::HUDOnOffGrp' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, KeyTxt) == 0x0002A8, "Member 'UCharacterCardHUD_C::KeyTxt' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, ActionBindNameList) == 0x0002B0, "Member 'UCharacterCardHUD_C::ActionBindNameList' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, bIsHUDVisible) == 0x0002C0, "Member 'UCharacterCardHUD_C::bIsHUDVisible' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, bIsHUDShowOrHideExecuting) == 0x0002C1, "Member 'UCharacterCardHUD_C::bIsHUDShowOrHideExecuting' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, bIsHUDOpening) == 0x0002C2, "Member 'UCharacterCardHUD_C::bIsHUDOpening' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, bIsHUDClosing) == 0x0002C3, "Member 'UCharacterCardHUD_C::bIsHUDClosing' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, bIsListenForInputAction) == 0x0002C4, "Member 'UCharacterCardHUD_C::bIsListenForInputAction' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, bIsHUDCloseRegistered) == 0x0002C5, "Member 'UCharacterCardHUD_C::bIsHUDCloseRegistered' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, OnClosed) == 0x0002C8, "Member 'UCharacterCardHUD_C::OnClosed' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, bIsSetMenuMode) == 0x0002D8, "Member 'UCharacterCardHUD_C::bIsSetMenuMode' has a wrong offset!");
static_assert(offsetof(UCharacterCardHUD_C, bIsDebugMode) == 0x0002D9, "Member 'UCharacterCardHUD_C::bIsDebugMode' has a wrong offset!");

}

