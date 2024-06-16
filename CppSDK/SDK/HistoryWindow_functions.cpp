#pragma once

 

// Package: HistoryWindow

#include "Basic.hpp"

#include "HistoryWindow_classes.hpp"
#include "HistoryWindow_parameters.hpp"


namespace SDK
{

// Function HistoryWindow.HistoryWindow_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHistoryWindow_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.OnRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHistoryType                          Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Year                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Month                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistoryWindow_C::OnRequest__DelegateSignature(ESBHistoryType Type, int32 Year, int32 Month, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "OnRequest__DelegateSignature");

	Params::HistoryWindow_C_OnRequest__DelegateSignature Parms{};

	Parms.Type = Type;
	Parms.Year = Year;
	Parms.Month = Month;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.OnRequestDel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHistoryType                          Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistoryWindow_C::OnRequestDel__DelegateSignature(ESBHistoryType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "OnRequestDel__DelegateSignature");

	Params::HistoryWindow_C_OnRequestDel__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.ExecuteUbergraph_HistoryWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistoryWindow_C::ExecuteUbergraph_HistoryWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "ExecuteUbergraph_HistoryWindow");

	Params::HistoryWindow_C_ExecuteUbergraph_HistoryWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.SetExpiredData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBHistoryExpired                Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UHistoryWindow_C::SetExpiredData(const struct FSBHistoryExpired& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "SetExpiredData");

	Params::HistoryWindow_C_SetExpiredData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.ShowMessageDialog_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UHistoryWindow_C::ShowMessageDialog_Event(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "ShowMessageDialog_Event");

	Params::HistoryWindow_C_ShowMessageDialog_Event Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.ShowWindow_DeleteAnnounce
// (BlueprintCallable, BlueprintEvent)

void UHistoryWindow_C::ShowWindow_DeleteAnnounce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "ShowWindow_DeleteAnnounce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.OnEsc
// (BlueprintCallable, BlueprintEvent)

void UHistoryWindow_C::OnEsc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "OnEsc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.OnClosed_Announce
// (BlueprintCallable, BlueprintEvent)

void UHistoryWindow_C::OnClosed_Announce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "OnClosed_Announce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.BndEvt__HistoryWindow_BtnAnnounce_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHistoryWindow_C::BndEvt__HistoryWindow_BtnAnnounce_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "BndEvt__HistoryWindow_BtnAnnounce_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.BndEvt__HistoryWindow_BtnExit_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UHistoryWindow_C::BndEvt__HistoryWindow_BtnExit_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "BndEvt__HistoryWindow_BtnExit_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UHistoryWindow_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHistoryWindow_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "BndEvt__BtnCancel_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHistoryWindow_C::BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistoryWindow_C::BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	Params::HistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistoryWindow_C::BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::HistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistoryWindow_C::BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	Params::HistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHistoryWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHistoryType                          Param_HistoryType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistoryWindow_C::Show(ESBHistoryType Param_HistoryType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "Show");

	Params::HistoryWindow_C_Show Parms{};

	Parms.Param_HistoryType = Param_HistoryType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UHistoryWindow_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UHistoryWindow_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.Init_MonthComboBox
// (Public, BlueprintCallable, BlueprintEvent)

void UHistoryWindow_C::Init_MonthComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "Init_MonthComboBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.Init_YearComboBox
// (Public, BlueprintCallable, BlueprintEvent)

void UHistoryWindow_C::Init_YearComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "Init_YearComboBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.Init_CountComboBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHistoryWindow_C::Init_CountComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "Init_CountComboBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.Create_MonthComboBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   First                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Last                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistoryWindow_C::Create_MonthComboBox(int32 First, int32 Last)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "Create_MonthComboBox");

	Params::HistoryWindow_C_Create_MonthComboBox Parms{};

	Parms.First = First;
	Parms.Last = Last;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.CreateHistoryList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBCashHistory>           List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHistoryWindow_C::CreateHistoryList(TArray<struct FSBCashHistory>& List)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "CreateHistoryList");

	Params::HistoryWindow_C_CreateHistoryList Parms{};

	Parms.List = std::move(List);

	UObject::ProcessEvent(Func, &Parms);

	List = std::move(Parms.List);
}


// Function HistoryWindow.HistoryWindow_C.On_ComboBox_Year_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UHistoryWindow_C::On_ComboBox_Year_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "On_ComboBox_Year_GenerateWidget_0");

	Params::HistoryWindow_C_On_ComboBox_Year_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HistoryWindow.HistoryWindow_C.On_ComboBox_Month_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UHistoryWindow_C::On_ComboBox_Month_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "On_ComboBox_Month_GenerateWidget_0");

	Params::HistoryWindow_C_On_ComboBox_Month_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HistoryWindow.HistoryWindow_C.On_ComboBox_Count_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UHistoryWindow_C::On_ComboBox_Count_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "On_ComboBox_Count_GenerateWidget_0");

	Params::HistoryWindow_C_On_ComboBox_Count_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HistoryWindow.HistoryWindow_C.SetUIBlocker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHistoryWindow_C::SetUIBlocker(bool bLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "SetUIBlocker");

	Params::HistoryWindow_C_SetUIBlocker Parms{};

	Parms.bLock = bLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.GetRequestDate_DeleteAnnounce
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHistoryWindow_C::GetRequestDate_DeleteAnnounce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "GetRequestDate_DeleteAnnounce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HistoryWindow.HistoryWindow_C.FixExpired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBHistoryExpired                Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UHistoryWindow_C::FixExpired(const struct FSBHistoryExpired& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "FixExpired");

	Params::HistoryWindow_C_FixExpired Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HistoryWindow.HistoryWindow_C.CanInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Ok                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHistoryWindow_C::CanInput(bool* Ok)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HistoryWindow_C", "CanInput");

	Params::HistoryWindow_C_CanInput Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ok != nullptr)
		*Ok = Parms.Ok;
}

}

