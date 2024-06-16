#pragma once

 

// Package: BP_QuestBPFunctionLibrary

#include "Basic.hpp"

#include "BP_QuestBPFunctionLibrary_classes.hpp"
#include "BP_QuestBPFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestCategory2
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestCategory2                         Category2                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestBPFunctionLibrary_C::GetQuestCategory2(int32 QuestIndex, class UObject* __WorldContext, EQuestCategory2* Category2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_QuestBPFunctionLibrary_C", "GetQuestCategory2");

	Params::BP_QuestBPFunctionLibrary_C_GetQuestCategory2 Parms{};

	Parms.QuestIndex = QuestIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Category2 != nullptr)
		*Category2 = Parms.Category2;
}


// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindRewardMasterData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             InRewardId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMasterReward                  ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)
// bool                                    IsExist                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

struct FSBMasterReward UBP_QuestBPFunctionLibrary_C::FindRewardMasterData(class FName InRewardId, class UObject* __WorldContext, bool* IsExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_QuestBPFunctionLibrary_C", "FindRewardMasterData");

	Params::BP_QuestBPFunctionLibrary_C_FindRewardMasterData Parms{};

	Parms.InRewardId = InRewardId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsExist != nullptr)
		*IsExist = Parms.IsExist;

	return Parms.ReturnValue;
}


// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.IsQuestMultipleCompletable
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRet                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_QuestBPFunctionLibrary_C::IsQuestMultipleCompletable(int32 InQuestIndex, class UObject* __WorldContext, bool* bRet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_QuestBPFunctionLibrary_C", "IsQuestMultipleCompletable");

	Params::BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bRet != nullptr)
		*bRet = Parms.bRet;
}


// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestDisplayStatus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestStatus                            OutQuestStatus                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestBPFunctionLibrary_C::GetQuestDisplayStatus(int32 InQuestIndex, class UObject* __WorldContext, EQuestStatus* OutQuestStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_QuestBPFunctionLibrary_C", "GetQuestDisplayStatus");

	Params::BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutQuestStatus != nullptr)
		*OutQuestStatus = Parms.OutQuestStatus;
}


// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetAcceptableQuestNum
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestBPFunctionLibrary_C::GetAcceptableQuestNum(class UObject* __WorldContext, int32* Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_QuestBPFunctionLibrary_C", "GetAcceptableQuestNum");

	Params::BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;
}


// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestStatus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestStatus                            QuestStatus                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuestBPFunctionLibrary_C::GetQuestStatus(int32 QuestIndex, class UObject* __WorldContext, EQuestStatus* QuestStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_QuestBPFunctionLibrary_C", "GetQuestStatus");

	Params::BP_QuestBPFunctionLibrary_C_GetQuestStatus Parms{};

	Parms.QuestIndex = QuestIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (QuestStatus != nullptr)
		*QuestStatus = Parms.QuestStatus;
}


// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindQuestMasterData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestMasterData                 QuestMasterData                                        (Parm, OutParm)
// bool                                    Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_QuestBPFunctionLibrary_C::FindQuestMasterData(int32 QuestIndex, class UObject* __WorldContext, struct FQuestMasterData* QuestMasterData, bool* Exist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_QuestBPFunctionLibrary_C", "FindQuestMasterData");

	Params::BP_QuestBPFunctionLibrary_C_FindQuestMasterData Parms{};

	Parms.QuestIndex = QuestIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (QuestMasterData != nullptr)
		*QuestMasterData = std::move(Parms.QuestMasterData);

	if (Exist != nullptr)
		*Exist = Parms.Exist;
}


// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindAcceptedQuestData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAcceptedQuestInfo               AcceptedQuestInfo                                      (Parm, OutParm)
// bool                                    Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_QuestBPFunctionLibrary_C::FindAcceptedQuestData(int32 QuestIndex, class UObject* __WorldContext, struct FAcceptedQuestInfo* AcceptedQuestInfo, bool* Exist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_QuestBPFunctionLibrary_C", "FindAcceptedQuestData");

	Params::BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData Parms{};

	Parms.QuestIndex = QuestIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AcceptedQuestInfo != nullptr)
		*AcceptedQuestInfo = std::move(Parms.AcceptedQuestInfo);

	if (Exist != nullptr)
		*Exist = Parms.Exist;
}


// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindQuestMasterDataByLongId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             InLongId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestMasterData                 QuestMasterData                                        (Parm, OutParm)
// bool                                    bExist                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_QuestBPFunctionLibrary_C::FindQuestMasterDataByLongId(class FName InLongId, class UObject* __WorldContext, struct FQuestMasterData* QuestMasterData, bool* bExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_QuestBPFunctionLibrary_C", "FindQuestMasterDataByLongId");

	Params::BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId Parms{};

	Parms.InLongId = InLongId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (QuestMasterData != nullptr)
		*QuestMasterData = std::move(Parms.QuestMasterData);

	if (bExist != nullptr)
		*bExist = Parms.bExist;
}

}

