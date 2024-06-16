#pragma once

 

// Package: TokenCategoryButton

#include "Basic.hpp"

#include "TokenCategoryButton_classes.hpp"
#include "TokenCategoryButton_parameters.hpp"


namespace SDK
{

// Function TokenCategoryButton.TokenCategoryButton_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ListIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenCategoryButton_C::OnClick__DelegateSignature(int32 Param_ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryButton_C", "OnClick__DelegateSignature");

	Params::TokenCategoryButton_C_OnClick__DelegateSignature Parms{};

	Parms.Param_ListIndex = Param_ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenCategoryButton.TokenCategoryButton_C.ExecuteUbergraph_TokenCategoryButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenCategoryButton_C::ExecuteUbergraph_TokenCategoryButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryButton_C", "ExecuteUbergraph_TokenCategoryButton");

	Params::TokenCategoryButton_C_ExecuteUbergraph_TokenCategoryButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenCategoryButton.TokenCategoryButton_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTokenCategoryButton_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryButton_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenCategoryButton.TokenCategoryButton_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UTokenCategoryButton_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryButton_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenCategoryButton.TokenCategoryButton_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTokenCategoryButton_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryButton_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenCategoryButton.TokenCategoryButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTokenCategoryButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenCategoryButton.TokenCategoryButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTokenCategoryButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryButton_C", "PreConstruct");

	Params::TokenCategoryButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenCategoryButton.TokenCategoryButton_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Param_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UTokenCategoryButton_C::Setup(int32 Param_Index, const class FText& Param_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryButton_C", "Setup");

	Params::TokenCategoryButton_C_Setup Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Param_Text = std::move(Param_Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenCategoryButton.TokenCategoryButton_C.SetButtonSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTokenCategoryButton_C::SetButtonSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryButton_C", "SetButtonSelected");

	Params::TokenCategoryButton_C_SetButtonSelected Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}

}

