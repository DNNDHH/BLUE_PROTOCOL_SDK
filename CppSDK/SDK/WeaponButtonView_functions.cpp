#pragma once

 

// Package: WeaponButtonView

#include "Basic.hpp"

#include "WeaponButtonView_classes.hpp"
#include "WeaponButtonView_parameters.hpp"


namespace SDK
{

// Function WeaponButtonView.WeaponButtonView_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponButtonView_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponButtonView_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponButtonView.WeaponButtonView_C.ExecuteUbergraph_WeaponButtonView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponButtonView_C::ExecuteUbergraph_WeaponButtonView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponButtonView_C", "ExecuteUbergraph_WeaponButtonView");

	Params::WeaponButtonView_C_ExecuteUbergraph_WeaponButtonView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponButtonView.WeaponButtonView_C.BndEvt__WeaponButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponButtonView_C::BndEvt__WeaponButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponButtonView_C", "BndEvt__WeaponButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponButtonView.WeaponButtonView_C.RequestLoadImage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponButtonView_C::RequestLoadImage(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponButtonView_C", "RequestLoadImage");

	Params::WeaponButtonView_C_RequestLoadImage Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponButtonView.WeaponButtonView_C.OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponButtonView_C::OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponButtonView_C", "OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA");

	Params::WeaponButtonView_C_OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponButtonView.WeaponButtonView_C.ApplySelectWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponButtonView_C::ApplySelectWeapon(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponButtonView_C", "ApplySelectWeapon");

	Params::WeaponButtonView_C_ApplySelectWeapon Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponButtonView.WeaponButtonView_C.ApplyWeaponStatus
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     WeaponData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponButtonView_C::ApplyWeaponStatus(const struct FOwnItemInfo& WeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponButtonView_C", "ApplyWeaponStatus");

	Params::WeaponButtonView_C_ApplyWeaponStatus Parms{};

	Parms.WeaponData = std::move(WeaponData);

	UObject::ProcessEvent(Func, &Parms);
}

}

