#pragma once

 

// Package: P012HUDShield

#include "Basic.hpp"

#include "P012HUDShield_classes.hpp"
#include "P012HUDShield_parameters.hpp"


namespace SDK
{

// Function P012HUDShield.P012HUDShield_C.ExecuteUbergraph_P012HUDShield
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP012HUDShield_C::ExecuteUbergraph_P012HUDShield(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "ExecuteUbergraph_P012HUDShield");

	Params::P012HUDShield_C_ExecuteUbergraph_P012HUDShield Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDShield.P012HUDShield_C.On_EndIntervalDependent
// (BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::On_EndIntervalDependent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "On_EndIntervalDependent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.UnBindOnEndIntervalDependent
// (BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::UnBindOnEndIntervalDependent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "UnBindOnEndIntervalDependent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.BindOnEndIntervalDependent
// (BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::BindOnEndIntervalDependent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "BindOnEndIntervalDependent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.On_StartIntervalDependent
// (BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::On_StartIntervalDependent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "On_StartIntervalDependent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.UnBindOnStartIntervalDependent
// (BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::UnBindOnStartIntervalDependent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "UnBindOnStartIntervalDependent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.BindOnStartIntervalDependent
// (BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::BindOnStartIntervalDependent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "BindOnStartIntervalDependent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.UnbindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::UnbindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "UnbindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.BindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::BindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "BindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.OnChangeUIVisibleSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP012HUDShield_C::OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "OnChangeUIVisibleSetting");

	Params::P012HUDShield_C_OnChangeUIVisibleSetting Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDShield.P012HUDShield_C.PlayAnimBroken
// (Private, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::PlayAnimBroken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "PlayAnimBroken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.StopAnimBroken
// (Private, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::StopAnimBroken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "StopAnimBroken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.UpdateShieldBreak
// (Private, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::UpdateShieldBreak()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "UpdateShieldBreak");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.UpdateShieldDurability
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::UpdateShieldDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "UpdateShieldDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.SetFrame
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBroken                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP012HUDShield_C::SetFrame(bool IsBroken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "SetFrame");

	Params::P012HUDShield_C_SetFrame Parms{};

	Parms.IsBroken = IsBroken;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDShield.P012HUDShield_C.SetIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP012HUDShield_C::SetIcon(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "SetIcon");

	Params::P012HUDShield_C_SetIcon Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDShield.P012HUDShield_C.SetGauge
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP012HUDShield_C::SetGauge(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "SetGauge");

	Params::P012HUDShield_C_SetGauge Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDShield.P012HUDShield_C.PlayAnimForwardInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::PlayAnimForwardInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "PlayAnimForwardInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.PlayAnimReverseInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::PlayAnimReverseInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "PlayAnimReverseInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.OnInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.OnTick
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::OnTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "OnTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.OnSetEditMode
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEdit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP012HUDShield_C::OnSetEditMode(bool InIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "OnSetEditMode");

	Params::P012HUDShield_C_OnSetEditMode Parms{};

	Parms.InIsEdit = InIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDShield.P012HUDShield_C.UpdateDependent
// (Public, BlueprintCallable, BlueprintEvent)

void UP012HUDShield_C::UpdateDependent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "UpdateDependent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDShield.P012HUDShield_C.SetCountVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoHitSelforCollapse                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP012HUDShield_C::SetCountVisibility(bool NoHitSelforCollapse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "SetCountVisibility");

	Params::P012HUDShield_C_SetCountVisibility Parms{};

	Parms.NoHitSelforCollapse = NoHitSelforCollapse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDShield.P012HUDShield_C.SetCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP012HUDShield_C::SetCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "SetCount");

	Params::P012HUDShield_C_SetCount Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDShield.P012HUDShield_C.SetGaugeVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TrueIsVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP012HUDShield_C::SetGaugeVisible(bool TrueIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "SetGaugeVisible");

	Params::P012HUDShield_C_SetGaugeVisible Parms{};

	Parms.TrueIsVisible = TrueIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDShield.P012HUDShield_C.IsEquipDependent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TrueIsEquip                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP012HUDShield_C::IsEquipDependent(bool* TrueIsEquip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDShield_C", "IsEquipDependent");

	Params::P012HUDShield_C_IsEquipDependent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TrueIsEquip != nullptr)
		*TrueIsEquip = Parms.TrueIsEquip;
}

}

