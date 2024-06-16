#pragma once

 

// Package: TextWindowDemo

#include "Basic.hpp"

#include "TextWindowDemo_classes.hpp"
#include "TextWindowDemo_parameters.hpp"


namespace SDK
{

// Function TextWindowDemo.TextWindowDemo_C.ExecuteUbergraph_TextWindowDemo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWindowDemo_C::ExecuteUbergraph_TextWindowDemo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowDemo_C", "ExecuteUbergraph_TextWindowDemo");

	Params::TextWindowDemo_C_ExecuteUbergraph_TextWindowDemo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindowDemo.TextWindowDemo_C.SetNextMarkVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInVisibility                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTextWindowDemo_C::SetNextMarkVisibility(const bool bInVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowDemo_C", "SetNextMarkVisibility");

	Params::TextWindowDemo_C_SetNextMarkVisibility Parms{};

	Parms.bInVisibility = bInVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindowDemo.TextWindowDemo_C.SetSpeaker
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InProfileId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWindowDemo_C::SetSpeaker(const class FName& InProfileId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowDemo_C", "SetSpeaker");

	Params::TextWindowDemo_C_SetSpeaker Parms{};

	Parms.InProfileId = InProfileId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindowDemo.TextWindowDemo_C.SetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTextWindowDemo_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowDemo_C", "SetText");

	Params::TextWindowDemo_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindowDemo.TextWindowDemo_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTextWindowDemo_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowDemo_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowDemo.TextWindowDemo_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTextWindowDemo_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowDemo_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowDemo.TextWindowDemo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTextWindowDemo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowDemo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowDemo.TextWindowDemo_C.IsShow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTextWindowDemo_C::IsShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowDemo_C", "IsShow");

	Params::TextWindowDemo_C_IsShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TextWindowDemo.TextWindowDemo_C.SetDisp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTextWindowDemo_C::SetDisp(bool IsDisp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowDemo_C", "SetDisp");

	Params::TextWindowDemo_C_SetDisp Parms{};

	Parms.IsDisp = IsDisp;

	UObject::ProcessEvent(Func, &Parms);
}

}

