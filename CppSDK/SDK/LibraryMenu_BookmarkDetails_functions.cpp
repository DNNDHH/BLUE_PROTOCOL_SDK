#pragma once

 

// Package: LibraryMenu_BookmarkDetails

#include "Basic.hpp"

#include "LibraryMenu_BookmarkDetails_classes.hpp"
#include "LibraryMenu_BookmarkDetails_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C.ExecuteUbergraph_LibraryMenu_BookmarkDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_BookmarkDetails_C::ExecuteUbergraph_LibraryMenu_BookmarkDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_BookmarkDetails_C", "ExecuteUbergraph_LibraryMenu_BookmarkDetails");

	Params::LibraryMenu_BookmarkDetails_C_ExecuteUbergraph_LibraryMenu_BookmarkDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_BookmarkDetails_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_BookmarkDetails_C", "Tick");

	Params::LibraryMenu_BookmarkDetails_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_BookmarkDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_BookmarkDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C.SetDetailsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_BookmarkDetails_C::SetDetailsVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_BookmarkDetails_C", "SetDetailsVisibility");

	Params::LibraryMenu_BookmarkDetails_C_SetDetailsVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

