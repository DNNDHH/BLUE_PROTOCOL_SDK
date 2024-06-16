#pragma once

 

// Package: Dialog_TacticalAbilityLearning

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C
// 0x0088 (0x0338 - 0x02B0)
class UDialog_TacticalAbilityLearning_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Decide;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_FullScreen;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_SkillIconList;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextDecide;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextDetail;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTitle;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EndAnimIn;                                         // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EndAnimOut;                                        // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBSkillParam>                  ReserveSkillIDList;                                // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsOpen;                                            // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EndAnimIn__DelegateSignature();
	void EndAnimOut__DelegateSignature();
	void ExecuteUbergraph_Dialog_TacticalAbilityLearning(int32 EntryPoint);
	void Destruct();
	void BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void OnPressESC();
	void Construct();
	void BndEvt__TacticalAbilityLearningDialog_Btn_FullScreen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TacticalAbilityLearningDialog_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__TacticalAbilityLearningDialog_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void CustomEvent();
	void UnbindEscapeKey();
	void BindEscapeKey();
	void Setup(TArray<struct FSBSkillParam>& InSkillParam);
	void CreateSkillIcon(int32 InSkillId, int32 InSkillLV, int32 InRow, int32 InColumn);
	void Open();
	void Opened();
	void Close();
	void Closed();
	void PlayAnimationIn();
	void PlayAnimationOut();
	void SetTitleText(const class FText& InText);
	void SetTitleTextTable(class USBTextTableAsset* InTextTable, int32 InTextID);
	void SetDetailText(const class FText& InText);
	void SetDetailTextTable(class USBTextTableAsset* InTextTable, int32 InTextID);
	void SetDecideText(const class FText& InText);
	void SetDecideTextTable(class USBTextTableAsset* InTextTable, int32 InTextID);
	void SetEnableButton(bool bInIsEnabled);
	void SetEnableButtonDecide(bool bInIsEnabled);
	void SetEnableButtonFullScreen(bool bInIsEnabled);
	void SetEnableButtonClose(bool bInIsEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dialog_TacticalAbilityLearning_C">();
	}
	static class UDialog_TacticalAbilityLearning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDialog_TacticalAbilityLearning_C>();
	}
};
static_assert(alignof(UDialog_TacticalAbilityLearning_C) == 0x000008, "Wrong alignment on UDialog_TacticalAbilityLearning_C");
static_assert(sizeof(UDialog_TacticalAbilityLearning_C) == 0x000338, "Wrong size on UDialog_TacticalAbilityLearning_C");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, UberGraphFrame) == 0x0002B0, "Member 'UDialog_TacticalAbilityLearning_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, AnimOut) == 0x0002B8, "Member 'UDialog_TacticalAbilityLearning_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, AnimIn) == 0x0002C0, "Member 'UDialog_TacticalAbilityLearning_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, Btn_Decide) == 0x0002C8, "Member 'UDialog_TacticalAbilityLearning_C::Btn_Decide' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, Btn_FullScreen) == 0x0002D0, "Member 'UDialog_TacticalAbilityLearning_C::Btn_FullScreen' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, CmnClose01) == 0x0002D8, "Member 'UDialog_TacticalAbilityLearning_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, GridPanel_SkillIconList) == 0x0002E0, "Member 'UDialog_TacticalAbilityLearning_C::GridPanel_SkillIconList' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, TextDecide) == 0x0002E8, "Member 'UDialog_TacticalAbilityLearning_C::TextDecide' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, TextDetail) == 0x0002F0, "Member 'UDialog_TacticalAbilityLearning_C::TextDetail' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, TextTitle) == 0x0002F8, "Member 'UDialog_TacticalAbilityLearning_C::TextTitle' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, EndAnimIn) == 0x000300, "Member 'UDialog_TacticalAbilityLearning_C::EndAnimIn' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, EndAnimOut) == 0x000310, "Member 'UDialog_TacticalAbilityLearning_C::EndAnimOut' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, ReserveSkillIDList) == 0x000320, "Member 'UDialog_TacticalAbilityLearning_C::ReserveSkillIDList' has a wrong offset!");
static_assert(offsetof(UDialog_TacticalAbilityLearning_C, IsOpen) == 0x000330, "Member 'UDialog_TacticalAbilityLearning_C::IsOpen' has a wrong offset!");

}

