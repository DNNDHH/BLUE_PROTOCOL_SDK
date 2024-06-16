#pragma once

 

// Package: InteractNotice

#include "Basic.hpp"

#include "InteractNotice_classes.hpp"
#include "InteractNotice_parameters.hpp"


namespace SDK
{

// Function InteractNotice.InteractNotice_C.ExecuteUbergraph_InteractNotice
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractNotice_C::ExecuteUbergraph_InteractNotice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "ExecuteUbergraph_InteractNotice");

	Params::InteractNotice_C_ExecuteUbergraph_InteractNotice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractNotice.InteractNotice_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_3
// (BlueprintEvent)

void UInteractNotice_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractNotice.InteractNotice_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UInteractNotice_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractNotice.InteractNotice_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UInteractNotice_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractNotice.InteractNotice_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UInteractNotice_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractNotice.InteractNotice_C.OnPadSkinChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPadKeySkinType                       SkinType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractNotice_C::OnPadSkinChange(const ESBPadKeySkinType SkinType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "OnPadSkinChange");

	Params::InteractNotice_C_OnPadSkinChange Parms{};

	Parms.SkinType = SkinType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractNotice.InteractNotice_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInteractNotice_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractNotice.InteractNotice_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInteractNotice_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::InteractNotice_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractNotice.InteractNotice_C.UpdateInteractionNotice
// (BlueprintCallable, BlueprintEvent)

void UInteractNotice_C::UpdateInteractionNotice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "UpdateInteractionNotice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractNotice.InteractNotice_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInteractNotice_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InteractNotice.InteractNotice_C.SetTextId
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractNotice_C::SetTextId(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "SetTextId");

	Params::InteractNotice_C_SetTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractNotice.InteractNotice_C.SetJointGestureText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBJointGestureState                    InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractNotice_C::SetJointGestureText(ESBJointGestureState InState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "SetJointGestureText");

	Params::InteractNotice_C_SetJointGestureText Parms{};

	Parms.InState = InState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractNotice.InteractNotice_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAnimIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInteractNotice_C::PlayAnim(bool IsAnimIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "PlayAnim");

	Params::InteractNotice_C_PlayAnim Parms{};

	Parms.IsAnimIn = IsAnimIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InteractNotice.InteractNotice_C.GetEmoteText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBJointGestureState                    State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInteractNotice_C::GetEmoteText(ESBJointGestureState State, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteractNotice_C", "GetEmoteText");

	Params::InteractNotice_C_GetEmoteText Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

}

