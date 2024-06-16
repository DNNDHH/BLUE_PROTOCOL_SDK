#pragma once

 

// Package: BP_EF_Avaritelia

#include "Basic.hpp"

#include "BP_EF_Avaritelia_classes.hpp"
#include "BP_EF_Avaritelia_parameters.hpp"


namespace SDK
{

// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ExecuteUbergraph_BP_EF_Avaritelia
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Avaritelia_C::ExecuteUbergraph_BP_EF_Avaritelia(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "ExecuteUbergraph_BP_EF_Avaritelia");

	Params::BP_EF_Avaritelia_C_ExecuteUbergraph_BP_EF_Avaritelia Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Avaritelia_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "ReceiveEndPlay");

	Params::BP_EF_Avaritelia_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.PartsLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EF_Avaritelia_C::PartsLoaded(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "PartsLoaded");

	Params::BP_EF_Avaritelia_C_PartsLoaded Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Avaritelia_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "ReceiveTick");

	Params::BP_EF_Avaritelia_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_EF_Avaritelia_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.CreateCoAvaritiaMID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_EF_Avaritelia_C::CreateCoAvaritiaMID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "CreateCoAvaritiaMID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.SetCoAvaritiaParam
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EF_Avaritelia_C::SetCoAvaritiaParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "SetCoAvaritiaParam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.SpawnAravitiaEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EF_Avaritelia_C::SpawnAravitiaEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "SpawnAravitiaEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.SetAvaritiaEffectTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_EF_Avaritelia_C::SetAvaritiaEffectTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "SetAvaritiaEffectTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.ActivateAvariteliaEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EF_Avaritelia_C::ActivateAvariteliaEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "ActivateAvariteliaEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.DeactivateAvariteliaEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EF_Avaritelia_C::DeactivateAvariteliaEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "DeactivateAvariteliaEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.DestroyAvariteliaEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EF_Avaritelia_C::DestroyAvariteliaEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "DestroyAvariteliaEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.CheckOwnerHidden
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EF_Avaritelia_C::CheckOwnerHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "CheckOwnerHidden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EF_Avaritelia_C::PlaySound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "PlaySound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Avaritelia.BP_EF_Avaritelia_C.StopSound
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EF_Avaritelia_C::StopSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Avaritelia_C", "StopSound");

	UObject::ProcessEvent(Func, nullptr);
}

}

