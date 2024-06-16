#pragma once

 

// Package: CaptureImageMatching

#include "Basic.hpp"

#include "CaptureImageMatching_classes.hpp"
#include "CaptureImageMatching_parameters.hpp"


namespace SDK
{

// Function CaptureImageMatching.CaptureImageMatching_C.ExecuteUbergraph_CaptureImageMatching
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImageMatching_C::ExecuteUbergraph_CaptureImageMatching(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageMatching_C", "ExecuteUbergraph_CaptureImageMatching");

	Params::CaptureImageMatching_C_ExecuteUbergraph_CaptureImageMatching Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CaptureImageMatching.CaptureImageMatching_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCaptureImageMatching_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageMatching_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CaptureImageMatching.CaptureImageMatching_C.SetCaptureImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                CaptureImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImageMatching_C::SetCaptureImage(class UTexture2DDynamic* CaptureImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageMatching_C", "SetCaptureImage");

	Params::CaptureImageMatching_C_SetCaptureImage Parms{};

	Parms.CaptureImage = CaptureImage;

	UObject::ProcessEvent(Func, &Parms);
}

}

