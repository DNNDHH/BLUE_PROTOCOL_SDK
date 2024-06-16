#pragma once

 

// Package: Fang_expedition_DetailAreaName

#include "Basic.hpp"

#include "Fang_expedition_DetailAreaName_classes.hpp"
#include "Fang_expedition_DetailAreaName_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.ExecuteUbergraph_Fang_expedition_DetailAreaName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailAreaName_C::ExecuteUbergraph_Fang_expedition_DetailAreaName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailAreaName_C", "ExecuteUbergraph_Fang_expedition_DetailAreaName");

	Params::Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DetailAreaName_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailAreaName_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DetailAreaName_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailAreaName_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBFang_expeditionStatus                Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailAreaName_C::SetData(const struct FSBFang_expeditionAreaData& AreaData, ESBFang_expeditionStatus Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailAreaName_C", "SetData");

	Params::Fang_expedition_DetailAreaName_C_SetData Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.SetMasteryVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailAreaName_C::SetMasteryVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailAreaName_C", "SetMasteryVisible");

	Params::Fang_expedition_DetailAreaName_C_SetMasteryVisible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}

