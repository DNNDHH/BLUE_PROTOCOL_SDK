#pragma once

 

// Package: UI_Reticle_ChargeLevel

#include "Basic.hpp"

#include "UI_Reticle_ChargeLevel_classes.hpp"
#include "UI_Reticle_ChargeLevel_parameters.hpp"


namespace SDK
{

// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.ExecuteUbergraph_UI_Reticle_ChargeLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Reticle_ChargeLevel_C::ExecuteUbergraph_UI_Reticle_ChargeLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Reticle_ChargeLevel_C", "ExecuteUbergraph_UI_Reticle_ChargeLevel");

	Params::UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Reticle_ChargeLevel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Reticle_ChargeLevel_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Reticle_ChargeLevel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Reticle_ChargeLevel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Reticle_ChargeLevel_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Reticle_ChargeLevel_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.UnbindUIVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UUI_Reticle_ChargeLevel_C::UnbindUIVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Reticle_ChargeLevel_C", "UnbindUIVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.BindUIVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UUI_Reticle_ChargeLevel_C::BindUIVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Reticle_ChargeLevel_C", "BindUIVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.SetRootVisible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Reticle_ChargeLevel_C::SetRootVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Reticle_ChargeLevel_C", "SetRootVisible");

	Params::UI_Reticle_ChargeLevel_C_SetRootVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.SetShotChargeGrpVisible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Reticle_ChargeLevel_C::SetShotChargeGrpVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Reticle_ChargeLevel_C", "SetShotChargeGrpVisible");

	Params::UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

