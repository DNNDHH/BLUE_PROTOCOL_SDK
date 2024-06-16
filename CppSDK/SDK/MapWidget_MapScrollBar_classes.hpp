#pragma once

 

// Package: MapWidget_MapScrollBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_MapScrollBar.MapWidget_MapScrollBar_C
// 0x0080 (0x02F8 - 0x0278)
class UMapWidget_MapScrollBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USlider*                                SliderH;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                SliderV;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         OldSliderHValue;                                   // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewSliderHValue;                                   // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OldSliderVValue;                                   // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewSliderVValue;                                   // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SliderHMinValue;                                   // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SliderHMaxValue;                                   // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SliderVMinValue;                                   // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SliderVMaxValue;                                   // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSliderHValueChanged;                             // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSliderVValueChanged;                             // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMouseCaptureBegin;                               // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMouseCaptureEnd;                                 // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESlateBrushDrawType                           NewVar_0;                                          // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSliderHValueChanged__DelegateSignature(float InValue);
	void OnSliderVValueChanged__DelegateSignature(float InValue);
	void OnMouseCaptureBegin__DelegateSignature();
	void OnMouseCaptureEnd__DelegateSignature();
	void ExecuteUbergraph_MapWidget_MapScrollBar(int32 EntryPoint);
	void BndEvt__SliderV_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__SliderV_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__SliderH_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__SliderH_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void SetSliderHValue(float InValue);
	void SetSliderHMinValue(float InValue);
	void SetSliderHMaxValue(float InValue);
	void SetSliderHMinAndMaxValue(float InMinValue, float InMaxValue);
	void SetSliderVValue(float InValue);
	void SetSliderVMinValue(float InValue);
	void SetSliderVMaxValue(float InValue);
	void SetSliderVMinAndMaxValue(float InMinValue, float InMaxValue);
	void GetSliderHValue(float* OutValue);
	void GetSliderHMinValue(float* OutValue);
	void GetSliderHMaxValue(float* OutValue);
	void GetSliderHMinAndMaxValue(float* OutMinValue, float* OutMaxValue);
	void GetSliderVValue(float* OutValue);
	void GetSliderVMinValue(float* OutValue);
	void GetSliderVMaxValue(float* OutValue);
	void GetSliderVMinAndMaxValue(float* OutMinValue, float* OutMaxValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_MapScrollBar_C">();
	}
	static class UMapWidget_MapScrollBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_MapScrollBar_C>();
	}
};
static_assert(alignof(UMapWidget_MapScrollBar_C) == 0x000008, "Wrong alignment on UMapWidget_MapScrollBar_C");
static_assert(sizeof(UMapWidget_MapScrollBar_C) == 0x0002F8, "Wrong size on UMapWidget_MapScrollBar_C");
static_assert(offsetof(UMapWidget_MapScrollBar_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_MapScrollBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, SliderH) == 0x000280, "Member 'UMapWidget_MapScrollBar_C::SliderH' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, SliderV) == 0x000288, "Member 'UMapWidget_MapScrollBar_C::SliderV' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, OldSliderHValue) == 0x000290, "Member 'UMapWidget_MapScrollBar_C::OldSliderHValue' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, NewSliderHValue) == 0x000294, "Member 'UMapWidget_MapScrollBar_C::NewSliderHValue' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, OldSliderVValue) == 0x000298, "Member 'UMapWidget_MapScrollBar_C::OldSliderVValue' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, NewSliderVValue) == 0x00029C, "Member 'UMapWidget_MapScrollBar_C::NewSliderVValue' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, SliderHMinValue) == 0x0002A0, "Member 'UMapWidget_MapScrollBar_C::SliderHMinValue' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, SliderHMaxValue) == 0x0002A4, "Member 'UMapWidget_MapScrollBar_C::SliderHMaxValue' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, SliderVMinValue) == 0x0002A8, "Member 'UMapWidget_MapScrollBar_C::SliderVMinValue' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, SliderVMaxValue) == 0x0002AC, "Member 'UMapWidget_MapScrollBar_C::SliderVMaxValue' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, OnSliderHValueChanged) == 0x0002B0, "Member 'UMapWidget_MapScrollBar_C::OnSliderHValueChanged' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, OnSliderVValueChanged) == 0x0002C0, "Member 'UMapWidget_MapScrollBar_C::OnSliderVValueChanged' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, OnMouseCaptureBegin) == 0x0002D0, "Member 'UMapWidget_MapScrollBar_C::OnMouseCaptureBegin' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, OnMouseCaptureEnd) == 0x0002E0, "Member 'UMapWidget_MapScrollBar_C::OnMouseCaptureEnd' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapScrollBar_C, NewVar_0) == 0x0002F0, "Member 'UMapWidget_MapScrollBar_C::NewVar_0' has a wrong offset!");

}

