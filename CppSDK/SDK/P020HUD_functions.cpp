#pragma once

 

// Package: P020HUD

#include "Basic.hpp"

#include "P020HUD_classes.hpp"
#include "P020HUD_parameters.hpp"


namespace SDK
{

// Function P020HUD.P020HUD_C.GetAttackUpRank
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP020HUD_C::GetAttackUpRank(int32* Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020HUD_C", "GetAttackUpRank");

	Params::P020HUD_C_GetAttackUpRank Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rank != nullptr)
		*Rank = Parms.Rank;
}


// Function P020HUD.P020HUD_C.PlayAnimForwardInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP020HUD_C::PlayAnimForwardInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020HUD_C", "PlayAnimForwardInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P020HUD.P020HUD_C.PlayAnimReverseInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP020HUD_C::PlayAnimReverseInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020HUD_C", "PlayAnimReverseInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P020HUD.P020HUD_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP020HUD_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020HUD_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P020HUD.P020HUD_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP020HUD_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020HUD_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P020HUD.P020HUD_C.OnInitialize
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UP020HUD_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020HUD_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P020HUD.P020HUD_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP020HUD_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020HUD_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P020HUD.P020HUD_C.OnSetEditMode
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEdit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP020HUD_C::OnSetEditMode(bool InIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020HUD_C", "OnSetEditMode");

	Params::P020HUD_C_OnSetEditMode Parms{};

	Parms.InIsEdit = InIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P020HUD.P020HUD_C.OnChangeVisibleSetting
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisibleSetting                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP020HUD_C::OnChangeVisibleSetting(bool InIsVisibleSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020HUD_C", "OnChangeVisibleSetting");

	Params::P020HUD_C_OnChangeVisibleSetting Parms{};

	Parms.InIsVisibleSetting = InIsVisibleSetting;

	UObject::ProcessEvent(Func, &Parms);
}

}

