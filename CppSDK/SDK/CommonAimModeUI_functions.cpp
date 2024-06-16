#pragma once

 

// Package: CommonAimModeUI

#include "Basic.hpp"

#include "CommonAimModeUI_classes.hpp"
#include "CommonAimModeUI_parameters.hpp"


namespace SDK
{

// Function CommonAimModeUI.CommonAimModeUI_C.ExecuteUbergraph_CommonAimModeUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonAimModeUI_C::ExecuteUbergraph_CommonAimModeUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonAimModeUI_C", "ExecuteUbergraph_CommonAimModeUI");

	Params::CommonAimModeUI_C_ExecuteUbergraph_CommonAimModeUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonAimModeUI.CommonAimModeUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonAimModeUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonAimModeUI_C", "Tick");

	Params::CommonAimModeUI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonAimModeUI.CommonAimModeUI_C.Set Ray Hit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReyHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonAimModeUI_C::Set_Ray_Hit(bool bReyHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonAimModeUI_C", "Set Ray Hit");

	Params::CommonAimModeUI_C_Set_Ray_Hit Parms{};

	Parms.bReyHit = bReyHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonAimModeUI.CommonAimModeUI_C.SetClassType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            Param_ClassType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonAimModeUI_C::SetClassType(ESBClassType Param_ClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonAimModeUI_C", "SetClassType");

	Params::CommonAimModeUI_C_SetClassType Parms{};

	Parms.Param_ClassType = Param_ClassType;

	UObject::ProcessEvent(Func, &Parms);
}

}

