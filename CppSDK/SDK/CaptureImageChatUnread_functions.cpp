#pragma once

 

// Package: CaptureImageChatUnread

#include "Basic.hpp"

#include "CaptureImageChatUnread_classes.hpp"
#include "CaptureImageChatUnread_parameters.hpp"


namespace SDK
{

// Function CaptureImageChatUnread.CaptureImageChatUnread_C.ExecuteUbergraph_CaptureImageChatUnread
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImageChatUnread_C::ExecuteUbergraph_CaptureImageChatUnread(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageChatUnread_C", "ExecuteUbergraph_CaptureImageChatUnread");

	Params::CaptureImageChatUnread_C_ExecuteUbergraph_CaptureImageChatUnread Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CaptureImageChatUnread.CaptureImageChatUnread_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCaptureImageChatUnread_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageChatUnread_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CaptureImageChatUnread.CaptureImageChatUnread_C.SetCaptureImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                CaptureImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCaptureImageChatUnread_C::SetCaptureImage(class UTexture2DDynamic* CaptureImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CaptureImageChatUnread_C", "SetCaptureImage");

	Params::CaptureImageChatUnread_C_SetCaptureImage Parms{};

	Parms.CaptureImage = CaptureImage;

	UObject::ProcessEvent(Func, &Parms);
}

}

