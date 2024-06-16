#pragma once

 

// Package: HappyNappo

#include "Basic.hpp"

#include "HappyNappo_classes.hpp"
#include "HappyNappo_parameters.hpp"


namespace SDK
{

// Function HappyNappo.HappyNappo_C.End__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHappyNappo_C::End__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "End__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HappyNappo.HappyNappo_C.ExecuteUbergraph_HappyNappo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHappyNappo_C::ExecuteUbergraph_HappyNappo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "ExecuteUbergraph_HappyNappo");

	Params::HappyNappo_C_ExecuteUbergraph_HappyNappo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HappyNappo.HappyNappo_C.ReRequestSuccess
// (BlueprintCallable, BlueprintEvent)

void UHappyNappo_C::ReRequestSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "ReRequestSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HappyNappo.HappyNappo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHappyNappo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HappyNappo.HappyNappo_C.InteractAnimStart
// (BlueprintCallable, BlueprintEvent)

void UHappyNappo_C::InteractAnimStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "InteractAnimStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HappyNappo.HappyNappo_C.InOutAnimEnd
// (BlueprintCallable, BlueprintEvent)

void UHappyNappo_C::InOutAnimEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "InOutAnimEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HappyNappo.HappyNappo_C.ShowComplete
// (BlueprintCallable, BlueprintEvent)

void UHappyNappo_C::ShowComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "ShowComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HappyNappo.HappyNappo_C.CloseAndCheckCompleteEvent
// (BlueprintCallable, BlueprintEvent)

void UHappyNappo_C::CloseAndCheckCompleteEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "CloseAndCheckCompleteEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HappyNappo.HappyNappo_C.InteractHappyNappo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   NappoIds                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHappyNappo_C::InteractHappyNappo(const int32 RetCode, const TArray<class FString>& NappoIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "InteractHappyNappo");

	Params::HappyNappo_C_InteractHappyNappo Parms{};

	Parms.RetCode = RetCode;
	Parms.NappoIds = std::move(NappoIds);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HappyNappo.HappyNappo_C.GetCurrentMapNappoMaster
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBHappyNappo>            CurrentMapMasterData                                   (Parm, OutParm)

void UHappyNappo_C::GetCurrentMapNappoMaster(TArray<struct FSBHappyNappo>* CurrentMapMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "GetCurrentMapNappoMaster");

	Params::HappyNappo_C_GetCurrentMapNappoMaster Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentMapMasterData != nullptr)
		*CurrentMapMasterData = std::move(Parms.CurrentMapMasterData);
}


// Function HappyNappo.HappyNappo_C.Init
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           DiscoveredNappoId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Nappo_ids                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsNew                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHappyNappo_C::Init(const class FString& DiscoveredNappoId, int32 RetCode, TArray<class FString>& Nappo_ids, bool IsNew)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "Init");

	Params::HappyNappo_C_Init Parms{};

	Parms.DiscoveredNappoId = std::move(DiscoveredNappoId);
	Parms.RetCode = RetCode;
	Parms.Nappo_ids = std::move(Nappo_ids);
	Parms.IsNew = IsNew;

	UObject::ProcessEvent(Func, &Parms);

	Nappo_ids = std::move(Parms.Nappo_ids);
}


// Function HappyNappo.HappyNappo_C.GetDiscoverdCurrentMapCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   IDs                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSBHappyNappo>            CurrenMapMasterData                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   DiscoverdCount                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHappyNappo_C::GetDiscoverdCurrentMapCount(TArray<class FString>& IDs, TArray<struct FSBHappyNappo>& CurrenMapMasterData, int32* DiscoverdCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HappyNappo_C", "GetDiscoverdCurrentMapCount");

	Params::HappyNappo_C_GetDiscoverdCurrentMapCount Parms{};

	Parms.IDs = std::move(IDs);
	Parms.CurrenMapMasterData = std::move(CurrenMapMasterData);

	UObject::ProcessEvent(Func, &Parms);

	IDs = std::move(Parms.IDs);
	CurrenMapMasterData = std::move(Parms.CurrenMapMasterData);

	if (DiscoverdCount != nullptr)
		*DiscoverdCount = Parms.DiscoverdCount;
}

}

