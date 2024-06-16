#pragma once

 

// Package: ObjectSelectCursorComponent

#include "Basic.hpp"

#include "ObjectSelectCursorComponent_classes.hpp"
#include "ObjectSelectCursorComponent_parameters.hpp"


namespace SDK
{

// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ExecuteUbergraph_ObjectSelectCursorComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectSelectCursorComponent_C::ExecuteUbergraph_ObjectSelectCursorComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursorComponent_C", "ExecuteUbergraph_ObjectSelectCursorComponent");

	Params::ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectSelectCursorComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursorComponent_C", "ReceiveTick");

	Params::ObjectSelectCursorComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UObjectSelectCursorComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursorComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.GetDisplayLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBInteractionInfo               InteractionInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// struct FVector                          DisplayLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectSelectCursorComponent_C::GetDisplayLocation(const struct FSBInteractionInfo& InteractionInfo, struct FVector* DisplayLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursorComponent_C", "GetDisplayLocation");

	Params::ObjectSelectCursorComponent_C_GetDisplayLocation Parms{};

	Parms.InteractionInfo = std::move(InteractionInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayLocation != nullptr)
		*DisplayLocation = std::move(Parms.DisplayLocation);
}


// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.UpdateDisplayLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UObjectSelectCursorComponent_C::UpdateDisplayLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursorComponent_C", "UpdateDisplayLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.InitializeAtFirstLoadingComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UObjectSelectCursorComponent_C::InitializeAtFirstLoadingComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursorComponent_C", "InitializeAtFirstLoadingComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.IsLocallyControlled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bIsLocallyControlled                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UObjectSelectCursorComponent_C::IsLocallyControlled(bool* bIsLocallyControlled) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursorComponent_C", "IsLocallyControlled");

	Params::ObjectSelectCursorComponent_C_IsLocallyControlled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsLocallyControlled != nullptr)
		*bIsLocallyControlled = Parms.bIsLocallyControlled;
}

}

