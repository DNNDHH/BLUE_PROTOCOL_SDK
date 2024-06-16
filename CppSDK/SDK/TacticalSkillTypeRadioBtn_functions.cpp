#pragma once

 

// Package: TacticalSkillTypeRadioBtn

#include "Basic.hpp"

#include "TacticalSkillTypeRadioBtn_classes.hpp"
#include "TacticalSkillTypeRadioBtn_parameters.hpp"


namespace SDK
{

// Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.OnRadioBtnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillTypeId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillTypeRadioBtn_C::OnRadioBtnSelected__DelegateSignature(int32 InSkillTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillTypeRadioBtn_C", "OnRadioBtnSelected__DelegateSignature");

	Params::TacticalSkillTypeRadioBtn_C_OnRadioBtnSelected__DelegateSignature Parms{};

	Parms.InSkillTypeId = InSkillTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.ExecuteUbergraph_TacticalSkillTypeRadioBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillTypeRadioBtn_C::ExecuteUbergraph_TacticalSkillTypeRadioBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillTypeRadioBtn_C", "ExecuteUbergraph_TacticalSkillTypeRadioBtn");

	Params::TacticalSkillTypeRadioBtn_C_ExecuteUbergraph_TacticalSkillTypeRadioBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.BndEvt__TacticalSkillTypeRadioButton_RadioBtn_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTacticalSkillTypeRadioBtn_C::BndEvt__TacticalSkillTypeRadioButton_RadioBtn_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillTypeRadioBtn_C", "BndEvt__TacticalSkillTypeRadioButton_RadioBtn_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::TacticalSkillTypeRadioBtn_C_BndEvt__TacticalSkillTypeRadioButton_RadioBtn_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTacticalSkillTypeRadioBtn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillTypeRadioBtn_C", "PreConstruct");

	Params::TacticalSkillTypeRadioBtn_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetSkillType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillTypeId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillTypeRadioBtn_C::SetSkillType(int32 InSkillTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillTypeRadioBtn_C", "SetSkillType");

	Params::TacticalSkillTypeRadioBtn_C_SetSkillType Parms{};

	Parms.InSkillTypeId = InSkillTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetSelectMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelectMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTacticalSkillTypeRadioBtn_C::SetSelectMode(bool InIsSelectMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillTypeRadioBtn_C", "SetSelectMode");

	Params::TacticalSkillTypeRadioBtn_C_SetSelectMode Parms{};

	Parms.InIsSelectMode = InIsSelectMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetEquipped
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEquipped                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTacticalSkillTypeRadioBtn_C::SetEquipped(bool InIsEquipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillTypeRadioBtn_C", "SetEquipped");

	Params::TacticalSkillTypeRadioBtn_C_SetEquipped Parms{};

	Parms.InIsEquipped = InIsEquipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetRadioBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTacticalSkillTypeRadioBtn_C::SetRadioBtnSelected(bool InIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillTypeRadioBtn_C", "SetRadioBtnSelected");

	Params::TacticalSkillTypeRadioBtn_C_SetRadioBtnSelected Parms{};

	Parms.InIsSelected = InIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.IsRedioBtnSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsSelected                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTacticalSkillTypeRadioBtn_C::IsRedioBtnSelected(bool* OutIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillTypeRadioBtn_C", "IsRedioBtnSelected");

	Params::TacticalSkillTypeRadioBtn_C_IsRedioBtnSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsSelected != nullptr)
		*OutIsSelected = Parms.OutIsSelected;
}


// Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetRadioBtnVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTacticalSkillTypeRadioBtn_C::SetRadioBtnVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillTypeRadioBtn_C", "SetRadioBtnVisibility");

	Params::TacticalSkillTypeRadioBtn_C_SetRadioBtnVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.GetSkillTypeId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSkillTypeId                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillTypeRadioBtn_C::GetSkillTypeId(int32* OutSkillTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillTypeRadioBtn_C", "GetSkillTypeId");

	Params::TacticalSkillTypeRadioBtn_C_GetSkillTypeId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSkillTypeId != nullptr)
		*OutSkillTypeId = Parms.OutSkillTypeId;
}

}

