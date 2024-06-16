#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskOpenTheaterMenu

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu");

	Params::BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.OnEnd
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C::OnEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C", "OnEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.Load Lib Save Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBLibrarySaveManager*            LibSaveData                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C::Load_Lib_Save_Data(class USBLibrarySaveManager** LibSaveData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C", "Load Lib Save Data");

	Params::BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LibSaveData != nullptr)
		*LibSaveData = Parms.LibSaveData;
}


// Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.CheckOpenedLoginBonusWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsOpened                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C::CheckOpenedLoginBonusWindow(bool* IsOpened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C", "CheckOpenedLoginBonusWindow");

	Params::BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpened != nullptr)
		*IsOpened = Parms.IsOpened;
}

}

