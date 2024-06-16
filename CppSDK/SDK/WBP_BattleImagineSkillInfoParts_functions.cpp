#pragma once

 

// Package: WBP_BattleImagineSkillInfoParts

#include "Basic.hpp"

#include "WBP_BattleImagineSkillInfoParts_classes.hpp"
#include "WBP_BattleImagineSkillInfoParts_parameters.hpp"


namespace SDK
{

// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.ExecuteUbergraph_WBP_BattleImagineSkillInfoParts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleImagineSkillInfoParts_C::ExecuteUbergraph_WBP_BattleImagineSkillInfoParts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleImagineSkillInfoParts_C", "ExecuteUbergraph_WBP_BattleImagineSkillInfoParts");

	Params::WBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BattleImagineSkillInfoParts_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleImagineSkillInfoParts_C", "PreConstruct");

	Params::WBP_BattleImagineSkillInfoParts_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetPossessionInfoVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BattleImagineSkillInfoParts_C::SetPossessionInfoVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleImagineSkillInfoParts_C", "SetPossessionInfoVisibility");

	Params::WBP_BattleImagineSkillInfoParts_C_SetPossessionInfoVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattleImagineSkillInfoParts_C::SetTextColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleImagineSkillInfoParts_C", "SetTextColor");

	Params::WBP_BattleImagineSkillInfoParts_C_SetTextColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetMasterImagineData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterImagine                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_BattleImagineSkillInfoParts_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleImagineSkillInfoParts_C", "SetMasterImagineData");

	Params::WBP_BattleImagineSkillInfoParts_C_SetMasterImagineData Parms{};

	Parms.MasterImagine = std::move(MasterImagine);
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetSkillInfoIconActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BattleImagineSkillInfoParts_C::SetSkillInfoIconActive(bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleImagineSkillInfoParts_C", "SetSkillInfoIconActive");

	Params::WBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive Parms{};

	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetInfoMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BattleImagineSkillInfoParts_C::SetInfoMark(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattleImagineSkillInfoParts_C", "SetInfoMark");

	Params::WBP_BattleImagineSkillInfoParts_C_SetInfoMark Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}

