#pragma once

 

// Package: DedicatedClassHUD

#include "Basic.hpp"

#include "DedicatedClassHUD_classes.hpp"
#include "DedicatedClassHUD_parameters.hpp"


namespace SDK
{

// Function DedicatedClassHUD.DedicatedClassHUD_C.ExecuteUbergraph_DedicatedClassHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDedicatedClassHUD_C::ExecuteUbergraph_DedicatedClassHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DedicatedClassHUD_C", "ExecuteUbergraph_DedicatedClassHUD");

	Params::DedicatedClassHUD_C_ExecuteUbergraph_DedicatedClassHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DedicatedClassHUD.DedicatedClassHUD_C.OnUpdateHudLayout
// (BlueprintCallable, BlueprintEvent)

void UDedicatedClassHUD_C::OnUpdateHudLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DedicatedClassHUD_C", "OnUpdateHudLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DedicatedClassHUD.DedicatedClassHUD_C.RegistClassHud
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UDedicatedClassHUD_C::RegistClassHud(class UUserWidget* Widget, const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DedicatedClassHUD_C", "RegistClassHud");

	Params::DedicatedClassHUD_C_RegistClassHud Parms{};

	Parms.Widget = Widget;
	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DedicatedClassHUD.DedicatedClassHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDedicatedClassHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DedicatedClassHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DedicatedClassHUD.DedicatedClassHUD_C.RegistWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UDedicatedClassHUD_C::RegistWidget(class UUserWidget* Widget, const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DedicatedClassHUD_C", "RegistWidget");

	Params::DedicatedClassHUD_C_RegistWidget Parms{};

	Parms.Widget = Widget;
	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DedicatedClassHUD.DedicatedClassHUD_C.LoadSavePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UDedicatedClassHUD_C::LoadSavePosition(const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DedicatedClassHUD_C", "LoadSavePosition");

	Params::DedicatedClassHUD_C_LoadSavePosition Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DedicatedClassHUD.DedicatedClassHUD_C.UnregistClassHud
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UDedicatedClassHUD_C::UnregistClassHud(const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DedicatedClassHUD_C", "UnregistClassHud");

	Params::DedicatedClassHUD_C_UnregistClassHud Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

