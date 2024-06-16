#pragma once

 

// Package: ArenaList

#include "Basic.hpp"

#include "ArenaList_classes.hpp"
#include "ArenaList_parameters.hpp"


namespace SDK
{

// Function ArenaList.ArenaList_C.OnFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UArenaList_C::OnFinish__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaList_C", "OnFinish__DelegateSignature");

	Params::ArenaList_C_OnFinish__DelegateSignature Parms{};

	Parms.Result = std::move(Result);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArenaList.ArenaList_C.ExecuteUbergraph_ArenaList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArenaList_C::ExecuteUbergraph_ArenaList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaList_C", "ExecuteUbergraph_ArenaList");

	Params::ArenaList_C_ExecuteUbergraph_ArenaList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArenaList.ArenaList_C.OnSelectItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMapInfo                       ArenaInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUMG_MatchingMenu_ListItem_C*     Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArenaList_C::OnSelectItem(const struct FSBMapInfo& ArenaInfo, class UUMG_MatchingMenu_ListItem_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaList_C", "OnSelectItem");

	Params::ArenaList_C_OnSelectItem Parms{};

	Parms.ArenaInfo = std::move(ArenaInfo);
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArenaList.ArenaList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UArenaList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArenaList.ArenaList_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UArenaList_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaList_C", "BndEvt__BtnCancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArenaList.ArenaList_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UArenaList_C::BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaList_C", "BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArenaList.ArenaList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UArenaList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArenaList.ArenaList_C.MakeArenaInfoList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UArenaList_C::MakeArenaInfoList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaList_C", "MakeArenaInfoList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArenaList.ArenaList_C.SetupListItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UArenaList_C::SetupListItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaList_C", "SetupListItem");

	UObject::ProcessEvent(Func, nullptr);
}

}

