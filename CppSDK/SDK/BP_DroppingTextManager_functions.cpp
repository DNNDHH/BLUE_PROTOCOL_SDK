#pragma once

 

// Package: BP_DroppingTextManager

#include "Basic.hpp"

#include "BP_DroppingTextManager_classes.hpp"
#include "BP_DroppingTextManager_parameters.hpp"


namespace SDK
{

// Function BP_DroppingTextManager.BP_DroppingTextManager_C.ExecuteUbergraph_BP_DroppingTextManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DroppingTextManager_C::ExecuteUbergraph_BP_DroppingTextManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppingTextManager_C", "ExecuteUbergraph_BP_DroppingTextManager");

	Params::BP_DroppingTextManager_C_ExecuteUbergraph_BP_DroppingTextManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingTextItemName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ItemName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Amount                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBDroppingTextOption                   Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DroppingTextManager_C::ShowDroppingTextItemName(class UObject* WorldContextObject, const class FText& ItemName, const int32 Amount, ESBDroppingTextOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppingTextManager_C", "ShowDroppingTextItemName");

	Params::BP_DroppingTextManager_C_ShowDroppingTextItemName Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ItemName = std::move(ItemName);
	Parms.Amount = Amount;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingTextItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               ItemType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBDroppingTextOption                   Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUnidentified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsBonusAdd                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bRare                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DroppingTextManager_C::ShowDroppingTextItem(class UObject* WorldContextObject, const EItemType ItemType, const int32 ItemId, const int32 Amount, ESBDroppingTextOption Option, bool bUnidentified, bool bIsBonusAdd, bool bRare)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppingTextManager_C", "ShowDroppingTextItem");

	Params::BP_DroppingTextManager_C_ShowDroppingTextItem Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ItemType = ItemType;
	Parms.ItemId = ItemId;
	Parms.Amount = Amount;
	Parms.Option = Option;
	Parms.bUnidentified = bUnidentified;
	Parms.bIsBonusAdd = bIsBonusAdd;
	Parms.bRare = bRare;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DroppingTextManager.BP_DroppingTextManager_C.ShowDroppingText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBDroppingTextOption                   Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DroppingTextManager_C::ShowDroppingText(class UObject* WorldContextObject, const class FText& Message, ESBDroppingTextOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DroppingTextManager_C", "ShowDroppingText");

	Params::BP_DroppingTextManager_C_ShowDroppingText Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Message = std::move(Message);
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);
}

}

