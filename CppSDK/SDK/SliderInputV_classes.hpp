#pragma once

 

// Package: SliderInputV

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SliderInputV.SliderInputV_C
// 0x0060 (0x02D8 - 0x0278)
class USliderInputV_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                       EditableTextBox_0;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MinClamp;                                          // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MaxClamp;                                          // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53AD[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChange;                                          // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bFixedValue;                                       // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bMoveClipedNeary;                                  // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_53AE[0x2];                                     // 0x02BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BeforeValue;                                       // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChanged;                                         // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Changed;                                           // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnChange__DelegateSignature(int32 NewValue, float Ratio);
	void OnChanged__DelegateSignature(int32 Param_Value, float Ratio);
	void ExecuteUbergraph_SliderInputV(int32 EntryPoint);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_92_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void ClipedNealy();
	void BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__Slider_K2Node_ComponentBoundEvent_84_OnFloatValueChangedEvent__DelegateSignature(float Param_Value);
	void SetValue(int32 NewValue);
	void SetRatio(float Ratio);

	void GetValue(int32* Param_Value) const;
	void GetRatio(float* Ratio) const;
	void IsEqualBefore(bool* Equal) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SliderInputV_C">();
	}
	static class USliderInputV_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USliderInputV_C>();
	}
};
static_assert(alignof(USliderInputV_C) == 0x000008, "Wrong alignment on USliderInputV_C");
static_assert(sizeof(USliderInputV_C) == 0x0002D8, "Wrong size on USliderInputV_C");
static_assert(offsetof(USliderInputV_C, UberGraphFrame) == 0x000278, "Member 'USliderInputV_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, EditableTextBox_0) == 0x000280, "Member 'USliderInputV_C::EditableTextBox_0' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, Image_0) == 0x000288, "Member 'USliderInputV_C::Image_0' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, Slider) == 0x000290, "Member 'USliderInputV_C::Slider' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, MinClamp) == 0x000298, "Member 'USliderInputV_C::MinClamp' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, MaxClamp) == 0x00029C, "Member 'USliderInputV_C::MaxClamp' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, Value) == 0x0002A0, "Member 'USliderInputV_C::Value' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, OnChange) == 0x0002A8, "Member 'USliderInputV_C::OnChange' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, bFixedValue) == 0x0002B8, "Member 'USliderInputV_C::bFixedValue' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, bMoveClipedNeary) == 0x0002B9, "Member 'USliderInputV_C::bMoveClipedNeary' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, BeforeValue) == 0x0002BC, "Member 'USliderInputV_C::BeforeValue' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, OnChanged) == 0x0002C0, "Member 'USliderInputV_C::OnChanged' has a wrong offset!");
static_assert(offsetof(USliderInputV_C, Changed) == 0x0002D0, "Member 'USliderInputV_C::Changed' has a wrong offset!");

}

