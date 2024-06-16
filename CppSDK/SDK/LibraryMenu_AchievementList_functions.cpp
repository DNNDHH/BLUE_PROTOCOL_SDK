#pragma once

 

// Package: LibraryMenu_AchievementList

#include "Basic.hpp"

#include "LibraryMenu_AchievementList_classes.hpp"
#include "LibraryMenu_AchievementList_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.CategoryChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementList_C::CategoryChanged__DelegateSignature(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementList_C", "CategoryChanged__DelegateSignature");

	Params::LibraryMenu_AchievementList_C_CategoryChanged__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.ExecuteUbergraph_LibraryMenu_AchievementList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementList_C::ExecuteUbergraph_LibraryMenu_AchievementList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementList_C", "ExecuteUbergraph_LibraryMenu_AchievementList");

	Params::LibraryMenu_AchievementList_C_ExecuteUbergraph_LibraryMenu_AchievementList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_AchievementList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.SetItemListSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementList_C::SetItemListSelected(int32 ListIndex, bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementList_C", "SetItemListSelected");

	Params::LibraryMenu_AchievementList_C_SetItemListSelected Parms{};

	Parms.ListIndex = ListIndex;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.CheckItemListNewIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementList_C::CheckItemListNewIcon(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementList_C", "CheckItemListNewIcon");

	Params::LibraryMenu_AchievementList_C_CheckItemListNewIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LibraryMenu_AchievementList.LibraryMenu_AchievementList_C.SetAchievementTitle
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_AchievementList_C::SetAchievementTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementList_C", "SetAchievementTitle");

	UObject::ProcessEvent(Func, nullptr);
}

}

