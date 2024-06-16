#pragma once

 

// Package: ImagineAbilityInfoView

#include "Basic.hpp"

#include "ImagineAbilityInfoView_classes.hpp"
#include "ImagineAbilityInfoView_parameters.hpp"


namespace SDK
{

// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.ExecuteUbergraph_ImagineAbilityInfoView
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineAbilityInfoView_C::ExecuteUbergraph_ImagineAbilityInfoView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityInfoView_C", "ExecuteUbergraph_ImagineAbilityInfoView");

	Params::ImagineAbilityInfoView_C_ExecuteUbergraph_ImagineAbilityInfoView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineAbilityInfoView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityInfoView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineAbilityInfoView_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityInfoView_C", "PreConstruct");

	Params::ImagineAbilityInfoView_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.CreateEfficacyInfoItemList
// (Public, BlueprintCallable, BlueprintEvent)

void UImagineAbilityInfoView_C::CreateEfficacyInfoItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityInfoView_C", "CreateEfficacyInfoItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.SetupAbilityInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAbilityEffectId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineAbilityInfoView_C::SetupAbilityInfo(int32 InAbilityEffectId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityInfoView_C", "SetupAbilityInfo");

	Params::ImagineAbilityInfoView_C_SetupAbilityInfo Parms{};

	Parms.InAbilityEffectId = InAbilityEffectId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.GetAbilityPartsValueText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutText                                                (Parm, OutParm)

void UImagineAbilityInfoView_C::GetAbilityPartsValueText(int32 InValue, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityInfoView_C", "GetAbilityPartsValueText");

	Params::ImagineAbilityInfoView_C_GetAbilityPartsValueText Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}


// Function ImagineAbilityInfoView.ImagineAbilityInfoView_C.ShowChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineAbilityInfoView_C::ShowChange(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityInfoView_C", "ShowChange");

	Params::ImagineAbilityInfoView_C_ShowChange Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}

}

