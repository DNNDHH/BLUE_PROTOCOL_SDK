#pragma once

 

// Package: SkillInfoGaugeMainDefHeal

#include "Basic.hpp"

#include "SkillInfoGaugeMainDefHeal_classes.hpp"
#include "SkillInfoGaugeMainDefHeal_parameters.hpp"


namespace SDK
{

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.ExecuteUbergraph_SkillInfoGaugeMainDefHeal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeMainDefHeal_C::ExecuteUbergraph_SkillInfoGaugeMainDefHeal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "ExecuteUbergraph_SkillInfoGaugeMainDefHeal");

	Params::SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.OnIconDisableChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeMainDefHeal_C::OnIconDisableChange(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "OnIconDisableChange");

	Params::SkillInfoGaugeMainDefHeal_C_OnIconDisableChange Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoGaugeMainDefHeal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeMainDefHeal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "PreConstruct");

	Params::SkillInfoGaugeMainDefHeal_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetGaugeValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InRecastTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeMainDefHeal_C::SetGaugeValue(float InValue, float InRecastTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "SetGaugeValue");

	Params::SkillInfoGaugeMainDefHeal_C_SetGaugeValue Parms{};

	Parms.InValue = InValue;
	Parms.InRecastTime = InRecastTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillInfoGaugeMainDefHeal_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "SetText");

	Params::SkillInfoGaugeMainDefHeal_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeMainDefHeal_C::PlayAnimUse(bool bInit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "PlayAnimUse");

	Params::SkillInfoGaugeMainDefHeal_C_PlayAnimUse Parms{};

	Parms.bInit = bInit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimChargeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoGaugeMainDefHeal_C::PlayAnimChargeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "PlayAnimChargeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeMainDefHeal_C::SetEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "SetEnabled");

	Params::SkillInfoGaugeMainDefHeal_C_SetEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimChargeStart
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoGaugeMainDefHeal_C::PlayAnimChargeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "PlayAnimChargeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetKeyGuideVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeMainDefHeal_C::SetKeyGuideVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "SetKeyGuideVisible");

	Params::SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetIsEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeMainDefHeal_C::SetIsEmpty(bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "SetIsEmpty");

	Params::SkillInfoGaugeMainDefHeal_C_SetIsEmpty Parms{};

	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetEmptyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeMainDefHeal_C::SetEmptyColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeMainDefHeal_C", "SetEmptyColor");

	Params::SkillInfoGaugeMainDefHeal_C_SetEmptyColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}

}

