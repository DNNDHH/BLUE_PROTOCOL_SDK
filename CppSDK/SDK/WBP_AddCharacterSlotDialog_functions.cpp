#pragma once

 

// Package: WBP_AddCharacterSlotDialog

#include "Basic.hpp"

#include "WBP_AddCharacterSlotDialog_classes.hpp"
#include "WBP_AddCharacterSlotDialog_parameters.hpp"


namespace SDK
{

// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.OnEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_AddCharacterSlotDialog_C*    Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Add                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AddCharacterSlotDialog_C::OnEnd__DelegateSignature(class UWBP_AddCharacterSlotDialog_C* Widget, bool Param_Add)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "OnEnd__DelegateSignature");

	Params::WBP_AddCharacterSlotDialog_C_OnEnd__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.Param_Add = Param_Add;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.OnBuySlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::OnBuySlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "OnBuySlot__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.ExecuteUbergraph_WBP_AddCharacterSlotDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AddCharacterSlotDialog_C::ExecuteUbergraph_WBP_AddCharacterSlotDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "ExecuteUbergraph_WBP_AddCharacterSlotDialog");

	Params::WBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_Btn_Commerce_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::BndEvt__WBP_AddCharacterSlotDialog_Btn_Commerce_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "BndEvt__WBP_AddCharacterSlotDialog_Btn_Commerce_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.initializeinput
// (BlueprintCallable, BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::Initializeinput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "initializeinput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.CreateReturn
// (BlueprintCallable, BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::CreateReturn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "CreateReturn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AddCharacterSlotDialog_C::CustomEvent_2(int32 Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "CustomEvent_2");

	Params::WBP_AddCharacterSlotDialog_C_CustomEvent_2 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::BndEvt__WBP_AddCharacterSlotDialog_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "BndEvt__WBP_AddCharacterSlotDialog_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BuiFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AddCharacterSlotDialog_C::BuiFinish(bool Success, int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "BuiFinish");

	Params::WBP_AddCharacterSlotDialog_C_BuiFinish Parms{};

	Parms.Success = Success;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_7_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_7_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_7_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.Initialize
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotNowMax                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SlotAddMax                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PurchaseAmount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCryptoCurrency                SBCryptoCurrency                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_AddCharacterSlotDialog_C::Initialize(int32 SlotNowMax, int32 SlotAddMax, int32 PurchaseAmount, const struct FSBCryptoCurrency& SBCryptoCurrency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "Initialize");

	Params::WBP_AddCharacterSlotDialog_C_Initialize Parms{};

	Parms.SlotNowMax = SlotNowMax;
	Parms.SlotAddMax = SlotAddMax;
	Parms.PurchaseAmount = PurchaseAmount;
	Parms.SBCryptoCurrency = std::move(SBCryptoCurrency);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.EndEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::EndEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "EndEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.CancelEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_AddCharacterSlotDialog_C::CancelEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "CancelEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.GetWarningToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_AddCharacterSlotDialog_C::GetWarningToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AddCharacterSlotDialog_C", "GetWarningToolTipWidget");

	Params::WBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

