#pragma once

 

// Package: ArmorList

#include "Basic.hpp"

#include "ArmorList_classes.hpp"
#include "ArmorList_parameters.hpp"


namespace SDK
{

// Function ArmorList.ArmorList_C.ExecuteUbergraph_ArmorList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorList_C::ExecuteUbergraph_ArmorList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmorList_C", "ExecuteUbergraph_ArmorList");

	Params::ArmorList_C_ExecuteUbergraph_ArmorList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmorList.ArmorList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArmorList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmorList_C", "PreConstruct");

	Params::ArmorList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmorList.ArmorList_C.SetData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             InOwnItemInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UArmorList_C::SetData(const TArray<struct FOwnItemInfo>& InOwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmorList_C", "SetData");

	Params::ArmorList_C_SetData Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmorList.ArmorList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UArmorList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmorList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

