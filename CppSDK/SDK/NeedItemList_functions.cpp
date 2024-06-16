#pragma once

 

// Package: NeedItemList

#include "Basic.hpp"

#include "NeedItemList_classes.hpp"
#include "NeedItemList_parameters.hpp"


namespace SDK
{

// Function NeedItemList.NeedItemList_C.ExecuteUbergraph_NeedItemList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNeedItemList_C::ExecuteUbergraph_NeedItemList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_C", "ExecuteUbergraph_NeedItemList");

	Params::NeedItemList_C_ExecuteUbergraph_NeedItemList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeedItemList.NeedItemList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNeedItemList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_C", "PreConstruct");

	Params::NeedItemList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeedItemList.NeedItemList_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UNeedItemList_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeedItemList.NeedItemList_C.Add
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftNeedItems                  InCraftNeedItems                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    OutIsCraftable                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNeedItemList_C::Add(const struct FCraftNeedItems& InCraftNeedItems, bool* OutIsCraftable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_C", "Add");

	Params::NeedItemList_C_Add Parms{};

	Parms.InCraftNeedItems = std::move(InCraftNeedItems);

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsCraftable != nullptr)
		*OutIsCraftable = Parms.OutIsCraftable;
}


// Function NeedItemList.NeedItemList_C.AddDry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DryItemCnt                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNeedItemList_C::AddDry(int32 DryItemCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_C", "AddDry");

	Params::NeedItemList_C_AddDry Parms{};

	Parms.DryItemCnt = DryItemCnt;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeedItemList.NeedItemList_C.SetBgSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        SizeXY                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNeedItemList_C::SetBgSize(const struct FVector2D& SizeXY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_C", "SetBgSize");

	Params::NeedItemList_C_SetBgSize Parms{};

	Parms.SizeXY = std::move(SizeXY);

	UObject::ProcessEvent(Func, &Parms);
}

}

