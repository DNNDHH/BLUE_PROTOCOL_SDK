#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass MapWidget_MapScrollBar.MapWidget_MapScrollBar_C
	 * Size -> 0x0079 (FullSize[0x02F1] - InheritedSize[0x0278])
	 */
	class UMapWidget_MapScrollBar_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USlider*                                             SliderH;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             SliderV;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      OldSliderHValue;                                         // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewSliderHValue;                                         // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldSliderVValue;                                         // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewSliderVValue;                                         // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SliderHMinValue;                                         // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SliderHMaxValue;                                         // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SliderVMinValue;                                         // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SliderVMaxValue;                                         // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSliderHValueChanged;                                   // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSliderVValueChanged;                                   // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ESlateBrushDrawType                                        NewVar_1;                                                // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSliderVMinAndMaxValue(float* OutMinValue, float* OutMaxValue);
		void GetSliderVMaxValue(float* OutValue);
		void GetSliderVMinValue(float* OutValue);
		void GetSliderVValue(float* OutValue);
		void GetSliderHMinAndMaxValue(float* OutMinValue, float* OutMaxValue);
		void GetSliderHMaxValue(float* OutValue);
		void GetSliderHMinValue(float* OutValue);
		void GetSliderHValue(float* OutValue);
		void SetSliderVMinAndMaxValue(float InMinValue, float InMaxValue);
		void SetSliderVMaxValue(float InValue);
		void SetSliderVMinValue(float InValue);
		void SetSliderVValue(float InValue);
		void SetSliderHMinAndMaxValue(float InMinValue, float InMaxValue);
		void SetSliderHMaxValue(float InValue);
		void SetSliderHMinValue(float InValue);
		void SetSliderHValue(float InValue);
		void BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__SliderH_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__SliderH_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__SliderV_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__SliderV_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature();
		void ExecuteUbergraph_MapWidget_MapScrollBar(int32_t EntryPoint);
		void OnMouseCaptureEnd__DelegateSignature();
		void OnMouseCaptureBegin__DelegateSignature();
		void OnSliderVValueChanged__DelegateSignature(float InValue);
		void OnSliderHValueChanged__DelegateSignature(float InValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
