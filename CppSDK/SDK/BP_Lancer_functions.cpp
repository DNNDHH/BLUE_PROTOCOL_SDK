#pragma once

 

// Package: BP_Lancer

#include "Basic.hpp"

#include "BP_Lancer_classes.hpp"
#include "BP_Lancer_parameters.hpp"


namespace SDK
{

// Function BP_Lancer.BP_Lancer_C.ExecuteUbergraph_BP_Lancer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Lancer_C::ExecuteUbergraph_BP_Lancer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lancer_C", "ExecuteUbergraph_BP_Lancer");

	Params::BP_Lancer_C_ExecuteUbergraph_BP_Lancer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Lancer.BP_Lancer_C.CreateClassHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lancer_C::CreateClassHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lancer_C", "CreateClassHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Lancer.BP_Lancer_C.Sheathe
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Lancer_C::Sheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lancer_C", "Sheathe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Lancer.BP_Lancer_C.UnSheathe
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBWeaponEquipType                      EquipType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Lancer_C::UnSheathe(ESBWeaponEquipType EquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lancer_C", "UnSheathe");

	Params::BP_Lancer_C_UnSheathe Parms{};

	Parms.EquipType = EquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Lancer.BP_Lancer_C.CreateHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Lancer_C::CreateHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lancer_C", "CreateHUD");

	UObject::ProcessEvent(Func, nullptr);
}

}

