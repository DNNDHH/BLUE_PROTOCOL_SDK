#pragma once

 

// Package: BP_PlayerLevelStartSequenceActivatePublicDungeon

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceActivatePublicDungeon_classes.hpp"
#include "BP_PlayerLevelStartSequenceActivatePublicDungeon_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivatePublicDungeon_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon");

	Params::BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivatePublicDungeon_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.AddActivatedPublicDungeons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::AddActivatedPublicDungeons(const int32 RetCode, bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivatePublicDungeon_C", "AddActivatedPublicDungeons");

	Params::BP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons Parms{};

	Parms.RetCode = RetCode;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.ShowRecursive
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::ShowRecursive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivatePublicDungeon_C", "ShowRecursive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.GetActivatedPublicDungeons
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   OutArray                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::GetActivatedPublicDungeons(const int32 RetCode, const TArray<class FString>& OutArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivatePublicDungeon_C", "GetActivatedPublicDungeons");

	Params::BP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons Parms{};

	Parms.RetCode = RetCode;
	Parms.OutArray = std::move(OutArray);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.DialogClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::DialogClose(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivatePublicDungeon_C", "DialogClose");

	Params::BP_PlayerLevelStartSequenceActivatePublicDungeon_C_DialogClose Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.CheckActivatedPubDng
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     ActivatedPubDng                                        (Parm, OutParm)

void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::CheckActivatedPubDng(TArray<class FName>* ActivatedPubDng)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivatePublicDungeon_C", "CheckActivatedPubDng");

	Params::BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActivatedPubDng != nullptr)
		*ActivatedPubDng = std::move(Parms.ActivatedPubDng);
}


// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.NewDngID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     ClientCheckList                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>                   ServerList                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>                   Return                                                 (Parm, OutParm)

void UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::NewDngID(TArray<class FName>& ClientCheckList, TArray<class FString>& ServerList, TArray<class FString>* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivatePublicDungeon_C", "NewDngID");

	Params::BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID Parms{};

	Parms.ClientCheckList = std::move(ClientCheckList);
	Parms.ServerList = std::move(ServerList);

	UObject::ProcessEvent(Func, &Parms);

	ClientCheckList = std::move(Parms.ClientCheckList);
	ServerList = std::move(Parms.ServerList);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);
}

}

