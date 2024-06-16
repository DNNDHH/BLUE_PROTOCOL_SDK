#pragma once

 

// Package: BP_SchedulableMaterialParam

#include "Basic.hpp"

#include "BP_SchedulableMaterialParam_classes.hpp"
#include "BP_SchedulableMaterialParam_parameters.hpp"


namespace SDK
{

// Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ExecuteUbergraph_BP_SchedulableMaterialParam
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SchedulableMaterialParam_C::ExecuteUbergraph_BP_SchedulableMaterialParam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SchedulableMaterialParam_C", "ExecuteUbergraph_BP_SchedulableMaterialParam");

	Params::BP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SchedulableMaterialParam_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SchedulableMaterialParam_C", "ReceiveTick");

	Params::BP_SchedulableMaterialParam_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SchedulableMaterialParam_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SchedulableMaterialParam_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.StartRoutine
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstance*>        SourceMaterial                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                             ParameterName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Intencity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SwitchOnTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SwitchOffTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SchedulableMaterialParam_C::StartRoutine(TArray<class UMaterialInstance*>& SourceMaterial, class FName ParameterName, float Intencity, float Duration, int32 SwitchOnTime, int32 SwitchOffTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SchedulableMaterialParam_C", "StartRoutine");

	Params::BP_SchedulableMaterialParam_C_StartRoutine Parms{};

	Parms.SourceMaterial = std::move(SourceMaterial);
	Parms.ParameterName = ParameterName;
	Parms.Intencity = Intencity;
	Parms.Duration = Duration;
	Parms.SwitchOnTime = SwitchOnTime;
	Parms.SwitchOffTime = SwitchOffTime;

	UObject::ProcessEvent(Func, &Parms);

	SourceMaterial = std::move(Parms.SourceMaterial);
}


// Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.GetVariableMaterialInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstance*                SourceMaterial                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         MaterialInstanceDynamic                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SchedulableMaterialParam_C::GetVariableMaterialInstance(class UMaterialInstance* SourceMaterial, class UMaterialInstanceDynamic** MaterialInstanceDynamic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SchedulableMaterialParam_C", "GetVariableMaterialInstance");

	Params::BP_SchedulableMaterialParam_C_GetVariableMaterialInstance Parms{};

	Parms.SourceMaterial = SourceMaterial;

	UObject::ProcessEvent(Func, &Parms);

	if (MaterialInstanceDynamic != nullptr)
		*MaterialInstanceDynamic = Parms.MaterialInstanceDynamic;
}

}

