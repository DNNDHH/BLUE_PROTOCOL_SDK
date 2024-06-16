#pragma once

 

// Package: SBButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBButton.SBButton_C
// 0x0038 (0x0498 - 0x0460)
class USBButton_C : public USBButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnHandledGetFocus;                                 // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHandledLostFocus;                                // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHandledPressOk;                                  // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnHandledGetFocus__DelegateSignature();
	void OnHandledLostFocus__DelegateSignature();
	void OnHandledPressOk__DelegateSignature();
	void ExecuteUbergraph_SBButton(int32 EntryPoint);
	void OnPressOk();
	void OnLostFocus();
	void OnGetFocus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBButton_C">();
	}
	static class USBButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBButton_C>();
	}
};
static_assert(alignof(USBButton_C) == 0x000008, "Wrong alignment on USBButton_C");
static_assert(sizeof(USBButton_C) == 0x000498, "Wrong size on USBButton_C");
static_assert(offsetof(USBButton_C, UberGraphFrame) == 0x000460, "Member 'USBButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USBButton_C, OnHandledGetFocus) == 0x000468, "Member 'USBButton_C::OnHandledGetFocus' has a wrong offset!");
static_assert(offsetof(USBButton_C, OnHandledLostFocus) == 0x000478, "Member 'USBButton_C::OnHandledLostFocus' has a wrong offset!");
static_assert(offsetof(USBButton_C, OnHandledPressOk) == 0x000488, "Member 'USBButton_C::OnHandledPressOk' has a wrong offset!");

}

