#pragma once

 

// Package: BuffPartyMemberList

#include "Basic.hpp"

#include "BuffPartyMemberList_classes.hpp"
#include "BuffPartyMemberList_parameters.hpp"


namespace SDK
{

// Function BuffPartyMemberList.BuffPartyMemberList_C.ExecuteUbergraph_BuffPartyMemberList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffPartyMemberList_C::ExecuteUbergraph_BuffPartyMemberList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffPartyMemberList_C", "ExecuteUbergraph_BuffPartyMemberList");

	Params::BuffPartyMemberList_C_ExecuteUbergraph_BuffPartyMemberList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuffPartyMemberList.BuffPartyMemberList_C.UnbindBattleStatusComponent
// (Event, Protected, BlueprintEvent)

void UBuffPartyMemberList_C::UnbindBattleStatusComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffPartyMemberList_C", "UnbindBattleStatusComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuffPartyMemberList.BuffPartyMemberList_C.BindBattleStatusComponent
// (Event, Protected, BlueprintEvent)

void UBuffPartyMemberList_C::BindBattleStatusComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffPartyMemberList_C", "BindBattleStatusComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuffPartyMemberList.BuffPartyMemberList_C.UpdateList
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuffPartyMemberList_C::UpdateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffPartyMemberList_C", "UpdateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuffPartyMemberList.BuffPartyMemberList_C.OnCreateIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBBuffIcon*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBBuffIcon* UBuffPartyMemberList_C::OnCreateIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffPartyMemberList_C", "OnCreateIcon");

	Params::BuffPartyMemberList_C_OnCreateIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BuffPartyMemberList.BuffPartyMemberList_C.GetList
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPanelWidget* UBuffPartyMemberList_C::GetList() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffPartyMemberList_C", "GetList");

	Params::BuffPartyMemberList_C_GetList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

