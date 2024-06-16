#pragma once

 

// Package: CharaCreateViewerTextBlock

#include "Basic.hpp"

#include "CharaCreateViewerTextBlock_classes.hpp"
#include "CharaCreateViewerTextBlock_parameters.hpp"


namespace SDK
{

// Function CharaCreateViewerTextBlock.CharaCreateViewerTextBlock_C.ExecuteUbergraph_CharaCreateViewerTextBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaCreateViewerTextBlock_C::ExecuteUbergraph_CharaCreateViewerTextBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateViewerTextBlock_C", "ExecuteUbergraph_CharaCreateViewerTextBlock");

	Params::CharaCreateViewerTextBlock_C_ExecuteUbergraph_CharaCreateViewerTextBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreateViewerTextBlock.CharaCreateViewerTextBlock_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharaCreateViewerTextBlock_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateViewerTextBlock_C", "SetText");

	Params::CharaCreateViewerTextBlock_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

