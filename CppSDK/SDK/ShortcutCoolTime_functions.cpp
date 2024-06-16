#pragma once

 

// Package: ShortcutCoolTime

#include "Basic.hpp"

#include "ShortcutCoolTime_classes.hpp"
#include "ShortcutCoolTime_parameters.hpp"


namespace SDK
{

// Function ShortcutCoolTime.ShortcutCoolTime_C.EndCoolTime__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShortcutCoolTime_C::EndCoolTime__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutCoolTime_C", "EndCoolTime__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutCoolTime.ShortcutCoolTime_C.ExecuteUbergraph_ShortcutCoolTime
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutCoolTime_C::ExecuteUbergraph_ShortcutCoolTime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutCoolTime_C", "ExecuteUbergraph_ShortcutCoolTime");

	Params::ShortcutCoolTime_C_ExecuteUbergraph_ShortcutCoolTime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutCoolTime.ShortcutCoolTime_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutCoolTime_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutCoolTime_C", "Tick");

	Params::ShortcutCoolTime_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutCoolTime.ShortcutCoolTime_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShortcutCoolTime_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutCoolTime_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutCoolTime.ShortcutCoolTime_C.ShowCoolTime
// (Public, BlueprintCallable, BlueprintEvent)

void UShortcutCoolTime_C::ShowCoolTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutCoolTime_C", "ShowCoolTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutCoolTime.ShortcutCoolTime_C.HideCoolTime
// (Public, BlueprintCallable, BlueprintEvent)

void UShortcutCoolTime_C::HideCoolTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutCoolTime_C", "HideCoolTime");

	UObject::ProcessEvent(Func, nullptr);
}

}

