#pragma once

 

// Package: CaptureImageScreenShotQuest

#include "Basic.hpp"

#include "CaptureImageScreenShotQuest_classes.hpp"
#include "CaptureImageScreenShotQuest_parameters.hpp"


namespace SDK
{

// Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.ExecuteUbergraph_CaptureImageScreenShotQuest
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImageScreenShotQuest_C::ExecuteUbergraph_CaptureImageScreenShotQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageScreenShotQuest_C", "ExecuteUbergraph_CaptureImageScreenShotQuest");

	Params::CaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCaptureImageScreenShotQuest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageScreenShotQuest_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.SetCaptureImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       CaptureImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImageScreenShotQuest_C::SetCaptureImage(class UTexture2D* CaptureImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageScreenShotQuest_C", "SetCaptureImage");

	Params::CaptureImageScreenShotQuest_C_SetCaptureImage Parms{};

	Parms.CaptureImage = CaptureImage;

	UObject::ProcessEvent(Func, &Parms);
}

}

