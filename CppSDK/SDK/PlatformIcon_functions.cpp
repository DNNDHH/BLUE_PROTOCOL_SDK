#pragma once

 

// Package: PlatformIcon

#include "Basic.hpp"

#include "PlatformIcon_classes.hpp"
#include "PlatformIcon_parameters.hpp"


namespace SDK
{

// Function PlatformIcon.PlatformIcon_C.ExecuteUbergraph_PlatformIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlatformIcon_C::ExecuteUbergraph_PlatformIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlatformIcon_C", "ExecuteUbergraph_PlatformIcon");

	Params::PlatformIcon_C_ExecuteUbergraph_PlatformIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlatformIcon.PlatformIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlatformIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlatformIcon_C", "PreConstruct");

	Params::PlatformIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlatformIcon.PlatformIcon_C.InitByType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlatformType                         Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlatformIcon_C::InitByType(ESBPlatformType Type, bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlatformIcon_C", "InitByType");

	Params::PlatformIcon_C_InitByType Parms{};

	Parms.Type = Type;
	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlatformIcon.PlatformIcon_C.InitbyId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlatformIcon_C::InitbyId(int32 ID, bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlatformIcon_C", "InitbyId");

	Params::PlatformIcon_C_InitbyId Parms{};

	Parms.ID = ID;
	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

