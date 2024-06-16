#pragma once

 

// Package: BP_Berserker

#include "Basic.hpp"

#include "BP_Berserker_classes.hpp"
#include "BP_Berserker_parameters.hpp"


namespace SDK
{

// Function BP_Berserker.BP_Berserker_C.ExecuteUbergraph_BP_Berserker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Berserker_C::ExecuteUbergraph_BP_Berserker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Berserker_C", "ExecuteUbergraph_BP_Berserker");

	Params::BP_Berserker_C_ExecuteUbergraph_BP_Berserker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Berserker.BP_Berserker_C.CreateClassHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Berserker_C::CreateClassHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Berserker_C", "CreateClassHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Berserker.BP_Berserker_C.OnHitForPlayerReticle
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWeakHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Berserker_C::OnHitForPlayerReticle(float Damage, bool bWeakHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Berserker_C", "OnHitForPlayerReticle");

	Params::BP_Berserker_C_OnHitForPlayerReticle Parms{};

	Parms.Damage = Damage;
	Parms.bWeakHit = bWeakHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Berserker.BP_Berserker_C.OnRayHitForPlayerReticle
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bProperDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Berserker_C::OnRayHitForPlayerReticle(bool bHit, bool bProperDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Berserker_C", "OnRayHitForPlayerReticle");

	Params::BP_Berserker_C_OnRayHitForPlayerReticle Parms{};

	Parms.bHit = bHit;
	Parms.bProperDistance = bProperDistance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Berserker.BP_Berserker_C.Sheathe
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Berserker_C::Sheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Berserker_C", "Sheathe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Berserker.BP_Berserker_C.UnSheathe
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBWeaponEquipType                      EquipType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Berserker_C::UnSheathe(ESBWeaponEquipType EquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Berserker_C", "UnSheathe");

	Params::BP_Berserker_C_UnSheathe Parms{};

	Parms.EquipType = EquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Berserker.BP_Berserker_C.CreateHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Berserker_C::CreateHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Berserker_C", "CreateHUD");

	UObject::ProcessEvent(Func, nullptr);
}

}

