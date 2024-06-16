#pragma once

 

// Package: FLIB_ItemBoxs

#include "Basic.hpp"

#include "FLIB_ItemBoxs_classes.hpp"
#include "FLIB_ItemBoxs_parameters.hpp"


namespace SDK
{

// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.Check Use Min
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseMin                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutMax                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutMin                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_ItemBoxs_C::Check_Use_Min(int32 InMax, int32 InMin, class UObject* __WorldContext, bool* bUseMin, int32* OutMax, int32* OutMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_ItemBoxs_C", "Check Use Min");

	Params::FLIB_ItemBoxs_C_Check_Use_Min Parms{};

	Parms.InMax = InMax;
	Parms.InMin = InMin;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bUseMin != nullptr)
		*bUseMin = Parms.bUseMin;

	if (OutMax != nullptr)
		*OutMax = Parms.OutMax;

	if (OutMin != nullptr)
		*OutMin = Parms.OutMin;
}


// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.Get Acquisitions Num Text
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Result                                                 (Parm, OutParm)

void UFLIB_ItemBoxs_C::Get_Acquisitions_Num_Text(int32 InMax, int32 InMin, class UObject* __WorldContext, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_ItemBoxs_C", "Get Acquisitions Num Text");

	Params::FLIB_ItemBoxs_C_Get_Acquisitions_Num_Text Parms{};

	Parms.InMax = InMax;
	Parms.InMin = InMin;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsOverlapping
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       InRewardType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bOverlapping                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_ItemBoxs_C::IsOverlapping(ESBRewardItemType InRewardType, int32 InId, class UObject* __WorldContext, bool* bOverlapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_ItemBoxs_C", "IsOverlapping");

	Params::FLIB_ItemBoxs_C_IsOverlapping Parms{};

	Parms.InRewardType = InRewardType;
	Parms.InId = InId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bOverlapping != nullptr)
		*bOverlapping = Parms.bOverlapping;
}


// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsCanNotLost
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       TrwardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanNotLost                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_ItemBoxs_C::IsCanNotLost(ESBRewardItemType TrwardType, int32 ID, class UObject* __WorldContext, bool* CanNotLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_ItemBoxs_C", "IsCanNotLost");

	Params::FLIB_ItemBoxs_C_IsCanNotLost Parms{};

	Parms.TrwardType = TrwardType;
	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CanNotLost != nullptr)
		*CanNotLost = Parms.CanNotLost;
}


// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsStackItem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_ItemBoxs_C::IsStackItem(ESBRewardItemType Selection, class UObject* __WorldContext, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_ItemBoxs_C", "IsStackItem");

	Params::FLIB_ItemBoxs_C_IsStackItem Parms{};

	Parms.Selection = Selection;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.GetAmountMax_RewardType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       InRewardType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxAmoun                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_ItemBoxs_C::GetAmountMax_RewardType(ESBRewardItemType InRewardType, int32 InId, class UObject* __WorldContext, int32* MaxAmoun)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_ItemBoxs_C", "GetAmountMax_RewardType");

	Params::FLIB_ItemBoxs_C_GetAmountMax_RewardType Parms{};

	Parms.InRewardType = InRewardType;
	Parms.InId = InId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (MaxAmoun != nullptr)
		*MaxAmoun = Parms.MaxAmoun;
}

}

