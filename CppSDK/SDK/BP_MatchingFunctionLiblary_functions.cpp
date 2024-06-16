#pragma once

 

// Package: BP_MatchingFunctionLiblary

#include "Basic.hpp"

#include "BP_MatchingFunctionLiblary_classes.hpp"
#include "BP_MatchingFunctionLiblary_parameters.hpp"


namespace SDK
{

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsPartyLeader
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_MatchingFunctionLiblary_C::IsPartyLeader(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_MatchingFunctionLiblary_C", "IsPartyLeader");

	Params::BP_MatchingFunctionLiblary_C_IsPartyLeader Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsSendingParty
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MatchingFunctionLiblary_C::IsSendingParty(class UObject* __WorldContext, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_MatchingFunctionLiblary_C", "IsSendingParty");

	Params::BP_MatchingFunctionLiblary_C_IsSendingParty Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsMaxParty
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MaxMember                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MatchingFunctionLiblary_C::IsMaxParty(int32 MaxMember, class UObject* __WorldContext, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_MatchingFunctionLiblary_C", "IsMaxParty");

	Params::BP_MatchingFunctionLiblary_C_IsMaxParty Parms{};

	Parms.MaxMember = MaxMember;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.OnStartMatchmaking
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBMatchingMenu*                  MatchingMenu                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBMapInfo>               DungeonMapInfoArray                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bUnlimit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Backfill                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MatchingFunctionLiblary_C::OnStartMatchmaking(class USBMatchingMenu* MatchingMenu, TArray<struct FSBMapInfo>& DungeonMapInfoArray, bool bUnlimit, bool Backfill, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_MatchingFunctionLiblary_C", "OnStartMatchmaking");

	Params::BP_MatchingFunctionLiblary_C_OnStartMatchmaking Parms{};

	Parms.MatchingMenu = MatchingMenu;
	Parms.DungeonMapInfoArray = std::move(DungeonMapInfoArray);
	Parms.bUnlimit = bUnlimit;
	Parms.Backfill = Backfill;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	DungeonMapInfoArray = std::move(Parms.DungeonMapInfoArray);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.OnCancelMatchmaking
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBMatchingMenu*                  MatchingMenu                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MatchingFunctionLiblary_C::OnCancelMatchmaking(class USBMatchingMenu* MatchingMenu, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_MatchingFunctionLiblary_C", "OnCancelMatchmaking");

	Params::BP_MatchingFunctionLiblary_C_OnCancelMatchmaking Parms{};

	Parms.MatchingMenu = MatchingMenu;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.GetPartyMinLevel
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MatchingFunctionLiblary_C::GetPartyMinLevel(class UObject* __WorldContext, int32* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_MatchingFunctionLiblary_C", "GetPartyMinLevel");

	Params::BP_MatchingFunctionLiblary_C_GetPartyMinLevel Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.GetPartyMinTotalPower
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MatchingFunctionLiblary_C::GetPartyMinTotalPower(class UObject* __WorldContext, int32* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_MatchingFunctionLiblary_C", "GetPartyMinTotalPower");

	Params::BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonStart
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBMapInfo                       InMapInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MatchingFunctionLiblary_C::IsEnableDungeonStart(const struct FSBMapInfo& InMapInfo, class UObject* __WorldContext, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_MatchingFunctionLiblary_C", "IsEnableDungeonStart");

	Params::BP_MatchingFunctionLiblary_C_IsEnableDungeonStart Parms{};

	Parms.InMapInfo = std::move(InMapInfo);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;
}


// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonMatching
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBMapInfo                       InMapInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MatchingFunctionLiblary_C::IsEnableDungeonMatching(const struct FSBMapInfo& InMapInfo, class UObject* __WorldContext, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_MatchingFunctionLiblary_C", "IsEnableDungeonMatching");

	Params::BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching Parms{};

	Parms.InMapInfo = std::move(InMapInfo);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;
}


// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonMemberNum
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MaxMember                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MatchingFunctionLiblary_C::IsEnableDungeonMemberNum(int32 MaxMember, class UObject* __WorldContext, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_MatchingFunctionLiblary_C", "IsEnableDungeonMemberNum");

	Params::BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum Parms{};

	Parms.MaxMember = MaxMember;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;
}


// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsRecruitParty
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MatchingFunctionLiblary_C::IsRecruitParty(class UObject* __WorldContext, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_MatchingFunctionLiblary_C", "IsRecruitParty");

	Params::BP_MatchingFunctionLiblary_C_IsRecruitParty Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;
}

}

