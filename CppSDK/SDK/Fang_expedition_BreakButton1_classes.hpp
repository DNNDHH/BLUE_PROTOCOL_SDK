#pragma once

 

// Package: Fang_expedition_BreakButton1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C
// 0x0040 (0x02B8 - 0x0278)
class UFang_expedition_BreakButton1_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CmnBtn16;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CountText;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedImage;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextBg;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressButton;                                     // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPressButton__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_BreakButton1(int32 EntryPoint);
	void BndEvt__Fang_expedition_BreakButton1_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void SetCount(int32 Count);
	void SetButtonEnabled(bool Enabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_BreakButton1_C">();
	}
	static class UFang_expedition_BreakButton1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_BreakButton1_C>();
	}
};
static_assert(alignof(UFang_expedition_BreakButton1_C) == 0x000008, "Wrong alignment on UFang_expedition_BreakButton1_C");
static_assert(sizeof(UFang_expedition_BreakButton1_C) == 0x0002B8, "Wrong size on UFang_expedition_BreakButton1_C");
static_assert(offsetof(UFang_expedition_BreakButton1_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_BreakButton1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton1_C, BG) == 0x000280, "Member 'UFang_expedition_BreakButton1_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton1_C, CmnBtn16) == 0x000288, "Member 'UFang_expedition_BreakButton1_C::CmnBtn16' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton1_C, CountText) == 0x000290, "Member 'UFang_expedition_BreakButton1_C::CountText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton1_C, SelectedImage) == 0x000298, "Member 'UFang_expedition_BreakButton1_C::SelectedImage' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton1_C, TextBg) == 0x0002A0, "Member 'UFang_expedition_BreakButton1_C::TextBg' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton1_C, OnPressButton) == 0x0002A8, "Member 'UFang_expedition_BreakButton1_C::OnPressButton' has a wrong offset!");

}

