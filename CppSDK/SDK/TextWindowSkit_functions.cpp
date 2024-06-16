#pragma once

 

// Package: TextWindowSkit

#include "Basic.hpp"

#include "TextWindowSkit_classes.hpp"
#include "TextWindowSkit_parameters.hpp"


namespace SDK
{

// Function TextWindowSkit.TextWindowSkit_C.ExecuteUbergraph_TextWindowSkit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWindowSkit_C::ExecuteUbergraph_TextWindowSkit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "ExecuteUbergraph_TextWindowSkit");

	Params::TextWindowSkit_C_ExecuteUbergraph_TextWindowSkit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindowSkit.TextWindowSkit_C.SetBGVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTextWindowSkit_C::SetBGVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "SetBGVisible");

	Params::TextWindowSkit_C_SetBGVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindowSkit.TextWindowSkit_C.HideWithoutBG
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTextWindowSkit_C::HideWithoutBG()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "HideWithoutBG");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowSkit.TextWindowSkit_C.SetNextMarkVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInVisibility                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTextWindowSkit_C::SetNextMarkVisibility(const bool bInVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "SetNextMarkVisibility");

	Params::TextWindowSkit_C_SetNextMarkVisibility Parms{};

	Parms.bInVisibility = bInVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindowSkit.TextWindowSkit_C.SetSpeaker
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InProfileId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWindowSkit_C::SetSpeaker(const class FName& InProfileId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "SetSpeaker");

	Params::TextWindowSkit_C_SetSpeaker Parms{};

	Parms.InProfileId = InProfileId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindowSkit.TextWindowSkit_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTextWindowSkit_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowSkit.TextWindowSkit_C.Hide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTextWindowSkit_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowSkit.TextWindowSkit_C.SetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTextWindowSkit_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "SetText");

	Params::TextWindowSkit_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindowSkit.TextWindowSkit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTextWindowSkit_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowSkit.TextWindowSkit_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UTextWindowSkit_C::CustomEvent_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "CustomEvent_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowSkit.TextWindowSkit_C.OnInputKey
// (BlueprintCallable, BlueprintEvent)

void UTextWindowSkit_C::OnInputKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "OnInputKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowSkit.TextWindowSkit_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UTextWindowSkit_C::CustomEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "CustomEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowSkit.TextWindowSkit_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UTextWindowSkit_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowSkit.TextWindowSkit_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UTextWindowSkit_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowSkit.TextWindowSkit_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTextWindowSkit_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextWindowSkit.TextWindowSkit_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWindowSkit_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "OnAnimationFinished");

	Params::TextWindowSkit_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindowSkit.TextWindowSkit_C.IsShow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTextWindowSkit_C::IsShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "IsShow");

	Params::TextWindowSkit_C_IsShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TextWindowSkit.TextWindowSkit_C.SetBGOpacity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Opacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextWindowSkit_C::SetBGOpacity(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "SetBGOpacity");

	Params::TextWindowSkit_C_SetBGOpacity Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextWindowSkit.TextWindowSkit_C.GetBGVisible
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTextWindowSkit_C::GetBGVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextWindowSkit_C", "GetBGVisible");

	Params::TextWindowSkit_C_GetBGVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

