#pragma once

 

// Package: LensDistortion

#include "Basic.hpp"

#include "LensDistortion_classes.hpp"
#include "LensDistortion_parameters.hpp"


namespace SDK
{

// Function LensDistortion.LensDistortionBlueprintLibrary.DrawUVDisplacementToRenderTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLensDistortionCameraModel       CameraModel                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   DistortedHorizontalFOV                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   DistortedAspectRatio                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   UndistortOverscanFactor                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*           OutputRenderTarget                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   OutputMultiply                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   OutputAdd                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensDistortionBlueprintLibrary::DrawUVDisplacementToRenderTarget(const class UObject* WorldContextObject, const struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float UndistortOverscanFactor, class UTextureRenderTarget2D* OutputRenderTarget, float OutputMultiply, float OutputAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LensDistortionBlueprintLibrary", "DrawUVDisplacementToRenderTarget");

	Params::LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CameraModel = std::move(CameraModel);
	Parms.DistortedHorizontalFOV = DistortedHorizontalFOV;
	Parms.DistortedAspectRatio = DistortedAspectRatio;
	Parms.UndistortOverscanFactor = UndistortOverscanFactor;
	Parms.OutputRenderTarget = OutputRenderTarget;
	Parms.OutputMultiply = OutputMultiply;
	Parms.OutputAdd = OutputAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LensDistortion.LensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLensDistortionCameraModel       A                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLensDistortionCameraModel       B                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(const struct FLensDistortionCameraModel& A, const struct FLensDistortionCameraModel& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LensDistortionBlueprintLibrary", "EqualEqual_CompareLensDistortionModels");

	Params::LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LensDistortion.LensDistortionBlueprintLibrary.GetUndistortOverscanFactor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLensDistortionCameraModel       CameraModel                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   DistortedHorizontalFOV                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   DistortedAspectRatio                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   UndistortOverscanFactor                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensDistortionBlueprintLibrary::GetUndistortOverscanFactor(const struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float* UndistortOverscanFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LensDistortionBlueprintLibrary", "GetUndistortOverscanFactor");

	Params::LensDistortionBlueprintLibrary_GetUndistortOverscanFactor Parms{};

	Parms.CameraModel = std::move(CameraModel);
	Parms.DistortedHorizontalFOV = DistortedHorizontalFOV;
	Parms.DistortedAspectRatio = DistortedAspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (UndistortOverscanFactor != nullptr)
		*UndistortOverscanFactor = Parms.UndistortOverscanFactor;
}


// Function LensDistortion.LensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLensDistortionCameraModel       A                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLensDistortionCameraModel       B                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(const struct FLensDistortionCameraModel& A, const struct FLensDistortionCameraModel& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LensDistortionBlueprintLibrary", "NotEqual_CompareLensDistortionModels");

	Params::LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

