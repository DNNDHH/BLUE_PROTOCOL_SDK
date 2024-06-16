#pragma once

 

// Package: CmnSearch1

#include "Basic.hpp"

#include "CmnSearch1_classes.hpp"
#include "CmnSearch1_parameters.hpp"


namespace SDK
{

// Function CmnSearch1.CmnSearch1_C.OnTextChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewText                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UCmnSearch1_C::OnTextChange__DelegateSignature(const class FText& NewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSearch1_C", "OnTextChange__DelegateSignature");

	Params::CmnSearch1_C_OnTextChange__DelegateSignature Parms{};

	Parms.NewText = std::move(NewText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnSearch1.CmnSearch1_C.ExecuteUbergraph_CmnSearch1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnSearch1_C::ExecuteUbergraph_CmnSearch1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSearch1_C", "ExecuteUbergraph_CmnSearch1");

	Params::CmnSearch1_C_ExecuteUbergraph_CmnSearch1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnSearch1.CmnSearch1_C.SetHintWithText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UCmnSearch1_C::SetHintWithText(const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSearch1_C", "SetHintWithText");

	Params::CmnSearch1_C_SetHintWithText Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnSearch1_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSearch1_C", "BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnSearch1_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSearch1_C", "BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnSearch1_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSearch1_C", "BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnSearch1.CmnSearch1_C.BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCmnSearch1_C::BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSearch1_C", "BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::CmnSearch1_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnSearch1.CmnSearch1_C.ClearText
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnSearch1_C::ClearText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSearch1_C", "ClearText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnSearch1.CmnSearch1_C.GetSearchText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           SearchText                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UCmnSearch1_C::GetSearchText(class FString* SearchText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSearch1_C", "GetSearchText");

	Params::CmnSearch1_C_GetSearchText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SearchText != nullptr)
		*SearchText = std::move(Parms.SearchText);
}

}

