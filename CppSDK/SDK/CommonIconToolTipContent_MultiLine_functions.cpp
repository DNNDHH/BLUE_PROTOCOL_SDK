#pragma once

 

// Package: CommonIconToolTipContent_MultiLine

#include "Basic.hpp"

#include "CommonIconToolTipContent_MultiLine_classes.hpp"
#include "CommonIconToolTipContent_MultiLine_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_MultiLine.CommonIconToolTipContent_MultiLine_C.ExecuteUbergraph_CommonIconToolTipContent_MultiLine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_MultiLine_C::ExecuteUbergraph_CommonIconToolTipContent_MultiLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_MultiLine_C", "ExecuteUbergraph_CommonIconToolTipContent_MultiLine");

	Params::CommonIconToolTipContent_MultiLine_C_ExecuteUbergraph_CommonIconToolTipContent_MultiLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_MultiLine.CommonIconToolTipContent_MultiLine_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIconToolTipContent_MultiLine_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_MultiLine_C", "SetText");

	Params::CommonIconToolTipContent_MultiLine_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

