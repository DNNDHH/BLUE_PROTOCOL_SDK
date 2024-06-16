#pragma once

 

// Package: BuffList

#include "Basic.hpp"

#include "BuffList_classes.hpp"
#include "BuffList_parameters.hpp"


namespace SDK
{

// Function BuffList.BuffList_C.ExecuteUbergraph_BuffList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffList_C::ExecuteUbergraph_BuffList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffList_C", "ExecuteUbergraph_BuffList");

	Params::BuffList_C_ExecuteUbergraph_BuffList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuffList.BuffList_C.UnbindBattleStatusComponent
// (Event, Protected, BlueprintEvent)

void UBuffList_C::UnbindBattleStatusComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffList_C", "UnbindBattleStatusComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuffList.BuffList_C.BindBattleStatusComponent
// (Event, Protected, BlueprintEvent)

void UBuffList_C::BindBattleStatusComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffList_C", "BindBattleStatusComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuffList.BuffList_C.UpdateList
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuffList_C::UpdateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffList_C", "UpdateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuffList.BuffList_C.OnCreateIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBBuffIcon*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBBuffIcon* UBuffList_C::OnCreateIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffList_C", "OnCreateIcon");

	Params::BuffList_C_OnCreateIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BuffList.BuffList_C.GetList
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPanelWidget* UBuffList_C::GetList() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffList_C", "GetList");

	Params::BuffList_C_GetList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

