#pragma once

 

// Package: InhelitPerkSelector

#include "Basic.hpp"

#include "InhelitPerkSelector_classes.hpp"
#include "InhelitPerkSelector_parameters.hpp"


namespace SDK
{

// Function InhelitPerkSelector.InhelitPerkSelector_C.OnSelectChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    Before                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSBStackBPerk                    Select                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UInhelitPerkSelector_C::OnSelectChange__DelegateSignature(const struct FSBStackBPerk& Before, const struct FSBStackBPerk& Select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "OnSelectChange__DelegateSignature");

	Params::InhelitPerkSelector_C_OnSelectChange__DelegateSignature Parms{};

	Parms.Before = std::move(Before);
	Parms.Select = std::move(Select);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UInhelitPerkSelector_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.ExecuteUbergraph_InhelitPerkSelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInhelitPerkSelector_C::ExecuteUbergraph_InhelitPerkSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "ExecuteUbergraph_InhelitPerkSelector");

	Params::InhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInhelitPerkSelector_C::BndEvt__InhelitPerkSelector_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "BndEvt__InhelitPerkSelector_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInhelitPerkSelector_C::BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInhelitPerkSelector_C::BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInhelitPerkSelector_C::BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInhelitPerkSelector_C::BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelotPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInhelitPerkSelector_C::BndEvt__InhelotPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "BndEvt__InhelotPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelotPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInhelitPerkSelector_C::BndEvt__InhelotPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "BndEvt__InhelotPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.OnSelectListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkSlotButton_C*                SelectedButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInhelitPerkSelector_C::OnSelectListItem(class UPerkSlotButton_C* SelectedButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "OnSelectListItem");

	Params::InhelitPerkSelector_C_OnSelectListItem Parms{};

	Parms.SelectedButton = SelectedButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInhelitPerkSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.GenerateList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInhelitPerkSelector_C::GenerateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "GenerateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.AllSelectNone
// (Public, BlueprintCallable, BlueprintEvent)

void UInhelitPerkSelector_C::AllSelectNone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "AllSelectNone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.IsPerkSelected
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBStackBPerk                    Perk                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bSelected                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInhelitPerkSelector_C::IsPerkSelected(const struct FSBStackBPerk& Perk, bool* bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "IsPerkSelected");

	Params::InhelitPerkSelector_C_IsPerkSelected Parms{};

	Parms.Perk = std::move(Perk);

	UObject::ProcessEvent(Func, &Parms);

	if (bSelected != nullptr)
		*bSelected = Parms.bSelected;
}


// Function InhelitPerkSelector.InhelitPerkSelector_C.IsPerkContains
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsContains                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInhelitPerkSelector_C::IsPerkContains(bool* IsContains) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkSelector_C", "IsPerkContains");

	Params::InhelitPerkSelector_C_IsPerkContains Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsContains != nullptr)
		*IsContains = Parms.IsContains;
}

}

