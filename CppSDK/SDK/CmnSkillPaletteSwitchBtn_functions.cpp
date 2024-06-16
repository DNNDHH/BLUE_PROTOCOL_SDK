#pragma once

 

// Package: CmnSkillPaletteSwitchBtn

#include "Basic.hpp"

#include "CmnSkillPaletteSwitchBtn_classes.hpp"
#include "CmnSkillPaletteSwitchBtn_parameters.hpp"


namespace SDK
{

// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInSwitchToSubSkillPalette                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnSkillPaletteSwitchBtn_C::OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSkillPaletteSwitchBtn_C", "OnPressed__DelegateSignature");

	Params::CmnSkillPaletteSwitchBtn_C_OnPressed__DelegateSignature Parms{};

	Parms.bInSwitchToSubSkillPalette = bInSwitchToSubSkillPalette;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.ExecuteUbergraph_CmnSkillPaletteSwitchBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnSkillPaletteSwitchBtn_C::ExecuteUbergraph_CmnSkillPaletteSwitchBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSkillPaletteSwitchBtn_C", "ExecuteUbergraph_CmnSkillPaletteSwitchBtn");

	Params::CmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.BndEvt__CmnSkillPaletteSwitchBtn_ButtonForSubSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnSkillPaletteSwitchBtn_C::BndEvt__CmnSkillPaletteSwitchBtn_ButtonForSubSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSkillPaletteSwitchBtn_C", "BndEvt__CmnSkillPaletteSwitchBtn_ButtonForSubSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.BndEvt__CmnSkillPaletteSwitchBtn_ButtonForMainSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnSkillPaletteSwitchBtn_C::BndEvt__CmnSkillPaletteSwitchBtn_ButtonForMainSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSkillPaletteSwitchBtn_C", "BndEvt__CmnSkillPaletteSwitchBtn_ButtonForMainSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnSkillPaletteSwitchBtn_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSkillPaletteSwitchBtn_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnSkillPaletteSwitchBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSkillPaletteSwitchBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetIsSubPaletteReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsReleased                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnSkillPaletteSwitchBtn_C::SetIsSubPaletteReleased(bool bInIsReleased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSkillPaletteSwitchBtn_C", "SetIsSubPaletteReleased");

	Params::CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased Parms{};

	Parms.bInIsReleased = bInIsReleased;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.CreateTooltip
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNoTooltip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnSkillPaletteSwitchBtn_C::CreateTooltip(bool InIsNoTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSkillPaletteSwitchBtn_C", "CreateTooltip");

	Params::CmnSkillPaletteSwitchBtn_C_CreateTooltip Parms{};

	Parms.InIsNoTooltip = InIsNoTooltip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetActiveSwitchBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InActiveSwitchBtnId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnSkillPaletteSwitchBtn_C::SetActiveSwitchBtn(int32 InActiveSwitchBtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSkillPaletteSwitchBtn_C", "SetActiveSwitchBtn");

	Params::CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn Parms{};

	Parms.InActiveSwitchBtnId = InActiveSwitchBtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetIsTooltipEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsTooltipEnabled                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnSkillPaletteSwitchBtn_C::SetIsTooltipEnable(bool bInIsTooltipEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnSkillPaletteSwitchBtn_C", "SetIsTooltipEnable");

	Params::CmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable Parms{};

	Parms.bInIsTooltipEnabled = bInIsTooltipEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

