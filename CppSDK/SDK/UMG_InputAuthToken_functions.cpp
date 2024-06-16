#pragma once

 

// Package: UMG_InputAuthToken

#include "Basic.hpp"

#include "UMG_InputAuthToken_classes.hpp"
#include "UMG_InputAuthToken_parameters.hpp"


namespace SDK
{

// Function UMG_InputAuthToken.UMG_InputAuthToken_C.BndEvt__Button_Submit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_InputAuthToken_C::BndEvt__Button_Submit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_InputAuthToken_C", "BndEvt__Button_Submit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_InputAuthToken.UMG_InputAuthToken_C.BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_InputAuthToken_C::BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_InputAuthToken_C", "BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UMG_InputAuthToken_C_BndEvt__TextBot_AuthToken_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_InputAuthToken.UMG_InputAuthToken_C.ExecuteUbergraph_UMG_InputAuthToken
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_InputAuthToken_C::ExecuteUbergraph_UMG_InputAuthToken(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_InputAuthToken_C", "ExecuteUbergraph_UMG_InputAuthToken");

	Params::UMG_InputAuthToken_C_ExecuteUbergraph_UMG_InputAuthToken Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_InputAuthToken.UMG_InputAuthToken_C.OnInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InAuthToken                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_InputAuthToken_C::OnInput__DelegateSignature(const class FString& InAuthToken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_InputAuthToken_C", "OnInput__DelegateSignature");

	Params::UMG_InputAuthToken_C_OnInput__DelegateSignature Parms{};

	Parms.InAuthToken = std::move(InAuthToken);

	UObject::ProcessEvent(Func, &Parms);
}

}

