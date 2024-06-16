#pragma once

 

// Package: MapWidget_IconTooltip1

#include "Basic.hpp"

#include "MapWidget_IconTooltip1_classes.hpp"
#include "MapWidget_IconTooltip1_parameters.hpp"


namespace SDK
{

// Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_IconTooltip1_C::SetName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_IconTooltip1_C", "SetName");

	Params::MapWidget_IconTooltip1_C_SetName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.GetName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             OutName                                                (Parm, OutParm)

void UMapWidget_IconTooltip1_C::GetName(class FText* OutName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_IconTooltip1_C", "GetName");

	Params::MapWidget_IconTooltip1_C_GetName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);
}


// Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.SetTooltipTextureType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MapWidget_Tooltip1_TextureTypes       InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_IconTooltip1_C::SetTooltipTextureType(E_MapWidget_Tooltip1_TextureTypes InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_IconTooltip1_C", "SetTooltipTextureType");

	Params::MapWidget_IconTooltip1_C_SetTooltipTextureType Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.Set Text Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_IconTooltip1_C::Set_Text_Color(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_IconTooltip1_C", "Set Text Color");

	Params::MapWidget_IconTooltip1_C_Set_Text_Color Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}

}

