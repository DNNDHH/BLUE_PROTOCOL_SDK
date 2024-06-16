#pragma once

 

// Package: ImaginePassiveResult

#include "Basic.hpp"

#include "ImaginePassiveResult_classes.hpp"
#include "ImaginePassiveResult_parameters.hpp"


namespace SDK
{

// Function ImaginePassiveResult.ImaginePassiveResult_C.ExecuteUbergraph_ImaginePassiveResult
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImaginePassiveResult_C::ExecuteUbergraph_ImaginePassiveResult(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImaginePassiveResult_C", "ExecuteUbergraph_ImaginePassiveResult");

	Params::ImaginePassiveResult_C_ExecuteUbergraph_ImaginePassiveResult Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImaginePassiveResult.ImaginePassiveResult_C.Set ItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UImaginePassiveResult_C::Set_ItemData(const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImaginePassiveResult_C", "Set ItemData");

	Params::ImaginePassiveResult_C_Set_ItemData Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}

}

