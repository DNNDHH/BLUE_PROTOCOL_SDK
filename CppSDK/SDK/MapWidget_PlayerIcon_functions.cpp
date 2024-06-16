#pragma once

 

// Package: MapWidget_PlayerIcon

#include "Basic.hpp"

#include "MapWidget_PlayerIcon_classes.hpp"
#include "MapWidget_PlayerIcon_parameters.hpp"


namespace SDK
{

// Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.ExecuteUbergraph_MapWidget_PlayerIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PlayerIcon_C::ExecuteUbergraph_MapWidget_PlayerIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PlayerIcon_C", "ExecuteUbergraph_MapWidget_PlayerIcon");

	Params::MapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_PlayerIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PlayerIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.SetCursorAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InAngle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PlayerIcon_C::SetCursorAngle(float InAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PlayerIcon_C", "SetCursorAngle");

	Params::MapWidget_PlayerIcon_C_SetCursorAngle Parms{};

	Parms.InAngle = InAngle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.GetCursorAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutCursorAngle                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PlayerIcon_C::GetCursorAngle(float* OutCursorAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PlayerIcon_C", "GetCursorAngle");

	Params::MapWidget_PlayerIcon_C_GetCursorAngle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCursorAngle != nullptr)
		*OutCursorAngle = Parms.OutCursorAngle;
}


// Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.PlayPublicDungeonAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_PlayerIcon_C::PlayPublicDungeonAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PlayerIcon_C", "PlayPublicDungeonAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.ShowTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_PlayerIcon_C::ShowTooltip(bool IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PlayerIcon_C", "ShowTooltip");

	Params::MapWidget_PlayerIcon_C_ShowTooltip Parms{};

	Parms.IsShow = IsShow;

	UObject::ProcessEvent(Func, &Parms);
}

}

