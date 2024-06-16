#pragma once

 

// Package: UseTokenSelector

#include "Basic.hpp"

#include "UseTokenSelector_classes.hpp"
#include "UseTokenSelector_parameters.hpp"


namespace SDK
{

// Function UseTokenSelector.UseTokenSelector_C.OnTokenSelectUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUseTokenSelector_C::OnTokenSelectUpdate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "OnTokenSelectUpdate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UseTokenSelector.UseTokenSelector_C.ExecuteUbergraph_UseTokenSelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUseTokenSelector_C::ExecuteUbergraph_UseTokenSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "ExecuteUbergraph_UseTokenSelector");

	Params::UseTokenSelector_C_ExecuteUbergraph_UseTokenSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UseTokenSelector.UseTokenSelector_C.ResetToken
// (BlueprintCallable, BlueprintEvent)

void UUseTokenSelector_C::ResetToken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "ResetToken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUseTokenSelector_C::BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUseTokenSelector_C::BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UseTokenSelector.UseTokenSelector_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUseTokenSelector_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UseTokenSelector.UseTokenSelector_C.OnCloseTokenSelector
// (BlueprintCallable, BlueprintEvent)

void UUseTokenSelector_C::OnCloseTokenSelector()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "OnCloseTokenSelector");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UseTokenSelector.UseTokenSelector_C.OnSelectToken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUseTokenSelector_C::OnSelectToken(int32 TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "OnSelectToken");

	Params::UseTokenSelector_C_OnSelectToken Parms{};

	Parms.TokenID = TokenID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUseTokenSelector_C::BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UseTokenSelector.UseTokenSelector_C.SetRecepi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftMasterData                 Param_Recepi                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUseTokenSelector_C::SetRecepi(const struct FCraftMasterData& Param_Recepi)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "SetRecepi");

	Params::UseTokenSelector_C_SetRecepi Parms{};

	Parms.Param_Recepi = std::move(Param_Recepi);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UseTokenSelector.UseTokenSelector_C.IsUseToken
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                           UseToken                                               (Parm, OutParm)

void UUseTokenSelector_C::IsUseToken(TArray<int32>* UseToken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "IsUseToken");

	Params::UseTokenSelector_C_IsUseToken Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (UseToken != nullptr)
		*UseToken = std::move(Parms.UseToken);
}


// Function UseTokenSelector.UseTokenSelector_C.SetCraftCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CraftCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUseTokenSelector_C::SetCraftCount(int32 Param_CraftCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "SetCraftCount");

	Params::UseTokenSelector_C_SetCraftCount Parms{};

	Parms.Param_CraftCount = Param_CraftCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UseTokenSelector.UseTokenSelector_C.IsMeetDemand
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    MeetDemand                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUseTokenSelector_C::IsMeetDemand(bool* MeetDemand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "IsMeetDemand");

	Params::UseTokenSelector_C_IsMeetDemand Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MeetDemand != nullptr)
		*MeetDemand = Parms.MeetDemand;
}


// Function UseTokenSelector.UseTokenSelector_C.IfMeetDemand
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    MeetDemand                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUseTokenSelector_C::IfMeetDemand(int32 Count, bool* MeetDemand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UseTokenSelector_C", "IfMeetDemand");

	Params::UseTokenSelector_C_IfMeetDemand Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

	if (MeetDemand != nullptr)
		*MeetDemand = Parms.MeetDemand;
}

}

