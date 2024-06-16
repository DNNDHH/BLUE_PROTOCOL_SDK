#pragma once

 

// Package: LoadingBase

#include "Basic.hpp"

#include "LoadingBase_classes.hpp"
#include "LoadingBase_parameters.hpp"


namespace SDK
{

// Function LoadingBase.LoadingBase_C.ExecuteUbergraph_LoadingBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingBase_C::ExecuteUbergraph_LoadingBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "ExecuteUbergraph_LoadingBase");

	Params::LoadingBase_C_ExecuteUbergraph_LoadingBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingBase.LoadingBase_C.CheckLogOutput
// (BlueprintCallable, BlueprintEvent)

void ULoadingBase_C::CheckLogOutput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "CheckLogOutput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingBase.LoadingBase_C.ChangeTips
// (BlueprintCallable, BlueprintEvent)

void ULoadingBase_C::ChangeTips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "ChangeTips");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingBase.LoadingBase_C.Show
// (Event, Public, BlueprintEvent)

void ULoadingBase_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingBase.LoadingBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "Tick");

	Params::LoadingBase_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingBase.LoadingBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoadingBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingBase.LoadingBase_C.SetUpRule
// (Public, BlueprintCallable, BlueprintEvent)

void ULoadingBase_C::SetUpRule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "SetUpRule");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingBase.LoadingBase_C.UpdateAspectRate
// (Public, BlueprintCallable, BlueprintEvent)

void ULoadingBase_C::UpdateAspectRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "UpdateAspectRate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingBase.LoadingBase_C.CheckMapId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MapCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingBase_C::CheckMapId(class FName MapCategory, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "CheckMapId");

	Params::LoadingBase_C_CheckMapId Parms{};

	Parms.MapCategory = MapCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LoadingBase.LoadingBase_C.CheckProgressQuest
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EProgressType                           ProgressType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ProgressQuestId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ProgressStep                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingBase_C::CheckProgressQuest(EProgressType ProgressType, class FName ProgressQuestId, int32 ProgressStep, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "CheckProgressQuest");

	Params::LoadingBase_C_CheckProgressQuest Parms{};

	Parms.ProgressType = ProgressType;
	Parms.ProgressQuestId = ProgressQuestId;
	Parms.ProgressStep = ProgressStep;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LoadingBase.LoadingBase_C.CheckProgressMission
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MissionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingBase_C::CheckProgressMission(class FName MissionId, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "CheckProgressMission");

	Params::LoadingBase_C_CheckProgressMission Parms{};

	Parms.MissionId = MissionId;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LoadingBase.LoadingBase_C.SetTipsText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_TipsId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingBase_C::SetTipsText(int32 Param_TipsId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "SetTipsText");

	Params::LoadingBase_C_SetTipsText Parms{};

	Parms.Param_TipsId = Param_TipsId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingBase.LoadingBase_C.UpdateCandidateTipsList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TotalCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingBase_C::UpdateCandidateTipsList(int32* TotalCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "UpdateCandidateTipsList");

	Params::LoadingBase_C_UpdateCandidateTipsList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TotalCount != nullptr)
		*TotalCount = Parms.TotalCount;
}


// Function LoadingBase.LoadingBase_C.AddLoadingTipsCandidateList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InListIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingBase_C::AddLoadingTipsCandidateList(int32 InListIndex, int32 InId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingBase_C", "AddLoadingTipsCandidateList");

	Params::LoadingBase_C_AddLoadingTipsCandidateList Parms{};

	Parms.InListIndex = InListIndex;
	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);
}

}

