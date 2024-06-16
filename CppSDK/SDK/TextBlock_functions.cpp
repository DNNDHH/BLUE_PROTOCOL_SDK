#pragma once

 

// Package: TextBlock

#include "Basic.hpp"

#include "TextBlock_classes.hpp"
#include "TextBlock_parameters.hpp"


namespace SDK
{

// Function TextBlock.TextBlock_C.ExecuteUbergraph_TextBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextBlock_C::ExecuteUbergraph_TextBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock_C", "ExecuteUbergraph_TextBlock");

	Params::TextBlock_C_ExecuteUbergraph_TextBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextBlock.TextBlock_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UTextBlock_C::SetText(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextBlock_C", "SetText");

	Params::TextBlock_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

