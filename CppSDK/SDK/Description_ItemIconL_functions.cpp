#pragma once

 

// Package: Description_ItemIconL

#include "Basic.hpp"

#include "Description_ItemIconL_classes.hpp"
#include "Description_ItemIconL_parameters.hpp"


namespace SDK
{

// Function Description_ItemIconL.Description_ItemIconL_C.ExecuteUbergraph_Description_ItemIconL
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDescription_ItemIconL_C::ExecuteUbergraph_Description_ItemIconL(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Description_ItemIconL_C", "ExecuteUbergraph_Description_ItemIconL");

	Params::Description_ItemIconL_C_ExecuteUbergraph_Description_ItemIconL Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Description_ItemIconL.Description_ItemIconL_C.SetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUnidentified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDescription_ItemIconL_C::SetItem(int32 InItemIndex, bool bUnidentified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Description_ItemIconL_C", "SetItem");

	Params::Description_ItemIconL_C_SetItem Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.bUnidentified = bUnidentified;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Description_ItemIconL.Description_ItemIconL_C.OnLoaded_CF191FB34BA71AABA5262489195B3141
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDescription_ItemIconL_C::OnLoaded_CF191FB34BA71AABA5262489195B3141(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Description_ItemIconL_C", "OnLoaded_CF191FB34BA71AABA5262489195B3141");

	Params::Description_ItemIconL_C_OnLoaded_CF191FB34BA71AABA5262489195B3141 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

