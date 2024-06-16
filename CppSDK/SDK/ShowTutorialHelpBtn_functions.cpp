#pragma once

 

// Package: ShowTutorialHelpBtn

#include "Basic.hpp"

#include "ShowTutorialHelpBtn_classes.hpp"
#include "ShowTutorialHelpBtn_parameters.hpp"


namespace SDK
{

// Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.ExecuteUbergraph_ShowTutorialHelpBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowTutorialHelpBtn_C::ExecuteUbergraph_ShowTutorialHelpBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowTutorialHelpBtn_C", "ExecuteUbergraph_ShowTutorialHelpBtn");

	Params::ShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowTutorialHelpBtn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowTutorialHelpBtn_C", "PreConstruct");

	Params::ShowTutorialHelpBtn_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.BndEvt__Btn_ShowHint_L_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShowTutorialHelpBtn_C::BndEvt__Btn_ShowHint_L_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowTutorialHelpBtn_C", "BndEvt__Btn_ShowHint_L_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.OnClose_Event_0
// (BlueprintCallable, BlueprintEvent)

void UShowTutorialHelpBtn_C::OnClose_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowTutorialHelpBtn_C", "OnClose_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShowTutorialHelpBtn_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowTutorialHelpBtn_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShowTutorialHelpBtn_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowTutorialHelpBtn_C", "BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.SetClassTypeForTutorialHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsUsingClassTypeForTutorialHelp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowTutorialHelpBtn_C::SetClassTypeForTutorialHelp(bool bInIsUsingClassTypeForTutorialHelp, ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowTutorialHelpBtn_C", "SetClassTypeForTutorialHelp");

	Params::ShowTutorialHelpBtn_C_SetClassTypeForTutorialHelp Parms{};

	Parms.bInIsUsingClassTypeForTutorialHelp = bInIsUsingClassTypeForTutorialHelp;
	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}

}

