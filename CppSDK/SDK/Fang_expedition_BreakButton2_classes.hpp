#pragma once

 

// Package: Fang_expedition_BreakButton2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_BreakButton2.Fang_expedition_BreakButton2_C
// 0x0048 (0x02C0 - 0x0278)
class UFang_expedition_BreakButton2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CmnBtn16;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedImage;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIconSimple_C*                    TicketImage;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TokenNum;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClick;                                     // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClick__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_BreakButton2(int32 EntryPoint);
	void BndEvt__Fang_expedition_BreakButton2_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Construct();
	void Init();
	void SetButtonEnabled(bool Enabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_BreakButton2_C">();
	}
	static class UFang_expedition_BreakButton2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_BreakButton2_C>();
	}
};
static_assert(alignof(UFang_expedition_BreakButton2_C) == 0x000008, "Wrong alignment on UFang_expedition_BreakButton2_C");
static_assert(sizeof(UFang_expedition_BreakButton2_C) == 0x0002C0, "Wrong size on UFang_expedition_BreakButton2_C");
static_assert(offsetof(UFang_expedition_BreakButton2_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_BreakButton2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton2_C, BG) == 0x000280, "Member 'UFang_expedition_BreakButton2_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton2_C, BG_1) == 0x000288, "Member 'UFang_expedition_BreakButton2_C::BG_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton2_C, CmnBtn16) == 0x000290, "Member 'UFang_expedition_BreakButton2_C::CmnBtn16' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton2_C, SelectedImage) == 0x000298, "Member 'UFang_expedition_BreakButton2_C::SelectedImage' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton2_C, TicketImage) == 0x0002A0, "Member 'UFang_expedition_BreakButton2_C::TicketImage' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton2_C, TokenNum) == 0x0002A8, "Member 'UFang_expedition_BreakButton2_C::TokenNum' has a wrong offset!");
static_assert(offsetof(UFang_expedition_BreakButton2_C, OnButtonClick) == 0x0002B0, "Member 'UFang_expedition_BreakButton2_C::OnButtonClick' has a wrong offset!");

}

