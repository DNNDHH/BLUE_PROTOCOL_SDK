#pragma once

 

// Package: TargetCursor

#include "Basic.hpp"

#include "TargetCursor_classes.hpp"
#include "TargetCursor_parameters.hpp"


namespace SDK
{

// Function TargetCursor.TargetCursor_C.ExecuteUbergraph_TargetCursor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetCursor_C::ExecuteUbergraph_TargetCursor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetCursor_C", "ExecuteUbergraph_TargetCursor");

	Params::TargetCursor_C_ExecuteUbergraph_TargetCursor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TargetCursor.TargetCursor_C.OnPlayLockOnSe
// (Event, Public, BlueprintEvent)

void UTargetCursor_C::OnPlayLockOnSe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetCursor_C", "OnPlayLockOnSe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TargetCursor.TargetCursor_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTargetCursor_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetCursor_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TargetCursor.TargetCursor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTargetCursor_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetCursor_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TargetCursor.TargetCursor_C.VisibleSettingChangeDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTargetCursor_C::VisibleSettingChangeDelegate(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetCursor_C", "VisibleSettingChangeDelegate");

	Params::TargetCursor_C_VisibleSettingChangeDelegate Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TargetCursor.TargetCursor_C.UpdatePosition
// (Public, BlueprintCallable, BlueprintEvent)

void UTargetCursor_C::UpdatePosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetCursor_C", "UpdatePosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TargetCursor.TargetCursor_C.isTargetNear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsNear                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTargetCursor_C::IsTargetNear(bool* OutIsNear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetCursor_C", "isTargetNear");

	Params::TargetCursor_C_IsTargetNear Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsNear != nullptr)
		*OutIsNear = Parms.OutIsNear;
}


// Function TargetCursor.TargetCursor_C.ColorChange
// (Public, BlueprintCallable, BlueprintEvent)

void UTargetCursor_C::ColorChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetCursor_C", "ColorChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TargetCursor.TargetCursor_C.GetNearRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   OutIsRange                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetCursor_C::GetNearRange(float* OutIsRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetCursor_C", "GetNearRange");

	Params::TargetCursor_C_GetNearRange Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsRange != nullptr)
		*OutIsRange = Parms.OutIsRange;
}


// Function TargetCursor.TargetCursor_C.isTargetInvincible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsInvincible                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTargetCursor_C::IsTargetInvincible(bool* OutIsInvincible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetCursor_C", "isTargetInvincible");

	Params::TargetCursor_C_IsTargetInvincible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsInvincible != nullptr)
		*OutIsInvincible = Parms.OutIsInvincible;
}

}

