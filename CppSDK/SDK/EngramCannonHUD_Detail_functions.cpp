#pragma once

 

// Package: EngramCannonHUD_Detail

#include "Basic.hpp"

#include "EngramCannonHUD_Detail_classes.hpp"
#include "EngramCannonHUD_Detail_parameters.hpp"


namespace SDK
{

// Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.ExecuteUbergraph_EngramCannonHUD_Detail
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEngramCannonHUD_Detail_C::ExecuteUbergraph_EngramCannonHUD_Detail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Detail_C", "ExecuteUbergraph_EngramCannonHUD_Detail");

	Params::EngramCannonHUD_Detail_C_ExecuteUbergraph_EngramCannonHUD_Detail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.FinishDamageEffect
// (BlueprintCallable, BlueprintEvent)

void UEngramCannonHUD_Detail_C::FinishDamageEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Detail_C", "FinishDamageEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEngramCannonHUD_Detail_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Detail_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.PlayNoiseAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UEngramCannonHUD_Detail_C::PlayNoiseAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Detail_C", "PlayNoiseAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.PlayDamageEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEngramCannonHUD_Detail_C::PlayDamageEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Detail_C", "PlayDamageEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.Finalize Damage Effect
// (Public, BlueprintCallable, BlueprintEvent)

void UEngramCannonHUD_Detail_C::Finalize_Damage_Effect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Detail_C", "Finalize Damage Effect");

	UObject::ProcessEvent(Func, nullptr);
}

}

