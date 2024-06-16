#pragma once

 

// Package: PhotoViewer

#include "Basic.hpp"

#include "PhotoViewer_classes.hpp"
#include "PhotoViewer_parameters.hpp"


namespace SDK
{

// Function PhotoViewer.PhotoViewer_C.OnClose_Complete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPhotoViewer_C::OnClose_Complete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoViewer_C", "OnClose_Complete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoViewer.PhotoViewer_C.ExecuteUbergraph_PhotoViewer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoViewer_C::ExecuteUbergraph_PhotoViewer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoViewer_C", "ExecuteUbergraph_PhotoViewer");

	Params::PhotoViewer_C_ExecuteUbergraph_PhotoViewer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoViewer.PhotoViewer_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UPhotoViewer_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoViewer_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoViewer.PhotoViewer_C.BndEvt__BigThumbnail_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
// (BlueprintEvent)

void UPhotoViewer_C::BndEvt__BigThumbnail_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoViewer_C", "BndEvt__BigThumbnail_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoViewer.PhotoViewer_C.WidgetAnimationEvt_CloseAnim_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UPhotoViewer_C::WidgetAnimationEvt_CloseAnim_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoViewer_C", "WidgetAnimationEvt_CloseAnim_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoViewer.PhotoViewer_C.BndEvt__BigThumbnail_BGCloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPhotoViewer_C::BndEvt__BigThumbnail_BGCloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoViewer_C", "BndEvt__BigThumbnail_BGCloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoViewer.PhotoViewer_C.WidgetAnimationEvt_OpenAnim_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UPhotoViewer_C::WidgetAnimationEvt_OpenAnim_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoViewer_C", "WidgetAnimationEvt_OpenAnim_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PhotoViewer.PhotoViewer_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPhotoViewer_C::SetData(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoViewer_C", "SetData");

	Params::PhotoViewer_C_SetData Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhotoViewer.PhotoViewer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPhotoViewer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhotoViewer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

