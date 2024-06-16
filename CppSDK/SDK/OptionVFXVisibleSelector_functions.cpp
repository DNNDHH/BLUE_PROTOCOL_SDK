#pragma once

 

// Package: OptionVFXVisibleSelector

#include "Basic.hpp"

#include "OptionVFXVisibleSelector_classes.hpp"
#include "OptionVFXVisibleSelector_parameters.hpp"


namespace SDK
{

// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.IsSkipTableRegisted
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBBattleEffectVisibleCategory          Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBBattleEffectVisibleType              Param_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRegisted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionVFXVisibleSelector_C::IsSkipTableRegisted(ESBBattleEffectVisibleCategory Category, ESBBattleEffectVisibleType Param_Type, bool* IsRegisted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXVisibleSelector_C", "IsSkipTableRegisted");

	Params::OptionVFXVisibleSelector_C_IsSkipTableRegisted Parms{};

	Parms.Category = Category;
	Parms.Param_Type = Param_Type;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRegisted != nullptr)
		*IsRegisted = Parms.IsRegisted;
}


// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionVFXVisibleSelector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXVisibleSelector_C", "PreConstruct");

	Params::OptionVFXVisibleSelector_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionVFXVisibleSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXVisibleSelector_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.GenerateVFXItems
// (BlueprintCallable, BlueprintEvent)

void UOptionVFXVisibleSelector_C::GenerateVFXItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXVisibleSelector_C", "GenerateVFXItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.UpdateVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBBattleEffectVisibleCategory          Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBBattleEffectVisibleType              Param_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Vidsible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionVFXVisibleSelector_C::UpdateVisible(ESBBattleEffectVisibleCategory Category, ESBBattleEffectVisibleType Param_Type, bool Vidsible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXVisibleSelector_C", "UpdateVisible");

	Params::OptionVFXVisibleSelector_C_UpdateVisible Parms{};

	Parms.Category = Category;
	Parms.Param_Type = Param_Type;
	Parms.Vidsible = Vidsible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionVFXVisibleSelector_C::BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXVisibleSelector_C", "BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::OptionVFXVisibleSelector_C_BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionVFXVisibleSelector_C::BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXVisibleSelector_C", "BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::OptionVFXVisibleSelector_C_BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.InitializeCheck
// (BlueprintCallable, BlueprintEvent)

void UOptionVFXVisibleSelector_C::InitializeCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXVisibleSelector_C", "InitializeCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionVFXVisibleSelector_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXVisibleSelector_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionVFXVisibleSelector.OptionVFXVisibleSelector_C.ExecuteUbergraph_OptionVFXVisibleSelector
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionVFXVisibleSelector_C::ExecuteUbergraph_OptionVFXVisibleSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXVisibleSelector_C", "ExecuteUbergraph_OptionVFXVisibleSelector");

	Params::OptionVFXVisibleSelector_C_ExecuteUbergraph_OptionVFXVisibleSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

