#pragma once

 

// Package: UMG_AdminGotoBookmarkRegistrationWindowItem

#include "Basic.hpp"

#include "UMG_AdminGotoBookmarkRegistrationWindowItem_classes.hpp"
#include "UMG_AdminGotoBookmarkRegistrationWindowItem_parameters.hpp"


namespace SDK
{

// Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.OnTextChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::OnTextChanged__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindowItem_C", "OnTextChanged__DelegateSignature");

	Params::UMG_AdminGotoBookmarkRegistrationWindowItem_C_OnTextChanged__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindowItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindowItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindowItem_C", "ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindowItem");

	Params::UMG_AdminGotoBookmarkRegistrationWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindowItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindowItem_C", "BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");

	Params::UMG_AdminGotoBookmarkRegistrationWindowItem_C_BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindowItem_C", "PreConstruct");

	Params::UMG_AdminGotoBookmarkRegistrationWindowItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.GetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::GetText(class FString* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindowItem_C", "GetText");

	Params::UMG_AdminGotoBookmarkRegistrationWindowItem_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkRegistrationWindowItem_C::SetText(const class FString& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindowItem_C", "SetText");

	Params::UMG_AdminGotoBookmarkRegistrationWindowItem_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

