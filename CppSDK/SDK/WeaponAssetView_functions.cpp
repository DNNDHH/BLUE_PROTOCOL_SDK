#pragma once

 

// Package: WeaponAssetView

#include "Basic.hpp"

#include "WeaponAssetView_classes.hpp"
#include "WeaponAssetView_parameters.hpp"


namespace SDK
{

// Function WeaponAssetView.WeaponAssetView_C.ExecuteUbergraph_WeaponAssetView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponAssetView_C::ExecuteUbergraph_WeaponAssetView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAssetView_C", "ExecuteUbergraph_WeaponAssetView");

	Params::WeaponAssetView_C_ExecuteUbergraph_WeaponAssetView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAssetView.WeaponAssetView_C.Request_Image
// (BlueprintCallable, BlueprintEvent)

void UWeaponAssetView_C::Request_Image()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAssetView_C", "Request_Image");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAssetView.WeaponAssetView_C.SetInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponAssetView_C::SetInfo(const struct FOwnItemInfo& Param_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAssetView_C", "SetInfo");

	Params::WeaponAssetView_C_SetInfo Parms{};

	Parms.Param_Info = std::move(Param_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAssetView.WeaponAssetView_C.SetupParameterWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponAssetView_C::SetupParameterWeapon(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAssetView_C", "SetupParameterWeapon");

	Params::WeaponAssetView_C_SetupParameterWeapon Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAssetView.WeaponAssetView_C.SetDiffVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponAssetView_C::SetDiffVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAssetView_C", "SetDiffVisibility");

	Params::WeaponAssetView_C_SetDiffVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAssetView.WeaponAssetView_C.SetUpName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponAssetView_C::SetUpName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAssetView_C", "SetUpName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAssetView.WeaponAssetView_C.SetBG
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponAssetView_C::SetBG()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAssetView_C", "SetBG");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAssetView.WeaponAssetView_C.UpdateDiffValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponAssetView_C::UpdateDiffValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAssetView_C", "UpdateDiffValue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAssetView.WeaponAssetView_C.SetBaseInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_BaseInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponAssetView_C::SetBaseInfo(const struct FOwnItemInfo& Param_BaseInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAssetView_C", "SetBaseInfo");

	Params::WeaponAssetView_C_SetBaseInfo Parms{};

	Parms.Param_BaseInfo = std::move(Param_BaseInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAssetView.WeaponAssetView_C.SetupMasterData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponAssetView_C::SetupMasterData(const struct FOwnItemInfo& Param_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAssetView_C", "SetupMasterData");

	Params::WeaponAssetView_C_SetupMasterData Parms{};

	Parms.Param_Info = std::move(Param_Info);

	UObject::ProcessEvent(Func, &Parms);
}

}

