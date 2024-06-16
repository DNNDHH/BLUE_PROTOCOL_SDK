#pragma once

 

// Package: Fang_expedition_TicketItem

#include "Basic.hpp"

#include "Fang_expedition_TicketItem_classes.hpp"
#include "Fang_expedition_TicketItem_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.OnCheckStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CheckState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_TicketItem_C::OnCheckStateChange__DelegateSignature(bool CheckState, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketItem_C", "OnCheckStateChange__DelegateSignature");

	Params::Fang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature Parms{};

	Parms.CheckState = CheckState;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.ExecuteUbergraph_Fang_expedition_TicketItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_TicketItem_C::ExecuteUbergraph_Fang_expedition_TicketItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketItem_C", "ExecuteUbergraph_Fang_expedition_TicketItem");

	Params::Fang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_TicketItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_TicketItem_C::BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketItem_C", "BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Fang_expedition_TicketItem_C_BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_TicketItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Select                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_TicketItem_C::SetData(int32 ID, bool Select, bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketItem_C", "SetData");

	Params::Fang_expedition_TicketItem_C_SetData Parms{};

	Parms.ID = ID;
	Parms.Select = Select;
	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetDisableTextVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_TicketItem_C::SetDisableTextVisibility(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketItem_C", "SetDisableTextVisibility");

	Params::Fang_expedition_TicketItem_C_SetDisableTextVisibility Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.GetSelectState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_TokenID                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_TicketItem_C::GetSelectState(bool* IsSelected, int32* Param_TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketItem_C", "GetSelectState");

	Params::Fang_expedition_TicketItem_C_GetSelectState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelected != nullptr)
		*IsSelected = Parms.IsSelected;

	if (Param_TokenID != nullptr)
		*Param_TokenID = Parms.Param_TokenID;
}


// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_TicketItem_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketItem_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetCheckState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_TicketItem_C::SetCheckState(bool State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketItem_C", "SetCheckState");

	Params::Fang_expedition_TicketItem_C_SetCheckState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.UpdateTicketNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_TicketItem_C::UpdateTicketNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_TicketItem_C", "UpdateTicketNum");

	UObject::ProcessEvent(Func, nullptr);
}

}

