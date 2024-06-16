#pragma once

 

// Package: LevelExtension

#include "Basic.hpp"

#include "LevelExtension_classes.hpp"
#include "LevelExtension_parameters.hpp"


namespace SDK
{

// Function LevelExtension.LandscapeWallBase.GetDecalClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class ADecalActor>          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ADecalActor> ALandscapeWallBase::GetDecalClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeWallBase", "GetDecalClass");

	Params::LandscapeWallBase_GetDecalClass Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelExtension.LandscapeWallBase.GetWallComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULandscapeWallComponent*          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULandscapeWallComponent* ALandscapeWallBase::GetWallComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeWallBase", "GetWallComponent");

	Params::LandscapeWallBase_GetWallComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelExtension.LandscapeWallBase.Rebuild
// (Final, Native, Public, BlueprintCallable)

void ALandscapeWallBase::Rebuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeWallBase", "Rebuild");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LevelExtension.LandscapeWallBase.GetHalfHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ALandscapeWallBase::GetHalfHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeWallBase", "GetHalfHeight");

	Params::LandscapeWallBase_GetHalfHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelExtension.LandscapeWallBase.GetHalfThickness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ALandscapeWallBase::GetHalfThickness() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeWallBase", "GetHalfThickness");

	Params::LandscapeWallBase_GetHalfThickness Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelExtension.LandscapeWallSpline.GetSplineComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULandscapeWallSplineComponent*    ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULandscapeWallSplineComponent* ALandscapeWallSpline::GetSplineComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeWallSpline", "GetSplineComponent");

	Params::LandscapeWallSpline_GetSplineComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

