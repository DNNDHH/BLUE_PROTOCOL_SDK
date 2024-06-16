#pragma once

 

// Package: SoftwareNumericKeypad

#include "Basic.hpp"

#include "SecondPasswordSenderStartType_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SoftwareNumericKeypad.SoftwareNumericKeypad_C
// 0x0128 (0x03D8 - 0x02B0)
class USoftwareNumericKeypad_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Button_10;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_11;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_12;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_20;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_21;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_22;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_30;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_00;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_01;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_02;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_Delete;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_enter;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBackSpace;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_10;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_11;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_12;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_20;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_21;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_22;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_30;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_00;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_01;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_02;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_digit;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_input;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtBtnEnter;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedEnter;                                    // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 Numbers;                                           // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 Input;                                             // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Display;                                           // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         DigitMax;                                          // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         DigitMin;                                          // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          HidePassword;                                      // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESecondPasswordSenderStartType                Role;                                              // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClickedEnter__DelegateSignature();
	void ExecuteUbergraph_SoftwareNumericKeypad(int32 EntryPoint);
	void BndEvt__Button_00_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_00_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_01_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_01_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_02_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_02_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_10_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_10_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_11_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_11_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_12_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_12_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_20_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_20_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_21_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_21_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_22_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_22_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_delete_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_delete_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_enter_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_enter_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_delete_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_22_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_21_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_20_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_12_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_11_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_10_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_02_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_01_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_00_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_enter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetNumber();
	void GetText(int32 Param_Index, class UTextBlock** Text);
	void InputNumber(int32 Param_Index);
	void DeleteLastNumber();
	void SetTextInput();
	void GetPassword(class FString* Password);
	void UpdateButtonState();
	void ClearPassword();
	void SetTextDigit();
	void SetMode(bool Param_HidePassword);
	void SetRole(ESecondPasswordSenderStartType InRole);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SoftwareNumericKeypad_C">();
	}
	static class USoftwareNumericKeypad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoftwareNumericKeypad_C>();
	}
};
static_assert(alignof(USoftwareNumericKeypad_C) == 0x000008, "Wrong alignment on USoftwareNumericKeypad_C");
static_assert(sizeof(USoftwareNumericKeypad_C) == 0x0003D8, "Wrong size on USoftwareNumericKeypad_C");
static_assert(offsetof(USoftwareNumericKeypad_C, UberGraphFrame) == 0x0002B0, "Member 'USoftwareNumericKeypad_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_10) == 0x0002B8, "Member 'USoftwareNumericKeypad_C::Button_10' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_11) == 0x0002C0, "Member 'USoftwareNumericKeypad_C::Button_11' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_12) == 0x0002C8, "Member 'USoftwareNumericKeypad_C::Button_12' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_20) == 0x0002D0, "Member 'USoftwareNumericKeypad_C::Button_20' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_21) == 0x0002D8, "Member 'USoftwareNumericKeypad_C::Button_21' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_22) == 0x0002E0, "Member 'USoftwareNumericKeypad_C::Button_22' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_30) == 0x0002E8, "Member 'USoftwareNumericKeypad_C::Button_30' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_00) == 0x0002F0, "Member 'USoftwareNumericKeypad_C::Button_00' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_01) == 0x0002F8, "Member 'USoftwareNumericKeypad_C::Button_01' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_02) == 0x000300, "Member 'USoftwareNumericKeypad_C::Button_02' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_Delete) == 0x000308, "Member 'USoftwareNumericKeypad_C::Button_Delete' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Button_enter) == 0x000310, "Member 'USoftwareNumericKeypad_C::Button_enter' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, ImageBackSpace) == 0x000318, "Member 'USoftwareNumericKeypad_C::ImageBackSpace' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_10) == 0x000320, "Member 'USoftwareNumericKeypad_C::TextBlock_10' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_11) == 0x000328, "Member 'USoftwareNumericKeypad_C::TextBlock_11' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_12) == 0x000330, "Member 'USoftwareNumericKeypad_C::TextBlock_12' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_20) == 0x000338, "Member 'USoftwareNumericKeypad_C::TextBlock_20' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_21) == 0x000340, "Member 'USoftwareNumericKeypad_C::TextBlock_21' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_22) == 0x000348, "Member 'USoftwareNumericKeypad_C::TextBlock_22' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_30) == 0x000350, "Member 'USoftwareNumericKeypad_C::TextBlock_30' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_00) == 0x000358, "Member 'USoftwareNumericKeypad_C::TextBlock_00' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_01) == 0x000360, "Member 'USoftwareNumericKeypad_C::TextBlock_01' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_02) == 0x000368, "Member 'USoftwareNumericKeypad_C::TextBlock_02' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_digit) == 0x000370, "Member 'USoftwareNumericKeypad_C::TextBlock_digit' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TextBlock_input) == 0x000378, "Member 'USoftwareNumericKeypad_C::TextBlock_input' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, TxtBtnEnter) == 0x000380, "Member 'USoftwareNumericKeypad_C::TxtBtnEnter' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, OnClickedEnter) == 0x000388, "Member 'USoftwareNumericKeypad_C::OnClickedEnter' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Numbers) == 0x000398, "Member 'USoftwareNumericKeypad_C::Numbers' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Input) == 0x0003A8, "Member 'USoftwareNumericKeypad_C::Input' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Display) == 0x0003B8, "Member 'USoftwareNumericKeypad_C::Display' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, DigitMax) == 0x0003C8, "Member 'USoftwareNumericKeypad_C::DigitMax' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, DigitMin) == 0x0003CC, "Member 'USoftwareNumericKeypad_C::DigitMin' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, HidePassword) == 0x0003D0, "Member 'USoftwareNumericKeypad_C::HidePassword' has a wrong offset!");
static_assert(offsetof(USoftwareNumericKeypad_C, Role) == 0x0003D1, "Member 'USoftwareNumericKeypad_C::Role' has a wrong offset!");

}

