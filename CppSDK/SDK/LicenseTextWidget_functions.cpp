#pragma once

 

// Package: LicenseTextWidget

#include "Basic.hpp"

#include "LicenseTextWidget_classes.hpp"
#include "LicenseTextWidget_parameters.hpp"


namespace SDK
{

// Function LicenseTextWidget.LicenseTextWidget_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULicenseTextWidget_C::SetText(const class FString& Param_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LicenseTextWidget_C", "SetText");

	Params::LicenseTextWidget_C_SetText Parms{};

	Parms.Param_Text = std::move(Param_Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LicenseTextWidget.LicenseTextWidget_C.SetTextId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULicenseTextWidget_C::SetTextId(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LicenseTextWidget_C", "SetTextId");

	Params::LicenseTextWidget_C_SetTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LicenseTextWidget.LicenseTextWidget_C.ExecuteUbergraph_LicenseTextWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULicenseTextWidget_C::ExecuteUbergraph_LicenseTextWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LicenseTextWidget_C", "ExecuteUbergraph_LicenseTextWidget");

	Params::LicenseTextWidget_C_ExecuteUbergraph_LicenseTextWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

