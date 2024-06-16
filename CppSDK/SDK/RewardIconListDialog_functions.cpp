#pragma once

 

// Package: RewardIconListDialog

#include "Basic.hpp"

#include "RewardIconListDialog_classes.hpp"
#include "RewardIconListDialog_parameters.hpp"


namespace SDK
{

// Function RewardIconListDialog.RewardIconListDialog_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URewardIconListDialog_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardIconListDialog.RewardIconListDialog_C.ExecuteUbergraph_RewardIconListDialog
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardIconListDialog_C::ExecuteUbergraph_RewardIconListDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "ExecuteUbergraph_RewardIconListDialog");

	Params::RewardIconListDialog_C_ExecuteUbergraph_RewardIconListDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardIconListDialog.RewardIconListDialog_C.BndEvt__RewardIconListDialog_CmnBtn27_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URewardIconListDialog_C::BndEvt__RewardIconListDialog_CmnBtn27_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "BndEvt__RewardIconListDialog_CmnBtn27_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardIconListDialog.RewardIconListDialog_C.BndEvt__GashaResult_BonusWindow_Btn_BackClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URewardIconListDialog_C::BndEvt__GashaResult_BonusWindow_Btn_BackClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "BndEvt__GashaResult_BonusWindow_Btn_BackClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardIconListDialog.RewardIconListDialog_C.Close_Event
// (BlueprintCallable, BlueprintEvent)

void URewardIconListDialog_C::Close_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "Close_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardIconListDialog.RewardIconListDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URewardIconListDialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardIconListDialog.RewardIconListDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URewardIconListDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardIconListDialog.RewardIconListDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void URewardIconListDialog_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardIconListDialog.RewardIconListDialog_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsIconVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardIconListDialog_C::SetMessage(const class FText& Message, bool IsIconVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "SetMessage");

	Params::RewardIconListDialog_C_SetMessage Parms{};

	Parms.Message = std::move(Message);
	Parms.IsIconVisible = IsIconVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardIconListDialog.RewardIconListDialog_C.SetMasterRewardList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBMasterReward>          MasterRewards                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URewardIconListDialog_C::SetMasterRewardList(TArray<struct FSBMasterReward>& MasterRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "SetMasterRewardList");

	Params::RewardIconListDialog_C_SetMasterRewardList Parms{};

	Parms.MasterRewards = std::move(MasterRewards);

	UObject::ProcessEvent(Func, &Parms);

	MasterRewards = std::move(Parms.MasterRewards);
}


// Function RewardIconListDialog.RewardIconListDialog_C.SetMasterRewardIDList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     IDList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URewardIconListDialog_C::SetMasterRewardIDList(TArray<class FName>& IDList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "SetMasterRewardIDList");

	Params::RewardIconListDialog_C_SetMasterRewardIDList Parms{};

	Parms.IDList = std::move(IDList);

	UObject::ProcessEvent(Func, &Parms);

	IDList = std::move(Parms.IDList);
}


// Function RewardIconListDialog.RewardIconListDialog_C.SetBgBlurVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardIconListDialog_C::SetBgBlurVisible(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconListDialog_C", "SetBgBlurVisible");

	Params::RewardIconListDialog_C_SetBgBlurVisible Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}

