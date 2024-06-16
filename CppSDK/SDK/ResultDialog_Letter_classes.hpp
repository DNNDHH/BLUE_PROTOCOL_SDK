#pragma once

 

// Package: ResultDialog_Letter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ResultDialog_Letter.ResultDialog_Letter_C
// 0x0080 (0x02F8 - 0x0278)
class UResultDialog_Letter_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Decide;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_FullScreen;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose03_C*                          CmnClose03;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResultRewardList_C*                    LostItemList;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResultRewardList_C*                    SendItemList;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextDecide;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBLost;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBSend;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EndAnimIn;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EndAnimOut;                                        // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsOpen;                                            // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EndAnimIn__DelegateSignature();
	void EndAnimOut__DelegateSignature();
	void ExecuteUbergraph_ResultDialog_Letter(int32 EntryPoint);
	void BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ResultDialog_Letter_Btn_FullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Construct();
	void OnPressESC();
	void BndEvt__ResultDialog_Letter_CmnClose03_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void BndEvt__ResultDialog_Letter_Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void CustomEvent();
	void UnbindEscapeKey();
	void BindEscapeKey();
	void Setup(const struct FSBLetter& InLetter, const struct FSBOverLimit& InOverLimit);
	void SetupLostItem(TArray<struct FOwnItemInfo>& InLostItems, const struct FSBOverLimit& InOverLimit);
	void SetupSendItem(TArray<struct FOwnItemInfo>& InSendItems, int32 InSkyCoin);
	void SetVisibleVBLost(bool Param_IsVisible);
	void SetVisibleVBSend(bool Param_IsVisible);
	void Open();
	void Opened();
	void Close();
	void PlayAnimationIn();
	void PlayAnimationOut();
	void Closed();
	void SetEnableButton(bool bInIsEnabled);
	void SetEnableButtonDecide(bool bInIsEnabled);
	void SetEnableButtonFullScreen(bool bInIsEnabled);
	void SetEnableButtonClose(bool bInIsEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ResultDialog_Letter_C">();
	}
	static class UResultDialog_Letter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResultDialog_Letter_C>();
	}
};
static_assert(alignof(UResultDialog_Letter_C) == 0x000008, "Wrong alignment on UResultDialog_Letter_C");
static_assert(sizeof(UResultDialog_Letter_C) == 0x0002F8, "Wrong size on UResultDialog_Letter_C");
static_assert(offsetof(UResultDialog_Letter_C, UberGraphFrame) == 0x000278, "Member 'UResultDialog_Letter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, AnimOut) == 0x000280, "Member 'UResultDialog_Letter_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, AnimIn) == 0x000288, "Member 'UResultDialog_Letter_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, Btn_Decide) == 0x000290, "Member 'UResultDialog_Letter_C::Btn_Decide' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, Btn_FullScreen) == 0x000298, "Member 'UResultDialog_Letter_C::Btn_FullScreen' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, CmnClose03) == 0x0002A0, "Member 'UResultDialog_Letter_C::CmnClose03' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, LostItemList) == 0x0002A8, "Member 'UResultDialog_Letter_C::LostItemList' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, SendItemList) == 0x0002B0, "Member 'UResultDialog_Letter_C::SendItemList' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, TextDecide) == 0x0002B8, "Member 'UResultDialog_Letter_C::TextDecide' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, VBLost) == 0x0002C0, "Member 'UResultDialog_Letter_C::VBLost' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, VBSend) == 0x0002C8, "Member 'UResultDialog_Letter_C::VBSend' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, EndAnimIn) == 0x0002D0, "Member 'UResultDialog_Letter_C::EndAnimIn' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, EndAnimOut) == 0x0002E0, "Member 'UResultDialog_Letter_C::EndAnimOut' has a wrong offset!");
static_assert(offsetof(UResultDialog_Letter_C, IsOpen) == 0x0002F0, "Member 'UResultDialog_Letter_C::IsOpen' has a wrong offset!");

}

