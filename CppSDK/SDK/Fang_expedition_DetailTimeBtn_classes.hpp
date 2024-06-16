#pragma once

 

// Package: Fang_expedition_DetailTimeBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailTimeBtn.Fang_expedition_DetailTimeBtn_C
// 0x0520 (0x0798 - 0x0278)
class UFang_expedition_DetailTimeBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            TimeButton;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FButtonStyle                           BtnNormal;                                         // 0x02A0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           BtnSelected;                                       // 0x0518(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bBtnSelected;                                      // 0x0790(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_DetailTimeBtn(int32 EntryPoint);
	void BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Fang_expedition_DetailTimeBtn_TimeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetText(const class FText& TimeText);
	void SetBtnSelected(bool Param_BtnSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailTimeBtn_C">();
	}
	static class UFang_expedition_DetailTimeBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailTimeBtn_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailTimeBtn_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailTimeBtn_C");
static_assert(sizeof(UFang_expedition_DetailTimeBtn_C) == 0x000798, "Wrong size on UFang_expedition_DetailTimeBtn_C");
static_assert(offsetof(UFang_expedition_DetailTimeBtn_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DetailTimeBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailTimeBtn_C, TimeButton) == 0x000280, "Member 'UFang_expedition_DetailTimeBtn_C::TimeButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailTimeBtn_C, Txt1) == 0x000288, "Member 'UFang_expedition_DetailTimeBtn_C::Txt1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailTimeBtn_C, EventOnClicked) == 0x000290, "Member 'UFang_expedition_DetailTimeBtn_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailTimeBtn_C, BtnNormal) == 0x0002A0, "Member 'UFang_expedition_DetailTimeBtn_C::BtnNormal' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailTimeBtn_C, BtnSelected) == 0x000518, "Member 'UFang_expedition_DetailTimeBtn_C::BtnSelected' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailTimeBtn_C, bBtnSelected) == 0x000790, "Member 'UFang_expedition_DetailTimeBtn_C::bBtnSelected' has a wrong offset!");

}

