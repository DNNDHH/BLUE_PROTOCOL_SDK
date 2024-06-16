#pragma once

 

// Package: WBP_SeasonPassRankupDialog

#include "Basic.hpp"

#include "WBP_SeasonPassRankupDialog_classes.hpp"
#include "WBP_SeasonPassRankupDialog_parameters.hpp"


namespace SDK
{

// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.OnClickedOk__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   UpRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SeasonPassRankupDialog_C::OnClickedOk__DelegateSignature(int32 UpRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "OnClickedOk__DelegateSignature");

	Params::WBP_SeasonPassRankupDialog_C_OnClickedOk__DelegateSignature Parms{};

	Parms.UpRank = UpRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.ExecuteUbergraph_WBP_SeasonPassRankupDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SeasonPassRankupDialog_C::ExecuteUbergraph_WBP_SeasonPassRankupDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "ExecuteUbergraph_WBP_SeasonPassRankupDialog");

	Params::WBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UWBP_SeasonPassRankupDialog_C::WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWBP_SeasonPassRankupDialog_C::WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.Event_OnValueChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_SeasonPassRankupDialog_C::Event_OnValueChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "Event_OnValueChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBTextButtonCmnBtn27_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SeasonPassRankupDialog_C::BndEvt__WBP_SeasonPassRankupDialog_SBTextButtonCmnBtn27_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "BndEvt__WBP_SeasonPassRankupDialog_SBTextButtonCmnBtn27_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CurrRank                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MinRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_CurrPoint                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_CosumePoint                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SeasonPassRankupDialog_C::SetData(int32 Param_CurrRank, int32 MinRank, int32 MaxRank, int32 Param_CurrPoint, int32 Param_CosumePoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "SetData");

	Params::WBP_SeasonPassRankupDialog_C_SetData Parms{};

	Parms.Param_CurrRank = Param_CurrRank;
	Parms.MinRank = MinRank;
	Parms.MaxRank = MaxRank;
	Parms.Param_CurrPoint = Param_CurrPoint;
	Parms.Param_CosumePoint = Param_CosumePoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SeasonPassRankupDialog_C::BndEvt__WBP_SeasonPassRankupDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "BndEvt__WBP_SeasonPassRankupDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.OnInputCancelKey
// (BlueprintCallable, BlueprintEvent)

void UWBP_SeasonPassRankupDialog_C::OnInputCancelKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "OnInputCancelKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SeasonPassRankupDialog_C::BndEvt__WBP_SeasonPassRankupDialog_SBButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "BndEvt__WBP_SeasonPassRankupDialog_SBButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SeasonPassRankupDialog_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "PreConstruct");

	Params::WBP_SeasonPassRankupDialog_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SeasonPassRankupDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SeasonPassRankupDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

