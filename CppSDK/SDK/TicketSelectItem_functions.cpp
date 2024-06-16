#pragma once

 

// Package: TicketSelectItem

#include "Basic.hpp"

#include "TicketSelectItem_classes.hpp"
#include "TicketSelectItem_parameters.hpp"


namespace SDK
{

// Function TicketSelectItem.TicketSelectItem_C.SetTextId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TicketId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTicketSelectItem_C::SetTextId(int32 TicketId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSelectItem_C", "SetTextId");

	Params::TicketSelectItem_C_SetTextId Parms{};

	Parms.TicketId = TicketId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TicketSelectItem.TicketSelectItem_C.UpdateTokenNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTicketSelectItem_C::UpdateTokenNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSelectItem_C", "UpdateTokenNum");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TicketSelectItem.TicketSelectItem_C.isValidTokenID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTicketSelectItem_C::IsValidTokenID(bool* Valid) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSelectItem_C", "isValidTokenID");

	Params::TicketSelectItem_C_IsValidTokenID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}

}

