#pragma once

 

// Package: UMG_SeasonPassMenu

#include "Basic.hpp"

#include "UMG_SeasonPassMenu_classes.hpp"
#include "UMG_SeasonPassMenu_parameters.hpp"


namespace SDK
{

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.ExecuteUbergraph_UMG_SeasonPassMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::ExecuteUbergraph_UMG_SeasonPassMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "ExecuteUbergraph_UMG_SeasonPassMenu");

	Params::UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnCompleted(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnCompleted");

	Params::UMG_SeasonPassMenu_C_OnCompleted Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnUpdateReceivedRewardInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnUpdateReceivedRewardInfo(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnUpdateReceivedRewardInfo");

	Params::UMG_SeasonPassMenu_C_OnUpdateReceivedRewardInfo Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnUpdateSeasonPassInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnUpdateSeasonPassInfo(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnUpdateSeasonPassInfo");

	Params::UMG_SeasonPassMenu_C_OnUpdateSeasonPassInfo Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_SeasonPassMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.Init
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenu_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_Rankup_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__SBButton_Rankup_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__SBButton_Rankup_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UMG_SeasonPassMenu_C_BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompletedAmoutOfMoney
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InFreeMoney                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InPaidMoney                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnCompletedAmoutOfMoney(int32 InRetCode, int32 InFreeMoney, int32 InPaidMoney)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnCompletedAmoutOfMoney");

	Params::UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InFreeMoney = InFreeMoney;
	Parms.InPaidMoney = InPaidMoney;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_GetInfo_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__SBButton_GetInfo_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__SBButton_GetInfo_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_GetRaward_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__SBButton_GetRaward_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__SBButton_GetRaward_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_BuyRankup_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__SBButton_BuyRankup_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__SBButton_BuyRankup_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_Rankup_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__SBButton_Rankup_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__SBButton_Rankup_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_BuySeasonPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__SBButton_BuySeasonPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__SBButton_BuySeasonPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.EnableInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SeasonPassMenu_C::EnableInput(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "EnableInput");

	Params::UMG_SeasonPassMenu_C_EnableInput Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.CheckAutoRankup
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenu_C::CheckAutoRankup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "CheckAutoRankup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.FinishAnimPagein
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenu_C::FinishAnimPagein()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "FinishAnimPagein");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnAnimationFinished");

	Params::UMG_SeasonPassMenu_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_SeasonPassMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_7_OnClickSeasonPassRewardAll__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_7_OnClickSeasonPassRewardAll__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_7_OnClickSeasonPassRewardAll__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnSuccessedReceiveApi
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenu_C::OnSuccessedReceiveApi()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnSuccessedReceiveApi");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnClieckItemReceive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnClieckItemReceive(class USBSeasonPassMenuRewardItemData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnClieckItemReceive");

	Params::UMG_SeasonPassMenu_C_OnClieckItemReceive Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCloseReceiveMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_SeasonPassItemReceiveMenu_C* Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnCloseReceiveMenu(class UUMG_SeasonPassItemReceiveMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnCloseReceiveMenu");

	Params::UMG_SeasonPassMenu_C_OnCloseReceiveMenu Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  RewardItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature");

	Params::UMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature Parms{};

	Parms.RewardItemData = RewardItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_5_OnClickRankUp__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_5_OnClickRankUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_5_OnClickRankUp__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_4_OnClickBuyRankUp__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_4_OnClickBuyRankUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_4_OnClickBuyRankUp__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_3_OnClickPointShop__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_3_OnClickPointShop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_3_OnClickPointShop__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_2_OnClickQuest__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_2_OnClickQuest__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_2_OnClickQuest__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__WBP_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_0_OnClickUpgrade__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenu_C::BndEvt__WBP_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_0_OnClickUpgrade__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "BndEvt__WBP_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_0_OnClickUpgrade__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnClickedRankupDialogOk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   UpRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnClickedRankupDialogOk(int32 UpRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnClickedRankupDialogOk");

	Params::UMG_SeasonPassMenu_C_OnClickedRankupDialogOk Parms{};

	Parms.UpRank = UpRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnGetSeasonPassRewardAllCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnGetSeasonPassRewardAllCompleted(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnGetSeasonPassRewardAllCompleted");

	Params::UMG_SeasonPassMenu_C_OnGetSeasonPassRewardAllCompleted Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestGetSeasonPassRewardAll
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenu_C::RequestGetSeasonPassRewardAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "RequestGetSeasonPassRewardAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompletedGetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnCompletedGetInfo(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnCompletedGetInfo");

	Params::UMG_SeasonPassMenu_C_OnCompletedGetInfo Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.ConfirmRequestRankupApi
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenu_C::ConfirmRequestRankupApi()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "ConfirmRequestRankupApi");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestGetInfo
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenu_C::RequestGetInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "RequestGetInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestAutoRankup
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenu_C::RequestAutoRankup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "RequestAutoRankup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnComplateReceive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnComplateReceive(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnComplateReceive");

	Params::UMG_SeasonPassMenu_C_OnComplateReceive Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestReceiveApi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::RequestReceiveApi(class USBSeasonPassMenuRewardItemData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "RequestReceiveApi");

	Params::UMG_SeasonPassMenu_C_RequestReceiveApi Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompleteRankup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnCompleteRankup(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnCompleteRankup");

	Params::UMG_SeasonPassMenu_C_OnCompleteRankup Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestRankupApi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   UpRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::RequestRankupApi(int32 UpRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "RequestRankupApi");

	Params::UMG_SeasonPassMenu_C_RequestRankupApi Parms{};

	Parms.UpRank = UpRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenu_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnSubMenuUpdate");

	Params::UMG_SeasonPassMenu_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenu_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnSameMenuBookmarkAccessNew");

	Params::UMG_SeasonPassMenu_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenu_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenu_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply UUMG_SeasonPassMenu_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenu_C", "TermRequest");

	Params::UMG_SeasonPassMenu_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

