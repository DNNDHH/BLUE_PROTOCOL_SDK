#pragma once

 

// Package: MilitaryRecordList

#include "Basic.hpp"

#include "MilitaryRecordList_classes.hpp"
#include "MilitaryRecordList_parameters.hpp"


namespace SDK
{

// Function MilitaryRecordList.MilitaryRecordList_C.ExecuteUbergraph_MilitaryRecordList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMilitaryRecordList_C::ExecuteUbergraph_MilitaryRecordList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryRecordList_C", "ExecuteUbergraph_MilitaryRecordList");

	Params::MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MilitaryRecordList.MilitaryRecordList_C.SetData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMilitaryRecordData>      InMilitaryRecordData                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InIsMilitalyRecordOpen                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMilitaryRecordList_C::SetData(const TArray<struct FMilitaryRecordData>& InMilitaryRecordData, const bool InIsMilitalyRecordOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryRecordList_C", "SetData");

	Params::MilitaryRecordList_C_SetData Parms{};

	Parms.InMilitaryRecordData = std::move(InMilitaryRecordData);
	Parms.InIsMilitalyRecordOpen = InIsMilitalyRecordOpen;

	UObject::ProcessEvent(Func, &Parms);
}

}

