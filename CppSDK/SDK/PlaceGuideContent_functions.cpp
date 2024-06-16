#pragma once

 

// Package: PlaceGuideContent

#include "Basic.hpp"

#include "PlaceGuideContent_classes.hpp"
#include "PlaceGuideContent_parameters.hpp"


namespace SDK
{

// Function PlaceGuideContent.PlaceGuideContent_C.OnPlayEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlaceGuideContent_C::OnPlayEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuideContent_C", "OnPlayEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlaceGuideContent.PlaceGuideContent_C.ExecuteUbergraph_PlaceGuideContent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlaceGuideContent_C::ExecuteUbergraph_PlaceGuideContent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuideContent_C", "ExecuteUbergraph_PlaceGuideContent");

	Params::PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlaceGuideContent.PlaceGuideContent_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlaceGuideContent_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuideContent_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlaceGuideContent.PlaceGuideContent_C.OnChangeUIVisibleSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlaceGuideContent_C::OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuideContent_C", "OnChangeUIVisibleSetting");

	Params::PlaceGuideContent_C_OnChangeUIVisibleSetting Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlaceGuideContent.PlaceGuideContent_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UPlaceGuideContent_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuideContent_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlaceGuideContent.PlaceGuideContent_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlaceGuideContent_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuideContent_C", "OnAnimationFinished");

	Params::PlaceGuideContent_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlaceGuideContent.PlaceGuideContent_C.Show_ByText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InPlaceName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InSubName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bInAutoClose                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlaceGuideContent_C::Show_ByText(const class FText& InPlaceName, const class FText& InSubName, bool bInAutoClose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuideContent_C", "Show_ByText");

	Params::PlaceGuideContent_C_Show_ByText Parms{};

	Parms.InPlaceName = std::move(InPlaceName);
	Parms.InSubName = std::move(InSubName);
	Parms.bInAutoClose = bInAutoClose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlaceGuideContent.PlaceGuideContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlaceGuideContent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuideContent_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

