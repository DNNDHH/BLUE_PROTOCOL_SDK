#pragma once

 

// Package: BP_PlayerAimHUDComponent

#include "Basic.hpp"

#include "BP_PlayerAimHUDComponent_classes.hpp"
#include "BP_PlayerAimHUDComponent_parameters.hpp"


namespace SDK
{

// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ExecuteUbergraph_BP_PlayerAimHUDComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerAimHUDComponent_C::ExecuteUbergraph_BP_PlayerAimHUDComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "ExecuteUbergraph_BP_PlayerAimHUDComponent");

	Params::BP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerAimHUDComponent_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::BP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.OnChangeVisibleSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerAimHUDComponent_C::OnChangeVisibleSetting(ESBUIType InUIType, bool InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "OnChangeVisibleSetting");

	Params::BP_PlayerAimHUDComponent_C_OnChangeVisibleSetting Parms{};

	Parms.InUIType = InUIType;
	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerAimHUDComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "ReceiveEndPlay");

	Params::BP_PlayerAimHUDComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerAimHUDComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "ReceiveTick");

	Params::BP_PlayerAimHUDComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PlayerAimHUDComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.CreateUI
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerAimHUDComponent_C::CreateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "CreateUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.RemoveUI
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerAimHUDComponent_C::RemoveUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "RemoveUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.SetAimUIVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerAimHUDComponent_C::SetAimUIVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "SetAimUIVisibility");

	Params::BP_PlayerAimHUDComponent_C_SetAimUIVisibility Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UpdateAimMarkerVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerAimHUDComponent_C::UpdateAimMarkerVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "UpdateAimMarkerVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.GetClassType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            OutIsClassType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerAimHUDComponent_C::GetClassType(ESBClassType* OutIsClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "GetClassType");

	Params::BP_PlayerAimHUDComponent_C_GetClassType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsClassType != nullptr)
		*OutIsClassType = Parms.OutIsClassType;
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.IsControll
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsControll                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerAimHUDComponent_C::IsControll(bool* OutIsControll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "IsControll");

	Params::BP_PlayerAimHUDComponent_C_IsControll Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsControll != nullptr)
		*OutIsControll = Parms.OutIsControll;
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.Sheathe
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerAimHUDComponent_C::Sheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "Sheathe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UnSheathe
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerAimHUDComponent_C::UnSheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerAimHUDComponent_C", "UnSheathe");

	UObject::ProcessEvent(Func, nullptr);
}

}

