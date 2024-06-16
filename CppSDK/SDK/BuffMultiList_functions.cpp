#pragma once

 

// Package: BuffMultiList

#include "Basic.hpp"

#include "BuffMultiList_classes.hpp"
#include "BuffMultiList_parameters.hpp"


namespace SDK
{

// Function BuffMultiList.BuffMultiList_C.ExecuteUbergraph_BuffMultiList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffMultiList_C::ExecuteUbergraph_BuffMultiList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffMultiList_C", "ExecuteUbergraph_BuffMultiList");

	Params::BuffMultiList_C_ExecuteUbergraph_BuffMultiList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuffMultiList.BuffMultiList_C.UnbindBattleStatusComponent
// (Event, Protected, BlueprintEvent)

void UBuffMultiList_C::UnbindBattleStatusComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffMultiList_C", "UnbindBattleStatusComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuffMultiList.BuffMultiList_C.BindBattleStatusComponent
// (Event, Protected, BlueprintEvent)

void UBuffMultiList_C::BindBattleStatusComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffMultiList_C", "BindBattleStatusComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuffMultiList.BuffMultiList_C.UpdateList
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuffMultiList_C::UpdateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffMultiList_C", "UpdateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuffMultiList.BuffMultiList_C.OnCreateIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBBuffIcon*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBBuffIcon* UBuffMultiList_C::OnCreateIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffMultiList_C", "OnCreateIcon");

	Params::BuffMultiList_C_OnCreateIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BuffMultiList.BuffMultiList_C.GetList
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPanelWidget* UBuffMultiList_C::GetList() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffMultiList_C", "GetList");

	Params::BuffMultiList_C_GetList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

