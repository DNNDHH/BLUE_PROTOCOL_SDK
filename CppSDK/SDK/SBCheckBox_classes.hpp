#pragma once

 

// Package: SBCheckBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBCheckBox.SBCheckBox_C
// 0x0038 (0x07E8 - 0x07B0)
class USBCheckBox_C : public USBCheckBoxBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnHandledGetFocus;                                 // 0x07B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHandledLostFocus;                                // 0x07C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHandledPressOk;                                  // 0x07D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnHandledGetFocus__DelegateSignature();
	void OnHandledLostFocus__DelegateSignature();
	void OnHandledPressOk__DelegateSignature();
	void ExecuteUbergraph_SBCheckBox(int32 EntryPoint);
	void OnPressOk();
	void OnLostFocus();
	void OnGetFocus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBCheckBox_C">();
	}
	static class USBCheckBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBCheckBox_C>();
	}
};
static_assert(alignof(USBCheckBox_C) == 0x000008, "Wrong alignment on USBCheckBox_C");
static_assert(sizeof(USBCheckBox_C) == 0x0007E8, "Wrong size on USBCheckBox_C");
static_assert(offsetof(USBCheckBox_C, UberGraphFrame) == 0x0007B0, "Member 'USBCheckBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USBCheckBox_C, OnHandledGetFocus) == 0x0007B8, "Member 'USBCheckBox_C::OnHandledGetFocus' has a wrong offset!");
static_assert(offsetof(USBCheckBox_C, OnHandledLostFocus) == 0x0007C8, "Member 'USBCheckBox_C::OnHandledLostFocus' has a wrong offset!");
static_assert(offsetof(USBCheckBox_C, OnHandledPressOk) == 0x0007D8, "Member 'USBCheckBox_C::OnHandledPressOk' has a wrong offset!");

}

