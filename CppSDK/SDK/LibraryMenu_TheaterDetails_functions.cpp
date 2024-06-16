#pragma once

 

// Package: LibraryMenu_TheaterDetails

#include "Basic.hpp"

#include "LibraryMenu_TheaterDetails_classes.hpp"
#include "LibraryMenu_TheaterDetails_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.CategoryChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_TheaterDetails_C::CategoryChanged__DelegateSignature(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_TheaterDetails_C", "CategoryChanged__DelegateSignature");

	Params::LibraryMenu_TheaterDetails_C_CategoryChanged__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.ExecuteUbergraph_LibraryMenu_TheaterDetails
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_TheaterDetails_C::ExecuteUbergraph_LibraryMenu_TheaterDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_TheaterDetails_C", "ExecuteUbergraph_LibraryMenu_TheaterDetails");

	Params::LibraryMenu_TheaterDetails_C_ExecuteUbergraph_LibraryMenu_TheaterDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_TheaterDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_TheaterDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.SetDetailsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_TheaterDetails_C::SetDetailsVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_TheaterDetails_C", "SetDetailsVisibility");

	Params::LibraryMenu_TheaterDetails_C_SetDetailsVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C.SetMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsCty                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_TheaterDetails_C::SetMessage(bool Param_IsCty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_TheaterDetails_C", "SetMessage");

	Params::LibraryMenu_TheaterDetails_C_SetMessage Parms{};

	Parms.Param_IsCty = Param_IsCty;

	UObject::ProcessEvent(Func, &Parms);
}

}

