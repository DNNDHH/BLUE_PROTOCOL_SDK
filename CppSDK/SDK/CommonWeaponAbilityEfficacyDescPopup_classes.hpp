#pragma once

 

// Package: CommonWeaponAbilityEfficacyDescPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C
// 0x0040 (0x02B8 - 0x0278)
class UCommonWeaponAbilityEfficacyDescPopup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnClose01_C*                          CloseBtn;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonFullScreen;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TitleTxt;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotListDetailed_C* WeaponAbilityInfoSlotListBody;                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsClosing;                                        // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup(int32 EntryPoint);
	void OnPressCancelKey();
	void BndEvt__CommonWeaponAbilityEfficacyDescPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Setup(const struct FSBWeaponItemData& InWeaponItemData);
	void SetupByUniqueId(const class FString& UniqueId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonWeaponAbilityEfficacyDescPopup_C">();
	}
	static class UCommonWeaponAbilityEfficacyDescPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonWeaponAbilityEfficacyDescPopup_C>();
	}
};
static_assert(alignof(UCommonWeaponAbilityEfficacyDescPopup_C) == 0x000008, "Wrong alignment on UCommonWeaponAbilityEfficacyDescPopup_C");
static_assert(sizeof(UCommonWeaponAbilityEfficacyDescPopup_C) == 0x0002B8, "Wrong size on UCommonWeaponAbilityEfficacyDescPopup_C");
static_assert(offsetof(UCommonWeaponAbilityEfficacyDescPopup_C, UberGraphFrame) == 0x000278, "Member 'UCommonWeaponAbilityEfficacyDescPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityEfficacyDescPopup_C, CloseBtn) == 0x000280, "Member 'UCommonWeaponAbilityEfficacyDescPopup_C::CloseBtn' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityEfficacyDescPopup_C, SBButtonFullScreen) == 0x000288, "Member 'UCommonWeaponAbilityEfficacyDescPopup_C::SBButtonFullScreen' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityEfficacyDescPopup_C, TitleTxt) == 0x000290, "Member 'UCommonWeaponAbilityEfficacyDescPopup_C::TitleTxt' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityEfficacyDescPopup_C, WeaponAbilityInfoSlotListBody) == 0x000298, "Member 'UCommonWeaponAbilityEfficacyDescPopup_C::WeaponAbilityInfoSlotListBody' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityEfficacyDescPopup_C, OnClose) == 0x0002A0, "Member 'UCommonWeaponAbilityEfficacyDescPopup_C::OnClose' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityEfficacyDescPopup_C, bIsClosing) == 0x0002B0, "Member 'UCommonWeaponAbilityEfficacyDescPopup_C::bIsClosing' has a wrong offset!");

}

