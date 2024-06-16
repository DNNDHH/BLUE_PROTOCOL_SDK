#pragma once

 

// Package: BP_Blaster

#include "Basic.hpp"

#include "BP_Blaster_classes.hpp"
#include "BP_Blaster_parameters.hpp"


namespace SDK
{

// Function BP_Blaster.BP_Blaster_C.ExecuteUbergraph_BP_Blaster
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Blaster_C::ExecuteUbergraph_BP_Blaster(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Blaster_C", "ExecuteUbergraph_BP_Blaster");

	Params::BP_Blaster_C_ExecuteUbergraph_BP_Blaster Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Blaster.BP_Blaster_C.CreateClassHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Blaster_C::CreateClassHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Blaster_C", "CreateClassHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Blaster.BP_Blaster_C.UnSheathe
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBWeaponEquipType                      EquipType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Blaster_C::UnSheathe(ESBWeaponEquipType EquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Blaster_C", "UnSheathe");

	Params::BP_Blaster_C_UnSheathe Parms{};

	Parms.EquipType = EquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Blaster.BP_Blaster_C.Sheathe
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Blaster_C::Sheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Blaster_C", "Sheathe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Blaster.BP_Blaster_C.OnRayHitForPlayerReticle
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bProperDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Blaster_C::OnRayHitForPlayerReticle(bool bHit, bool bProperDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Blaster_C", "OnRayHitForPlayerReticle");

	Params::BP_Blaster_C_OnRayHitForPlayerReticle Parms{};

	Parms.bHit = bHit;
	Parms.bProperDistance = bProperDistance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Blaster.BP_Blaster_C.OnHitForPlayerReticle
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWeakHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Blaster_C::OnHitForPlayerReticle(float Damage, bool bWeakHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Blaster_C", "OnHitForPlayerReticle");

	Params::BP_Blaster_C_OnHitForPlayerReticle Parms{};

	Parms.Damage = Damage;
	Parms.bWeakHit = bWeakHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Blaster.BP_Blaster_C.DebugPrintCurrentBowChargeLevel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Blaster_C::DebugPrintCurrentBowChargeLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Blaster_C", "DebugPrintCurrentBowChargeLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Blaster.BP_Blaster_C.CreateHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Blaster_C::CreateHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Blaster_C", "CreateHUD");

	UObject::ProcessEvent(Func, nullptr);
}

}

