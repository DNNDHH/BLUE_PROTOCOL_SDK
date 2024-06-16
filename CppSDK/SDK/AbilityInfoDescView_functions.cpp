#pragma once

 

// Package: AbilityInfoDescView

#include "Basic.hpp"

#include "AbilityInfoDescView_classes.hpp"
#include "AbilityInfoDescView_parameters.hpp"


namespace SDK
{

// Function AbilityInfoDescView.AbilityInfoDescView_C.ExecuteUbergraph_AbilityInfoDescView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityInfoDescView_C::ExecuteUbergraph_AbilityInfoDescView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityInfoDescView_C", "ExecuteUbergraph_AbilityInfoDescView");

	Params::AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityInfoDescView.AbilityInfoDescView_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbilityInfoDescView_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityInfoDescView_C", "OnMouseLeave");

	Params::AbilityInfoDescView_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityInfoDescView.AbilityInfoDescView_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbilityInfoDescView_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityInfoDescView_C", "OnMouseEnter");

	Params::AbilityInfoDescView_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityInfoDescView.AbilityInfoDescView_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilityInfoDescView_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityInfoDescView_C", "BP_OnItemSelectionChanged");

	Params::AbilityInfoDescView_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityInfoDescView.AbilityInfoDescView_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityInfoDescView_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityInfoDescView_C", "OnListItemObjectSet");

	Params::AbilityInfoDescView_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityInfoDescView.AbilityInfoDescView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAbilityInfoDescView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityInfoDescView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AbilityInfoDescView.AbilityInfoDescView_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilityInfoDescView_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityInfoDescView_C", "BP_OnItemExpansionChanged");

	Params::AbilityInfoDescView_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityInfoDescView.AbilityInfoDescView_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UAbilityInfoDescView_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityInfoDescView_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AbilityInfoDescView.AbilityInfoDescView_C.SetAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbilityInfoDescView_C::SetAbility(const struct FOwnItemInfo& Param_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityInfoDescView_C", "SetAbility");

	Params::AbilityInfoDescView_C_SetAbility Parms{};

	Parms.Param_Info = std::move(Param_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityInfoDescView.AbilityInfoDescView_C.GetAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOwnItemInfo                     Param_Info                                             (Parm, OutParm)

void UAbilityInfoDescView_C::GetAbility(struct FOwnItemInfo* Param_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityInfoDescView_C", "GetAbility");

	Params::AbilityInfoDescView_C_GetAbility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Info != nullptr)
		*Param_Info = std::move(Parms.Param_Info);
}

}

