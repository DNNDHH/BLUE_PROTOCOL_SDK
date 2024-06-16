#pragma once

 

// Package: WBP_SkillIconSwitcher

#include "Basic.hpp"

#include "WBP_SkillIconSwitcher_classes.hpp"
#include "WBP_SkillIconSwitcher_parameters.hpp"


namespace SDK
{

// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_SkillIconSwitcher_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "OnHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_SkillIconSwitcher_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "OnUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_SkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_SkillLV                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillIconSwitcher_C::OnClick__DelegateSignature(int32 Param_SkillId, int32 Param_SkillLV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "OnClick__DelegateSignature");

	Params::WBP_SkillIconSwitcher_C_OnClick__DelegateSignature Parms{};

	Parms.Param_SkillId = Param_SkillId;
	Parms.Param_SkillLV = Param_SkillLV;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.ExecuteUbergraph_WBP_SkillIconSwitcher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillIconSwitcher_C::ExecuteUbergraph_WBP_SkillIconSwitcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "ExecuteUbergraph_WBP_SkillIconSwitcher");

	Params::WBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillIconSwitcher_C::BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillIconSwitcher_C::BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillIconSwitcher_C::BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SkillIconSwitcher_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_SkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESkillTreeAbilityType                   AbilityType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillIconSwitcher_C::Init(int32 Param_SkillId, int32 SkillLevel, ESkillTreeAbilityType AbilityType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "Init");

	Params::WBP_SkillIconSwitcher_C_Init Parms{};

	Parms.Param_SkillId = Param_SkillId;
	Parms.SkillLevel = SkillLevel;
	Parms.AbilityType = AbilityType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SkillIconSwitcher_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Set Equipment Icon Visible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SkillIconSwitcher_C::Set_Equipment_Icon_Visible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "Set Equipment Icon Visible");

	Params::WBP_SkillIconSwitcher_C_Set_Equipment_Icon_Visible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_SkillIconSwitcher_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillIconSwitcher_C", "GetToolTipWidget_0");

	Params::WBP_SkillIconSwitcher_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

