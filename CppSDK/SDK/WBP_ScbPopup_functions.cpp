#pragma once

 

// Package: WBP_ScbPopup

#include "Basic.hpp"

#include "WBP_ScbPopup_classes.hpp"
#include "WBP_ScbPopup_parameters.hpp"


namespace SDK
{

// Function WBP_ScbPopup.WBP_ScbPopup_C.ExecuteUbergraph_WBP_ScbPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScbPopup_C::ExecuteUbergraph_WBP_ScbPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "ExecuteUbergraph_WBP_ScbPopup");

	Params::WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScbPopup.WBP_ScbPopup_C.OnPressCancelKey
// (BlueprintCallable, BlueprintEvent)

void UWBP_ScbPopup_C::OnPressCancelKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "OnPressCancelKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ScbPopup_C::BndEvt__WBP_SubClassBonusPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "BndEvt__WBP_SubClassBonusPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_SBButton_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ScbPopup_C::BndEvt__WBP_SubClassBonusPopup_SBButton_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "BndEvt__WBP_SubClassBonusPopup_SBButton_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_Button_Conditions_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ScbPopup_C::BndEvt__WBP_SubClassBonusPopup_Button_Conditions_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "BndEvt__WBP_SubClassBonusPopup_Button_Conditions_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_Button_Proficiency_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ScbPopup_C::BndEvt__WBP_SubClassBonusPopup_Button_Proficiency_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "BndEvt__WBP_SubClassBonusPopup_Button_Proficiency_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbPopup.WBP_ScbPopup_C.ShowConditions
// (BlueprintCallable, BlueprintEvent)

void UWBP_ScbPopup_C::ShowConditions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "ShowConditions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbPopup.WBP_ScbPopup_C.ShowRank
// (BlueprintCallable, BlueprintEvent)

void UWBP_ScbPopup_C::ShowRank()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "ShowRank");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbPopup.WBP_ScbPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ScbPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbPopup.WBP_ScbPopup_C.Finished_48175ABA459004A31D7F73BB1AD68F3D
// (BlueprintCallable, BlueprintEvent)

void UWBP_ScbPopup_C::Finished_48175ABA459004A31D7F73BB1AD68F3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "Finished_48175ABA459004A31D7F73BB1AD68F3D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbPopup.WBP_ScbPopup_C.SetTotalBonus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBScbClassData                  TotalBonus                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_ScbPopup_C::SetTotalBonus(const struct FSBScbClassData& TotalBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "SetTotalBonus");

	Params::WBP_ScbPopup_C_SetTotalBonus Parms{};

	Parms.TotalBonus = std::move(TotalBonus);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScbPopup.WBP_ScbPopup_C.ChangeDesign
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRank                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ScbPopup_C::ChangeDesign(bool bRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopup_C", "ChangeDesign");

	Params::WBP_ScbPopup_C_ChangeDesign Parms{};

	Parms.bRank = bRank;

	UObject::ProcessEvent(Func, &Parms);
}

}

