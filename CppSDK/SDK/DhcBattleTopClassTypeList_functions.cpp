#pragma once

 

// Package: DhcBattleTopClassTypeList

#include "Basic.hpp"

#include "DhcBattleTopClassTypeList_classes.hpp"
#include "DhcBattleTopClassTypeList_parameters.hpp"


namespace SDK
{

// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.OnClassTypeListItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBDhcBattleHighScoreInfo        InScoreInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InIsScoreInfoEmpty                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopClassTypeList_C::OnClassTypeListItemSelected__DelegateSignature(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "OnClassTypeListItemSelected__DelegateSignature");

	Params::DhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature Parms{};

	Parms.InClassType = InClassType;
	Parms.InScoreInfo = std::move(InScoreInfo);
	Parms.InIsScoreInfoEmpty = InIsScoreInfoEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.ExecuteUbergraph_DhcBattleTopClassTypeList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassTypeList_C::ExecuteUbergraph_DhcBattleTopClassTypeList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "ExecuteUbergraph_DhcBattleTopClassTypeList");

	Params::DhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDhcBattleTopClassTypeList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.OnListItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDhcBattleTopClassTypeListItem_C* InSelf                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassTypeList_C::OnListItemClicked(class UDhcBattleTopClassTypeListItem_C* InSelf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "OnListItemClicked");

	Params::DhcBattleTopClassTypeList_C_OnListItemClicked Parms{};

	Parms.InSelf = InSelf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopClassTypeList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "PreConstruct");

	Params::DhcBattleTopClassTypeList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.CreateList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDhcBattleTopClassTypeList_C::CreateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "CreateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetPlayerCurrClassType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassTypeList_C::SetPlayerCurrClassType(ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "SetPlayerCurrClassType");

	Params::DhcBattleTopClassTypeList_C_SetPlayerCurrClassType Parms{};

	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetupList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBDhcBattleHighScoreInfo>InScoreInfos                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDhcBattleTopClassTypeList_C::SetupList(TArray<struct FSBDhcBattleHighScoreInfo>& InScoreInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "SetupList");

	Params::DhcBattleTopClassTypeList_C_SetupList Parms{};

	Parms.InScoreInfos = std::move(InScoreInfos);

	UObject::ProcessEvent(Func, &Parms);

	InScoreInfos = std::move(Parms.InScoreInfos);
}


// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.UpdateListSelectedItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDhcBattleTopClassTypeListItem_C* InListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassTypeList_C::UpdateListSelectedItem(class UDhcBattleTopClassTypeListItem_C* InListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "UpdateListSelectedItem");

	Params::DhcBattleTopClassTypeList_C_UpdateListSelectedItem Parms{};

	Parms.InListItem = InListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetSelectedListItemTop
// (Public, BlueprintCallable, BlueprintEvent)

void UDhcBattleTopClassTypeList_C::SetSelectedListItemTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "SetSelectedListItemTop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.GetCurrSelectedListItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDhcBattleTopClassTypeListItem_C* OutListItem                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassTypeList_C::GetCurrSelectedListItem(class UDhcBattleTopClassTypeListItem_C** OutListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "GetCurrSelectedListItem");

	Params::DhcBattleTopClassTypeList_C_GetCurrSelectedListItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutListItem != nullptr)
		*OutListItem = Parms.OutListItem;
}


// Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.GetListItemByClassType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDhcBattleTopClassTypeListItem_C* OutListItem                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassTypeList_C::GetListItemByClassType(ESBClassType InClassType, class UDhcBattleTopClassTypeListItem_C** OutListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassTypeList_C", "GetListItemByClassType");

	Params::DhcBattleTopClassTypeList_C_GetListItemByClassType Parms{};

	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutListItem != nullptr)
		*OutListItem = Parms.OutListItem;
}

}

