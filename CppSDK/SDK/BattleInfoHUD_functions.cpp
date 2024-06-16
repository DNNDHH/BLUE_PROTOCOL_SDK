#pragma once

 

// Package: BattleInfoHUD

#include "Basic.hpp"

#include "BattleInfoHUD_classes.hpp"
#include "BattleInfoHUD_parameters.hpp"


namespace SDK
{

// Function BattleInfoHUD.BattleInfoHUD_C.ExecuteUbergraph_BattleInfoHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleInfoHUD_C::ExecuteUbergraph_BattleInfoHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "ExecuteUbergraph_BattleInfoHUD");

	Params::BattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleInfoHUD.BattleInfoHUD_C.OnUpdateRespawnGauge
// (BlueprintCallable, BlueprintEvent)

void UBattleInfoHUD_C::OnUpdateRespawnGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "OnUpdateRespawnGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleInfoHUD.BattleInfoHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleInfoHUD_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleInfoHUD.BattleInfoHUD_C.BattleAreaDisableMessage
// (BlueprintCallable, BlueprintEvent)

void UBattleInfoHUD_C::BattleAreaDisableMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "BattleAreaDisableMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleInfoHUD.BattleInfoHUD_C.OnShowRespawnBattleArea_Event
// (BlueprintCallable, BlueprintEvent)

void UBattleInfoHUD_C::OnShowRespawnBattleArea_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "OnShowRespawnBattleArea_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleInfoHUD.BattleInfoHUD_C.UpdateInteractionNotice
// (BlueprintCallable, BlueprintEvent)

void UBattleInfoHUD_C::UpdateInteractionNotice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "UpdateInteractionNotice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleInfoHUD.BattleInfoHUD_C.OnDisableRespawn_Event
// (BlueprintCallable, BlueprintEvent)

void UBattleInfoHUD_C::OnDisableRespawn_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "OnDisableRespawn_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleInfoHUD.BattleInfoHUD_C.OnShowRespawn_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InRespawnTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleInfoHUD_C::OnShowRespawn_Event(float InRespawnTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "OnShowRespawn_Event");

	Params::BattleInfoHUD_C_OnShowRespawn_Event Parms{};

	Parms.InRespawnTime = InRespawnTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleInfoHUD.BattleInfoHUD_C.OnShowCombo_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Combo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleInfoHUD_C::OnShowCombo_Event(int32 Combo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "OnShowCombo_Event");

	Params::BattleInfoHUD_C_OnShowCombo_Event Parms{};

	Parms.Combo = Combo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleInfoHUD.BattleInfoHUD_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleInfoHUD_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::BattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleInfoHUD.BattleInfoHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleInfoHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleInfoHUD.BattleInfoHUD_C.InitWeaponEvents
// (BlueprintCallable, BlueprintEvent)

void UBattleInfoHUD_C::InitWeaponEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "InitWeaponEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleInfoHUD.BattleInfoHUD_C.UnbindTutorialHelpJingleDelegate
// (BlueprintCallable, BlueprintEvent)

void UBattleInfoHUD_C::UnbindTutorialHelpJingleDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "UnbindTutorialHelpJingleDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleInfoHUD.BattleInfoHUD_C.OnTutorialHelp_Close
// (BlueprintCallable, BlueprintEvent)

void UBattleInfoHUD_C::OnTutorialHelp_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "OnTutorialHelp_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleInfoHUD.BattleInfoHUD_C.JingleTutorialHelp_Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_TutorialHelpId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleInfoHUD_C::JingleTutorialHelp_Events(class FName Param_TutorialHelpId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "JingleTutorialHelp_Events");

	Params::BattleInfoHUD_C_JingleTutorialHelp_Events Parms{};

	Parms.Param_TutorialHelpId = Param_TutorialHelpId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleInfoHUD.BattleInfoHUD_C.InitTutorialHelp_Event
// (BlueprintCallable, BlueprintEvent)

void UBattleInfoHUD_C::InitTutorialHelp_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "InitTutorialHelp_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleInfoHUD.BattleInfoHUD_C.Get_PartyEngram
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBattleInfoHUD_C::Get_PartyEngram()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "Get_PartyEngram");

	Params::BattleInfoHUD_C_Get_PartyEngram Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattleInfoHUD.BattleInfoHUD_C.Get_NextValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBattleInfoHUD_C::Get_NextValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "Get_NextValue");

	Params::BattleInfoHUD_C_Get_NextValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattleInfoHUD.BattleInfoHUD_C.Get_PartyLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBattleInfoHUD_C::Get_PartyLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "Get_PartyLevel");

	Params::BattleInfoHUD_C_Get_PartyLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattleInfoHUD.BattleInfoHUD_C.Get_Combination_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBattleInfoHUD_C::Get_Combination_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "Get_Combination_Visibility_0");

	Params::BattleInfoHUD_C_Get_Combination_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattleInfoHUD.BattleInfoHUD_C.Get_CombinationNumber_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBattleInfoHUD_C::Get_CombinationNumber_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "Get_CombinationNumber_Text_0");

	Params::BattleInfoHUD_C_Get_CombinationNumber_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattleInfoHUD.BattleInfoHUD_C.Get_CombinationTimer_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBattleInfoHUD_C::Get_CombinationTimer_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "Get_CombinationTimer_Text_0");

	Params::BattleInfoHUD_C_Get_CombinationTimer_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattleInfoHUD.BattleInfoHUD_C.IsAllHUDCreated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsCreated                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleInfoHUD_C::IsAllHUDCreated(bool* OutIsCreated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "IsAllHUDCreated");

	Params::BattleInfoHUD_C_IsAllHUDCreated Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsCreated != nullptr)
		*OutIsCreated = Parms.OutIsCreated;
}


// Function BattleInfoHUD.BattleInfoHUD_C.Get_Countdown_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UBattleInfoHUD_C::Get_Countdown_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "Get_Countdown_Visibility_0");

	Params::BattleInfoHUD_C_Get_Countdown_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattleInfoHUD.BattleInfoHUD_C.GetHitIndicator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHitIndicator_C*                  Param_HitIndicator                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleInfoHUD_C::GetHitIndicator(class UHitIndicator_C** Param_HitIndicator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "GetHitIndicator");

	Params::BattleInfoHUD_C_GetHitIndicator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_HitIndicator != nullptr)
		*Param_HitIndicator = Parms.Param_HitIndicator;
}


// Function BattleInfoHUD.BattleInfoHUD_C.GetRespawnHUD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URespawnHUD_C*                    Param_RespawnHUD                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleInfoHUD_C::GetRespawnHUD(class URespawnHUD_C** Param_RespawnHUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleInfoHUD_C", "GetRespawnHUD");

	Params::BattleInfoHUD_C_GetRespawnHUD Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_RespawnHUD != nullptr)
		*Param_RespawnHUD = Parms.Param_RespawnHUD;
}

}

