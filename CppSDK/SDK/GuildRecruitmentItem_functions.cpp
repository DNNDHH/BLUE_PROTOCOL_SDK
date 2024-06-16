#pragma once

 

// Package: GuildRecruitmentItem

#include "Basic.hpp"

#include "GuildRecruitmentItem_classes.hpp"
#include "GuildRecruitmentItem_parameters.hpp"


namespace SDK
{

// Function GuildRecruitmentItem.GuildRecruitmentItem_C.OnClicked_GuildEntry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildRecruitmentItem_C::OnClicked_GuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentItem_C", "OnClicked_GuildEntry__DelegateSignature");

	Params::GuildRecruitmentItem_C_OnClicked_GuildEntry__DelegateSignature Parms{};

	Parms.GuildEntry = std::move(GuildEntry);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentItem.GuildRecruitmentItem_C.ExecuteUbergraph_GuildRecruitmentItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentItem_C::ExecuteUbergraph_GuildRecruitmentItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentItem_C", "ExecuteUbergraph_GuildRecruitmentItem");

	Params::GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentItem.GuildRecruitmentItem_C.Unselected
// (BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentItem_C::Unselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentItem_C", "Unselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentItem.GuildRecruitmentItem_C.BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildRecruitmentItem_C::BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentItem_C", "BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentItem.GuildRecruitmentItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildRecruitmentItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

