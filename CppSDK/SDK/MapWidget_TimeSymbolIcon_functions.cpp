#pragma once

 

// Package: MapWidget_TimeSymbolIcon

#include "Basic.hpp"

#include "MapWidget_TimeSymbolIcon_classes.hpp"
#include "MapWidget_TimeSymbolIcon_parameters.hpp"


namespace SDK
{

// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.OnOpenTimeEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapWidget_TimeSymbolIcon_C*      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_TimeSymbolIcon_C::OnOpenTimeEnd__DelegateSignature(int32 Param_Index, class UMapWidget_TimeSymbolIcon_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "OnOpenTimeEnd__DelegateSignature");

	Params::MapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.ExecuteUbergraph_MapWidget_TimeSymbolIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_TimeSymbolIcon_C::ExecuteUbergraph_MapWidget_TimeSymbolIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "ExecuteUbergraph_MapWidget_TimeSymbolIcon");

	Params::MapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.TimerEvent_IconCheck
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_TimeSymbolIcon_C::TimerEvent_IconCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "TimerEvent_IconCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_TimeSymbolIcon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_TimeSymbolIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMapWidget_TimeSymbolIcon_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "GetToolTipWidget_0");

	Params::MapWidget_TimeSymbolIcon_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTooltipEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_TimeSymbolIcon_C::SetTooltipEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "SetTooltipEnable");

	Params::MapWidget_TimeSymbolIcon_C_SetTooltipEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTextToTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_TimeSymbolIcon_C::SetTextToTooltip(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "SetTextToTooltip");

	Params::MapWidget_TimeSymbolIcon_C_SetTextToTooltip Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_TimeSymbolIcon_C::SetIconTexture(class UTexture2D* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "SetIconTexture");

	Params::MapWidget_TimeSymbolIcon_C_SetIconTexture Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetIconTextureBySymbolIconType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapSymbolIconType                      InSymbolIconType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_TimeSymbolIcon_C::SetIconTextureBySymbolIconType(EMapSymbolIconType InSymbolIconType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "SetIconTextureBySymbolIconType");

	Params::MapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType Parms{};

	Parms.InSymbolIconType = InSymbolIconType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.GetTooltipText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OutTooltipText                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_TimeSymbolIcon_C::GetTooltipText(class FString* OutTooltipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "GetTooltipText");

	Params::MapWidget_TimeSymbolIcon_C_GetTooltipText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutTooltipText != nullptr)
		*OutTooltipText = std::move(Parms.OutTooltipText);
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTimeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TermId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_TimeSymbolIcon_C::SetTimeData(const class FString& TermId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "SetTimeData");

	Params::MapWidget_TimeSymbolIcon_C_SetTimeData Parms{};

	Parms.TermId = std::move(TermId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.IconStateCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_TimeSymbolIcon_C::IconStateCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TimeSymbolIcon_C", "IconStateCheck");

	UObject::ProcessEvent(Func, nullptr);
}

}

