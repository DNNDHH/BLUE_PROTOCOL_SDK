#pragma once

 

// Package: TextWidget

#include "Basic.hpp"

#include "TextWidget_classes.hpp"
#include "TextWidget_parameters.hpp"


namespace SDK
{

// Function TextWidget.TextWidget_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UTextWidget_C::SetText(const class FString& Param_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWidget_C", "SetText");

	Params::TextWidget_C_SetText Parms{};

	Parms.Param_Text = std::move(Param_Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWidget.TextWidget_C.SetTextId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWidget_C::SetTextId(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWidget_C", "SetTextId");

	Params::TextWidget_C_SetTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWidget.TextWidget_C.ExecuteUbergraph_TextWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWidget_C::ExecuteUbergraph_TextWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWidget_C", "ExecuteUbergraph_TextWidget");

	Params::TextWidget_C_ExecuteUbergraph_TextWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

