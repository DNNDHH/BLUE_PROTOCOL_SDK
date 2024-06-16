#pragma once

 

// Package: LibraryMenu_List

#include "Basic.hpp"

#include "LibraryMenu_List_classes.hpp"
#include "LibraryMenu_List_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_List.LibraryMenu_List_C.CategoryChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_List_C::CategoryChanged__DelegateSignature(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_List_C", "CategoryChanged__DelegateSignature");

	Params::LibraryMenu_List_C_CategoryChanged__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_List.LibraryMenu_List_C.ExecuteUbergraph_LibraryMenu_List
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_List_C::ExecuteUbergraph_LibraryMenu_List(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_List_C", "ExecuteUbergraph_LibraryMenu_List");

	Params::LibraryMenu_List_C_ExecuteUbergraph_LibraryMenu_List Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_List.LibraryMenu_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_List_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_List_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_List.LibraryMenu_List_C.SetItemListSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_List_C::SetItemListSelected(int32 ListIndex, bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_List_C", "SetItemListSelected");

	Params::LibraryMenu_List_C_SetItemListSelected Parms{};

	Parms.ListIndex = ListIndex;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_List.LibraryMenu_List_C.GetScrollOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Offset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_List_C::GetScrollOffset(float* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_List_C", "GetScrollOffset");

	Params::LibraryMenu_List_C_GetScrollOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = Parms.Offset;
}


// Function LibraryMenu_List.LibraryMenu_List_C.SetScrollOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_List_C::SetScrollOffset(float Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_List_C", "SetScrollOffset");

	Params::LibraryMenu_List_C_SetScrollOffset Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}

}

