#pragma once

 

// Package: CommunicateSettingMenu_FaceBg

#include "Basic.hpp"

#include "CommunicateSettingMenu_FaceBg_classes.hpp"
#include "CommunicateSettingMenu_FaceBg_parameters.hpp"


namespace SDK
{

// Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.ExecuteUbergraph_CommunicateSettingMenu_FaceBg
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_FaceBg_C::ExecuteUbergraph_CommunicateSettingMenu_FaceBg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBg_C", "ExecuteUbergraph_CommunicateSettingMenu_FaceBg");

	Params::CommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.ResetData
// (BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_FaceBg_C::ResetData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBg_C", "ResetData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_FaceBg_C::SetData(float InScale, const struct FVector2D& InPosition, const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBg_C", "SetData");

	Params::CommunicateSettingMenu_FaceBg_C_SetData Parms{};

	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommunicateSettingMenu_FaceBg_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_FaceBg_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

