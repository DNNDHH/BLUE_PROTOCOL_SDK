#pragma once

 

// Package: MapWidget_MapScrollBar

#include "Basic.hpp"

#include "MapWidget_MapScrollBar_classes.hpp"
#include "MapWidget_MapScrollBar_parameters.hpp"


namespace SDK
{

// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.OnSliderHValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::OnSliderHValueChanged__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "OnSliderHValueChanged__DelegateSignature");

	Params::MapWidget_MapScrollBar_C_OnSliderHValueChanged__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.OnSliderVValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::OnSliderVValueChanged__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "OnSliderVValueChanged__DelegateSignature");

	Params::MapWidget_MapScrollBar_C_OnSliderVValueChanged__DelegateSignature Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.OnMouseCaptureBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_MapScrollBar_C::OnMouseCaptureBegin__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "OnMouseCaptureBegin__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.OnMouseCaptureEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_MapScrollBar_C::OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "OnMouseCaptureEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.ExecuteUbergraph_MapWidget_MapScrollBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::ExecuteUbergraph_MapWidget_MapScrollBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "ExecuteUbergraph_MapWidget_MapScrollBar");

	Params::MapWidget_MapScrollBar_C_ExecuteUbergraph_MapWidget_MapScrollBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderV_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_MapScrollBar_C::BndEvt__SliderV_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "BndEvt__SliderV_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderV_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_MapScrollBar_C::BndEvt__SliderV_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "BndEvt__SliderV_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderH_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_MapScrollBar_C::BndEvt__SliderH_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "BndEvt__SliderH_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderH_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_MapScrollBar_C::BndEvt__SliderH_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "BndEvt__SliderH_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	Params::MapWidget_MapScrollBar_C_BndEvt__SliderV_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::MapWidget_MapScrollBar_C_BndEvt__SliderH_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::SetSliderHValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "SetSliderHValue");

	Params::MapWidget_MapScrollBar_C_SetSliderHValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHMinValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::SetSliderHMinValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "SetSliderHMinValue");

	Params::MapWidget_MapScrollBar_C_SetSliderHMinValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::SetSliderHMaxValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "SetSliderHMaxValue");

	Params::MapWidget_MapScrollBar_C_SetSliderHMaxValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderHMinAndMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InMinValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InMaxValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::SetSliderHMinAndMaxValue(float InMinValue, float InMaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "SetSliderHMinAndMaxValue");

	Params::MapWidget_MapScrollBar_C_SetSliderHMinAndMaxValue Parms{};

	Parms.InMinValue = InMinValue;
	Parms.InMaxValue = InMaxValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::SetSliderVValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "SetSliderVValue");

	Params::MapWidget_MapScrollBar_C_SetSliderVValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVMinValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::SetSliderVMinValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "SetSliderVMinValue");

	Params::MapWidget_MapScrollBar_C_SetSliderVMinValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::SetSliderVMaxValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "SetSliderVMaxValue");

	Params::MapWidget_MapScrollBar_C_SetSliderVMaxValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.SetSliderVMinAndMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InMinValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InMaxValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::SetSliderVMinAndMaxValue(float InMinValue, float InMaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "SetSliderVMinAndMaxValue");

	Params::MapWidget_MapScrollBar_C_SetSliderVMinAndMaxValue Parms{};

	Parms.InMinValue = InMinValue;
	Parms.InMaxValue = InMaxValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::GetSliderHValue(float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "GetSliderHValue");

	Params::MapWidget_MapScrollBar_C_GetSliderHValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHMinValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::GetSliderHMinValue(float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "GetSliderHMinValue");

	Params::MapWidget_MapScrollBar_C_GetSliderHMinValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHMaxValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::GetSliderHMaxValue(float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "GetSliderHMaxValue");

	Params::MapWidget_MapScrollBar_C_GetSliderHMaxValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderHMinAndMaxValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::GetSliderHMinAndMaxValue(float* OutMinValue, float* OutMaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "GetSliderHMinAndMaxValue");

	Params::MapWidget_MapScrollBar_C_GetSliderHMinAndMaxValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMinValue != nullptr)
		*OutMinValue = Parms.OutMinValue;

	if (OutMaxValue != nullptr)
		*OutMaxValue = Parms.OutMaxValue;
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::GetSliderVValue(float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "GetSliderVValue");

	Params::MapWidget_MapScrollBar_C_GetSliderVValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVMinValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::GetSliderVMinValue(float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "GetSliderVMinValue");

	Params::MapWidget_MapScrollBar_C_GetSliderVMinValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVMaxValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::GetSliderVMaxValue(float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "GetSliderVMaxValue");

	Params::MapWidget_MapScrollBar_C_GetSliderVMaxValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function MapWidget_MapScrollBar.MapWidget_MapScrollBar_C.GetSliderVMinAndMaxValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapScrollBar_C::GetSliderVMinAndMaxValue(float* OutMinValue, float* OutMaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapScrollBar_C", "GetSliderVMinAndMaxValue");

	Params::MapWidget_MapScrollBar_C_GetSliderVMinAndMaxValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMinValue != nullptr)
		*OutMinValue = Parms.OutMinValue;

	if (OutMaxValue != nullptr)
		*OutMaxValue = Parms.OutMaxValue;
}

}

