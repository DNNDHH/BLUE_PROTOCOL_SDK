#pragma once

 

// Package: InhelitPerkViewItem

#include "Basic.hpp"

#include "InhelitPerkViewItem_classes.hpp"
#include "InhelitPerkViewItem_parameters.hpp"


namespace SDK
{

// Function InhelitPerkViewItem.InhelitPerkViewItem_C.SelectChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    SelectData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UInhelitPerkViewItem_C::SelectChange__DelegateSignature(const struct FSBStackBPerk& SelectData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkViewItem_C", "SelectChange__DelegateSignature");

	Params::InhelitPerkViewItem_C_SelectChange__DelegateSignature Parms{};

	Parms.SelectData = std::move(SelectData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkViewItem.InhelitPerkViewItem_C.SelectPurge__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    SelectPerk                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UInhelitPerkViewItem_C::SelectPurge__DelegateSignature(const struct FSBStackBPerk& SelectPerk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkViewItem_C", "SelectPurge__DelegateSignature");

	Params::InhelitPerkViewItem_C_SelectPurge__DelegateSignature Parms{};

	Parms.SelectPerk = std::move(SelectPerk);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkViewItem.InhelitPerkViewItem_C.ExecuteUbergraph_InhelitPerkViewItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInhelitPerkViewItem_C::ExecuteUbergraph_InhelitPerkViewItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkViewItem_C", "ExecuteUbergraph_InhelitPerkViewItem");

	Params::InhelitPerkViewItem_C_ExecuteUbergraph_InhelitPerkViewItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkViewItem.InhelitPerkViewItem_C.BndEvt__InhelitPerkViewItem_BtnChange_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UInhelitPerkViewItem_C::BndEvt__InhelitPerkViewItem_BtnChange_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkViewItem_C", "BndEvt__InhelitPerkViewItem_BtnChange_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkViewItem.InhelitPerkViewItem_C.BndEvt__InhelitPerkViewItem_BtnPurge_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UInhelitPerkViewItem_C::BndEvt__InhelitPerkViewItem_BtnPurge_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkViewItem_C", "BndEvt__InhelitPerkViewItem_BtnPurge_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkViewItem.InhelitPerkViewItem_C.SetPerkData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    SBCharacter_Weapon_Perk_Data                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UInhelitPerkViewItem_C::SetPerkData(const struct FSBStackBPerk& SBCharacter_Weapon_Perk_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkViewItem_C", "SetPerkData");

	Params::InhelitPerkViewItem_C_SetPerkData Parms{};

	Parms.SBCharacter_Weapon_Perk_Data = std::move(SBCharacter_Weapon_Perk_Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkViewItem.InhelitPerkViewItem_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UInhelitPerkViewItem_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkViewItem_C", "SetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkViewItem.InhelitPerkViewItem_C.DisableChange
// (Public, BlueprintCallable, BlueprintEvent)

void UInhelitPerkViewItem_C::DisableChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkViewItem_C", "DisableChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkViewItem.InhelitPerkViewItem_C.DisablePurge
// (Public, BlueprintCallable, BlueprintEvent)

void UInhelitPerkViewItem_C::DisablePurge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkViewItem_C", "DisablePurge");

	UObject::ProcessEvent(Func, nullptr);
}

}

