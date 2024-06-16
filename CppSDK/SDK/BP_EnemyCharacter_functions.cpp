#pragma once

 

// Package: BP_EnemyCharacter

#include "Basic.hpp"

#include "BP_EnemyCharacter_classes.hpp"
#include "BP_EnemyCharacter_parameters.hpp"


namespace SDK
{

// Function BP_EnemyCharacter.BP_EnemyCharacter_C.EnemyDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EnemyCharacter_C::EnemyDeath__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "EnemyDeath__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.EnemySelfDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EnemyCharacter_C::EnemySelfDeath__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "EnemySelfDeath__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.ExecuteUbergraph_BP_EnemyCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnemyCharacter_C::ExecuteUbergraph_BP_EnemyCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "ExecuteUbergraph_BP_EnemyCharacter");

	Params::BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event Aim Body Blend Rate Near Max
// (BlueprintCallable, BlueprintEvent)

void ABP_EnemyCharacter_C::Event_Aim_Body_Blend_Rate_Near_Max()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "Event Aim Body Blend Rate Near Max");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveSelfDeath
// (Event, Protected, BlueprintEvent)

void ABP_EnemyCharacter_C::ReceiveSelfDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "ReceiveSelfDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EnemyCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveStartDeathEffect
// (Event, Protected, BlueprintEvent)

void ABP_EnemyCharacter_C::ReceiveStartDeathEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "ReceiveStartDeathEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnemyCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "ReceiveTick");

	Params::BP_EnemyCharacter_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event End Aim Restricted
// (BlueprintCallable, BlueprintEvent)

void ABP_EnemyCharacter_C::Event_End_Aim_Restricted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "Event End Aim Restricted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveEndInitialLoad
// (Event, Protected, BlueprintEvent)

void ABP_EnemyCharacter_C::ReceiveEndInitialLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "ReceiveEndInitialLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event Begin Aim Restricted
// (BlueprintCallable, BlueprintEvent)

void ABP_EnemyCharacter_C::Event_Begin_Aim_Restricted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "Event Begin Aim Restricted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.Timeline_AimBodyBlendRate__UpdateFunc
// (BlueprintEvent)

void ABP_EnemyCharacter_C::Timeline_AimBodyBlendRate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "Timeline_AimBodyBlendRate__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.Timeline_AimBodyBlendRate__FinishedFunc
// (BlueprintEvent)

void ABP_EnemyCharacter_C::Timeline_AimBodyBlendRate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "Timeline_AimBodyBlendRate__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EnemyCharacter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.UpdateAimBlend
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EnemyCharacter_C::UpdateAimBlend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "UpdateAimBlend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.BeginAimBodyBlend
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EnemyCharacter_C::BeginAimBodyBlend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "BeginAimBodyBlend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.EndAimBodyBlend
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EnemyCharacter_C::EndAimBodyBlend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "EndAimBodyBlend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.SetAimBodyBlendRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendRate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnemyCharacter_C::SetAimBodyBlendRate(float BlendRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "SetAimBodyBlendRate");

	Params::BP_EnemyCharacter_C_SetAimBodyBlendRate Parms{};

	Parms.BlendRate = BlendRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.InitializeEquipWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EnemyCharacter_C::InitializeEquipWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "InitializeEquipWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.GetDamageReaction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBStunInfo                      StunInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// E_DamageReaction                        DamageReaction                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnemyCharacter_C::GetDamageReaction(const struct FSBStunInfo& StunInfo, E_DamageReaction* DamageReaction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "GetDamageReaction");

	Params::BP_EnemyCharacter_C_GetDamageReaction Parms{};

	Parms.StunInfo = std::move(StunInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (DamageReaction != nullptr)
		*DamageReaction = Parms.DamageReaction;
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.IsClient
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnParam                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EnemyCharacter_C::IsClient(bool* ReturnParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "IsClient");

	Params::BP_EnemyCharacter_C_IsClient Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnParam != nullptr)
		*ReturnParam = Parms.ReturnParam;
}


// Function BP_EnemyCharacter.BP_EnemyCharacter_C.GetPartsDamageOverrideImpact
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           AppearanceId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   OverrideImpact                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnemyCharacter_C::GetPartsDamageOverrideImpact(const class FString& AppearanceId, bool* IsValid, float* OverrideImpact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyCharacter_C", "GetPartsDamageOverrideImpact");

	Params::BP_EnemyCharacter_C_GetPartsDamageOverrideImpact Parms{};

	Parms.AppearanceId = std::move(AppearanceId);

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OverrideImpact != nullptr)
		*OverrideImpact = Parms.OverrideImpact;
}

}

