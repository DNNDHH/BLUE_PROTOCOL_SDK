#pragma once

 

// Package: TextWindow

#include "Basic.hpp"

#include "TextWindow_classes.hpp"
#include "TextWindow_parameters.hpp"


namespace SDK
{

// Function TextWindow.TextWindow_C.ExecuteUbergraph_TextWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWindow_C::ExecuteUbergraph_TextWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "ExecuteUbergraph_TextWindow");

	Params::TextWindow_C_ExecuteUbergraph_TextWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindow.TextWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "Tick");

	Params::TextWindow_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindow.TextWindow_C.SetBGVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTextWindow_C::SetBGVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "SetBGVisible");

	Params::TextWindow_C_SetBGVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindow.TextWindow_C.HideWithoutBG
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTextWindow_C::HideWithoutBG()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "HideWithoutBG");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindow.TextWindow_C.SetNextMarkVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInVisibility                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTextWindow_C::SetNextMarkVisibility(const bool bInVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "SetNextMarkVisibility");

	Params::TextWindow_C_SetNextMarkVisibility Parms{};

	Parms.bInVisibility = bInVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindow.TextWindow_C.SetSpeaker
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InProfileId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWindow_C::SetSpeaker(const class FName& InProfileId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "SetSpeaker");

	Params::TextWindow_C_SetSpeaker Parms{};

	Parms.InProfileId = InProfileId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindow.TextWindow_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTextWindow_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindow.TextWindow_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTextWindow_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindow.TextWindow_C.SetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTextWindow_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "SetText");

	Params::TextWindow_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindow.TextWindow_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UTextWindow_C::CustomEvent_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "CustomEvent_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindow.TextWindow_C.OnInputKey
// (BlueprintCallable, BlueprintEvent)

void UTextWindow_C::OnInputKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "OnInputKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindow.TextWindow_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UTextWindow_C::CustomEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "CustomEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindow.TextWindow_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UTextWindow_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindow.TextWindow_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UTextWindow_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindow.TextWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTextWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindow.TextWindow_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWindow_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "OnAnimationFinished");

	Params::TextWindow_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindow.TextWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTextWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindow.TextWindow_C.IsShow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTextWindow_C::IsShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "IsShow");

	Params::TextWindow_C_IsShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TextWindow.TextWindow_C.SetBGOpacity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Opacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWindow_C::SetBGOpacity(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "SetBGOpacity");

	Params::TextWindow_C_SetBGOpacity Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindow.TextWindow_C.GetBGVisible
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTextWindow_C::GetBGVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "GetBGVisible");

	Params::TextWindow_C_GetBGVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TextWindow.TextWindow_C.CloseOther
// (Public, BlueprintCallable, BlueprintEvent)

void UTextWindow_C::CloseOther()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindow_C", "CloseOther");

	UObject::ProcessEvent(Func, nullptr);
}

}

