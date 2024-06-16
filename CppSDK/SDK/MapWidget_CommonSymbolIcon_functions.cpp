#pragma once

 

// Package: MapWidget_CommonSymbolIcon

#include "Basic.hpp"

#include "MapWidget_CommonSymbolIcon_classes.hpp"
#include "MapWidget_CommonSymbolIcon_parameters.hpp"


namespace SDK
{

// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.ExecuteUbergraph_MapWidget_CommonSymbolIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CommonSymbolIcon_C::ExecuteUbergraph_MapWidget_CommonSymbolIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CommonSymbolIcon_C", "ExecuteUbergraph_MapWidget_CommonSymbolIcon");

	Params::MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.PlayPublicDungeonAnimation
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_CommonSymbolIcon_C::PlayPublicDungeonAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CommonSymbolIcon_C", "PlayPublicDungeonAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_CommonSymbolIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CommonSymbolIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMapWidget_CommonSymbolIcon_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CommonSymbolIcon_C", "GetToolTipWidget_0");

	Params::MapWidget_CommonSymbolIcon_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTooltipEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_CommonSymbolIcon_C::SetTooltipEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CommonSymbolIcon_C", "SetTooltipEnable");

	Params::MapWidget_CommonSymbolIcon_C_SetTooltipEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTextToTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_CommonSymbolIcon_C::SetTextToTooltip(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CommonSymbolIcon_C", "SetTextToTooltip");

	Params::MapWidget_CommonSymbolIcon_C_SetTextToTooltip Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CommonSymbolIcon_C::SetIconTexture(class UTexture2D* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CommonSymbolIcon_C", "SetIconTexture");

	Params::MapWidget_CommonSymbolIcon_C_SetIconTexture Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetIconTextureBySymbolIconType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapSymbolIconType                      InSymbolIconType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CommonSymbolIcon_C::SetIconTextureBySymbolIconType(EMapSymbolIconType InSymbolIconType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CommonSymbolIcon_C", "SetIconTextureBySymbolIconType");

	Params::MapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType Parms{};

	Parms.InSymbolIconType = InSymbolIconType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.GetTooltipText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OutTooltipText                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_CommonSymbolIcon_C::GetTooltipText(class FString* OutTooltipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CommonSymbolIcon_C", "GetTooltipText");

	Params::MapWidget_CommonSymbolIcon_C_GetTooltipText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutTooltipText != nullptr)
		*OutTooltipText = std::move(Parms.OutTooltipText);
}


// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTooltipTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_CommonSymbolIcon_C::SetTooltipTextColor(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CommonSymbolIcon_C", "SetTooltipTextColor");

	Params::MapWidget_CommonSymbolIcon_C_SetTooltipTextColor Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}

}

