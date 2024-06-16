#pragma once

 

// Package: RankingMenu

#include "Basic.hpp"

#include "RankingMenu_classes.hpp"
#include "RankingMenu_parameters.hpp"


namespace SDK
{

// Function RankingMenu.RankingMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URankingMenu_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.ExecuteUbergraph_RankingMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_C::ExecuteUbergraph_RankingMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "ExecuteUbergraph_RankingMenu");

	Params::RankingMenu_C_ExecuteUbergraph_RankingMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_SBButton_C_139_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URankingMenu_C::BndEvt__RankingMenu_SBButton_C_139_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "BndEvt__RankingMenu_SBButton_C_139_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.ChangeSelectPage
// (BlueprintCallable, BlueprintEvent)

void URankingMenu_C::ChangeSelectPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "ChangeSelectPage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.RequestUpdateRankingView
// (BlueprintCallable, BlueprintEvent)

void URankingMenu_C::RequestUpdateRankingView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "RequestUpdateRankingView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.ChangeSelectClass
// (BlueprintCallable, BlueprintEvent)

void URankingMenu_C::ChangeSelectClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "ChangeSelectClass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.ChangeSelectHistory
// (BlueprintCallable, BlueprintEvent)

void URankingMenu_C::ChangeSelectHistory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "ChangeSelectHistory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.ChangeEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_PlayAnimation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_C::ChangeEnd(bool Param_PlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "ChangeEnd");

	Params::RankingMenu_C_ChangeEnd Parms{};

	Parms.Param_PlayAnimation = Param_PlayAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu.RankingMenu_C.ChangeStart
// (BlueprintCallable, BlueprintEvent)

void URankingMenu_C::ChangeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "ChangeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_CmnBtn27_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URankingMenu_C::BndEvt__RankingMenu_CmnBtn27_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "BndEvt__RankingMenu_CmnBtn27_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.OnFailedRankingView
// (Event, Public, BlueprintEvent)

void URankingMenu_C::OnFailedRankingView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "OnFailedRankingView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_TopRank_Btn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URankingMenu_C::BndEvt__RankingMenu_TopRank_Btn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "BndEvt__RankingMenu_TopRank_Btn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_PrevRank_Btn_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URankingMenu_C::BndEvt__RankingMenu_PrevRank_Btn_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "BndEvt__RankingMenu_PrevRank_Btn_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_MyRank_Btn_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URankingMenu_C::BndEvt__RankingMenu_MyRank_Btn_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "BndEvt__RankingMenu_MyRank_Btn_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_NextRank_Btn_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URankingMenu_C::BndEvt__RankingMenu_NextRank_Btn_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "BndEvt__RankingMenu_NextRank_Btn_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.OutRangeMyRank
// (BlueprintCallable, BlueprintEvent)

void URankingMenu_C::OutRangeMyRank()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "OutRangeMyRank");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.OnCompletedRankingView
// (Event, Public, BlueprintEvent)

void URankingMenu_C::OnCompletedRankingView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "OnCompletedRankingView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.OnCompletedRankingHistory
// (Event, Public, BlueprintEvent)

void URankingMenu_C::OnCompletedRankingHistory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "OnCompletedRankingHistory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_C::BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	Params::RankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu.RankingMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void URankingMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_C::BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	Params::RankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu.RankingMenu_C.ChangeFocusCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_C::ChangeFocusCategory(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "ChangeFocusCategory");

	Params::RankingMenu_C_ChangeFocusCategory Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu.RankingMenu_C.BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_C::BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::RankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu.RankingMenu_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void URankingMenu_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void URankingMenu_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URankingMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URankingMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.SetClassComboBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URankingMenu_C::SetClassComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "SetClassComboBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.Set Page Combo Box Option
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLastIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_C::Set_Page_Combo_Box_Option(int32 InLastIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "Set Page Combo Box Option");

	Params::RankingMenu_C_Set_Page_Combo_Box_Option Parms{};

	Parms.InLastIndex = InLastIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu.RankingMenu_C.SetHistoryComboBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URankingMenu_C::SetHistoryComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "SetHistoryComboBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu.RankingMenu_C.On_Page_ComboBox_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* URankingMenu_C::On_Page_ComboBox_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "On_Page_ComboBox_GenerateWidget_0");

	Params::RankingMenu_C_On_Page_ComboBox_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RankingMenu.RankingMenu_C.On_ClassType_ComboBox_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* URankingMenu_C::On_ClassType_ComboBox_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "On_ClassType_ComboBox_GenerateWidget_0");

	Params::RankingMenu_C_On_ClassType_ComboBox_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RankingMenu.RankingMenu_C.On_RankingHistory_ComboBox_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* URankingMenu_C::On_RankingHistory_ComboBox_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "On_RankingHistory_ComboBox_GenerateWidget_0");

	Params::RankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RankingMenu.RankingMenu_C.SetPage_ComboBoxSelectAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_NotUpdatePage                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_C::SetPage_ComboBoxSelectAt(const int32 Param_Index, bool Param_NotUpdatePage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "SetPage_ComboBoxSelectAt");

	Params::RankingMenu_C_SetPage_ComboBoxSelectAt Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Param_NotUpdatePage = Param_NotUpdatePage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu.RankingMenu_C.SetClassType_ComboBoxSelectAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_NotUpdateClassType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_C::SetClassType_ComboBoxSelectAt(const int32 Param_Index, bool Param_NotUpdateClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "SetClassType_ComboBoxSelectAt");

	Params::RankingMenu_C_SetClassType_ComboBoxSelectAt Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Param_NotUpdateClassType = Param_NotUpdateClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu.RankingMenu_C.ClearPage_ComboBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_NotUpdatePage                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_C::ClearPage_ComboBox(bool Param_NotUpdatePage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "ClearPage_ComboBox");

	Params::RankingMenu_C_ClearPage_ComboBox Parms{};

	Parms.Param_NotUpdatePage = Param_NotUpdatePage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu.RankingMenu_C.SetRankingHistory_ComboBoxSelectAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_NotUpdateRankingHistory                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_C::SetRankingHistory_ComboBoxSelectAt(const int32 Param_Index, bool Param_NotUpdateRankingHistory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "SetRankingHistory_ComboBoxSelectAt");

	Params::RankingMenu_C_SetRankingHistory_ComboBoxSelectAt Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Param_NotUpdateRankingHistory = Param_NotUpdateRankingHistory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu.RankingMenu_C.IsShowEmptyMyRankingData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Show                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_C::IsShowEmptyMyRankingData(bool* Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "IsShowEmptyMyRankingData");

	Params::RankingMenu_C_IsShowEmptyMyRankingData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;
}


// Function RankingMenu.RankingMenu_C.GetMyItemPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_C::GetMyItemPosition(int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_C", "GetMyItemPosition");

	Params::RankingMenu_C_GetMyItemPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}

}

