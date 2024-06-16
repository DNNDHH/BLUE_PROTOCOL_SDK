#pragma once

 

// Package: BlueOcean

#include "Basic.hpp"

#include "BlueOcean_classes.hpp"
#include "BlueOcean_parameters.hpp"


namespace SDK
{

// Function BlueOcean.Ocean.GetWaveHeightValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          Location                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorld*                           World                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    HeightOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    TwoIterations                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AOcean::GetWaveHeightValue(const struct FVector& Location, const class UWorld* World, bool HeightOnly, bool TwoIterations) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ocean", "GetWaveHeightValue");

	Params::Ocean_GetWaveHeightValue Parms{};

	Parms.Location = std::move(Location);
	Parms.World = World;
	Parms.HeightOnly = HeightOnly;
	Parms.TwoIterations = TwoIterations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function BlueOcean.ProjectedGridComponent.SetProjectedGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FProjectedGridParameters         Param_Parameters                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UProjectedGridComponent::SetProjectedGrid(const struct FProjectedGridParameters& Param_Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProjectedGridComponent", "SetProjectedGrid");

	Params::ProjectedGridComponent_SetProjectedGrid Parms{};

	Parms.Param_Parameters = std::move(Param_Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function BlueOcean.ProjectedGridComponent.GetParameters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FProjectedGridParameters         ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FProjectedGridParameters UProjectedGridComponent::GetParameters() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProjectedGridComponent", "GetParameters");

	Params::ProjectedGridComponent_GetParameters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

