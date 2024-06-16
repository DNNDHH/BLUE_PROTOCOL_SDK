#pragma once

 

// Package: LayoutMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LayoutMenu.LayoutMenu_C
// 0x00B0 (0x0328 - 0x0278)
class ULayoutMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnApply;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnCancel;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnExit;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnInitialize;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnExitEditMode;                                    // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnInitLayout;                                      // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnApplyLayout;                                     // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPresetLoad;                                      // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCustomSlot;                                      // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bExit;                                             // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bApply;                                            // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnExitEditMode__DelegateSignature();
	void OnInitLayout__DelegateSignature();
	void OnApplyLayout__DelegateSignature();
	void OnClosed__DelegateSignature();
	void OnPresetLoad__DelegateSignature();
	void OnCustomSlot__DelegateSignature();
	void ExecuteUbergraph_LayoutMenu(int32 EntryPoint);
	void ApplyCheck(bool bIsCancel);
	void EventEnd();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2();
	void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__BtnExit_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__BtnApply_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__CmnBtn05_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void Construct();
	void SelectedInitialize(EDialogResult Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LayoutMenu_C">();
	}
	static class ULayoutMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULayoutMenu_C>();
	}
};
static_assert(alignof(ULayoutMenu_C) == 0x000008, "Wrong alignment on ULayoutMenu_C");
static_assert(sizeof(ULayoutMenu_C) == 0x000328, "Wrong size on ULayoutMenu_C");
static_assert(offsetof(ULayoutMenu_C, UberGraphFrame) == 0x000278, "Member 'ULayoutMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, AnimOut) == 0x000280, "Member 'ULayoutMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, AnimIn) == 0x000288, "Member 'ULayoutMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, BtnApply) == 0x000290, "Member 'ULayoutMenu_C::BtnApply' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, BtnCancel) == 0x000298, "Member 'ULayoutMenu_C::BtnCancel' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, BtnExit) == 0x0002A0, "Member 'ULayoutMenu_C::BtnExit' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, BtnInitialize) == 0x0002A8, "Member 'ULayoutMenu_C::BtnInitialize' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, Image_103) == 0x0002B0, "Member 'ULayoutMenu_C::Image_103' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, UIBlocker) == 0x0002B8, "Member 'ULayoutMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, OnExitEditMode) == 0x0002C0, "Member 'ULayoutMenu_C::OnExitEditMode' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, OnInitLayout) == 0x0002D0, "Member 'ULayoutMenu_C::OnInitLayout' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, OnApplyLayout) == 0x0002E0, "Member 'ULayoutMenu_C::OnApplyLayout' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, OnClosed) == 0x0002F0, "Member 'ULayoutMenu_C::OnClosed' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, OnPresetLoad) == 0x000300, "Member 'ULayoutMenu_C::OnPresetLoad' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, OnCustomSlot) == 0x000310, "Member 'ULayoutMenu_C::OnCustomSlot' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, bExit) == 0x000320, "Member 'ULayoutMenu_C::bExit' has a wrong offset!");
static_assert(offsetof(ULayoutMenu_C, bApply) == 0x000321, "Member 'ULayoutMenu_C::bApply' has a wrong offset!");

}

