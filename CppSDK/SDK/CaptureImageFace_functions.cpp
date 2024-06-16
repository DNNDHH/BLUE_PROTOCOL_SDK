#pragma once

 

// Package: CaptureImageFace

#include "Basic.hpp"

#include "CaptureImageFace_classes.hpp"
#include "CaptureImageFace_parameters.hpp"


namespace SDK
{

// Function CaptureImageFace.CaptureImageFace_C.ExecuteUbergraph_CaptureImageFace
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImageFace_C::ExecuteUbergraph_CaptureImageFace(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageFace_C", "ExecuteUbergraph_CaptureImageFace");

	Params::CaptureImageFace_C_ExecuteUbergraph_CaptureImageFace Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CaptureImageFace.CaptureImageFace_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCaptureImageFace_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageFace_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CaptureImageFace.CaptureImageFace_C.SetCaptureImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                CaptureImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImageFace_C::SetCaptureImage(class UTexture2DDynamic* CaptureImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageFace_C", "SetCaptureImage");

	Params::CaptureImageFace_C_SetCaptureImage Parms{};

	Parms.CaptureImage = CaptureImage;

	UObject::ProcessEvent(Func, &Parms);
}

}

