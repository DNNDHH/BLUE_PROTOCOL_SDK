#pragma once

 

// Package: CommonWeaponAbilityEfficacyDescPopup

#include "Basic.hpp"

#include "CommonWeaponAbilityEfficacyDescPopup_classes.hpp"
#include "CommonWeaponAbilityEfficacyDescPopup_parameters.hpp"


namespace SDK
{

// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommonWeaponAbilityEfficacyDescPopup_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityEfficacyDescPopup_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityEfficacyDescPopup_C::ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityEfficacyDescPopup_C", "ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup");

	Params::CommonWeaponAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.OnPressCancelKey
// (BlueprintCallable, BlueprintEvent)

void UCommonWeaponAbilityEfficacyDescPopup_C::OnPressCancelKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityEfficacyDescPopup_C", "OnPressCancelKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.BndEvt__CommonWeaponAbilityEfficacyDescPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommonWeaponAbilityEfficacyDescPopup_C::BndEvt__CommonWeaponAbilityEfficacyDescPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityEfficacyDescPopup_C", "BndEvt__CommonWeaponAbilityEfficacyDescPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommonWeaponAbilityEfficacyDescPopup_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityEfficacyDescPopup_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void UCommonWeaponAbilityEfficacyDescPopup_C::BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityEfficacyDescPopup_C", "BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommonWeaponAbilityEfficacyDescPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityEfficacyDescPopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityEfficacyDescPopup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityEfficacyDescPopup_C", "PreConstruct");

	Params::CommonWeaponAbilityEfficacyDescPopup_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponItemData                InWeaponItemData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonWeaponAbilityEfficacyDescPopup_C::Setup(const struct FSBWeaponItemData& InWeaponItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityEfficacyDescPopup_C", "Setup");

	Params::CommonWeaponAbilityEfficacyDescPopup_C_Setup Parms{};

	Parms.InWeaponItemData = std::move(InWeaponItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C.SetupByUniqueId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonWeaponAbilityEfficacyDescPopup_C::SetupByUniqueId(const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityEfficacyDescPopup_C", "SetupByUniqueId");

	Params::CommonWeaponAbilityEfficacyDescPopup_C_SetupByUniqueId Parms{};

	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}

}

