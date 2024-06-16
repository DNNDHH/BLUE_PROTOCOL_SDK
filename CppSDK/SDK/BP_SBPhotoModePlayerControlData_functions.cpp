#pragma once

 

// Package: BP_SBPhotoModePlayerControlData

#include "Basic.hpp"

#include "BP_SBPhotoModePlayerControlData_classes.hpp"
#include "BP_SBPhotoModePlayerControlData_parameters.hpp"


namespace SDK
{

// Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.ExecuteUbergraph_BP_SBPhotoModePlayerControlData
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBPhotoModePlayerControlData_C::ExecuteUbergraph_BP_SBPhotoModePlayerControlData(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePlayerControlData_C", "ExecuteUbergraph_BP_SBPhotoModePlayerControlData");

	Params::BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.BP_OnChangeWeaponVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_SBPhotoModePlayerControlData_C::BP_OnChangeWeaponVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePlayerControlData_C", "BP_OnChangeWeaponVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.BP_CreateCloneCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InParent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInCopyPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBPhotoModePlayerControlData_C::BP_CreateCloneCharacter(class UObject* InParent, bool bInCopyPose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePlayerControlData_C", "BP_CreateCloneCharacter");

	Params::BP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter Parms{};

	Parms.InParent = InParent;
	Parms.bInCopyPose = bInCopyPose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.SetPlayerHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsHidden                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBPhotoModePlayerControlData_C::SetPlayerHidden(bool bIsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePlayerControlData_C", "SetPlayerHidden");

	Params::BP_SBPhotoModePlayerControlData_C_SetPlayerHidden Parms{};

	Parms.bIsHidden = bIsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.CreateCloneCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InParent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInCopyPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBPhotoModePlayerControlData_C::CreateCloneCharacter(class UObject* InParent, bool bInCopyPose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePlayerControlData_C", "CreateCloneCharacter");

	Params::BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter Parms{};

	Parms.InParent = InParent;
	Parms.bInCopyPose = bInCopyPose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.OnChangeWeaponVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SBPhotoModePlayerControlData_C::OnChangeWeaponVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModePlayerControlData_C", "OnChangeWeaponVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

