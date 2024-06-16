#pragma once

 

// Package: MyCharaMenu_ClassInfoDiffForLeftSideParameters

#include "Basic.hpp"

#include "MyCharaMenu_ClassInfoDiffForLeftSideParameters_classes.hpp"
#include "MyCharaMenu_ClassInfoDiffForLeftSideParameters_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_ClassInfoDiffForLeftSideParameters.MyCharaMenu_ClassInfoDiffForLeftSideParameters_C.ExecuteUbergraph_MyCharaMenu_ClassInfoDiffForLeftSideParameters
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::ExecuteUbergraph_MyCharaMenu_ClassInfoDiffForLeftSideParameters(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ClassInfoDiffForLeftSideParameters_C", "ExecuteUbergraph_MyCharaMenu_ClassInfoDiffForLeftSideParameters");

	Params::MyCharaMenu_ClassInfoDiffForLeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_ClassInfoDiffForLeftSideParameters Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ClassInfoDiffForLeftSideParameters.MyCharaMenu_ClassInfoDiffForLeftSideParameters_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ClassInfoDiffForLeftSideParameters_C", "PreConstruct");

	Params::MyCharaMenu_ClassInfoDiffForLeftSideParameters_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ClassInfoDiffForLeftSideParameters.MyCharaMenu_ClassInfoDiffForLeftSideParameters_C.SetClassInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::SetClassInfo(ESBClassType InClassType, int32 InClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ClassInfoDiffForLeftSideParameters_C", "SetClassInfo");

	Params::MyCharaMenu_ClassInfoDiffForLeftSideParameters_C_SetClassInfo Parms{};

	Parms.InClassType = InClassType;
	Parms.InClassLevel = InClassLevel;

	UObject::ProcessEvent(Func, &Parms);
}

}

