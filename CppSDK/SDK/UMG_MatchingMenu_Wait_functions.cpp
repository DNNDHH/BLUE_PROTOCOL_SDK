#pragma once

 

// Package: UMG_MatchingMenu_Wait

#include "Basic.hpp"

#include "UMG_MatchingMenu_Wait_classes.hpp"
#include "UMG_MatchingMenu_Wait_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.ExecuteUbergraph_UMG_MatchingMenu_Wait
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Wait_C::ExecuteUbergraph_UMG_MatchingMenu_Wait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Wait_C", "ExecuteUbergraph_UMG_MatchingMenu_Wait");

	Params::UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Wait_C::BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Wait_C", "BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Wait_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Wait_C", "Tick");

	Params::UMG_MatchingMenu_Wait_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.RequestClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Wait_C::RequestClose(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Wait_C", "RequestClose");

	Params::UMG_MatchingMenu_Wait_C_RequestClose Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Get_MaxMembers_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_MatchingMenu_Wait_C::Get_MaxMembers_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Wait_C", "Get_MaxMembers_Text");

	Params::UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Get_CurrentMembers_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_MatchingMenu_Wait_C::Get_CurrentMembers_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Wait_C", "Get_CurrentMembers_Text");

	Params::UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.UpdateWaitTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                        InTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Wait_C::UpdateWaitTimer(const struct FTimespan& InTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Wait_C", "UpdateWaitTimer");

	Params::UMG_MatchingMenu_Wait_C_UpdateWaitTimer Parms{};

	Parms.InTime = std::move(InTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.UpdateAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                        InTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Wait_C::UpdateAnimation(const struct FTimespan& InTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Wait_C", "UpdateAnimation");

	Params::UMG_MatchingMenu_Wait_C_UpdateAnimation Parms{};

	Parms.InTime = std::move(InTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.AdvanceMatching
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CallApi                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Wait_C::AdvanceMatching(bool* CallApi)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Wait_C", "AdvanceMatching");

	Params::UMG_MatchingMenu_Wait_C_AdvanceMatching Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CallApi != nullptr)
		*CallApi = Parms.CallApi;
}


// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.ResetParam
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Wait_C::ResetParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Wait_C", "ResetParam");

	UObject::ProcessEvent(Func, nullptr);
}

}

