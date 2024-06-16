#pragma once

 

// Package: CmnBack01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBack01.CmnBack01_C
// 0x0030 (0x02A8 - 0x0278)
class UCmnBack01_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnClose;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtEsc;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventClicked;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EventClicked__DelegateSignature();
	void ExecuteUbergraph_CmnBack01(int32 EntryPoint);
	void CustomEvent_0();
	void BndEvt__BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void UpdateEscText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBack01_C">();
	}
	static class UCmnBack01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBack01_C>();
	}
};
static_assert(alignof(UCmnBack01_C) == 0x000008, "Wrong alignment on UCmnBack01_C");
static_assert(sizeof(UCmnBack01_C) == 0x0002A8, "Wrong size on UCmnBack01_C");
static_assert(offsetof(UCmnBack01_C, UberGraphFrame) == 0x000278, "Member 'UCmnBack01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnBack01_C, BtnClose) == 0x000280, "Member 'UCmnBack01_C::BtnClose' has a wrong offset!");
static_assert(offsetof(UCmnBack01_C, Image_4) == 0x000288, "Member 'UCmnBack01_C::Image_4' has a wrong offset!");
static_assert(offsetof(UCmnBack01_C, TxtEsc) == 0x000290, "Member 'UCmnBack01_C::TxtEsc' has a wrong offset!");
static_assert(offsetof(UCmnBack01_C, EventClicked) == 0x000298, "Member 'UCmnBack01_C::EventClicked' has a wrong offset!");

}

