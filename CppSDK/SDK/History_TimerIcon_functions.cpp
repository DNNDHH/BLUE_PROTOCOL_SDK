#pragma once

 

// Package: History_TimerIcon

#include "Basic.hpp"

#include "History_TimerIcon_classes.hpp"
#include "History_TimerIcon_parameters.hpp"


namespace SDK
{

// Function History_TimerIcon.History_TimerIcon_C.ExecuteUbergraph_History_TimerIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistory_TimerIcon_C::ExecuteUbergraph_History_TimerIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_TimerIcon_C", "ExecuteUbergraph_History_TimerIcon");

	Params::History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function History_TimerIcon.History_TimerIcon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHistory_TimerIcon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_TimerIcon_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function History_TimerIcon.History_TimerIcon_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHistory_TimerIcon_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_TimerIcon_C", "OnMouseEnter");

	Params::History_TimerIcon_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function History_TimerIcon.History_TimerIcon_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHistory_TimerIcon_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_TimerIcon_C", "OnMouseLeave");

	Params::History_TimerIcon_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function History_TimerIcon.History_TimerIcon_C.SetDateTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHistory_TimerIcon_C::SetDateTime(const struct FDateTime& Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_TimerIcon_C", "SetDateTime");

	Params::History_TimerIcon_C_SetDateTime Parms{};

	Parms.Param_Time = std::move(Param_Time);

	UObject::ProcessEvent(Func, &Parms);
}

}

