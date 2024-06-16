#pragma once

 

// Package: ImagineActiveResult

#include "Basic.hpp"

#include "ImagineActiveResult_classes.hpp"
#include "ImagineActiveResult_parameters.hpp"


namespace SDK
{

// Function ImagineActiveResult.ImagineActiveResult_C.ExecuteUbergraph_ImagineActiveResult
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineActiveResult_C::ExecuteUbergraph_ImagineActiveResult(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineActiveResult_C", "ExecuteUbergraph_ImagineActiveResult");

	Params::ImagineActiveResult_C_ExecuteUbergraph_ImagineActiveResult Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineActiveResult.ImagineActiveResult_C.Set ItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineActiveResult_C::Set_ItemData(const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineActiveResult_C", "Set ItemData");

	Params::ImagineActiveResult_C_Set_ItemData Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}

}

