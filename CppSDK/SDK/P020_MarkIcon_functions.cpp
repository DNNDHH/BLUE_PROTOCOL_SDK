#pragma once

 

// Package: P020_MarkIcon

#include "Basic.hpp"

#include "P020_MarkIcon_classes.hpp"
#include "P020_MarkIcon_parameters.hpp"


namespace SDK
{

// Function P020_MarkIcon.P020_MarkIcon_C.ExecuteUbergraph_P020_MarkIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP020_MarkIcon_C::ExecuteUbergraph_P020_MarkIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_MarkIcon_C", "ExecuteUbergraph_P020_MarkIcon");

	Params::P020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P020_MarkIcon.P020_MarkIcon_C.OnIconVisibilityEnd
// (Event, Public, BlueprintEvent)

void UP020_MarkIcon_C::OnIconVisibilityEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_MarkIcon_C", "OnIconVisibilityEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P020_MarkIcon.P020_MarkIcon_C.OnIconVisibilityStart
// (Event, Public, BlueprintEvent)

void UP020_MarkIcon_C::OnIconVisibilityStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_MarkIcon_C", "OnIconVisibilityStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P020_MarkIcon.P020_MarkIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UP020_MarkIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_MarkIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P020_MarkIcon.P020_MarkIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP020_MarkIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_MarkIcon_C", "PreConstruct");

	Params::P020_MarkIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P020_MarkIcon.P020_MarkIcon_C.Show Icon BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP020_MarkIcon_C::Show_Icon_BP(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_MarkIcon_C", "Show Icon BP");

	Params::P020_MarkIcon_C_Show_Icon_BP Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

