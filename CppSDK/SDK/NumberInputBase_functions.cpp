#pragma once

 

// Package: NumberInputBase

#include "Basic.hpp"

#include "NumberInputBase_classes.hpp"
#include "NumberInputBase_parameters.hpp"


namespace SDK
{

// Function NumberInputBase.NumberInputBase_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNumberInputBase_C::OnValueChanged__DelegateSignature(int32 Param_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "OnValueChanged__DelegateSignature");

	Params::NumberInputBase_C_OnValueChanged__DelegateSignature Parms{};

	Parms.Param_Value = Param_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputBase.NumberInputBase_C.ExecuteUbergraph_NumberInputBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNumberInputBase_C::ExecuteUbergraph_NumberInputBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "ExecuteUbergraph_NumberInputBase");

	Params::NumberInputBase_C_ExecuteUbergraph_NumberInputBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputBase.NumberInputBase_C.Event_OnValueChanged
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::Event_OnValueChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "Event_OnValueChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.OnClickedMinButton
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::OnClickedMinButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "OnClickedMinButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.OnClickedMaxButton
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::OnClickedMaxButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "OnClickedMaxButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.ChangeValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InChangeValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNumberInputBase_C::ChangeValue(int32 InChangeValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "ChangeValue");

	Params::NumberInputBase_C_ChangeValue Parms{};

	Parms.InChangeValue = InChangeValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputBase.NumberInputBase_C.UpdateButtonStatus
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::UpdateButtonStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "UpdateButtonStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.ClearHandle
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::ClearHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "ClearHandle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.OnReleaseMinusButton
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::OnReleaseMinusButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "OnReleaseMinusButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.OnPressMinusButton
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::OnPressMinusButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "OnPressMinusButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.OnReleasePlusButton
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::OnReleasePlusButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "OnReleasePlusButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.OnPressPlusButton
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::OnPressPlusButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "OnPressPlusButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.StartRepeatMinus
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::StartRepeatMinus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "StartRepeatMinus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.StartRepeatPlus
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::StartRepeatPlus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "StartRepeatPlus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.NumberMinus
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::NumberMinus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "NumberMinus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.NumberPlus
// (BlueprintCallable, BlueprintEvent)

void UNumberInputBase_C::NumberPlus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "NumberPlus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNumberInputBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputBase.NumberInputBase_C.GetValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNumberInputBase_C::GetValue(int32* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "GetValue");

	Params::NumberInputBase_C_GetValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Number != nullptr)
		*Number = Parms.Number;
}


// Function NumberInputBase.NumberInputBase_C.InitializeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumberMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumberMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNumberInputBase_C::InitializeValue(int32 Number, int32 NumberMin, int32 NumberMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputBase_C", "InitializeValue");

	Params::NumberInputBase_C_InitializeValue Parms{};

	Parms.Number = Number;
	Parms.NumberMin = NumberMin;
	Parms.NumberMax = NumberMax;

	UObject::ProcessEvent(Func, &Parms);
}

}

