#pragma once

 

// Package: LicenseDisp

#include "Basic.hpp"

#include "LicenseDisp_classes.hpp"
#include "LicenseDisp_parameters.hpp"


namespace SDK
{

// Function LicenseDisp.LicenseDisp_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULicenseDisp_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LicenseDisp_C", "PreConstruct");

	Params::LicenseDisp_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LicenseDisp.LicenseDisp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULicenseDisp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LicenseDisp_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LicenseDisp.LicenseDisp_C.ExecuteUbergraph_LicenseDisp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULicenseDisp_C::ExecuteUbergraph_LicenseDisp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LicenseDisp_C", "ExecuteUbergraph_LicenseDisp");

	Params::LicenseDisp_C_ExecuteUbergraph_LicenseDisp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

