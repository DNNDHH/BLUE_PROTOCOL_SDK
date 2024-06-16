#pragma once

 

// Package: UsedCheckList

#include "Basic.hpp"

#include "UsedCheckList_classes.hpp"
#include "UsedCheckList_parameters.hpp"


namespace SDK
{

// Function UsedCheckList.UsedCheckList_C.UsedCheckList_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUseCheckDialogType                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUsedCheckList_C::UsedCheckList_AutoGenFunc(ESBUseCheckDialogType Type, bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UsedCheckList_C", "UsedCheckList_AutoGenFunc");

	Params::UsedCheckList_C_UsedCheckList_AutoGenFunc Parms{};

	Parms.Type = Type;
	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UsedCheckList.UsedCheckList_C.Generate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUsedCheckList_C::Generate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UsedCheckList_C", "Generate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UsedCheckList.UsedCheckList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUsedCheckList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UsedCheckList_C", "PreConstruct");

	Params::UsedCheckList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UsedCheckList.UsedCheckList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUsedCheckList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UsedCheckList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UsedCheckList.UsedCheckList_C.ExecuteUbergraph_UsedCheckList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUsedCheckList_C::ExecuteUbergraph_UsedCheckList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UsedCheckList_C", "ExecuteUbergraph_UsedCheckList");

	Params::UsedCheckList_C_ExecuteUbergraph_UsedCheckList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

