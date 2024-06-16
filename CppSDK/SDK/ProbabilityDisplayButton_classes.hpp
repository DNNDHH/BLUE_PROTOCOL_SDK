#pragma once

 

// Package: ProbabilityDisplayButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplayButton.ProbabilityDisplayButton_C
// 0x0528 (0x07A0 - 0x0278)
class UProbabilityDisplayButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            ProbabilityDisplayButton;                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TextId;                                            // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_948E[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FButtonStyle                           BtnOnStyle;                                        // 0x02A8(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           BtnOffStyle;                                       // 0x0520(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsSelected;                                        // 0x0798(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClick__DelegateSignature();
	void ExecuteUbergraph_ProbabilityDisplayButton(int32 EntryPoint);
	void BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetBtnSelected(bool bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplayButton_C">();
	}
	static class UProbabilityDisplayButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplayButton_C>();
	}
};
static_assert(alignof(UProbabilityDisplayButton_C) == 0x000008, "Wrong alignment on UProbabilityDisplayButton_C");
static_assert(sizeof(UProbabilityDisplayButton_C) == 0x0007A0, "Wrong size on UProbabilityDisplayButton_C");
static_assert(offsetof(UProbabilityDisplayButton_C, UberGraphFrame) == 0x000278, "Member 'UProbabilityDisplayButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplayButton_C, ProbabilityDisplayButton) == 0x000280, "Member 'UProbabilityDisplayButton_C::ProbabilityDisplayButton' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplayButton_C, Txt1) == 0x000288, "Member 'UProbabilityDisplayButton_C::Txt1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplayButton_C, TextId) == 0x000290, "Member 'UProbabilityDisplayButton_C::TextId' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplayButton_C, OnClick) == 0x000298, "Member 'UProbabilityDisplayButton_C::OnClick' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplayButton_C, BtnOnStyle) == 0x0002A8, "Member 'UProbabilityDisplayButton_C::BtnOnStyle' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplayButton_C, BtnOffStyle) == 0x000520, "Member 'UProbabilityDisplayButton_C::BtnOffStyle' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplayButton_C, IsSelected) == 0x000798, "Member 'UProbabilityDisplayButton_C::IsSelected' has a wrong offset!");

}

