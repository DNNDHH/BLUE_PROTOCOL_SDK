#pragma once

 

// Package: EquipStatusView

#include "Basic.hpp"

#include "EquipStatusView_classes.hpp"
#include "EquipStatusView_parameters.hpp"


namespace SDK
{

// Function EquipStatusView.EquipStatusView_C.ExecuteUbergraph_EquipStatusView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipStatusView_C::ExecuteUbergraph_EquipStatusView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipStatusView_C", "ExecuteUbergraph_EquipStatusView");

	Params::EquipStatusView_C_ExecuteUbergraph_EquipStatusView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipStatusView.EquipStatusView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquipStatusView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipStatusView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipStatusView.EquipStatusView_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipStatusView_C::SetValue(const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipStatusView_C", "SetValue");

	Params::EquipStatusView_C_SetValue Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipStatusView.EquipStatusView_C.SetImagine
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipStatusView_C::SetImagine(const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipStatusView_C", "SetImagine");

	Params::EquipStatusView_C_SetImagine Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipStatusView.EquipStatusView_C.SetWeapon
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipStatusView_C::SetWeapon(const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipStatusView_C", "SetWeapon");

	Params::EquipStatusView_C_SetWeapon Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipStatusView.EquipStatusView_C.SetPrevData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_OwnItemInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipStatusView_C::SetPrevData(const struct FOwnItemInfo& Param_OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipStatusView_C", "SetPrevData");

	Params::EquipStatusView_C_SetPrevData Parms{};

	Parms.Param_OwnItemInfo = std::move(Param_OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipStatusView.EquipStatusView_C.SetPrevDataImagine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     PrevInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipStatusView_C::SetPrevDataImagine(const struct FOwnItemInfo& PrevInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipStatusView_C", "SetPrevDataImagine");

	Params::EquipStatusView_C_SetPrevDataImagine Parms{};

	Parms.PrevInfo = std::move(PrevInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

