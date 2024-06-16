#pragma once

 

// Package: MapEditSlider

#include "Basic.hpp"

#include "MapEditSlider_classes.hpp"
#include "MapEditSlider_parameters.hpp"


namespace SDK
{

// Function MapEditSlider.MapEditSlider_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "OnValueChanged__DelegateSignature");

	Params::MapEditSlider_C_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditSlider.MapEditSlider_C.ExecuteUbergraph_MapEditSlider
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::ExecuteUbergraph_MapEditSlider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "ExecuteUbergraph_MapEditSlider");

	Params::MapEditSlider_C_ExecuteUbergraph_MapEditSlider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditSlider.MapEditSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditSlider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "PreConstruct");

	Params::MapEditSlider_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::BndEvt__MapEditSlider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "BndEvt__MapEditSlider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	Params::MapEditSlider_C_BndEvt__MapEditSlider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_PlusBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapEditSlider_C::BndEvt__MapEditSlider_PlusBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "BndEvt__MapEditSlider_PlusBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditSlider.MapEditSlider_C.BndEvt__MapEditSlider_MinusBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapEditSlider_C::BndEvt__MapEditSlider_MinusBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "BndEvt__MapEditSlider_MinusBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditSlider.MapEditSlider_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::SetTitle(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "SetTitle");

	Params::MapEditSlider_C_SetTitle Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditSlider.MapEditSlider_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_InValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::SetValue(float Param_InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "SetValue");

	Params::MapEditSlider_C_SetValue Parms{};

	Parms.Param_InValue = Param_InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditSlider.MapEditSlider_C.SetValueRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::SetValueRate(float InRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "SetValueRate");

	Params::MapEditSlider_C_SetValueRate Parms{};

	Parms.InRate = InRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditSlider.MapEditSlider_C.SetValueMin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_InValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::SetValueMin(float Param_InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "SetValueMin");

	Params::MapEditSlider_C_SetValueMin Parms{};

	Parms.Param_InValue = Param_InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditSlider.MapEditSlider_C.SetValueMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_InValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::SetValueMax(float Param_InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "SetValueMax");

	Params::MapEditSlider_C_SetValueMax Parms{};

	Parms.Param_InValue = Param_InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditSlider.MapEditSlider_C.SetValueText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_InValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::SetValueText(float Param_InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "SetValueText");

	Params::MapEditSlider_C_SetValueText Parms{};

	Parms.Param_InValue = Param_InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditSlider.MapEditSlider_C.GetValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMapEditSlider_C::GetValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "GetValue");

	Params::MapEditSlider_C_GetValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapEditSlider.MapEditSlider_C.GetValueRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMapEditSlider_C::GetValueRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "GetValueRate");

	Params::MapEditSlider_C_GetValueRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapEditSlider.MapEditSlider_C.GetValueMin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMapEditSlider_C::GetValueMin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "GetValueMin");

	Params::MapEditSlider_C_GetValueMin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapEditSlider.MapEditSlider_C.GetValueMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMapEditSlider_C::GetValueMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "GetValueMax");

	Params::MapEditSlider_C_GetValueMax Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapEditSlider.MapEditSlider_C.GetValueRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMapEditSlider_C::GetValueRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "GetValueRange");

	Params::MapEditSlider_C_GetValueRange Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapEditSlider.MapEditSlider_C.SetStepSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_InValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::SetStepSize(float Param_InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "SetStepSize");

	Params::MapEditSlider_C_SetStepSize Parms{};

	Parms.Param_InValue = Param_InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditSlider.MapEditSlider_C.GetStepSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Step_Size                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::GetStepSize(float* Step_Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "GetStepSize");

	Params::MapEditSlider_C_GetStepSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Step_Size != nullptr)
		*Step_Size = Parms.Step_Size;
}


// Function MapEditSlider.MapEditSlider_C.BtnClickedMinus
// (Private, BlueprintCallable, BlueprintEvent)

void UMapEditSlider_C::BtnClickedMinus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "BtnClickedMinus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditSlider.MapEditSlider_C.BtnClickedPlus
// (Private, BlueprintCallable, BlueprintEvent)

void UMapEditSlider_C::BtnClickedPlus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "BtnClickedPlus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditSlider.MapEditSlider_C.SliderValueChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_InValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditSlider_C::SliderValueChanged(float Param_InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditSlider_C", "SliderValueChanged");

	Params::MapEditSlider_C_SliderValueChanged Parms{};

	Parms.Param_InValue = Param_InValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

