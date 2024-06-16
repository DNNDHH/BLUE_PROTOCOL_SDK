#pragma once

 

// Package: CaptureImageChat

#include "Basic.hpp"

#include "CaptureImageChat_classes.hpp"
#include "CaptureImageChat_parameters.hpp"


namespace SDK
{

// Function CaptureImageChat.CaptureImageChat_C.ExecuteUbergraph_CaptureImageChat
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImageChat_C::ExecuteUbergraph_CaptureImageChat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageChat_C", "ExecuteUbergraph_CaptureImageChat");

	Params::CaptureImageChat_C_ExecuteUbergraph_CaptureImageChat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CaptureImageChat.CaptureImageChat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCaptureImageChat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageChat_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CaptureImageChat.CaptureImageChat_C.SetCaptureImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                CaptureImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImageChat_C::SetCaptureImage(class UTexture2DDynamic* CaptureImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageChat_C", "SetCaptureImage");

	Params::CaptureImageChat_C_SetCaptureImage Parms{};

	Parms.CaptureImage = CaptureImage;

	UObject::ProcessEvent(Func, &Parms);
}

}

