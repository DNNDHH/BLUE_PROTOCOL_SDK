#pragma once

 

// Package: CommonSkillStatusDescBase

#include "Basic.hpp"

#include "CommonSkillStatusDescBase_classes.hpp"
#include "CommonSkillStatusDescBase_parameters.hpp"


namespace SDK
{

// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.ExecuteUbergraph_CommonSkillStatusDescBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonSkillStatusDescBase_C::ExecuteUbergraph_CommonSkillStatusDescBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSkillStatusDescBase_C", "ExecuteUbergraph_CommonSkillStatusDescBase");

	Params::CommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonSkillStatusDescBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSkillStatusDescBase_C", "PreConstruct");

	Params::CommonSkillStatusDescBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetBaseSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InWidth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonSkillStatusDescBase_C::SetBaseSize(float InWidth, float InHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSkillStatusDescBase_C", "SetBaseSize");

	Params::CommonSkillStatusDescBase_C_SetBaseSize Parms{};

	Parms.InWidth = InWidth;
	Parms.InHeight = InHeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SwitchBaseBgType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNormalType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonSkillStatusDescBase_C::SwitchBaseBgType(bool InIsNormalType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSkillStatusDescBase_C", "SwitchBaseBgType");

	Params::CommonSkillStatusDescBase_C_SwitchBaseBgType Parms{};

	Parms.InIsNormalType = InIsNormalType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetBlank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsBlank                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonSkillStatusDescBase_C::SetBlank(bool InIsBlank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSkillStatusDescBase_C", "SetBlank");

	Params::CommonSkillStatusDescBase_C_SetBlank Parms{};

	Parms.InIsBlank = InIsBlank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSKill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonSkillStatusDescBase_C::SetSKill(int32 InSkillId, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSkillStatusDescBase_C", "SetSKill");

	Params::CommonSkillStatusDescBase_C_SetSKill Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonSkillStatusDescBase_C::SetSkillName(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSkillStatusDescBase_C", "SetSkillName");

	Params::CommonSkillStatusDescBase_C_SetSkillName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonSkillStatusDescBase_C::SetSkillLevel(int32 InLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSkillStatusDescBase_C", "SetSkillLevel");

	Params::CommonSkillStatusDescBase_C_SetSkillLevel Parms{};

	Parms.InLevel = InLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillClassType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonSkillStatusDescBase_C::SetSkillClassType(ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSkillStatusDescBase_C", "SetSkillClassType");

	Params::CommonSkillStatusDescBase_C_SetSkillClassType Parms{};

	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillAbilityTypeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonSkillStatusDescBase_C::SetSkillAbilityTypeVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSkillStatusDescBase_C", "SetSkillAbilityTypeVisibility");

	Params::CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

