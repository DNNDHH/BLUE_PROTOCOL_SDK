#pragma once

 

// Package: CmnOperationRotate

#include "Basic.hpp"

#include "CmnOperationRotate_classes.hpp"
#include "CmnOperationRotate_parameters.hpp"


namespace SDK
{

// Function CmnOperationRotate.CmnOperationRotate_C.ExecuteUbergraph_CmnOperationRotate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnOperationRotate_C::ExecuteUbergraph_CmnOperationRotate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnOperationRotate_C", "ExecuteUbergraph_CmnOperationRotate");

	Params::CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnOperationRotate.CmnOperationRotate_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnOperationRotate_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnOperationRotate_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnOperationRotate.CmnOperationRotate_C.OnUpdateOperateMode
// (BlueprintCallable, BlueprintEvent)

void UCmnOperationRotate_C::OnUpdateOperateMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnOperationRotate_C", "OnUpdateOperateMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnOperationRotate.CmnOperationRotate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnOperationRotate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnOperationRotate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnOperationRotate.CmnOperationRotate_C.SwitchIconByOperateMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBOperateMode                          InOperateMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnOperationRotate_C::SwitchIconByOperateMode(ESBOperateMode InOperateMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnOperationRotate_C", "SwitchIconByOperateMode");

	Params::CmnOperationRotate_C_SwitchIconByOperateMode Parms{};

	Parms.InOperateMode = InOperateMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

