#pragma once

 

// Package: Icon_TacticalAbilityLearning

#include "Basic.hpp"

#include "Icon_TacticalAbilityLearning_classes.hpp"
#include "Icon_TacticalAbilityLearning_parameters.hpp"


namespace SDK
{

// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UIcon_TacticalAbilityLearning_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.ExecuteUbergraph_Icon_TacticalAbilityLearning
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIcon_TacticalAbilityLearning_C::ExecuteUbergraph_Icon_TacticalAbilityLearning(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "ExecuteUbergraph_Icon_TacticalAbilityLearning");

	Params::Icon_TacticalAbilityLearning_C_ExecuteUbergraph_Icon_TacticalAbilityLearning Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.BndEvt__Icon_TacticalAbilityLearning_SBButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIcon_TacticalAbilityLearning_C::BndEvt__Icon_TacticalAbilityLearning_SBButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "BndEvt__Icon_TacticalAbilityLearning_SBButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIcon_TacticalAbilityLearning_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "PreConstruct");

	Params::Icon_TacticalAbilityLearning_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIcon_TacticalAbilityLearning_C::Setup(int32 SkillId, int32 SkillLV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "Setup");

	Params::Icon_TacticalAbilityLearning_C_Setup Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLV = SkillLV;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UIcon_TacticalAbilityLearning_C::SetIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "SetIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetIconBG
// (Private, BlueprintCallable, BlueprintEvent)

void UIcon_TacticalAbilityLearning_C::SetIconBG()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "SetIconBG");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetElement
// (Private, BlueprintCallable, BlueprintEvent)

void UIcon_TacticalAbilityLearning_C::SetElement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "SetElement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetNewMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsNew                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIcon_TacticalAbilityLearning_C::SetNewMark(bool IsNew)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "SetNewMark");

	Params::Icon_TacticalAbilityLearning_C_SetNewMark Parms{};

	Parms.IsNew = IsNew;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetAmountValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIcon_TacticalAbilityLearning_C::SetAmountValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "SetAmountValue");

	Params::Icon_TacticalAbilityLearning_C_SetAmountValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetAmountVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIcon_TacticalAbilityLearning_C::SetAmountVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "SetAmountVisible");

	Params::Icon_TacticalAbilityLearning_C_SetAmountVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetVisibleButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIcon_TacticalAbilityLearning_C::SetVisibleButton(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "SetVisibleButton");

	Params::Icon_TacticalAbilityLearning_C_SetVisibleButton Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.SetEnableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIcon_TacticalAbilityLearning_C::SetEnableButton(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "SetEnableButton");

	Params::Icon_TacticalAbilityLearning_C_SetEnableButton Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Icon_TacticalAbilityLearning.Icon_TacticalAbilityLearning_C.GetToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UIcon_TacticalAbilityLearning_C::GetToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Icon_TacticalAbilityLearning_C", "GetToolTipWidget");

	Params::Icon_TacticalAbilityLearning_C_GetToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

