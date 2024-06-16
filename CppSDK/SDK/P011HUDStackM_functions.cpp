#pragma once

 

// Package: P011HUDStackM

#include "Basic.hpp"

#include "P011HUDStackM_classes.hpp"
#include "P011HUDStackM_parameters.hpp"


namespace SDK
{

// Function P011HUDStackM.P011HUDStackM_C.ExecuteUbergraph_P011HUDStackM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP011HUDStackM_C::ExecuteUbergraph_P011HUDStackM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "ExecuteUbergraph_P011HUDStackM");

	Params::P011HUDStackM_C_ExecuteUbergraph_P011HUDStackM Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P011HUDStackM.P011HUDStackM_C.UnbindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP011HUDStackM_C::UnbindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "UnbindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUDStackM.P011HUDStackM_C.OnUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP011HUDStackM_C::OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "OnUIVisibleSettingChange");

	Params::P011HUDStackM_C_OnUIVisibleSettingChange Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P011HUDStackM.P011HUDStackM_C.BindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP011HUDStackM_C::BindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "BindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUDStackM.P011HUDStackM_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUDStackM_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUDStackM.P011HUDStackM_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUDStackM_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUDStackM.P011HUDStackM_C.OnInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUDStackM_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUDStackM.P011HUDStackM_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUDStackM_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUDStackM.P011HUDStackM_C.OnSetEditMode
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEdit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP011HUDStackM_C::OnSetEditMode(bool InIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "OnSetEditMode");

	Params::P011HUDStackM_C_OnSetEditMode Parms{};

	Parms.InIsEdit = InIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P011HUDStackM.P011HUDStackM_C.PlayAnimForwardInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUDStackM_C::PlayAnimForwardInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "PlayAnimForwardInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUDStackM.P011HUDStackM_C.PlayAnimReverseInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUDStackM_C::PlayAnimReverseInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "PlayAnimReverseInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUDStackM.P011HUDStackM_C.On Set StackM Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStack                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InAccRate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP011HUDStackM_C::On_Set_StackM_Value(int32 InStack, float InAccRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUDStackM_C", "On Set StackM Value");

	Params::P011HUDStackM_C_On_Set_StackM_Value Parms{};

	Parms.InStack = InStack;
	Parms.InAccRate = InAccRate;

	UObject::ProcessEvent(Func, &Parms);
}

}

