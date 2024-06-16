#pragma once

 

// Package: TickerMessage

#include "Basic.hpp"

#include "TickerMessage_classes.hpp"
#include "TickerMessage_parameters.hpp"


namespace SDK
{

// Function TickerMessage.TickerMessage_C.ExecuteUbergraph_TickerMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTickerMessage_C::ExecuteUbergraph_TickerMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "ExecuteUbergraph_TickerMessage");

	Params::TickerMessage_C_ExecuteUbergraph_TickerMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TickerMessage.TickerMessage_C.DumpDebugInfo
// (Event, Public, BlueprintEvent)

void UTickerMessage_C::DumpDebugInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "DumpDebugInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TickerMessage.TickerMessage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTickerMessage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TickerMessage.TickerMessage_C.OnUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTickerMessage_C::OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "OnUIVisibleSettingChange");

	Params::TickerMessage_C_OnUIVisibleSettingChange Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TickerMessage.TickerMessage_C.OnTickerMessageChanged
// (BlueprintCallable, BlueprintEvent)

void UTickerMessage_C::OnTickerMessageChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "OnTickerMessageChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TickerMessage.TickerMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTickerMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TickerMessage.TickerMessage_C.Proc_Interval
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTickerMessage_C::Proc_Interval(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "Proc_Interval");

	Params::TickerMessage_C_Proc_Interval Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TickerMessage.TickerMessage_C.Proc_Scroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTickerMessage_C::Proc_Scroll(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "Proc_Scroll");

	Params::TickerMessage_C_Proc_Scroll Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TickerMessage.TickerMessage_C.Proc_Idle
// (BlueprintCallable, BlueprintEvent)

void UTickerMessage_C::Proc_Idle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "Proc_Idle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TickerMessage.TickerMessage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTickerMessage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "Tick");

	Params::TickerMessage_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TickerMessage.TickerMessage_C.OnMessageChange
// (Public, BlueprintCallable, BlueprintEvent)

void UTickerMessage_C::OnMessageChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "OnMessageChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TickerMessage.TickerMessage_C.CheckNextMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTickerMessage_C::CheckNextMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "CheckNextMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TickerMessage.TickerMessage_C.OnCheckTime
// (Public, BlueprintCallable, BlueprintEvent)

void UTickerMessage_C::OnCheckTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "OnCheckTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TickerMessage.TickerMessage_C.DumpDebugInfo_Internal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InTrigger                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UTickerMessage_C::DumpDebugInfo_Internal(const class FString& InTrigger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TickerMessage_C", "DumpDebugInfo_Internal");

	Params::TickerMessage_C_DumpDebugInfo_Internal Parms{};

	Parms.InTrigger = std::move(InTrigger);

	UObject::ProcessEvent(Func, &Parms);
}

}

