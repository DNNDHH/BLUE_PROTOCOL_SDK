#pragma once

 

// Package: MapEditSlider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapEditSlider.MapEditSlider_C
// 0x0058 (0x02D0 - 0x0278)
class UMapEditSlider_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            MinusBtn;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            PlusBtn;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTitle;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextValue;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnValueChanged;                                    // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         InTitleTextID;                                     // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InValue;                                           // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InValueMin;                                        // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InValueMax;                                        // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InStepSize;                                        // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnValueChanged__DelegateSignature(float Value);
	void ExecuteUbergraph_MapEditSlider(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__MapEditSlider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__MapEditSlider_PlusBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MapEditSlider_MinusBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetTitle(int32 InTextID);
	void SetValue(float Param_InValue);
	void SetValueRate(float InRate);
	void SetValueMin(float Param_InValue);
	void SetValueMax(float Param_InValue);
	void SetValueText(float Param_InValue);
	float GetValue();
	float GetValueRate();
	float GetValueMin();
	float GetValueMax();
	float GetValueRange();
	void SetStepSize(float Param_InValue);
	void GetStepSize(float* Step_Size);
	void BtnClickedMinus();
	void BtnClickedPlus();
	void SliderValueChanged(float Param_InValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapEditSlider_C">();
	}
	static class UMapEditSlider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapEditSlider_C>();
	}
};
static_assert(alignof(UMapEditSlider_C) == 0x000008, "Wrong alignment on UMapEditSlider_C");
static_assert(sizeof(UMapEditSlider_C) == 0x0002D0, "Wrong size on UMapEditSlider_C");
static_assert(offsetof(UMapEditSlider_C, UberGraphFrame) == 0x000278, "Member 'UMapEditSlider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapEditSlider_C, MinusBtn) == 0x000280, "Member 'UMapEditSlider_C::MinusBtn' has a wrong offset!");
static_assert(offsetof(UMapEditSlider_C, PlusBtn) == 0x000288, "Member 'UMapEditSlider_C::PlusBtn' has a wrong offset!");
static_assert(offsetof(UMapEditSlider_C, Slider) == 0x000290, "Member 'UMapEditSlider_C::Slider' has a wrong offset!");
static_assert(offsetof(UMapEditSlider_C, TextTitle) == 0x000298, "Member 'UMapEditSlider_C::TextTitle' has a wrong offset!");
static_assert(offsetof(UMapEditSlider_C, TextValue) == 0x0002A0, "Member 'UMapEditSlider_C::TextValue' has a wrong offset!");
static_assert(offsetof(UMapEditSlider_C, OnValueChanged) == 0x0002A8, "Member 'UMapEditSlider_C::OnValueChanged' has a wrong offset!");
static_assert(offsetof(UMapEditSlider_C, InTitleTextID) == 0x0002B8, "Member 'UMapEditSlider_C::InTitleTextID' has a wrong offset!");
static_assert(offsetof(UMapEditSlider_C, InValue) == 0x0002BC, "Member 'UMapEditSlider_C::InValue' has a wrong offset!");
static_assert(offsetof(UMapEditSlider_C, InValueMin) == 0x0002C0, "Member 'UMapEditSlider_C::InValueMin' has a wrong offset!");
static_assert(offsetof(UMapEditSlider_C, InValueMax) == 0x0002C4, "Member 'UMapEditSlider_C::InValueMax' has a wrong offset!");
static_assert(offsetof(UMapEditSlider_C, InStepSize) == 0x0002C8, "Member 'UMapEditSlider_C::InStepSize' has a wrong offset!");

}

