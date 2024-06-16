#pragma once

 

// Package: HudCustomApplySelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HudCustomApplySelect.HudCustomApplySelect_C
// 0x0050 (0x02C8 - 0x0278)
class UHudCustomApplySelect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnApply;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnExit;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsExit;                                           // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature(bool bIsCancel);
	void ExecuteUbergraph_HudCustomApplySelect(int32 EntryPoint);
	void BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature();
	void Destruct();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HudCustomApplySelect_C">();
	}
	static class UHudCustomApplySelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHudCustomApplySelect_C>();
	}
};
static_assert(alignof(UHudCustomApplySelect_C) == 0x000008, "Wrong alignment on UHudCustomApplySelect_C");
static_assert(sizeof(UHudCustomApplySelect_C) == 0x0002C8, "Wrong size on UHudCustomApplySelect_C");
static_assert(offsetof(UHudCustomApplySelect_C, UberGraphFrame) == 0x000278, "Member 'UHudCustomApplySelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHudCustomApplySelect_C, AnimOut) == 0x000280, "Member 'UHudCustomApplySelect_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UHudCustomApplySelect_C, AnimIn) == 0x000288, "Member 'UHudCustomApplySelect_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UHudCustomApplySelect_C, BtnApply) == 0x000290, "Member 'UHudCustomApplySelect_C::BtnApply' has a wrong offset!");
static_assert(offsetof(UHudCustomApplySelect_C, BtnExit) == 0x000298, "Member 'UHudCustomApplySelect_C::BtnExit' has a wrong offset!");
static_assert(offsetof(UHudCustomApplySelect_C, Image_103) == 0x0002A0, "Member 'UHudCustomApplySelect_C::Image_103' has a wrong offset!");
static_assert(offsetof(UHudCustomApplySelect_C, UIBlocker) == 0x0002A8, "Member 'UHudCustomApplySelect_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UHudCustomApplySelect_C, OnClose) == 0x0002B0, "Member 'UHudCustomApplySelect_C::OnClose' has a wrong offset!");
static_assert(offsetof(UHudCustomApplySelect_C, bIsExit) == 0x0002C0, "Member 'UHudCustomApplySelect_C::bIsExit' has a wrong offset!");

}

