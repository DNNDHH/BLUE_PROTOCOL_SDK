#pragma once

 

// Package: StepListItem_Gasha

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepListItem_Gasha.StepListItem_Gasha_C
// 0x0530 (0x07A8 - 0x0278)
class UStepListItem_Gasha_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimSelect;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         BtnId;                                             // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_582E[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBtnClicked;                                      // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FButtonStyle                           BtnOn;                                             // 0x02B0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           BtnOff;                                            // 0x0528(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsSelected;                                        // 0x07A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnBtnClicked__DelegateSignature(int32 Param_BtnId);
	void ExecuteUbergraph_StepListItem_Gasha(int32 EntryPoint);
	void BndEvt__StepListItem_Gasha_Btn1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__StepListItem_Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetBtnText(int32 Param_BtnId);
	void GetBtnText(int32* TextId);
	void SetBtnSelected(bool bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepListItem_Gasha_C">();
	}
	static class UStepListItem_Gasha_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepListItem_Gasha_C>();
	}
};
static_assert(alignof(UStepListItem_Gasha_C) == 0x000008, "Wrong alignment on UStepListItem_Gasha_C");
static_assert(sizeof(UStepListItem_Gasha_C) == 0x0007A8, "Wrong size on UStepListItem_Gasha_C");
static_assert(offsetof(UStepListItem_Gasha_C, UberGraphFrame) == 0x000278, "Member 'UStepListItem_Gasha_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStepListItem_Gasha_C, AnimSelect) == 0x000280, "Member 'UStepListItem_Gasha_C::AnimSelect' has a wrong offset!");
static_assert(offsetof(UStepListItem_Gasha_C, Btn1) == 0x000288, "Member 'UStepListItem_Gasha_C::Btn1' has a wrong offset!");
static_assert(offsetof(UStepListItem_Gasha_C, Txt1) == 0x000290, "Member 'UStepListItem_Gasha_C::Txt1' has a wrong offset!");
static_assert(offsetof(UStepListItem_Gasha_C, BtnId) == 0x000298, "Member 'UStepListItem_Gasha_C::BtnId' has a wrong offset!");
static_assert(offsetof(UStepListItem_Gasha_C, OnBtnClicked) == 0x0002A0, "Member 'UStepListItem_Gasha_C::OnBtnClicked' has a wrong offset!");
static_assert(offsetof(UStepListItem_Gasha_C, BtnOn) == 0x0002B0, "Member 'UStepListItem_Gasha_C::BtnOn' has a wrong offset!");
static_assert(offsetof(UStepListItem_Gasha_C, BtnOff) == 0x000528, "Member 'UStepListItem_Gasha_C::BtnOff' has a wrong offset!");
static_assert(offsetof(UStepListItem_Gasha_C, IsSelected) == 0x0007A0, "Member 'UStepListItem_Gasha_C::IsSelected' has a wrong offset!");

}

