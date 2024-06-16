#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskAppraisalResultMenu

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu");

	Params::BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskAppraisalResultMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.Finish
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.OnCharacterJoinExtDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::OnCharacterJoinExtDelegate______0(const int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C", "OnCharacterJoinExtDelegate_����_0");

	Params::BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCharacterJoinExtDelegate______0 Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.ItemAppraisalResultEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::ItemAppraisalResultEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C", "ItemAppraisalResultEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.OnCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSuccessed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::OnCompleted(bool IsSuccessed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C", "OnCompleted");

	Params::BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnCompleted Parms{};

	Parms.IsSuccessed = IsSuccessed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.PreStart
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::PreStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C", "PreStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.CreateItemAppraisalResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBOwnItemListContainer*          InMovedUnidentifiedItems                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBOwnItemListContainer*          InMovedAppraisedItems                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBOwnItemListContainer*          InSaleUnidentifiedItems                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBOwnItemListContainer*          InSaleAppraisedItems                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSalePrice                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::CreateItemAppraisalResult(class USBOwnItemListContainer* InMovedUnidentifiedItems, class USBOwnItemListContainer* InMovedAppraisedItems, class USBOwnItemListContainer* InSaleUnidentifiedItems, class USBOwnItemListContainer* InSaleAppraisedItems, int32 InSalePrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C", "CreateItemAppraisalResult");

	Params::BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CreateItemAppraisalResult Parms{};

	Parms.InMovedUnidentifiedItems = InMovedUnidentifiedItems;
	Parms.InMovedAppraisedItems = InMovedAppraisedItems;
	Parms.InSaleUnidentifiedItems = InSaleUnidentifiedItems;
	Parms.InSaleAppraisedItems = InSaleAppraisedItems;
	Parms.InSalePrice = InSalePrice;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSuccessed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::CustomEvent_1(bool IsSuccessed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C", "CustomEvent_1");

	Params::BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_CustomEvent_1 Parms{};

	Parms.IsSuccessed = IsSuccessed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C", "OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC");

	Params::BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_OnLoaded_ACAD67A74D6CD4CCF910F3A4702E70BC Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskAppraisalResultMenu.BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C.Lock Loading Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Lock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C::Lock_Loading_Screen(bool Lock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C", "Lock Loading Screen");

	Params::BP_PlayerLevelStartSequenceTaskAppraisalResultMenu_C_Lock_Loading_Screen Parms{};

	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);
}

}

