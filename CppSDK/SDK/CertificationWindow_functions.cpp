#pragma once

 

// Package: CertificationWindow

#include "Basic.hpp"

#include "CertificationWindow_classes.hpp"
#include "CertificationWindow_parameters.hpp"


namespace SDK
{

// Function CertificationWindow.CertificationWindow_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCertificationWindow_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.OnRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Year                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Month                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCertificationWindow_C::OnRequest__DelegateSignature(int32 Param_Year, int32 Param_Month)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "OnRequest__DelegateSignature");

	Params::CertificationWindow_C_OnRequest__DelegateSignature Parms{};

	Parms.Param_Year = Param_Year;
	Parms.Param_Month = Param_Month;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow.CertificationWindow_C.ExecuteUbergraph_CertificationWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCertificationWindow_C::ExecuteUbergraph_CertificationWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "ExecuteUbergraph_CertificationWindow");

	Params::CertificationWindow_C_ExecuteUbergraph_CertificationWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow.CertificationWindow_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UCertificationWindow_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.BndEvt__CertificationWindow_BtnExit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature
// (BlueprintEvent)

void UCertificationWindow_C::BndEvt__CertificationWindow_BtnExit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "BndEvt__CertificationWindow_BtnExit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.OnEsc
// (BlueprintCallable, BlueprintEvent)

void UCertificationWindow_C::OnEsc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "OnEsc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCertificationWindow_C::BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow.CertificationWindow_C.BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCertificationWindow_C::BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow.CertificationWindow_C.BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCertificationWindow_C::BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::CertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow.CertificationWindow_C.BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCertificationWindow_C::BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::CertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow.CertificationWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UCertificationWindow_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.BndEvt__CmnBtn27_132_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UCertificationWindow_C::BndEvt__CmnBtn27_132_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "BndEvt__CmnBtn27_132_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UCertificationWindow_C::BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.DoClose
// (BlueprintCallable, BlueprintEvent)

void UCertificationWindow_C::DoClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "DoClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCertificationWindow_C::BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	Params::CertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow.CertificationWindow_C.BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCertificationWindow_C::BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::CertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow.CertificationWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCertificationWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UCertificationWindow_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UCertificationWindow_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.CreateLists
// (Public, BlueprintCallable, BlueprintEvent)

void UCertificationWindow_C::CreateLists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "CreateLists");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.Clear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCertificationWindow_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.CreateAgeLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCertificationWindow_C::CreateAgeLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "CreateAgeLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CertificationWindow.CertificationWindow_C.CheckInputText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Input                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsYear                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsMonth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCertificationWindow_C::CheckInputText(const class FText& Input, bool IsYear, bool IsMonth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "CheckInputText");

	Params::CertificationWindow_C_CheckInputText Parms{};

	Parms.Input = std::move(Input);
	Parms.IsYear = IsYear;
	Parms.IsMonth = IsMonth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow.CertificationWindow_C.ReserveInputText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Input                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsYear                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsMonth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCertificationWindow_C::ReserveInputText(const class FText& Input, bool IsYear, bool IsMonth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "ReserveInputText");

	Params::CertificationWindow_C_ReserveInputText Parms{};

	Parms.Input = std::move(Input);
	Parms.IsYear = IsYear;
	Parms.IsMonth = IsMonth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CertificationWindow.CertificationWindow_C.SetBirthdayInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Year                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Month                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Age                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Count                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCertificationWindow_C::SetBirthdayInfo(int32 Param_Year, int32 Param_Month, int32 Param_Age, int32 Param_Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CertificationWindow_C", "SetBirthdayInfo");

	Params::CertificationWindow_C_SetBirthdayInfo Parms{};

	Parms.Param_Year = Param_Year;
	Parms.Param_Month = Param_Month;
	Parms.Param_Age = Param_Age;
	Parms.Param_Count = Param_Count;

	UObject::ProcessEvent(Func, &Parms);
}

}

