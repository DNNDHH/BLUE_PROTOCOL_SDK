#pragma once

 

// Package: MiniMapIconPartyMember

#include "Basic.hpp"

#include "MiniMapIconPartyMember_classes.hpp"
#include "MiniMapIconPartyMember_parameters.hpp"


namespace SDK
{

// Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.OnDead__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMiniMapIconPartyMember_C*        PartyMember                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDead                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniMapIconPartyMember_C::OnDead__DelegateSignature(class UMiniMapIconPartyMember_C* PartyMember, bool IsDead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconPartyMember_C", "OnDead__DelegateSignature");

	Params::MiniMapIconPartyMember_C_OnDead__DelegateSignature Parms{};

	Parms.PartyMember = PartyMember;
	Parms.IsDead = IsDead;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.ExecuteUbergraph_MiniMapIconPartyMember
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIconPartyMember_C::ExecuteUbergraph_MiniMapIconPartyMember(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconPartyMember_C", "ExecuteUbergraph_MiniMapIconPartyMember");

	Params::MiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBMapPartyMemberIcon*            InPartyMemberIcon                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDead                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniMapIconPartyMember_C::CustomEvent_1(class USBMapPartyMemberIcon* InPartyMemberIcon, bool IsDead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconPartyMember_C", "CustomEvent_1");

	Params::MiniMapIconPartyMember_C_CustomEvent_1 Parms{};

	Parms.InPartyMemberIcon = InPartyMemberIcon;
	Parms.IsDead = IsDead;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMiniMapIconPartyMember_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconPartyMember_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMiniMapIconPartyMember_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconPartyMember_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

