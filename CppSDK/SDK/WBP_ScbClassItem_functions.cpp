#pragma once

 

// Package: WBP_ScbClassItem

#include "Basic.hpp"

#include "WBP_ScbClassItem_classes.hpp"
#include "WBP_ScbClassItem_parameters.hpp"


namespace SDK
{

// Function WBP_ScbClassItem.WBP_ScbClassItem_C.ExecuteUbergraph_WBP_ScbClassItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScbClassItem_C::ExecuteUbergraph_WBP_ScbClassItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbClassItem_C", "ExecuteUbergraph_WBP_ScbClassItem");

	Params::WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetConditionData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBScbClassConditionsData        Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ScbClassItem_C::SetConditionData(const struct FSBScbClassConditionsData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbClassItem_C", "SetConditionData");

	Params::WBP_ScbClassItem_C_SetConditionData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetRankData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBScbClassData                  Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_ScbClassItem_C::SetRankData(const struct FSBScbClassData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbClassItem_C", "SetRankData");

	Params::WBP_ScbClassItem_C_SetRankData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScbClassItem.WBP_ScbClassItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ScbClassItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbClassItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbClassItem.WBP_ScbClassItem_C.ShowRankStar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MaxRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScbClassItem_C::ShowRankStar(int32 MaxRank, int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbClassItem_C", "ShowRankStar");

	Params::WBP_ScbClassItem_C_ShowRankStar Parms{};

	Parms.MaxRank = MaxRank;
	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetClassType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScbClassItem_C::SetClassType(ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbClassItem_C", "SetClassType");

	Params::WBP_ScbClassItem_C_SetClassType Parms{};

	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetClassName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScbClassItem_C::SetClassName(ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbClassItem_C", "SetClassName");

	Params::WBP_ScbClassItem_C_SetClassName Parms{};

	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}

}

