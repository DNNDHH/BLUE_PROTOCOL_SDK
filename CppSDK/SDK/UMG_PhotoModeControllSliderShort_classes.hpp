#pragma once

 

// Package: UMG_PhotoModeControllSliderShort

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoModeControllSliderShort.UMG_PhotoModeControllSliderShort_C
// 0x00A0 (0x0318 - 0x0278)
class UUMG_PhotoModeControllSliderShort_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Button_Minus;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_Plus;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageCenterScale;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_Value;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextBlock_Header;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Value;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   HeaderTextId;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ValueTextFormat;                                   // 0x02B8(0x0018)(Edit, BlueprintVisible)
	float                                         Value;                                             // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ValueMin;                                          // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ValueMax;                                          // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ValueDefault;                                      // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ValueStepSize;                                     // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueTextFormatMinIntegralDigits;                  // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnValueChanged;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ValueTextFormatFractionalDigits;                   // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLoopValue;                                        // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CBF[0x3];                                     // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LoopValueMax;                                      // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bConnectedLoopValue;                               // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUseDisplayMax;                                    // 0x0305(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CC0[0x2];                                     // 0x0306(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DisplayValueMin;                                   // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DisplayValueMax;                                   // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Tolerance;                                         // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnValueChanged__DelegateSignature(float Param_Value);
	void ExecuteUbergraph_UMG_PhotoModeControllSliderShort(int32 EntryPoint);
	void Construct();
	void Initialize(float Param_ValueDefault, float Param_ValueMin, float Param_ValueMax, float Param_ValueStepSize);
	void Reset();
	void SetDefaultValue(float Param_Value);
	void SetValue(float Param_Value, bool bOnlyDisplay);
	void BndEvt__Slider_Value_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Param_Value);
	void BndEvt__Button_Plus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetValue_Internal(float Param_Value);
	float GetLoopValue(float Param_Value, float Min, float Max);
	float GetDisplayValue();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoModeControllSliderShort_C">();
	}
	static class UUMG_PhotoModeControllSliderShort_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoModeControllSliderShort_C>();
	}
};
static_assert(alignof(UUMG_PhotoModeControllSliderShort_C) == 0x000008, "Wrong alignment on UUMG_PhotoModeControllSliderShort_C");
static_assert(sizeof(UUMG_PhotoModeControllSliderShort_C) == 0x000318, "Wrong size on UUMG_PhotoModeControllSliderShort_C");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, UberGraphFrame) == 0x000278, "Member 'UUMG_PhotoModeControllSliderShort_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, Button_Minus) == 0x000280, "Member 'UUMG_PhotoModeControllSliderShort_C::Button_Minus' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, Button_Plus) == 0x000288, "Member 'UUMG_PhotoModeControllSliderShort_C::Button_Plus' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, ImageCenterScale) == 0x000290, "Member 'UUMG_PhotoModeControllSliderShort_C::ImageCenterScale' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, Slider_Value) == 0x000298, "Member 'UUMG_PhotoModeControllSliderShort_C::Slider_Value' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, TextBlock_Header) == 0x0002A0, "Member 'UUMG_PhotoModeControllSliderShort_C::TextBlock_Header' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, TextBlock_Value) == 0x0002A8, "Member 'UUMG_PhotoModeControllSliderShort_C::TextBlock_Value' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, HeaderTextId) == 0x0002B0, "Member 'UUMG_PhotoModeControllSliderShort_C::HeaderTextId' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, ValueTextFormat) == 0x0002B8, "Member 'UUMG_PhotoModeControllSliderShort_C::ValueTextFormat' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, Value) == 0x0002D0, "Member 'UUMG_PhotoModeControllSliderShort_C::Value' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, ValueMin) == 0x0002D4, "Member 'UUMG_PhotoModeControllSliderShort_C::ValueMin' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, ValueMax) == 0x0002D8, "Member 'UUMG_PhotoModeControllSliderShort_C::ValueMax' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, ValueDefault) == 0x0002DC, "Member 'UUMG_PhotoModeControllSliderShort_C::ValueDefault' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, ValueStepSize) == 0x0002E0, "Member 'UUMG_PhotoModeControllSliderShort_C::ValueStepSize' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, ValueTextFormatMinIntegralDigits) == 0x0002E4, "Member 'UUMG_PhotoModeControllSliderShort_C::ValueTextFormatMinIntegralDigits' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, OnValueChanged) == 0x0002E8, "Member 'UUMG_PhotoModeControllSliderShort_C::OnValueChanged' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, ValueTextFormatFractionalDigits) == 0x0002F8, "Member 'UUMG_PhotoModeControllSliderShort_C::ValueTextFormatFractionalDigits' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, bLoopValue) == 0x0002FC, "Member 'UUMG_PhotoModeControllSliderShort_C::bLoopValue' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, LoopValueMax) == 0x000300, "Member 'UUMG_PhotoModeControllSliderShort_C::LoopValueMax' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, bConnectedLoopValue) == 0x000304, "Member 'UUMG_PhotoModeControllSliderShort_C::bConnectedLoopValue' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, bUseDisplayMax) == 0x000305, "Member 'UUMG_PhotoModeControllSliderShort_C::bUseDisplayMax' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, DisplayValueMin) == 0x000308, "Member 'UUMG_PhotoModeControllSliderShort_C::DisplayValueMin' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, DisplayValueMax) == 0x00030C, "Member 'UUMG_PhotoModeControllSliderShort_C::DisplayValueMax' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControllSliderShort_C, Tolerance) == 0x000310, "Member 'UUMG_PhotoModeControllSliderShort_C::Tolerance' has a wrong offset!");

}

