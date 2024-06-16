#pragma once

 

// Package: UMG_LoginBonusListLineItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C
// 0x0AA8 (0x0D20 - 0x0278)
class UUMG_LoginBonusListLineItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       StumpPlayNew;                                      // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StumpPlay2;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StumpPlay;                                         // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BGSwitch;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DayText;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Effect;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               IconPanel;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ItemNumBox;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNumText;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               LevelBox;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelNum;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                NormalButton;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          NormalIcon;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NumText;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PickupButton;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PickUpEffect;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          PickupIcon;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Stamp;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             StumpAnimationEnd;                                 // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ItemClick;                                         // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ClickId;                                           // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6913[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           NormalButtonNormal;                                // 0x0340(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           NormalButtonSelected;                              // 0x05B8(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           PickupButtonNormal;                                // 0x0830(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           PickupButtonSelected;                              // 0x0AA8(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void StumpAnimationEnd__DelegateSignature();
	void ItemClick__DelegateSignature(int32 ID, class UUMG_LoginBonusListLineItem_C* SelectedItem);
	void ExecuteUbergraph_UMG_LoginBonusListLineItem(int32 EntryPoint);
	void BndEvt__UMG_LoginBonusListLineItem_PickupButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_LoginBonusListLineItem_NormalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayStumpAnimation();
	void SetData(const struct FSBLoginBonusWindowDayData& Data, bool StumpOn, bool Click);
	void SetMouseClickValue(int32 Value);
	void SetBtnSelected(bool bSelected);
	void SetIconExtraData(class UCommonIcon_C* IconWidget, const struct FSBLoginBonusWindowItemData& ItemData);
	void OnCloseAnimationFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LoginBonusListLineItem_C">();
	}
	static class UUMG_LoginBonusListLineItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LoginBonusListLineItem_C>();
	}
};
static_assert(alignof(UUMG_LoginBonusListLineItem_C) == 0x000008, "Wrong alignment on UUMG_LoginBonusListLineItem_C");
static_assert(sizeof(UUMG_LoginBonusListLineItem_C) == 0x000D20, "Wrong size on UUMG_LoginBonusListLineItem_C");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, UberGraphFrame) == 0x000278, "Member 'UUMG_LoginBonusListLineItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, StumpPlayNew) == 0x000280, "Member 'UUMG_LoginBonusListLineItem_C::StumpPlayNew' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, StumpPlay2) == 0x000288, "Member 'UUMG_LoginBonusListLineItem_C::StumpPlay2' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, StumpPlay) == 0x000290, "Member 'UUMG_LoginBonusListLineItem_C::StumpPlay' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, BGSwitch) == 0x000298, "Member 'UUMG_LoginBonusListLineItem_C::BGSwitch' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, CommonIcon) == 0x0002A0, "Member 'UUMG_LoginBonusListLineItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, DayText) == 0x0002A8, "Member 'UUMG_LoginBonusListLineItem_C::DayText' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, Effect) == 0x0002B0, "Member 'UUMG_LoginBonusListLineItem_C::Effect' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, IconPanel) == 0x0002B8, "Member 'UUMG_LoginBonusListLineItem_C::IconPanel' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, ItemNumBox) == 0x0002C0, "Member 'UUMG_LoginBonusListLineItem_C::ItemNumBox' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, ItemNumText) == 0x0002C8, "Member 'UUMG_LoginBonusListLineItem_C::ItemNumText' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, LevelBox) == 0x0002D0, "Member 'UUMG_LoginBonusListLineItem_C::LevelBox' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, LevelNum) == 0x0002D8, "Member 'UUMG_LoginBonusListLineItem_C::LevelNum' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, NormalButton) == 0x0002E0, "Member 'UUMG_LoginBonusListLineItem_C::NormalButton' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, NormalIcon) == 0x0002E8, "Member 'UUMG_LoginBonusListLineItem_C::NormalIcon' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, NumText) == 0x0002F0, "Member 'UUMG_LoginBonusListLineItem_C::NumText' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, PickupButton) == 0x0002F8, "Member 'UUMG_LoginBonusListLineItem_C::PickupButton' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, PickUpEffect) == 0x000300, "Member 'UUMG_LoginBonusListLineItem_C::PickUpEffect' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, PickupIcon) == 0x000308, "Member 'UUMG_LoginBonusListLineItem_C::PickupIcon' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, Stamp) == 0x000310, "Member 'UUMG_LoginBonusListLineItem_C::Stamp' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, StumpAnimationEnd) == 0x000318, "Member 'UUMG_LoginBonusListLineItem_C::StumpAnimationEnd' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, ItemClick) == 0x000328, "Member 'UUMG_LoginBonusListLineItem_C::ItemClick' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, ClickId) == 0x000338, "Member 'UUMG_LoginBonusListLineItem_C::ClickId' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, NormalButtonNormal) == 0x000340, "Member 'UUMG_LoginBonusListLineItem_C::NormalButtonNormal' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, NormalButtonSelected) == 0x0005B8, "Member 'UUMG_LoginBonusListLineItem_C::NormalButtonSelected' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, PickupButtonNormal) == 0x000830, "Member 'UUMG_LoginBonusListLineItem_C::PickupButtonNormal' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLineItem_C, PickupButtonSelected) == 0x000AA8, "Member 'UUMG_LoginBonusListLineItem_C::PickupButtonSelected' has a wrong offset!");

}

