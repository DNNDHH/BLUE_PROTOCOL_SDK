#pragma once

 

// Package: PartyMemberList_ContentsLabel

#include "Basic.hpp"

#include "PartyMemberList_ContentsLabel_classes.hpp"
#include "PartyMemberList_ContentsLabel_parameters.hpp"


namespace SDK
{

// Function PartyMemberList_ContentsLabel.PartyMemberList_ContentsLabel_C.SetContentsType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PartyListPartyType                    InPartyType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberList_ContentsLabel_C::SetContentsType(E_PartyListPartyType InPartyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberList_ContentsLabel_C", "SetContentsType");

	Params::PartyMemberList_ContentsLabel_C_SetContentsType Parms{};

	Parms.InPartyType = InPartyType;

	UObject::ProcessEvent(Func, &Parms);
}

}

