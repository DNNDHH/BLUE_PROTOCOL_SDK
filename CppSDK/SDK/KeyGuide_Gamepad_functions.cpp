#pragma once

 

// Package: KeyGuide_Gamepad

#include "Basic.hpp"

#include "KeyGuide_Gamepad_classes.hpp"
#include "KeyGuide_Gamepad_parameters.hpp"


namespace SDK
{

// Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.ExecuteUbergraph_KeyGuide_Gamepad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_Gamepad_C::ExecuteUbergraph_KeyGuide_Gamepad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Gamepad_C", "ExecuteUbergraph_KeyGuide_Gamepad");

	Params::KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.ApplyKeyConfigData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyGuide_Gamepad_C::ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Gamepad_C", "ApplyKeyConfigData");

	Params::KeyGuide_Gamepad_C_ApplyKeyConfigData Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.MakePare
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>Pair1                                                  (Parm, OutParm, ContainsInstancedReference)

void UKeyGuide_Gamepad_C::MakePare(TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* Pair1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Gamepad_C", "MakePare");

	Params::KeyGuide_Gamepad_C_MakePare Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pair1 != nullptr)
		*Pair1 = std::move(Parms.Pair1);
}


// Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.SetTextVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    SkillActionPosition                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide_Gamepad_C::SetTextVisible(ESkillActionPosition SkillActionPosition, bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Gamepad_C", "SetTextVisible");

	Params::KeyGuide_Gamepad_C_SetTextVisible Parms{};

	Parms.SkillActionPosition = SkillActionPosition;
	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.InitializeVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyGuide_Gamepad_C::InitializeVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Gamepad_C", "InitializeVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

