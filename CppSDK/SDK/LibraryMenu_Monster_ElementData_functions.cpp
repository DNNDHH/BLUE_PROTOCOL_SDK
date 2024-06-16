#pragma once

 

// Package: LibraryMenu_Monster_ElementData

#include "Basic.hpp"

#include "LibraryMenu_Monster_ElementData_classes.hpp"
#include "LibraryMenu_Monster_ElementData_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_ElementData_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_ElementData_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.ResetIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_ElementData_C::ResetIconVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_ElementData_C", "ResetIconVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.Set Icon Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           VisibleIndexList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_ElementData_C::Set_Icon_Data(TArray<int32>& VisibleIndexList, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_ElementData_C", "Set Icon Data");

	Params::LibraryMenu_Monster_ElementData_C_Set_Icon_Data Parms{};

	Parms.VisibleIndexList = std::move(VisibleIndexList);
	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

	VisibleIndexList = std::move(Parms.VisibleIndexList);
}


// Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.IconMaskMode
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_ElementData_C::IconMaskMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_ElementData_C", "IconMaskMode");

	UObject::ProcessEvent(Func, nullptr);
}

}

