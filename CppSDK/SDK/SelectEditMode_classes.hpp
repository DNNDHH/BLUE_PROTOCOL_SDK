#pragma once

 

// Package: SelectEditMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SelectEditMode.SelectEditMode_C
// 0x0078 (0x02F0 - 0x0278)
class USelectEditMode_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnEdit;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnEnd;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnPreset;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_1;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPresetLoad;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EditNow;                                           // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnExitEditMode;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectedBtn;                                       // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnPresetLoad__DelegateSignature();
	void EditNow__DelegateSignature();
	void OnExitEditMode__DelegateSignature();
	void ExecuteUbergraph_SelectEditMode(int32 EntryPoint);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__BtnEnd_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__BtnPreset_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__BtnEdit_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelectEditMode_C">();
	}
	static class USelectEditMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectEditMode_C>();
	}
};
static_assert(alignof(USelectEditMode_C) == 0x000008, "Wrong alignment on USelectEditMode_C");
static_assert(sizeof(USelectEditMode_C) == 0x0002F0, "Wrong size on USelectEditMode_C");
static_assert(offsetof(USelectEditMode_C, UberGraphFrame) == 0x000278, "Member 'USelectEditMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USelectEditMode_C, AnimOut) == 0x000280, "Member 'USelectEditMode_C::AnimOut' has a wrong offset!");
static_assert(offsetof(USelectEditMode_C, AnimIn) == 0x000288, "Member 'USelectEditMode_C::AnimIn' has a wrong offset!");
static_assert(offsetof(USelectEditMode_C, BtnEdit) == 0x000290, "Member 'USelectEditMode_C::BtnEdit' has a wrong offset!");
static_assert(offsetof(USelectEditMode_C, BtnEnd) == 0x000298, "Member 'USelectEditMode_C::BtnEnd' has a wrong offset!");
static_assert(offsetof(USelectEditMode_C, BtnPreset) == 0x0002A0, "Member 'USelectEditMode_C::BtnPreset' has a wrong offset!");
static_assert(offsetof(USelectEditMode_C, Image_103) == 0x0002A8, "Member 'USelectEditMode_C::Image_103' has a wrong offset!");
static_assert(offsetof(USelectEditMode_C, UIBlocker_1) == 0x0002B0, "Member 'USelectEditMode_C::UIBlocker_1' has a wrong offset!");
static_assert(offsetof(USelectEditMode_C, OnPresetLoad) == 0x0002B8, "Member 'USelectEditMode_C::OnPresetLoad' has a wrong offset!");
static_assert(offsetof(USelectEditMode_C, EditNow) == 0x0002C8, "Member 'USelectEditMode_C::EditNow' has a wrong offset!");
static_assert(offsetof(USelectEditMode_C, OnExitEditMode) == 0x0002D8, "Member 'USelectEditMode_C::OnExitEditMode' has a wrong offset!");
static_assert(offsetof(USelectEditMode_C, SelectedBtn) == 0x0002E8, "Member 'USelectEditMode_C::SelectedBtn' has a wrong offset!");

}

