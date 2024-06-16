#pragma once

 

// Package: ProbabilityDisplay_GashaBonusListItem

#include "Basic.hpp"

#include "ProbabilityDisplay_GashaBonusListItem_classes.hpp"
#include "ProbabilityDisplay_GashaBonusListItem_parameters.hpp"


namespace SDK
{

// Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_GashaBonusListItem_C::ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_GashaBonusListItem_C", "ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem");

	Params::ProbabilityDisplay_GashaBonusListItem_C_ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProbabilityDisplay_GashaBonusListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_GashaBonusListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProbabilityDisplay_GashaBonusListItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_GashaBonusListItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_GashaBonusListItem_C::BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_GashaBonusListItem_C", "BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::ProbabilityDisplay_GashaBonusListItem_C_BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.OnClose_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_GashaBonusListItem_C::OnClose_Event(class UUMG_ProductDetailMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_GashaBonusListItem_C", "OnClose_Event");

	Params::ProbabilityDisplay_GashaBonusListItem_C_OnClose_Event Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRewardItemType                       ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Requirement                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Limit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsStepUp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProbabilityDisplay_GashaBonusListItem_C::Setup(int32 ItemIndex, ESBRewardItemType ItemType, const class FString& Requirement, int32 Param_Index, int32 Param_Amount, int32 Limit, bool IsStepUp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_GashaBonusListItem_C", "Setup");

	Params::ProbabilityDisplay_GashaBonusListItem_C_Setup Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.ItemType = ItemType;
	Parms.Requirement = std::move(Requirement);
	Parms.Param_Index = Param_Index;
	Parms.Param_Amount = Param_Amount;
	Parms.Limit = Limit;
	Parms.IsStepUp = IsStepUp;

	UObject::ProcessEvent(Func, &Parms);
}

}

