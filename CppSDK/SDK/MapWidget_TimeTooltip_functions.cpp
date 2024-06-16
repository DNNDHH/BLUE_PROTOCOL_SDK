#pragma once

 

// Package: MapWidget_TimeTooltip

#include "Basic.hpp"

#include "MapWidget_TimeTooltip_classes.hpp"
#include "MapWidget_TimeTooltip_parameters.hpp"


namespace SDK
{

// Function MapWidget_TimeTooltip.MapWidget_TimeTooltip_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_TimeTooltip_C::SetName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeTooltip_C", "SetName");

	Params::MapWidget_TimeTooltip_C_SetName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_TimeTooltip.MapWidget_TimeTooltip_C.GetName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             OutName                                                (Parm, OutParm)

void UMapWidget_TimeTooltip_C::GetName(class FText* OutName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeTooltip_C", "GetName");

	Params::MapWidget_TimeTooltip_C_GetName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);
}


// Function MapWidget_TimeTooltip.MapWidget_TimeTooltip_C.SetTooltipTextureType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MapWidget_Tooltip1_TextureTypes       InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_TimeTooltip_C::SetTooltipTextureType(E_MapWidget_Tooltip1_TextureTypes InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeTooltip_C", "SetTooltipTextureType");

	Params::MapWidget_TimeTooltip_C_SetTooltipTextureType Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_TimeTooltip.MapWidget_TimeTooltip_C.SetEndTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        DateTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMapWidget_TimeTooltip_C::SetEndTime(const struct FDateTime& DateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeTooltip_C", "SetEndTime");

	Params::MapWidget_TimeTooltip_C_SetEndTime Parms{};

	Parms.DateTime = std::move(DateTime);

	UObject::ProcessEvent(Func, &Parms);
}

}

