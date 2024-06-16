#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskLibraryLogLoad

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskLibraryLogLoad_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskLibraryLogLoad_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad");

	Params::BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.GetIdListCallback
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBLibraryPictureBookType               Type                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::GetIdListCallback(bool WasSuccessful, int32 RetCode, const ESBLibraryPictureBookType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C", "GetIdListCallback");

	Params::BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.RetCode = RetCode;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.OnLoadAchievementDataDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::OnLoadAchievementDataDelegate_Event(const bool Result, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C", "OnLoadAchievementDataDelegate_Event");

	Params::BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.CustomEvent_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     DemoList                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::CustomEvent_0(const bool Result, const int32 RetCode, const TArray<class FName>& DemoList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C", "CustomEvent_0");

	Params::BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_0 Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.DemoList = std::move(DemoList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.OnLoadAchivementDelegate_event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSBAchievementInfo>       AchievementList                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::OnLoadAchivementDelegate_event(const bool Result, const TArray<struct FSBAchievementInfo>& AchievementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C", "OnLoadAchivementDelegate_event");

	Params::BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event Parms{};

	Parms.Result = Result;
	Parms.AchievementList = std::move(AchievementList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.EnemyLogLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::EnemyLogLoaded(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C", "EnemyLogLoaded");

	Params::BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_EnemyLogLoaded Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.UpdateDemoList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::UpdateDemoList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C", "UpdateDemoList");

	UObject::ProcessEvent(Func, nullptr);
}

}

