#pragma once

 

// Package: MapWidget_CloudImage

#include "Basic.hpp"

#include "MapWidget_CloudImage_classes.hpp"
#include "MapWidget_CloudImage_parameters.hpp"


namespace SDK
{

// Function MapWidget_CloudImage.MapWidget_CloudImage_C.ExecuteUbergraph_MapWidget_CloudImage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CloudImage_C::ExecuteUbergraph_MapWidget_CloudImage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CloudImage_C", "ExecuteUbergraph_MapWidget_CloudImage");

	Params::MapWidget_CloudImage_C_ExecuteUbergraph_MapWidget_CloudImage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CloudImage.MapWidget_CloudImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_CloudImage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CloudImage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_CloudImage.MapWidget_CloudImage_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnchors                         InAnchors                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CloudImage_C::Setup(const struct FAnchors& InAnchors, const struct FVector2D& InPosition, const struct FVector2D& InSize, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CloudImage_C", "Setup");

	Params::MapWidget_CloudImage_C_Setup Parms{};

	Parms.InAnchors = std::move(InAnchors);
	Parms.InPosition = std::move(InPosition);
	Parms.InSize = std::move(InSize);
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CloudImage.MapWidget_CloudImage_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CloudImage_C::SetName(class FName Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CloudImage_C", "SetName");

	Params::MapWidget_CloudImage_C_SetName Parms{};

	Parms.Param_Name = Param_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CloudImage.MapWidget_CloudImage_C.SetVisibleDebugText
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_CloudImage_C::SetVisibleDebugText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CloudImage_C", "SetVisibleDebugText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_CloudImage.MapWidget_CloudImage_C.GetName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             Param_Name                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CloudImage_C::GetName(class FName* Param_Name) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CloudImage_C", "GetName");

	Params::MapWidget_CloudImage_C_GetName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Name != nullptr)
		*Param_Name = Parms.Param_Name;
}

}

