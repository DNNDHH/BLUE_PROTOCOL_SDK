#pragma once

 

// Package: History_DeleteAnnounce

#include "Basic.hpp"

#include "History_DeleteAnnounce_classes.hpp"
#include "History_DeleteAnnounce_parameters.hpp"


namespace SDK
{

// Function History_DeleteAnnounce.History_DeleteAnnounce_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHistory_DeleteAnnounce_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_DeleteAnnounce_C", "OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function History_DeleteAnnounce.History_DeleteAnnounce_C.ExecuteUbergraph_History_DeleteAnnounce
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistory_DeleteAnnounce_C::ExecuteUbergraph_History_DeleteAnnounce(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_DeleteAnnounce_C", "ExecuteUbergraph_History_DeleteAnnounce");

	Params::History_DeleteAnnounce_C_ExecuteUbergraph_History_DeleteAnnounce Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function History_DeleteAnnounce.History_DeleteAnnounce_C.OnEsc
// (BlueprintCallable, BlueprintEvent)

void UHistory_DeleteAnnounce_C::OnEsc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_DeleteAnnounce_C", "OnEsc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function History_DeleteAnnounce.History_DeleteAnnounce_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHistoryType                          Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Paid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Free                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHistory_DeleteAnnounce_C::SetInfo(ESBHistoryType Type, int32 Paid, int32 Free, const struct FDateTime& Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_DeleteAnnounce_C", "SetInfo");

	Params::History_DeleteAnnounce_C_SetInfo Parms{};

	Parms.Type = Type;
	Parms.Paid = Paid;
	Parms.Free = Free;
	Parms.Time = std::move(Time);

	UObject::ProcessEvent(Func, &Parms);
}


// Function History_DeleteAnnounce.History_DeleteAnnounce_C.BndEvt__History_DeleteAnnounce_Btn_Close_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)

void UHistory_DeleteAnnounce_C::BndEvt__History_DeleteAnnounce_Btn_Close_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_DeleteAnnounce_C", "BndEvt__History_DeleteAnnounce_Btn_Close_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function History_DeleteAnnounce.History_DeleteAnnounce_C.BndEvt__History_DeleteAnnounce_Btn_FullScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHistory_DeleteAnnounce_C::BndEvt__History_DeleteAnnounce_Btn_FullScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_DeleteAnnounce_C", "BndEvt__History_DeleteAnnounce_Btn_FullScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function History_DeleteAnnounce.History_DeleteAnnounce_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHistory_DeleteAnnounce_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_DeleteAnnounce_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function History_DeleteAnnounce.History_DeleteAnnounce_C.Finished_7D022C654082BF7654B3B38FE16E6757
// (BlueprintCallable, BlueprintEvent)

void UHistory_DeleteAnnounce_C::Finished_7D022C654082BF7654B3B38FE16E6757()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_DeleteAnnounce_C", "Finished_7D022C654082BF7654B3B38FE16E6757");

	UObject::ProcessEvent(Func, nullptr);
}

}

