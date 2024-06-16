#pragma once

 

// Package: Fang_expedition_TicketListWindow

#include "Basic.hpp"

#include "Fang_expedition_TicketListWindow_classes.hpp"
#include "Fang_expedition_TicketListWindow_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.OnClose__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           SelectTokenIds                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_TicketListWindow_C::OnClose__DelegateSignature(TArray<int32>& SelectTokenIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "OnClose__DelegateSignature");

	Params::Fang_expedition_TicketListWindow_C_OnClose__DelegateSignature Parms{};

	Parms.SelectTokenIds = std::move(SelectTokenIds);

	UObject::ProcessEvent(Func, &Parms);

	SelectTokenIds = std::move(Parms.SelectTokenIds);
}


// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.ExecuteUbergraph_Fang_expedition_TicketListWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_TicketListWindow_C::ExecuteUbergraph_Fang_expedition_TicketListWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "ExecuteUbergraph_Fang_expedition_TicketListWindow");

	Params::Fang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.BndEvt__Fang_expedition_TicketListWindow_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_TicketListWindow_C::BndEvt__Fang_expedition_TicketListWindow_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "BndEvt__Fang_expedition_TicketListWindow_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.BndEvt__Fang_expedition_TicketListWindow_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_TicketListWindow_C::BndEvt__Fang_expedition_TicketListWindow_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "BndEvt__Fang_expedition_TicketListWindow_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_TicketListWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_TicketListWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CB_OnCheckStateChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_TicketListWindow_C::CB_OnCheckStateChange(bool State, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "CB_OnCheckStateChange");

	Params::Fang_expedition_TicketListWindow_C_CB_OnCheckStateChange Parms{};

	Parms.State = State;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_TicketListWindow_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CB_EnableButtonWork
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_TicketListWindow_C::CB_EnableButtonWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "CB_EnableButtonWork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CloseWork
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_TicketListWindow_C::CloseWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "CloseWork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.SetTokenSelect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           SelectTokenId                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_TicketListWindow_C::SetTokenSelect(TArray<int32>& SelectTokenId, const struct FSBFang_expeditionAreaData& AreaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "SetTokenSelect");

	Params::Fang_expedition_TicketListWindow_C_SetTokenSelect Parms{};

	Parms.SelectTokenId = std::move(SelectTokenId);
	Parms.AreaData = std::move(AreaData);

	UObject::ProcessEvent(Func, &Parms);

	SelectTokenId = std::move(Parms.SelectTokenId);
}


// Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CheckTicketNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsEnable                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_TicketListWindow_C::CheckTicketNum(int32 InId, bool* OutIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketListWindow_C", "CheckTicketNum");

	Params::Fang_expedition_TicketListWindow_C_CheckTicketNum Parms{};

	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsEnable != nullptr)
		*OutIsEnable = Parms.OutIsEnable;
}

}

