#pragma once

 

// Package: WBP_TermsOfService

#include "Basic.hpp"

#include "WBP_TermsOfService_classes.hpp"
#include "WBP_TermsOfService_parameters.hpp"


namespace SDK
{

// Function WBP_TermsOfService.WBP_TermsOfService_C.OnEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Approval                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_TermsOfService_C::OnEnd__DelegateSignature(bool Param_Approval)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "OnEnd__DelegateSignature");

	Params::WBP_TermsOfService_C_OnEnd__DelegateSignature Parms{};

	Parms.Param_Approval = Param_Approval;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.ExecuteUbergraph_WBP_TermsOfService
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TermsOfService_C::ExecuteUbergraph_WBP_TermsOfService(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "ExecuteUbergraph_WBP_TermsOfService");

	Params::WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_TermsOfService_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.BndEvt__WBP_TermsOfService_CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_TermsOfService_C::BndEvt__WBP_TermsOfService_CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "BndEvt__WBP_TermsOfService_CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.BndEvt__WBP_TermsOfService_AgreeBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TermsOfService_C::BndEvt__WBP_TermsOfService_AgreeBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "BndEvt__WBP_TermsOfService_AgreeBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.BndEvt__WBP_TermsOfService_AgreeBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TermsOfService_C::BndEvt__WBP_TermsOfService_AgreeBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "BndEvt__WBP_TermsOfService_AgreeBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TermsOfService_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TermsOfService_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWBP_TermsOfService_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.TryEnd
// (BlueprintCallable, BlueprintEvent)

void UWBP_TermsOfService_C::TryEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "TryEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.BndEvt__WBP_TermsOfService_SBButton_C_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TermsOfService_C::BndEvt__WBP_TermsOfService_SBButton_C_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "BndEvt__WBP_TermsOfService_SBButton_C_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InTitle                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InExplanation                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InContents                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TermsOfService_C::Initialize(const class FText& InTitle, const class FText& InExplanation, const class FText& InContents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "Initialize");

	Params::WBP_TermsOfService_C_Initialize Parms{};

	Parms.InTitle = std::move(InTitle);
	Parms.InExplanation = std::move(InExplanation);
	Parms.InContents = std::move(InContents);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   CurrentOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TermsOfService_C::BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	Params::WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature Parms{};

	Parms.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TermsOfService.WBP_TermsOfService_C.BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_TermsOfService_C::BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TermsOfService_C", "BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}

}

