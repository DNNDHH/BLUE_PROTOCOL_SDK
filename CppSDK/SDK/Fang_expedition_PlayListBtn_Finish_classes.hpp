#pragma once

 

// Package: Fang_expedition_PlayListBtn_Finish

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C
// 0x0038 (0x02B0 - 0x0278)
class UFang_expedition_PlayListBtn_Finish_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Btn;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonEff;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_42;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClick;                                     // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClick__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_PlayListBtn_Finish(int32 EntryPoint);
	void BndEvt__Fang_expedition_PlayListBtn_Finish_SBButton_C_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_PlayListBtn_Finish_C">();
	}
	static class UFang_expedition_PlayListBtn_Finish_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_PlayListBtn_Finish_C>();
	}
};
static_assert(alignof(UFang_expedition_PlayListBtn_Finish_C) == 0x000008, "Wrong alignment on UFang_expedition_PlayListBtn_Finish_C");
static_assert(sizeof(UFang_expedition_PlayListBtn_Finish_C) == 0x0002B0, "Wrong size on UFang_expedition_PlayListBtn_Finish_C");
static_assert(offsetof(UFang_expedition_PlayListBtn_Finish_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_PlayListBtn_Finish_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListBtn_Finish_C, Anm_Btn) == 0x000280, "Member 'UFang_expedition_PlayListBtn_Finish_C::Anm_Btn' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListBtn_Finish_C, Base) == 0x000288, "Member 'UFang_expedition_PlayListBtn_Finish_C::Base' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListBtn_Finish_C, ButtonEff) == 0x000290, "Member 'UFang_expedition_PlayListBtn_Finish_C::ButtonEff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListBtn_Finish_C, SBButton_C_42) == 0x000298, "Member 'UFang_expedition_PlayListBtn_Finish_C::SBButton_C_42' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListBtn_Finish_C, OnButtonClick) == 0x0002A0, "Member 'UFang_expedition_PlayListBtn_Finish_C::OnButtonClick' has a wrong offset!");

}

