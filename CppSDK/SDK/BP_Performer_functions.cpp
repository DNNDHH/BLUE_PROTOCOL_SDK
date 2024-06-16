#pragma once

 

// Package: BP_Performer

#include "Basic.hpp"

#include "BP_Performer_classes.hpp"
#include "BP_Performer_parameters.hpp"


namespace SDK
{

// Function BP_Performer.BP_Performer_C.ExecuteUbergraph_BP_Performer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Performer_C::ExecuteUbergraph_BP_Performer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Performer_C", "ExecuteUbergraph_BP_Performer");

	Params::BP_Performer_C_ExecuteUbergraph_BP_Performer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Performer.BP_Performer_C.UnSheathe
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBWeaponEquipType                      EquipType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Performer_C::UnSheathe(ESBWeaponEquipType EquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Performer_C", "UnSheathe");

	Params::BP_Performer_C_UnSheathe Parms{};

	Parms.EquipType = EquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Performer.BP_Performer_C.Sheathe
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Performer_C::Sheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Performer_C", "Sheathe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Performer.BP_Performer_C.OnHitForPlayerReticle
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWeakHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Performer_C::OnHitForPlayerReticle(float Damage, bool bWeakHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Performer_C", "OnHitForPlayerReticle");

	Params::BP_Performer_C_OnHitForPlayerReticle Parms{};

	Parms.Damage = Damage;
	Parms.bWeakHit = bWeakHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Performer.BP_Performer_C.OnRayHitForPlayerReticle
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bProperDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Performer_C::OnRayHitForPlayerReticle(bool bHit, bool bProperDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Performer_C", "OnRayHitForPlayerReticle");

	Params::BP_Performer_C_OnRayHitForPlayerReticle Parms{};

	Parms.bHit = bHit;
	Parms.bProperDistance = bProperDistance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Performer.BP_Performer_C.CreateClassHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Performer_C::CreateClassHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Performer_C", "CreateClassHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Performer.BP_Performer_C.CreateHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Performer_C::CreateHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Performer_C", "CreateHUD");

	UObject::ProcessEvent(Func, nullptr);
}

}

