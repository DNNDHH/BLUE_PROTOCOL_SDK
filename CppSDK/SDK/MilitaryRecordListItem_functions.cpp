#pragma once

 

// Package: MilitaryRecordListItem

#include "Basic.hpp"

#include "MilitaryRecordListItem_classes.hpp"
#include "MilitaryRecordListItem_parameters.hpp"


namespace SDK
{

// Function MilitaryRecordListItem.MilitaryRecordListItem_C.ExecuteUbergraph_MilitaryRecordListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMilitaryRecordListItem_C::ExecuteUbergraph_MilitaryRecordListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryRecordListItem_C", "ExecuteUbergraph_MilitaryRecordListItem");

	Params::MilitaryRecordListItem_C_ExecuteUbergraph_MilitaryRecordListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MilitaryRecordListItem.MilitaryRecordListItem_C.SetBaseImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsBase                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMilitaryRecordListItem_C::SetBaseImage(bool InIsBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryRecordListItem_C", "SetBaseImage");

	Params::MilitaryRecordListItem_C_SetBaseImage Parms{};

	Parms.InIsBase = InIsBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MilitaryRecordListItem.MilitaryRecordListItem_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMilitaryRecordData              InMilitaryRecordData                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UMilitaryRecordListItem_C::SetData(const struct FMilitaryRecordData& InMilitaryRecordData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MilitaryRecordListItem_C", "SetData");

	Params::MilitaryRecordListItem_C_SetData Parms{};

	Parms.InMilitaryRecordData = std::move(InMilitaryRecordData);

	UObject::ProcessEvent(Func, &Parms);
}

}

