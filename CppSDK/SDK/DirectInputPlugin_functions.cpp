#pragma once

 

// Package: DirectInputPlugin

#include "Basic.hpp"

#include "DirectInputPlugin_classes.hpp"
#include "DirectInputPlugin_parameters.hpp"


namespace SDK
{

// Function DirectInputPlugin.IDirectInputPluginSettings.GetSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIDirectInputPluginSettings*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UIDirectInputPluginSettings* UIDirectInputPluginSettings::GetSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IDirectInputPluginSettings", "GetSettings");

	Params::IDirectInputPluginSettings_GetSettings Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

