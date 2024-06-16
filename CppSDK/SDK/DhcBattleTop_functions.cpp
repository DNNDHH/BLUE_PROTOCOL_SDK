#pragma once

 

// Package: DhcBattleTop

#include "Basic.hpp"

#include "DhcBattleTop_classes.hpp"
#include "DhcBattleTop_parameters.hpp"


namespace SDK
{

// Function DhcBattleTop.DhcBattleTop_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InGoToNext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTop_C::OnClose__DelegateSignature(bool InGoToNext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "OnClose__DelegateSignature");

	Params::DhcBattleTop_C_OnClose__DelegateSignature Parms{};

	Parms.InGoToNext = InGoToNext;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTop.DhcBattleTop_C.ExecuteUbergraph_DhcBattleTop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTop_C::ExecuteUbergraph_DhcBattleTop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "ExecuteUbergraph_DhcBattleTop");

	Params::DhcBattleTop_C_ExecuteUbergraph_DhcBattleTop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTop.DhcBattleTop_C.PartyWarpEndEvent
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleTop_C::PartyWarpEndEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "PartyWarpEndEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.WarpEnd
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleTop_C::WarpEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "WarpEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.UnbindDetailedAttrResistStatusEvents
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleTop_C::UnbindDetailedAttrResistStatusEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "UnbindDetailedAttrResistStatusEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.EscDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleTop_C::EscDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "EscDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_BtnFullScreenForDetailedAttrResistStatus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDhcBattleTop_C::BndEvt__DhcBattleTop_BtnFullScreenForDetailedAttrResistStatus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "BndEvt__DhcBattleTop_BtnFullScreenForDetailedAttrResistStatus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.OnCloseDetailedAttrResistStatus
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleTop_C::OnCloseDetailedAttrResistStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "OnCloseDetailedAttrResistStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.ActivateBtnFullScreenForDetailedAttrResistStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InActivate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTop_C::ActivateBtnFullScreenForDetailedAttrResistStatus(bool InActivate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "ActivateBtnFullScreenForDetailedAttrResistStatus");

	Params::DhcBattleTop_C_ActivateBtnFullScreenForDetailedAttrResistStatus Parms{};

	Parms.InActivate = InActivate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_PlayerStatusParam_K2Node_ComponentBoundEvent_4_OnDetailedStatusClicked__DelegateSignature
// (BlueprintEvent)

void UDhcBattleTop_C::BndEvt__DhcBattleTop_PlayerStatusParam_K2Node_ComponentBoundEvent_4_OnDetailedStatusClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "BndEvt__DhcBattleTop_PlayerStatusParam_K2Node_ComponentBoundEvent_4_OnDetailedStatusClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.UpdateClassTypeListItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBDhcBattleHighScoreInfo        InScoreInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InIsScoreInfoEmpty                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTop_C::UpdateClassTypeListItemSelected(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "UpdateClassTypeListItemSelected");

	Params::DhcBattleTop_C_UpdateClassTypeListItemSelected Parms{};

	Parms.InClassType = InClassType;
	Parms.InScoreInfo = std::move(InScoreInfo);
	Parms.InIsScoreInfoEmpty = InIsScoreInfoEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTop.DhcBattleTop_C.OnSelectDialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectIndex                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTop_C::OnSelectDialogResult(const int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "OnSelectDialogResult");

	Params::DhcBattleTop_C_OnSelectDialogResult Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBDhcBattleHighScoreInfo        InScoreInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InIsScoreInfoEmpty                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTop_C::BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature");

	Params::DhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature Parms{};

	Parms.InClassType = InClassType;
	Parms.InScoreInfo = std::move(InScoreInfo);
	Parms.InIsScoreInfoEmpty = InIsScoreInfoEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_BackBtn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UDhcBattleTop_C::BndEvt__DhcBattleTop_BackBtn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "BndEvt__DhcBattleTop_BackBtn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_GotoDhcMapBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UDhcBattleTop_C::BndEvt__DhcBattleTop_GotoDhcMapBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "BndEvt__DhcBattleTop_GotoDhcMapBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.UnbindOnLoadHighScoreInfoDelegate
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleTop_C::UnbindOnLoadHighScoreInfoDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "UnbindOnLoadHighScoreInfoDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.BindOnLoadHighScoreInfoDelegate
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleTop_C::BindOnLoadHighScoreInfoDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "BindOnLoadHighScoreInfoDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDhcBattleTop_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.ActivateUIBlockerFrontRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InActivate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTop_C::ActivateUIBlockerFrontRow(bool InActivate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "ActivateUIBlockerFrontRow");

	Params::DhcBattleTop_C_ActivateUIBlockerFrontRow Parms{};

	Parms.InActivate = InActivate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTop.DhcBattleTop_C.OnLoadHighScoreInfoDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBDhcBattleInfo                 InInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDhcBattleTop_C::OnLoadHighScoreInfoDelegate(const int32 InRetCode, const struct FSBDhcBattleInfo& InInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "OnLoadHighScoreInfoDelegate");

	Params::DhcBattleTop_C_OnLoadHighScoreInfoDelegate Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InInfo = std::move(InInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTop.DhcBattleTop_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UDhcBattleTop_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.BndEvt__DPSCheckerTop_CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UDhcBattleTop_C::BndEvt__DPSCheckerTop_CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "BndEvt__DPSCheckerTop_CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDhcBattleTop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDhcBattleTop_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UDhcBattleTop_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTop.DhcBattleTop_C.SetupInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDhcBattleInfo                 InInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UDhcBattleTop_C::SetupInfo(const struct FSBDhcBattleInfo& InInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "SetupInfo");

	Params::DhcBattleTop_C_SetupInfo Parms{};

	Parms.InInfo = std::move(InInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTop.DhcBattleTop_C.SetLayout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsScoreMeasured                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTop_C::SetLayout(bool InIsScoreMeasured)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "SetLayout");

	Params::DhcBattleTop_C_SetLayout Parms{};

	Parms.InIsScoreMeasured = InIsScoreMeasured;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTop.DhcBattleTop_C.SetSelectedClassTypeAndScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBDhcBattleHighScoreInfo        InScoreInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    InIsScoreInfoEmpty                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTop_C::SetSelectedClassTypeAndScore(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "SetSelectedClassTypeAndScore");

	Params::DhcBattleTop_C_SetSelectedClassTypeAndScore Parms{};

	Parms.InClassType = InClassType;
	Parms.InScoreInfo = std::move(InScoreInfo);
	Parms.InIsScoreInfoEmpty = InIsScoreInfoEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTop.DhcBattleTop_C.SetGoToDhcMapBtnTextId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTop_C::SetGoToDhcMapBtnTextId(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTop_C", "SetGoToDhcMapBtnTextId");

	Params::DhcBattleTop_C_SetGoToDhcMapBtnTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}

}

