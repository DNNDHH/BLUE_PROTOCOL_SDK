#pragma once

 

// Package: ImagePlate

#include "Basic.hpp"

#include "ImagePlate_classes.hpp"
#include "ImagePlate_parameters.hpp"


namespace SDK
{

// Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged
// (Final, Native, Public)

void UImagePlateComponent::OnRenderTextureChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagePlateComponent", "OnRenderTextureChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ImagePlate.ImagePlateComponent.SetImagePlate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FImagePlateParameters            Param_Plate                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UImagePlateComponent::SetImagePlate(const struct FImagePlateParameters& Param_Plate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagePlateComponent", "SetImagePlate");

	Params::ImagePlateComponent_SetImagePlate Parms{};

	Parms.Param_Plate = std::move(Param_Plate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ImagePlate.ImagePlateComponent.GetPlate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FImagePlateParameters            ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FImagePlateParameters UImagePlateComponent::GetPlate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagePlateComponent", "GetPlate");

	Params::ImagePlateComponent_GetPlate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
