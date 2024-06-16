#pragma once

 

// Package: NotifyScreenshot

#include "Basic.hpp"

#include "NotifyScreenshot_classes.hpp"
#include "NotifyScreenshot_parameters.hpp"


namespace SDK
{

// Function NotifyScreenshot.NotifyScreenshot_C.ExecuteUbergraph_NotifyScreenshot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyScreenshot_C::ExecuteUbergraph_NotifyScreenshot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyScreenshot_C", "ExecuteUbergraph_NotifyScreenshot");

	Params::NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyScreenshot.NotifyScreenshot_C.FinishScreenshot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyScreenshot_C::FinishScreenshot(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyScreenshot_C", "FinishScreenshot");

	Params::NotifyScreenshot_C_FinishScreenshot Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyScreenshot.NotifyScreenshot_C.PrepareScreens
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyScreenshot_C::PrepareScreens(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyScreenshot_C", "PrepareScreens");

	Params::NotifyScreenshot_C_PrepareScreens Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyScreenshot.NotifyScreenshot_C.OnScreenshotCaptured
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyScreenshot_C::OnScreenshotCaptured(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyScreenshot_C", "OnScreenshotCaptured");

	Params::NotifyScreenshot_C_OnScreenshotCaptured Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyScreenshot.NotifyScreenshot_C.AddScreenshotCaptured
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UNotifyScreenshot_C::AddScreenshotCaptured(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyScreenshot_C", "AddScreenshotCaptured");

	Params::NotifyScreenshot_C_AddScreenshotCaptured Parms{};

	Parms.Filename = std::move(Filename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyScreenshot.NotifyScreenshot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyScreenshot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyScreenshot_C", "Tick");

	Params::NotifyScreenshot_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyScreenshot.NotifyScreenshot_C.AddNotifyMessageItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyScreenshot_C::AddNotifyMessageItem(class UUserWidget* Widget, class UAkAudioEvent* Sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyScreenshot_C", "AddNotifyMessageItem");

	Params::NotifyScreenshot_C_AddNotifyMessageItem Parms{};

	Parms.Widget = Widget;
	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyScreenshot.NotifyScreenshot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifyScreenshot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyScreenshot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

