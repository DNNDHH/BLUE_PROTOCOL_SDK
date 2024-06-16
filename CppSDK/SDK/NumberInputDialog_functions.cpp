#pragma once

 

// Package: NumberInputDialog

#include "Basic.hpp"

#include "NumberInputDialog_classes.hpp"
#include "NumberInputDialog_parameters.hpp"


namespace SDK
{

// Function NumberInputDialog.NumberInputDialog_C.OnHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENumberInputDialogResult                InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNumberInputDialog_C::OnHide__DelegateSignature(ENumberInputDialogResult InResult, int32 InNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "OnHide__DelegateSignature");

	Params::NumberInputDialog_C_OnHide__DelegateSignature Parms{};

	Parms.InResult = InResult;
	Parms.InNumber = InNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputDialog.NumberInputDialog_C.OnNumSliderUpdeta__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNumberInputDialog_C*             CallerDialg                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNumberInputDialog_C::OnNumSliderUpdeta__DelegateSignature(int32 Value, class UNumberInputDialog_C* CallerDialg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "OnNumSliderUpdeta__DelegateSignature");

	Params::NumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature Parms{};

	Parms.Value = Value;
	Parms.CallerDialg = CallerDialg;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputDialog.NumberInputDialog_C.ExecuteUbergraph_NumberInputDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNumberInputDialog_C::ExecuteUbergraph_NumberInputDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "ExecuteUbergraph_NumberInputDialog");

	Params::NumberInputDialog_C_ExecuteUbergraph_NumberInputDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__NumberInputDialog_CmnClose02_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__NumberInputDialog_CmnClose02_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__NumberInputDialog_CmnClose02_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.PositionInit
// (BlueprintCallable, BlueprintEvent)

void UNumberInputDialog_C::PositionInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "PositionInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button1_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button1_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_3_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button1_3_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button1_3_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UNumberInputDialog_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.StartAnimation
// (BlueprintCallable, BlueprintEvent)

void UNumberInputDialog_C::StartAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "StartAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNumberInputDialog_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "PreConstruct");

	Params::NumberInputDialog_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button1_2_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button1_2_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button1_2_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button1_2_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button1_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button1_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.OnSliderChange
// (BlueprintCallable, BlueprintEvent)

void UNumberInputDialog_C::OnSliderChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "OnSliderChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNumberInputDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNumberInputDialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.HideDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlayCloseSe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNumberInputDialog_C::HideDialog(bool bPlayCloseSe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "HideDialog");

	Params::NumberInputDialog_C_HideDialog Parms{};

	Parms.bPlayCloseSe = bPlayCloseSe;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputDialog.NumberInputDialog_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UNumberInputDialog_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.SetFreeText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UNumberInputDialog_C::SetFreeText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "SetFreeText");

	Params::NumberInputDialog_C_SetFreeText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNumberInputDialog_C::BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature(int32 NewValue, float Ratio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature");

	Params::NumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature Parms{};

	Parms.NewValue = NewValue;
	Parms.Ratio = Ratio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.OnDestructMainWidget
// (Event, Public, BlueprintEvent)

void UNumberInputDialog_C::OnDestructMainWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "OnDestructMainWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNumberInputDialog_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberInputDialog.NumberInputDialog_C.SetDialogNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumberMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNumberInputDialog_C::SetDialogNumber(int32 Number, int32 NumberMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "SetDialogNumber");

	Params::NumberInputDialog_C_SetDialogNumber Parms{};

	Parms.Number = Number;
	Parms.NumberMax = NumberMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputDialog.NumberInputDialog_C.SetDialogTexts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InCommentText                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InFreeText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InButtonText                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UNumberInputDialog_C::SetDialogTexts(const class FText& InCommentText, const class FText& InFreeText, const class FText& InButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "SetDialogTexts");

	Params::NumberInputDialog_C_SetDialogTexts Parms{};

	Parms.InCommentText = std::move(InCommentText);
	Parms.InFreeText = std::move(InFreeText);
	Parms.InButtonText = std::move(InButtonText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberInputDialog.NumberInputDialog_C.SetDialogPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UNumberInputDialog_C::SetDialogPoint(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberInputDialog_C", "SetDialogPoint");

	Params::NumberInputDialog_C_SetDialogPoint Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

