#pragma once

 

// Package: UMG_PhotoModeControlMenuSkillList

#include "Basic.hpp"

#include "UMG_PhotoModeControlMenuSkillList_classes.hpp"
#include "UMG_PhotoModeControlMenuSkillList_parameters.hpp"


namespace SDK
{

// Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharaCreateClassSkillMenuItem_C* Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControlMenuSkillList_C::OnPressed__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControlMenuSkillList_C", "OnPressed__DelegateSignature");

	Params::UMG_PhotoModeControlMenuSkillList_C_OnPressed__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharaCreateClassSkillMenuItem_C* Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControlMenuSkillList_C::OnReleased__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControlMenuSkillList_C", "OnReleased__DelegateSignature");

	Params::UMG_PhotoModeControlMenuSkillList_C_OnReleased__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.ExecuteUbergraph_UMG_PhotoModeControlMenuSkillList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControlMenuSkillList_C::ExecuteUbergraph_UMG_PhotoModeControlMenuSkillList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControlMenuSkillList_C", "ExecuteUbergraph_UMG_PhotoModeControlMenuSkillList");

	Params::UMG_PhotoModeControlMenuSkillList_C_ExecuteUbergraph_UMG_PhotoModeControlMenuSkillList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.OnItemButtonReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharaCreateClassSkillMenuItem_C* Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControlMenuSkillList_C::OnItemButtonReleased(class UCharaCreateClassSkillMenuItem_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControlMenuSkillList_C", "OnItemButtonReleased");

	Params::UMG_PhotoModeControlMenuSkillList_C_OnItemButtonReleased Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.OnItemButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharaCreateClassSkillMenuItem_C* Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControlMenuSkillList_C::OnItemButtonPressed(class UCharaCreateClassSkillMenuItem_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControlMenuSkillList_C", "OnItemButtonPressed");

	Params::UMG_PhotoModeControlMenuSkillList_C_OnItemButtonPressed Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PhotoModeControlMenuSkillList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControlMenuSkillList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C.UpdateSkillList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControlMenuSkillList_C::UpdateSkillList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControlMenuSkillList_C", "UpdateSkillList");

	UObject::ProcessEvent(Func, nullptr);
}

}

