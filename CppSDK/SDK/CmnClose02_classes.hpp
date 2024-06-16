#pragma once

 

// Package: CmnClose02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnClose02.CmnClose02_C
// 0x0020 (0x0298 - 0x0278)
class UCmnClose02_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnClose;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClosed__DelegateSignature();
	void ExecuteUbergraph_CmnClose02(int32 EntryPoint);
	void BndEvt__CmnClose01_BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnClose02_C">();
	}
	static class UCmnClose02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnClose02_C>();
	}
};
static_assert(alignof(UCmnClose02_C) == 0x000008, "Wrong alignment on UCmnClose02_C");
static_assert(sizeof(UCmnClose02_C) == 0x000298, "Wrong size on UCmnClose02_C");
static_assert(offsetof(UCmnClose02_C, UberGraphFrame) == 0x000278, "Member 'UCmnClose02_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnClose02_C, BtnClose) == 0x000280, "Member 'UCmnClose02_C::BtnClose' has a wrong offset!");
static_assert(offsetof(UCmnClose02_C, OnClosed) == 0x000288, "Member 'UCmnClose02_C::OnClosed' has a wrong offset!");

}

