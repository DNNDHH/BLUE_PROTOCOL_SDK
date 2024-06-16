#pragma once

 

// Package: LibraryMenu_LoginBonusListLineItem

#include "Basic.hpp"

#include "LibraryMenu_LoginBonusListLineItem_classes.hpp"
#include "LibraryMenu_LoginBonusListLineItem_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.ItemClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusListLineItem_C::ItemClick__DelegateSignature(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLineItem_C", "ItemClick__DelegateSignature");

	Params::LibraryMenu_LoginBonusListLineItem_C_ItemClick__DelegateSignature Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusListLineItem_C::ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLineItem_C", "ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem");

	Params::LibraryMenu_LoginBonusListLineItem_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_LoginBonusListLineItem_C::BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLineItem_C", "BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_LoginBonusListLineItem_C::BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLineItem_C", "BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLoginBonusWindowDayData       Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    StumpOn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_LoginBonusListLineItem_C::SetData(const struct FSBLoginBonusWindowDayData& Data, bool StumpOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLineItem_C", "SetData");

	Params::LibraryMenu_LoginBonusListLineItem_C_SetData Parms{};

	Parms.Data = std::move(Data);
	Parms.StumpOn = StumpOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.SetMouseClickValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusListLineItem_C::SetMouseClickValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLineItem_C", "SetMouseClickValue");

	Params::LibraryMenu_LoginBonusListLineItem_C_SetMouseClickValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

