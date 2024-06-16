#pragma once

 

// Package: ConfigSwicher

#include "Basic.hpp"

#include "ConfigSwicher_classes.hpp"
#include "ConfigSwicher_parameters.hpp"


namespace SDK
{

// Function ConfigSwicher.ConfigSwicher_C.InitializeCS
// (Public, BlueprintCallable, BlueprintEvent)

void UConfigSwicher_C::InitializeCS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "InitializeCS");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfigSwicher.ConfigSwicher_C.GenerateConfigs
// (Public, BlueprintCallable, BlueprintEvent)

void UConfigSwicher_C::GenerateConfigs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "GenerateConfigs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfigSwicher.ConfigSwicher_C.YesNoCheckResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsYes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigSwicher_C::YesNoCheckResult(bool bIsYes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "YesNoCheckResult");

	Params::ConfigSwicher_C_YesNoCheckResult Parms{};

	Parms.bIsYes = bIsYes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConfigSwicher.ConfigSwicher_C.Get Widget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EConfigurations                         NectConfig                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigSwicher_C::Get_Widget(EConfigurations NectConfig, class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "Get Widget");

	Params::ConfigSwicher_C_Get_Widget Parms{};

	Parms.NectConfig = NectConfig;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function ConfigSwicher.ConfigSwicher_C.SetCloseState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Close                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigSwicher_C::SetCloseState(bool Close)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "SetCloseState");

	Params::ConfigSwicher_C_SetCloseState Parms{};

	Parms.Close = Close;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConfigSwicher.ConfigSwicher_C.IsClosed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsClosed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigSwicher_C::IsClosed(bool* Param_IsClosed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "IsClosed");

	Params::ConfigSwicher_C_IsClosed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsClosed != nullptr)
		*Param_IsClosed = Parms.Param_IsClosed;
}


// Function ConfigSwicher.ConfigSwicher_C.IsCommandKeyAsNone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bNone                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigSwicher_C::IsCommandKeyAsNone(bool* bNone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "IsCommandKeyAsNone");

	Params::ConfigSwicher_C_IsCommandKeyAsNone Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bNone != nullptr)
		*bNone = Parms.bNone;
}


// Function ConfigSwicher.ConfigSwicher_C.IsChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsChanged                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigSwicher_C::IsChanged(bool* Param_IsChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "IsChanged");

	Params::ConfigSwicher_C_IsChanged Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsChanged != nullptr)
		*Param_IsChanged = Parms.Param_IsChanged;
}


// Function ConfigSwicher.ConfigSwicher_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfigSwicher_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfigSwicher.ConfigSwicher_C.ChangeConfigMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EConfigurations                         Configurations                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigSwicher_C::ChangeConfigMode(EConfigurations Configurations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "ChangeConfigMode");

	Params::ConfigSwicher_C_ChangeConfigMode Parms{};

	Parms.Configurations = Configurations;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConfigSwicher.ConfigSwicher_C.Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bConfigChanged                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigSwicher_C::Changed(bool bConfigChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "Changed");

	Params::ConfigSwicher_C_Changed Parms{};

	Parms.bConfigChanged = bConfigChanged;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConfigSwicher.ConfigSwicher_C.YesNoCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigSwicher_C::YesNoCheck(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "YesNoCheck");

	Params::ConfigSwicher_C_YesNoCheck Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConfigSwicher.ConfigSwicher_C.CheckChanged
// (BlueprintCallable, BlueprintEvent)

void UConfigSwicher_C::CheckChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "CheckChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfigSwicher.ConfigSwicher_C.IsNone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigSwicher_C::IsNone(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "IsNone");

	Params::ConfigSwicher_C_IsNone Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConfigSwicher.ConfigSwicher_C.LocalSave
// (BlueprintCallable, BlueprintEvent)

void UConfigSwicher_C::LocalSave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "LocalSave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfigSwicher.ConfigSwicher_C.BndEvt__KeyConfig_K2Node_ComponentBoundEvent_1_RequestParentFocus__DelegateSignature
// (BlueprintEvent)

void UConfigSwicher_C::BndEvt__KeyConfig_K2Node_ComponentBoundEvent_1_RequestParentFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "BndEvt__KeyConfig_K2Node_ComponentBoundEvent_1_RequestParentFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfigSwicher.ConfigSwicher_C.SetTitleMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTitleMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigSwicher_C::SetTitleMode(bool bTitleMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "SetTitleMode");

	Params::ConfigSwicher_C_SetTitleMode Parms{};

	Parms.bTitleMode = bTitleMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConfigSwicher.ConfigSwicher_C.ShowError None
// (BlueprintCallable, BlueprintEvent)

void UConfigSwicher_C::ShowError_None()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "ShowError None");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfigSwicher.ConfigSwicher_C.ExecuteUbergraph_ConfigSwicher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigSwicher_C::ExecuteUbergraph_ConfigSwicher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "ExecuteUbergraph_ConfigSwicher");

	Params::ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConfigSwicher.ConfigSwicher_C.OnHasChenged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConfigSwicher_C::OnHasChenged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "OnHasChenged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfigSwicher.ConfigSwicher_C.RequestParentFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConfigSwicher_C::RequestParentFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "RequestParentFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfigSwicher.ConfigSwicher_C.FailChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConfigSwicher_C::FailChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "FailChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConfigSwicher.ConfigSwicher_C.SuccessChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConfigSwicher_C::SuccessChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConfigSwicher_C", "SuccessChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

