#pragma once

 

// Package: BP_Rebellion

#include "Basic.hpp"

#include "BP_Rebellion_classes.hpp"
#include "BP_Rebellion_parameters.hpp"


namespace SDK
{

// Function BP_Rebellion.BP_Rebellion_C.ExecuteUbergraph_BP_Rebellion
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Rebellion_C::ExecuteUbergraph_BP_Rebellion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rebellion_C", "ExecuteUbergraph_BP_Rebellion");

	Params::BP_Rebellion_C_ExecuteUbergraph_BP_Rebellion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Rebellion.BP_Rebellion_C.CreateClassHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Rebellion_C::CreateClassHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rebellion_C", "CreateClassHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Rebellion.BP_Rebellion_C.OnHitForPlayerReticle
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWeakHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Rebellion_C::OnHitForPlayerReticle(float Damage, bool bWeakHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rebellion_C", "OnHitForPlayerReticle");

	Params::BP_Rebellion_C_OnHitForPlayerReticle Parms{};

	Parms.Damage = Damage;
	Parms.bWeakHit = bWeakHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Rebellion.BP_Rebellion_C.OnRayHitForPlayerReticle
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bProperDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Rebellion_C::OnRayHitForPlayerReticle(bool bHit, bool bProperDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rebellion_C", "OnRayHitForPlayerReticle");

	Params::BP_Rebellion_C_OnRayHitForPlayerReticle Parms{};

	Parms.bHit = bHit;
	Parms.bProperDistance = bProperDistance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Rebellion.BP_Rebellion_C.UnSheathe
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBWeaponEquipType                      EquipType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Rebellion_C::UnSheathe(ESBWeaponEquipType EquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rebellion_C", "UnSheathe");

	Params::BP_Rebellion_C_UnSheathe Parms{};

	Parms.EquipType = EquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Rebellion.BP_Rebellion_C.Sheathe
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Rebellion_C::Sheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rebellion_C", "Sheathe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Rebellion.BP_Rebellion_C.PrintShieldDurability
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Rebellion_C::PrintShieldDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rebellion_C", "PrintShieldDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Rebellion.BP_Rebellion_C.GetHitCollision
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              HitComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* ABP_Rebellion_C::GetHitCollision(class AActor* HitActor, class UPrimitiveComponent* HitComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rebellion_C", "GetHitCollision");

	Params::BP_Rebellion_C_GetHitCollision Parms{};

	Parms.HitActor = HitActor;
	Parms.HitComp = HitComp;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Rebellion.BP_Rebellion_C.CreateHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Rebellion_C::CreateHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Rebellion_C", "CreateHUD");

	UObject::ProcessEvent(Func, nullptr);
}

}

