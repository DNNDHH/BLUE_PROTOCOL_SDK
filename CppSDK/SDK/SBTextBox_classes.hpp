#pragma once

 

// Package: SBTextBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBTextBox.SBTextBox_C
// 0x0038 (0x0B00 - 0x0AC8)
class USBTextBox_C final : public USBTextBoxBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnHandledGetFocus;                                 // 0x0AD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHandledLostFocus;                                // 0x0AE0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHandledPressOk;                                  // 0x0AF0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnHandledGetFocus__DelegateSignature();
	void OnHandledLostFocus__DelegateSignature();
	void OnHandledPressOk__DelegateSignature();
	void ExecuteUbergraph_SBTextBox(int32 EntryPoint);
	void OnPressOk();
	void OnLostFocus();
	void OnGetFocus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBTextBox_C">();
	}
	static class USBTextBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBTextBox_C>();
	}
};
static_assert(alignof(USBTextBox_C) == 0x000008, "Wrong alignment on USBTextBox_C");
static_assert(sizeof(USBTextBox_C) == 0x000B00, "Wrong size on USBTextBox_C");
static_assert(offsetof(USBTextBox_C, UberGraphFrame) == 0x000AC8, "Member 'USBTextBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USBTextBox_C, OnHandledGetFocus) == 0x000AD0, "Member 'USBTextBox_C::OnHandledGetFocus' has a wrong offset!");
static_assert(offsetof(USBTextBox_C, OnHandledLostFocus) == 0x000AE0, "Member 'USBTextBox_C::OnHandledLostFocus' has a wrong offset!");
static_assert(offsetof(USBTextBox_C, OnHandledPressOk) == 0x000AF0, "Member 'USBTextBox_C::OnHandledPressOk' has a wrong offset!");

}

