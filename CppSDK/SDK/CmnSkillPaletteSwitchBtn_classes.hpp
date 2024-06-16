#pragma once

 

// Package: CmnSkillPaletteSwitchBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C
// 0x0048 (0x02C0 - 0x0278)
class UCmnSkillPaletteSwitchBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        BtnEnableSwitcher;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ButtonForMainSkillPaletteSwitchReleased;           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ButtonForSubSkillPaletteSwitchReleased;            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher03;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUserWidget*                            CachedToolTipWidget;                               // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsTooltipCreated;                                 // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSubPaletteReleased;                             // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsTooltipDisabled;                                // 0x02BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette);
	void ExecuteUbergraph_CmnSkillPaletteSwitchBtn(int32 EntryPoint);
	void BndEvt__CmnSkillPaletteSwitchBtn_ButtonForSubSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CmnSkillPaletteSwitchBtn_ButtonForMainSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Construct();
	void SetIsSubPaletteReleased(bool bInIsReleased);
	void CreateTooltip(bool InIsNoTooltip);
	void SetActiveSwitchBtn(int32 InActiveSwitchBtnId);
	void SetIsTooltipEnable(bool bInIsTooltipEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnSkillPaletteSwitchBtn_C">();
	}
	static class UCmnSkillPaletteSwitchBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnSkillPaletteSwitchBtn_C>();
	}
};
static_assert(alignof(UCmnSkillPaletteSwitchBtn_C) == 0x000008, "Wrong alignment on UCmnSkillPaletteSwitchBtn_C");
static_assert(sizeof(UCmnSkillPaletteSwitchBtn_C) == 0x0002C0, "Wrong size on UCmnSkillPaletteSwitchBtn_C");
static_assert(offsetof(UCmnSkillPaletteSwitchBtn_C, UberGraphFrame) == 0x000278, "Member 'UCmnSkillPaletteSwitchBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnSkillPaletteSwitchBtn_C, BtnEnableSwitcher) == 0x000280, "Member 'UCmnSkillPaletteSwitchBtn_C::BtnEnableSwitcher' has a wrong offset!");
static_assert(offsetof(UCmnSkillPaletteSwitchBtn_C, ButtonForMainSkillPaletteSwitchReleased) == 0x000288, "Member 'UCmnSkillPaletteSwitchBtn_C::ButtonForMainSkillPaletteSwitchReleased' has a wrong offset!");
static_assert(offsetof(UCmnSkillPaletteSwitchBtn_C, ButtonForSubSkillPaletteSwitchReleased) == 0x000290, "Member 'UCmnSkillPaletteSwitchBtn_C::ButtonForSubSkillPaletteSwitchReleased' has a wrong offset!");
static_assert(offsetof(UCmnSkillPaletteSwitchBtn_C, Switcher03) == 0x000298, "Member 'UCmnSkillPaletteSwitchBtn_C::Switcher03' has a wrong offset!");
static_assert(offsetof(UCmnSkillPaletteSwitchBtn_C, OnPressed) == 0x0002A0, "Member 'UCmnSkillPaletteSwitchBtn_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UCmnSkillPaletteSwitchBtn_C, CachedToolTipWidget) == 0x0002B0, "Member 'UCmnSkillPaletteSwitchBtn_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UCmnSkillPaletteSwitchBtn_C, bIsTooltipCreated) == 0x0002B8, "Member 'UCmnSkillPaletteSwitchBtn_C::bIsTooltipCreated' has a wrong offset!");
static_assert(offsetof(UCmnSkillPaletteSwitchBtn_C, bIsSubPaletteReleased) == 0x0002B9, "Member 'UCmnSkillPaletteSwitchBtn_C::bIsSubPaletteReleased' has a wrong offset!");
static_assert(offsetof(UCmnSkillPaletteSwitchBtn_C, bIsTooltipDisabled) == 0x0002BA, "Member 'UCmnSkillPaletteSwitchBtn_C::bIsTooltipDisabled' has a wrong offset!");

}

