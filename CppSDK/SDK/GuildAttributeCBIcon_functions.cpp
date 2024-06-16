#pragma once

 

// Package: GuildAttributeCBIcon

#include "Basic.hpp"

#include "GuildAttributeCBIcon_classes.hpp"
#include "GuildAttributeCBIcon_parameters.hpp"


namespace SDK
{

// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.ExecuteUbergraph_GuildAttributeCBIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildAttributeCBIcon_C::ExecuteUbergraph_GuildAttributeCBIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildAttributeCBIcon_C", "ExecuteUbergraph_GuildAttributeCBIcon");

	Params::GuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.Initialize Attribute
// (BlueprintCallable, BlueprintEvent)

void UGuildAttributeCBIcon_C::Initialize_Attribute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildAttributeCBIcon_C", "Initialize Attribute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildAttributeCBIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildAttributeCBIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildAttributeCBIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildAttributeCBIcon_C", "PreConstruct");

	Params::GuildAttributeCBIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildAttributeCBIcon_C::OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildAttributeCBIcon_C", "OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1");

	Params::GuildAttributeCBIcon_C_OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.IsCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsCheck                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildAttributeCBIcon_C::IsCheck(bool* Param_IsCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildAttributeCBIcon_C", "IsCheck");

	Params::GuildAttributeCBIcon_C_IsCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsCheck != nullptr)
		*Param_IsCheck = Parms.Param_IsCheck;
}


// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.GetAttrib
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGuildAttribute                         Param_Attribute                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildAttributeCBIcon_C::GetAttrib(EGuildAttribute* Param_Attribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildAttributeCBIcon_C", "GetAttrib");

	Params::GuildAttributeCBIcon_C_GetAttrib Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Attribute != nullptr)
		*Param_Attribute = Parms.Param_Attribute;
}


// Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.SetChecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsCheck                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildAttributeCBIcon_C::SetChecked(bool bIsCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildAttributeCBIcon_C", "SetChecked");

	Params::GuildAttributeCBIcon_C_SetChecked Parms{};

	Parms.bIsCheck = bIsCheck;

	UObject::ProcessEvent(Func, &Parms);
}

}

