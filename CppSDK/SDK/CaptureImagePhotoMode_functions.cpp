#pragma once

 

// Package: CaptureImagePhotoMode

#include "Basic.hpp"

#include "CaptureImagePhotoMode_classes.hpp"
#include "CaptureImagePhotoMode_parameters.hpp"


namespace SDK
{

// Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.ExecuteUbergraph_CaptureImagePhotoMode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImagePhotoMode_C::ExecuteUbergraph_CaptureImagePhotoMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImagePhotoMode_C", "ExecuteUbergraph_CaptureImagePhotoMode");

	Params::CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.SetCaptureImageByCharacterId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_CharacterId                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCaptureImagePhotoMode_C::SetCaptureImageByCharacterId(const class FString& Param_CharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImagePhotoMode_C", "SetCaptureImageByCharacterId");

	Params::CaptureImagePhotoMode_C_SetCaptureImageByCharacterId Parms{};

	Parms.Param_CharacterId = std::move(Param_CharacterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCaptureImagePhotoMode_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImagePhotoMode_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.SetCaptureImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                CaptureImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImagePhotoMode_C::SetCaptureImage(class UTexture2DDynamic* CaptureImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImagePhotoMode_C", "SetCaptureImage");

	Params::CaptureImagePhotoMode_C_SetCaptureImage Parms{};

	Parms.CaptureImage = CaptureImage;

	UObject::ProcessEvent(Func, &Parms);
}

}

