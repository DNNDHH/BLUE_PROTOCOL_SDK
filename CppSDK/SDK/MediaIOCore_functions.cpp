#pragma once

 

// Package: MediaIOCore

#include "Basic.hpp"

#include "MediaIOCore_classes.hpp"
#include "MediaIOCore_parameters.hpp"


namespace SDK
{

// Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMediaCaptureOptions             CaptureOptions                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaCapture::CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaCapture", "CaptureActiveSceneViewport");

	Params::MediaCapture_CaptureActiveSceneViewport Parms{};

	Parms.CaptureOptions = std::move(CaptureOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*           RenderTarget                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMediaCaptureOptions             CaptureOptions                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaCapture::CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaCapture", "CaptureTextureRenderTarget2D");

	Params::MediaCapture_CaptureTextureRenderTarget2D Parms{};

	Parms.RenderTarget = RenderTarget;
	Parms.CaptureOptions = std::move(CaptureOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MediaIOCore.MediaCapture.SetMediaOutput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaOutput*                     InMediaOutput                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaCapture::SetMediaOutput(class UMediaOutput* InMediaOutput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaCapture", "SetMediaOutput");

	Params::MediaCapture_SetMediaOutput Parms{};

	Parms.InMediaOutput = InMediaOutput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function MediaIOCore.MediaCapture.StopCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bAllowPendingFrameToBeProcess                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaCapture::StopCapture(bool bAllowPendingFrameToBeProcess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaCapture", "StopCapture");

	Params::MediaCapture_StopCapture Parms{};

	Parms.bAllowPendingFrameToBeProcess = bAllowPendingFrameToBeProcess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*           RenderTarget                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaCapture::UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaCapture", "UpdateTextureRenderTarget2D");

	Params::MediaCapture_UpdateTextureRenderTarget2D Parms{};

	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPixelFormat                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EPixelFormat UMediaCapture::GetDesiredPixelFormat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaCapture", "GetDesiredPixelFormat");

	Params::MediaCapture_GetDesiredPixelFormat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MediaIOCore.MediaCapture.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntPoint                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FIntPoint UMediaCapture::GetDesiredSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaCapture", "GetDesiredSize");

	Params::MediaCapture_GetDesiredSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MediaIOCore.MediaCapture.GetState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMediaCaptureState                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EMediaCaptureState UMediaCapture::GetState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaCapture", "GetState");

	Params::MediaCapture_GetState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MediaIOCore.MediaOutput.CreateMediaCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaCapture*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaCapture* UMediaOutput::CreateMediaCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaOutput", "CreateMediaCapture");

	Params::MediaOutput_CreateMediaCapture Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function MediaIOCore.MediaOutput.Validate
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           OutFailureReason                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaOutput::Validate(class FString* OutFailureReason) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaOutput", "Validate");

	Params::MediaOutput_Validate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutFailureReason != nullptr)
		*OutFailureReason = std::move(Parms.OutFailureReason);

	return Parms.ReturnValue;
}

}
