#pragma once

 

// Package: ChatLogFloatStampIcon

#include "Basic.hpp"

#include "ChatLogFloatStampIcon_classes.hpp"
#include "ChatLogFloatStampIcon_parameters.hpp"


namespace SDK
{

// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.ExecuteUbergraph_ChatLogFloatStampIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogFloatStampIcon_C::ExecuteUbergraph_ChatLogFloatStampIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFloatStampIcon_C", "ExecuteUbergraph_ChatLogFloatStampIcon");

	Params::ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogFloatStampIcon_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFloatStampIcon_C", "OnAnimationFinished");

	Params::ChatLogFloatStampIcon_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogFloatStampIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFloatStampIcon_C", "Tick");

	Params::ChatLogFloatStampIcon_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.SetStamp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStampId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InDeadIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogFloatStampIcon_C::SetStamp(int32 InStampId, bool InDeadIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFloatStampIcon_C", "SetStamp");

	Params::ChatLogFloatStampIcon_C_SetStamp Parms{};

	Parms.InStampId = InStampId;
	Parms.InDeadIcon = InDeadIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.Finish
// (Public, BlueprintCallable, BlueprintEvent)

void UChatLogFloatStampIcon_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFloatStampIcon_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.UpdatePos
// (Public, BlueprintCallable, BlueprintEvent)

void UChatLogFloatStampIcon_C::UpdatePos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFloatStampIcon_C", "UpdatePos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.UpdateVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogFloatStampIcon_C::UpdateVisible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFloatStampIcon_C", "UpdateVisible");

	Params::ChatLogFloatStampIcon_C_UpdateVisible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

