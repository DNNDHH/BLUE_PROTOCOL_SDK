#pragma once

 

// Package: UMG_MatchingMenu_EntryCondition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_EntryCondition.UMG_MatchingMenu_EntryCondition_C
// 0x0050 (0x0300 - 0x02B0)
class UUMG_MatchingMenu_EntryCondition_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_96;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         EntryConditionId;                                  // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x02F4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bInAnimEnd;                                        // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_UMG_MatchingMenu_EntryCondition(int32 EntryPoint);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void BndEvt__UMG_MatchingMenu_EntryCondition_Button_96_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnPress_Cancel();
	void BndEvt__UMG_MatchingMenu_EntryCondition_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_EntryCondition_C">();
	}
	static class UUMG_MatchingMenu_EntryCondition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_EntryCondition_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_EntryCondition_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_EntryCondition_C");
static_assert(sizeof(UUMG_MatchingMenu_EntryCondition_C) == 0x000300, "Wrong size on UUMG_MatchingMenu_EntryCondition_C");
static_assert(offsetof(UUMG_MatchingMenu_EntryCondition_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_MatchingMenu_EntryCondition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryCondition_C, AnimOut) == 0x0002B8, "Member 'UUMG_MatchingMenu_EntryCondition_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryCondition_C, AnimIn) == 0x0002C0, "Member 'UUMG_MatchingMenu_EntryCondition_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryCondition_C, Button_96) == 0x0002C8, "Member 'UUMG_MatchingMenu_EntryCondition_C::Button_96' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryCondition_C, CmnClose02) == 0x0002D0, "Member 'UUMG_MatchingMenu_EntryCondition_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryCondition_C, GridPanel) == 0x0002D8, "Member 'UUMG_MatchingMenu_EntryCondition_C::GridPanel' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryCondition_C, OnClose) == 0x0002E0, "Member 'UUMG_MatchingMenu_EntryCondition_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryCondition_C, EntryConditionId) == 0x0002F0, "Member 'UUMG_MatchingMenu_EntryCondition_C::EntryConditionId' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryCondition_C, Position) == 0x0002F4, "Member 'UUMG_MatchingMenu_EntryCondition_C::Position' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryCondition_C, bInAnimEnd) == 0x0002FC, "Member 'UUMG_MatchingMenu_EntryCondition_C::bInAnimEnd' has a wrong offset!");

}

