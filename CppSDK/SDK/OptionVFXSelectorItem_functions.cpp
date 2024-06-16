#pragma once

 

// Package: OptionVFXSelectorItem

#include "Basic.hpp"

#include "OptionVFXSelectorItem_classes.hpp"
#include "OptionVFXSelectorItem_parameters.hpp"


namespace SDK
{

// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionVFXSelectorItem_C::BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXSelectorItem_C", "BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::OptionVFXSelectorItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.OnChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBBattleEffectVisibleCategory          Category                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBBattleEffectVisibleType              Type                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionVFXSelectorItem_C::OnChange(const ESBBattleEffectVisibleCategory Category, const ESBBattleEffectVisibleType Type, bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXSelectorItem_C", "OnChange");

	Params::OptionVFXSelectorItem_C_OnChange Parms{};

	Parms.Category = Category;
	Parms.Type = Type;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.OnCustomMode Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCustom                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionVFXSelectorItem_C::OnCustomMode_Change(const bool bCustom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXSelectorItem_C", "OnCustomMode Change");

	Params::OptionVFXSelectorItem_C_OnCustomMode_Change Parms{};

	Parms.bCustom = bCustom;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionVFXSelectorItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXSelectorItem_C", "PreConstruct");

	Params::OptionVFXSelectorItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UOptionVFXSelectorItem_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXSelectorItem_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionVFXSelectorItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXSelectorItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.ExecuteUbergraph_OptionVFXSelectorItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionVFXSelectorItem_C::ExecuteUbergraph_OptionVFXSelectorItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXSelectorItem_C", "ExecuteUbergraph_OptionVFXSelectorItem");

	Params::OptionVFXSelectorItem_C_ExecuteUbergraph_OptionVFXSelectorItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionVFXSelectorItem.OptionVFXSelectorItem_C.UpdateVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBBattleEffectVisibleCategory          Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBBattleEffectVisibleType              Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Vidsible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionVFXSelectorItem_C::UpdateVisible__DelegateSignature(ESBBattleEffectVisibleCategory Category, ESBBattleEffectVisibleType Type, bool Vidsible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionVFXSelectorItem_C", "UpdateVisible__DelegateSignature");

	Params::OptionVFXSelectorItem_C_UpdateVisible__DelegateSignature Parms{};

	Parms.Category = Category;
	Parms.Type = Type;
	Parms.Vidsible = Vidsible;

	UObject::ProcessEvent(Func, &Parms);
}

}

