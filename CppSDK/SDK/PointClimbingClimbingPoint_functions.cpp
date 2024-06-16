#pragma once

 

// Package: PointClimbingClimbingPoint

#include "Basic.hpp"

#include "PointClimbingClimbingPoint_classes.hpp"
#include "PointClimbingClimbingPoint_parameters.hpp"


namespace SDK
{

// Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.ExecuteUbergraph_PointClimbingClimbingPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPointClimbingClimbingPoint_C::ExecuteUbergraph_PointClimbingClimbingPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PointClimbingClimbingPoint_C", "ExecuteUbergraph_PointClimbingClimbingPoint");

	Params::PointClimbingClimbingPoint_C_ExecuteUbergraph_PointClimbingClimbingPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPointClimbingClimbingPoint_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PointClimbingClimbingPoint_C", "PreConstruct");

	Params::PointClimbingClimbingPoint_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.SetPointLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Condition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPointClimbingClimbingPoint_C::SetPointLocation(const struct FVector& Location, bool* Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PointClimbingClimbingPoint_C", "SetPointLocation");

	Params::PointClimbingClimbingPoint_C_SetPointLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (Condition != nullptr)
		*Condition = Parms.Condition;
}


// Function PointClimbingClimbingPoint.PointClimbingClimbingPoint_C.SetPointLocation2D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPointClimbingClimbingPoint_C::SetPointLocation2D(const struct FVector2D& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PointClimbingClimbingPoint_C", "SetPointLocation2D");

	Params::PointClimbingClimbingPoint_C_SetPointLocation2D Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}

}

