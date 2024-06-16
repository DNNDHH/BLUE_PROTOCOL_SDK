#pragma once

 

// Package: HudCustomMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HudCustomMenu.HudCustomMenu_C
// 0x0068 (0x02E0 - 0x0278)
class UHudCustomMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnApply;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnContinue;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnExit;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsExit;                                           // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6847[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnApplied;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature(bool bIsCancel);
	void OnApplied__DelegateSignature();
	void ExecuteUbergraph_HudCustomMenu(int32 EntryPoint);
	void BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__HudCustomMenu_BtnAppli_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature();
	void Destruct();
	void Construct();
	void SetApplyButtonEnabled(bool Enabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HudCustomMenu_C">();
	}
	static class UHudCustomMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHudCustomMenu_C>();
	}
};
static_assert(alignof(UHudCustomMenu_C) == 0x000008, "Wrong alignment on UHudCustomMenu_C");
static_assert(sizeof(UHudCustomMenu_C) == 0x0002E0, "Wrong size on UHudCustomMenu_C");
static_assert(offsetof(UHudCustomMenu_C, UberGraphFrame) == 0x000278, "Member 'UHudCustomMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHudCustomMenu_C, AnimOut) == 0x000280, "Member 'UHudCustomMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UHudCustomMenu_C, AnimIn) == 0x000288, "Member 'UHudCustomMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UHudCustomMenu_C, BtnApply) == 0x000290, "Member 'UHudCustomMenu_C::BtnApply' has a wrong offset!");
static_assert(offsetof(UHudCustomMenu_C, BtnContinue) == 0x000298, "Member 'UHudCustomMenu_C::BtnContinue' has a wrong offset!");
static_assert(offsetof(UHudCustomMenu_C, BtnExit) == 0x0002A0, "Member 'UHudCustomMenu_C::BtnExit' has a wrong offset!");
static_assert(offsetof(UHudCustomMenu_C, Image_103) == 0x0002A8, "Member 'UHudCustomMenu_C::Image_103' has a wrong offset!");
static_assert(offsetof(UHudCustomMenu_C, UIBlocker) == 0x0002B0, "Member 'UHudCustomMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UHudCustomMenu_C, OnClose) == 0x0002B8, "Member 'UHudCustomMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(UHudCustomMenu_C, bIsExit) == 0x0002C8, "Member 'UHudCustomMenu_C::bIsExit' has a wrong offset!");
static_assert(offsetof(UHudCustomMenu_C, OnApplied) == 0x0002D0, "Member 'UHudCustomMenu_C::OnApplied' has a wrong offset!");

}

