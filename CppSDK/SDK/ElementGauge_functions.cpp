#pragma once

 

// Package: ElementGauge

#include "Basic.hpp"

#include "ElementGauge_classes.hpp"
#include "ElementGauge_parameters.hpp"


namespace SDK
{

// Function ElementGauge.ElementGauge_C.ExecuteUbergraph_ElementGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UElementGauge_C::ExecuteUbergraph_ElementGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElementGauge_C", "ExecuteUbergraph_ElementGauge");

	Params::ElementGauge_C_ExecuteUbergraph_ElementGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElementGauge.ElementGauge_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBAttribute                            ElementType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UElementGauge_C::CustomEvent_1(ESBAttribute ElementType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElementGauge_C", "CustomEvent_1");

	Params::ElementGauge_C_CustomEvent_1 Parms{};

	Parms.ElementType = ElementType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElementGauge.ElementGauge_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBAttribute                            ElementType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UElementGauge_C::CustomEvent_0(ESBAttribute ElementType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElementGauge_C", "CustomEvent_0");

	Params::ElementGauge_C_CustomEvent_0 Parms{};

	Parms.ElementType = ElementType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElementGauge.ElementGauge_C.OnUnbind
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASBCharacter*                     InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UElementGauge_C::OnUnbind(class ASBCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElementGauge_C", "OnUnbind");

	Params::ElementGauge_C_OnUnbind Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ElementGauge.ElementGauge_C.OnBind
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASBCharacter*                     InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UElementGauge_C::OnBind(class ASBCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElementGauge_C", "OnBind");

	Params::ElementGauge_C_OnBind Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}

