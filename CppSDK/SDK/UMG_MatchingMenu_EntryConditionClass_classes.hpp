#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionClass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_EntryConditionClass.UMG_MatchingMenu_EntryConditionClass_C
// 0x0068 (0x0318 - 0x02B0)
class UUMG_MatchingMenu_EntryConditionClass_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           Box_ClassList;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Btn_Back;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          Btn_Close;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionClassItem_C* UMG_MatchingMenu_EntryConditionClassItem;          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionClassItem_C* UMG_MatchingMenu_EntryConditionClassItem_552;      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxWindow;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         EntryConditionId;                                  // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x030C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bInAnimEnd;                                        // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClass(int32 EntryPoint);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void SetClass(const TArray<ESBClassType>& Param_Class);
	void BndEvt__UMG_MatchingMenu_EntryCondition_Button_96_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnPress_Cancel();
	void BndEvt__UMG_MatchingMenu_EntryCondition_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void Construct();
	void OnRep_Class();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_EntryConditionClass_C">();
	}
	static class UUMG_MatchingMenu_EntryConditionClass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_EntryConditionClass_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_EntryConditionClass_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_EntryConditionClass_C");
static_assert(sizeof(UUMG_MatchingMenu_EntryConditionClass_C) == 0x000318, "Wrong size on UUMG_MatchingMenu_EntryConditionClass_C");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, AnimOut) == 0x0002B8, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, AnimIn) == 0x0002C0, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, Box_ClassList) == 0x0002C8, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::Box_ClassList' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, Btn_Back) == 0x0002D0, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::Btn_Back' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, Btn_Close) == 0x0002D8, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::Btn_Close' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, UMG_MatchingMenu_EntryConditionClassItem) == 0x0002E0, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::UMG_MatchingMenu_EntryConditionClassItem' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, UMG_MatchingMenu_EntryConditionClassItem_552) == 0x0002E8, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::UMG_MatchingMenu_EntryConditionClassItem_552' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, VerticalBoxWindow) == 0x0002F0, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::VerticalBoxWindow' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, OnClose) == 0x0002F8, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, EntryConditionId) == 0x000308, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::EntryConditionId' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, Position) == 0x00030C, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::Position' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionClass_C, bInAnimEnd) == 0x000314, "Member 'UUMG_MatchingMenu_EntryConditionClass_C::bInAnimEnd' has a wrong offset!");

}

