#pragma once

 

// Package: SkillInfoGaugeSpecial

#include "Basic.hpp"

#include "SkillInfoGaugeSpecial_classes.hpp"
#include "SkillInfoGaugeSpecial_parameters.hpp"


namespace SDK
{

// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.ExecuteUbergraph_SkillInfoGaugeSpecial
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeSpecial_C::ExecuteUbergraph_SkillInfoGaugeSpecial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "ExecuteUbergraph_SkillInfoGaugeSpecial");

	Params::SkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.OnIconDisableChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeSpecial_C::OnIconDisableChange(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "OnIconDisableChange");

	Params::SkillInfoGaugeSpecial_C_OnIconDisableChange Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.OnUpdateIconTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    InbActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeSpecial_C::OnUpdateIconTexture(bool InbActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "OnUpdateIconTexture");

	Params::SkillInfoGaugeSpecial_C_OnUpdateIconTexture Parms{};

	Parms.InbActive = InbActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoGaugeSpecial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Set Gauge Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InRecastTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeSpecial_C::Set_Gauge_Value(float InValue, float InRecastTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "Set Gauge Value");

	Params::SkillInfoGaugeSpecial_C_Set_Gauge_Value Parms{};

	Parms.InValue = InValue;
	Parms.InRecastTime = InRecastTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillInfoGaugeSpecial_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "SetText");

	Params::SkillInfoGaugeSpecial_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeSpecial_C::PlayAnimUse(bool bInit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "PlayAnimUse");

	Params::SkillInfoGaugeSpecial_C_PlayAnimUse Parms{};

	Parms.bInit = bInit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimChargeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoGaugeSpecial_C::PlayAnimChargeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "PlayAnimChargeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeSpecial_C::SetEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "SetEnabled");

	Params::SkillInfoGaugeSpecial_C_SetEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimChargeStart
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoGaugeSpecial_C::PlayAnimChargeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "PlayAnimChargeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Update Icon Texture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeSpecial_C::Update_Icon_Texture(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "Update Icon Texture");

	Params::SkillInfoGaugeSpecial_C_Update_Icon_Texture Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetKeyGuideVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeSpecial_C::SetKeyGuideVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "SetKeyGuideVisible");

	Params::SkillInfoGaugeSpecial_C_SetKeyGuideVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetIsEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoGaugeSpecial_C::SetIsEmpty(bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "SetIsEmpty");

	Params::SkillInfoGaugeSpecial_C_SetIsEmpty Parms{};

	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetEmptyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeSpecial_C::SetEmptyColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeSpecial_C", "SetEmptyColor");

	Params::SkillInfoGaugeSpecial_C_SetEmptyColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}

}

