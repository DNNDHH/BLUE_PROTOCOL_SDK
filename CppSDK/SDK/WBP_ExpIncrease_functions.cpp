#pragma once

 

// Package: WBP_ExpIncrease

#include "Basic.hpp"

#include "WBP_ExpIncrease_classes.hpp"
#include "WBP_ExpIncrease_parameters.hpp"


namespace SDK
{

// Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENumberInputDialogResult                InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ExpIncrease_C::OnHide__DelegateSignature(ENumberInputDialogResult InResult, int32 InNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "OnHide__DelegateSignature");

	Params::WBP_ExpIncrease_C_OnHide__DelegateSignature Parms{};

	Parms.InResult = InResult;
	Parms.InNumber = InNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnExpSliderUpdeta__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ExpIncrease_C*               CallerDialg                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ExpIncrease_C::OnExpSliderUpdeta__DelegateSignature(int32 Value, class UWBP_ExpIncrease_C* CallerDialg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "OnExpSliderUpdeta__DelegateSignature");

	Params::WBP_ExpIncrease_C_OnExpSliderUpdeta__DelegateSignature Parms{};

	Parms.Value = Value;
	Parms.CallerDialg = CallerDialg;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.ExecuteUbergraph_WBP_ExpIncrease
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ExpIncrease_C::ExecuteUbergraph_WBP_ExpIncrease(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "ExecuteUbergraph_WBP_ExpIncrease");

	Params::WBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__WBP_ExpIncrease_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
// (BlueprintEvent)

void UWBP_ExpIncrease_C::BndEvt__WBP_ExpIncrease_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "BndEvt__WBP_ExpIncrease_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnSliderChange
// (BlueprintCallable, BlueprintEvent)

void UWBP_ExpIncrease_C::OnSliderChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "OnSliderChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ExpIncrease_C::BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature(int32 NewValue, float Ratio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature");

	Params::WBP_ExpIncrease_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature Parms{};

	Parms.NewValue = NewValue;
	Parms.Ratio = Ratio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ExpIncrease_C::BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ExpIncrease_C::BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ExpIncrease_C::BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ExpIncrease_C::BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ExpIncrease_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ExpIncrease_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.HideDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlayCloseSe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ExpIncrease_C::HideDialog(bool bPlayCloseSe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "HideDialog");

	Params::WBP_ExpIncrease_C_HideDialog Parms{};

	Parms.bPlayCloseSe = bPlayCloseSe;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UWBP_ExpIncrease_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ExpIncrease_C::BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ExpIncrease_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnDestructMainWidget
// (Event, Public, BlueprintEvent)

void UWBP_ExpIncrease_C::OnDestructMainWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "OnDestructMainWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ExpIncrease_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ExpIncrease_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ExpIncrease_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "OnAnimationFinished");

	Params::WBP_ExpIncrease_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumberMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ExpIncrease_C::SetDialogNumber(int32 Number, int32 NumberMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "SetDialogNumber");

	Params::WBP_ExpIncrease_C_SetDialogNumber Parms{};

	Parms.Number = Number;
	Parms.NumberMax = NumberMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogTexts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InCommentText                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InButtonText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InLVText                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ExpIncrease_C::SetDialogTexts(const class FText& InCommentText, const class FText& InButtonText, const class FText& InLVText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "SetDialogTexts");

	Params::WBP_ExpIncrease_C_SetDialogTexts Parms{};

	Parms.InCommentText = std::move(InCommentText);
	Parms.InButtonText = std::move(InButtonText);
	Parms.InLVText = std::move(InLVText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogNumsBefore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LVNum1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpNum1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpMaxNum1                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ExpIncrease_C::SetDialogNumsBefore(int32 LVNum1, int32 ExpNum1, int32 ExpMaxNum1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "SetDialogNumsBefore");

	Params::WBP_ExpIncrease_C_SetDialogNumsBefore Parms{};

	Parms.LVNum1 = LVNum1;
	Parms.ExpNum1 = ExpNum1;
	Parms.ExpMaxNum1 = ExpMaxNum1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogNumsAfter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LVNum2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpNum2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpMaxNum2                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ExpIncrease_C::SetDialogNumsAfter(int32 LVNum2, int32 ExpNum2, int32 ExpMaxNum2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "SetDialogNumsAfter");

	Params::WBP_ExpIncrease_C_SetDialogNumsAfter Parms{};

	Parms.LVNum2 = LVNum2;
	Parms.ExpNum2 = ExpNum2;
	Parms.ExpMaxNum2 = ExpMaxNum2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogComment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ExpIncrease_C::SetDialogComment(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "SetDialogComment");

	Params::WBP_ExpIncrease_C_SetDialogComment Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*                 Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InVec                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Naw                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ExpIncrease_C::SetGauge(class UCanvasPanelSlot* Target, const struct FVector2D& InVec, float Naw, float Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ExpIncrease_C", "SetGauge");

	Params::WBP_ExpIncrease_C_SetGauge Parms{};

	Parms.Target = Target;
	Parms.InVec = std::move(InVec);
	Parms.Naw = Naw;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);
}

}

