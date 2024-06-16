#pragma once

 

// Package: NotifyWidget

#include "Basic.hpp"

#include "NotifyWidget_classes.hpp"
#include "NotifyWidget_parameters.hpp"


namespace SDK
{

// Function NotifyWidget.NotifyWidget_C.OnPress_MainMenu
// (Event, Public, BlueprintEvent)

void UNotifyWidget_C::OnPress_MainMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyWidget_C", "OnPress_MainMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyWidget.NotifyWidget_C.OnPress_Ok
// (Event, Public, BlueprintEvent)

void UNotifyWidget_C::OnPress_Ok()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyWidget_C", "OnPress_Ok");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyWidget.NotifyWidget_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UNotifyWidget_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyWidget_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyWidget.NotifyWidget_C.ExecuteUbergraph_NotifyWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyWidget_C::ExecuteUbergraph_NotifyWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyWidget_C", "ExecuteUbergraph_NotifyWidget");

	Params::NotifyWidget_C_ExecuteUbergraph_NotifyWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyWidget.NotifyWidget_C.Press Cancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNotifyWidget_C::Press_Cancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyWidget_C", "Press Cancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyWidget.NotifyWidget_C.Press Ok__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNotifyWidget_C::Press_Ok__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyWidget_C", "Press Ok__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyWidget.NotifyWidget_C.Press MainMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNotifyWidget_C::Press_MainMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyWidget_C", "Press MainMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

