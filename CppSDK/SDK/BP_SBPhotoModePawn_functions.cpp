#pragma once

 

// Package: BP_SBPhotoModePawn

#include "Basic.hpp"

#include "BP_SBPhotoModePawn_classes.hpp"
#include "BP_SBPhotoModePawn_parameters.hpp"


namespace SDK
{

// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ExecuteUbergraph_BP_SBPhotoModePawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModePawn_C::ExecuteUbergraph_BP_SBPhotoModePawn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePawn_C", "ExecuteUbergraph_BP_SBPhotoModePawn");

	Params::BP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.BP_ResetCamera
// (Event, Protected, BlueprintEvent)

void ABP_SBPhotoModePawn_C::BP_ResetCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePawn_C", "BP_ResetCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ResetPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          NewLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModePawn_C::ResetPosition(const struct FVector& NewLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePawn_C", "ResetPosition");

	Params::BP_SBPhotoModePawn_C_ResetPosition Parms{};

	Parms.NewLocation = std::move(NewLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.OnOverLimitDistance
// (BlueprintCallable, BlueprintEvent)

void ABP_SBPhotoModePawn_C::OnOverLimitDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePawn_C", "OnOverLimitDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.CreateWorldCameraActor
// (BlueprintCallable, BlueprintEvent)

void ABP_SBPhotoModePawn_C::CreateWorldCameraActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePawn_C", "CreateWorldCameraActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModePawn_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePawn_C", "ReceiveEndPlay");

	Params::BP_SBPhotoModePawn_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModePawn_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePawn_C", "ReceivePossessed");

	Params::BP_SBPhotoModePawn_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModePawn_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePawn_C", "ReceiveTick");

	Params::BP_SBPhotoModePawn_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SBPhotoModePawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePawn_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ShowDebugLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SBPhotoModePawn_C::ShowDebugLine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePawn_C", "ShowDebugLine");

	UObject::ProcessEvent(Func, nullptr);
}

}

