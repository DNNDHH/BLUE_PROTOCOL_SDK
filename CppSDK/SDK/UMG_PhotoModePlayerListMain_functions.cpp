#pragma once

 

// Package: UMG_PhotoModePlayerListMain

#include "Basic.hpp"

#include "UMG_PhotoModePlayerListMain_classes.hpp"
#include "UMG_PhotoModePlayerListMain_parameters.hpp"


namespace SDK
{

// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.OnListSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerState*                   PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModePlayerListMain_C::OnListSelected__DelegateSignature(class ASBPlayerState* PlayerState, class FName CharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerListMain_C", "OnListSelected__DelegateSignature");

	Params::UMG_PhotoModePlayerListMain_C_OnListSelected__DelegateSignature Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CharacterId = CharacterId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.OnClickUpdateButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModePlayerListMain_C::OnClickUpdateButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerListMain_C", "OnClickUpdateButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.OnListUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModePlayerListMain_C::OnListUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerListMain_C", "OnListUpdated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.ExecuteUbergraph_UMG_PhotoModePlayerListMain
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModePlayerListMain_C::ExecuteUbergraph_UMG_PhotoModePlayerListMain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerListMain_C", "ExecuteUbergraph_UMG_PhotoModePlayerListMain");

	Params::UMG_PhotoModePlayerListMain_C_ExecuteUbergraph_UMG_PhotoModePlayerListMain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModePlayerListMain_C::BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerListMain_C", "BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PhotoModePlayerListMain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerListMain_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModePlayerListMain_C::BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerListMain_C", "BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UMG_PhotoModePlayerListMain_C_BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.BP_OnUpdatePlayerControlData
// (Event, Protected, BlueprintEvent)

void UUMG_PhotoModePlayerListMain_C::BP_OnUpdatePlayerControlData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerListMain_C", "BP_OnUpdatePlayerControlData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C.BndEvt__UMG_PhotoModePlayerListMain_UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModePlayerListMain_C::BndEvt__UMG_PhotoModePlayerListMain_UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerListMain_C", "BndEvt__UMG_PhotoModePlayerListMain_UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

