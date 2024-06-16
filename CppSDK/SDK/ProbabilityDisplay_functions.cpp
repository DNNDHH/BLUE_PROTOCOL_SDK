#pragma once

 

// Package: ProbabilityDisplay

#include "Basic.hpp"

#include "ProbabilityDisplay_classes.hpp"
#include "ProbabilityDisplay_parameters.hpp"


namespace SDK
{

// Function ProbabilityDisplay.ProbabilityDisplay_C.OnClosing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UProbabilityDisplay_C::OnClosing__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "OnClosing__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.ExecuteUbergraph_ProbabilityDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_C::ExecuteUbergraph_ProbabilityDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "ExecuteUbergraph_ProbabilityDisplay");

	Params::ProbabilityDisplay_C_ExecuteUbergraph_ProbabilityDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupImagineCraftByLotteryReward
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterRewardLotteryGroupsRewardsLotteryReward                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UProbabilityDisplay_C::SetupImagineCraftByLotteryReward(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupImagineCraftByLotteryReward");

	Params::ProbabilityDisplay_C_SetupImagineCraftByLotteryReward Parms{};

	Parms.LotteryReward = std::move(LotteryReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupImagineCraft_Internal
// (BlueprintCallable, BlueprintEvent)

void UProbabilityDisplay_C::SetupImagineCraft_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupImagineCraft_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.OnCancelKey
// (BlueprintCallable, BlueprintEvent)

void UProbabilityDisplay_C::OnCancelKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "OnCancelKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UProbabilityDisplay_C::WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.BndEvt__ProbabilityDisplay_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)

void UProbabilityDisplay_C::BndEvt__ProbabilityDisplay_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "BndEvt__ProbabilityDisplay_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupGashaBonus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBGashaInfo                     Gasha_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsReload                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Step                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_C::SetupGashaBonus(const struct FSBGashaInfo& Gasha_Info, bool IsReload, int32 Step)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupGashaBonus");

	Params::ProbabilityDisplay_C_SetupGashaBonus Parms{};

	Parms.Gasha_Info = std::move(Gasha_Info);
	Parms.IsReload = IsReload;
	Parms.Step = Step;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupWeaponTuning
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponItemData                SBWeaponItemData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UProbabilityDisplay_C::SetupWeaponTuning(const struct FSBWeaponItemData& SBWeaponItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupWeaponTuning");

	Params::ProbabilityDisplay_C_SetupWeaponTuning Parms{};

	Parms.SBWeaponItemData = std::move(SBWeaponItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupWeaonFusion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterFusionItem              MasterFusionItem                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UProbabilityDisplay_C::SetupWeaonFusion(const struct FSBMasterFusionItem& MasterFusionItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupWeaonFusion");

	Params::ProbabilityDisplay_C_SetupWeaonFusion Parms{};

	Parms.MasterFusionItem = std::move(MasterFusionItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupImagineCraft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterImagine                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UProbabilityDisplay_C::SetupImagineCraft(const struct FSBMasterImagine& MasterImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupImagineCraft");

	Params::ProbabilityDisplay_C_SetupImagineCraft Parms{};

	Parms.MasterImagine = std::move(MasterImagine);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.OnClose
// (BlueprintCallable, BlueprintEvent)

void UProbabilityDisplay_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "OnClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.BndEvt__ProbabilityDisplay_Button_92_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UProbabilityDisplay_C::BndEvt__ProbabilityDisplay_Button_92_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "BndEvt__ProbabilityDisplay_Button_92_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupItemCraft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftMasterData                 Param_CraftMaster                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UProbabilityDisplay_C::SetupItemCraft(const struct FCraftMasterData& Param_CraftMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupItemCraft");

	Params::ProbabilityDisplay_C_SetupItemCraft Parms{};

	Parms.Param_CraftMaster = std::move(Param_CraftMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProbabilityDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.BndEvt__ProbabilityDisplay_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBGashaInfo                     GashaInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UProbabilityDisplay_C::BndEvt__ProbabilityDisplay_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "BndEvt__ProbabilityDisplay_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature");

	Params::ProbabilityDisplay_C_BndEvt__ProbabilityDisplay_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature Parms{};

	Parms.GashaInfo = std::move(GashaInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetUp_Gasha
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Step                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_C::SetUp_Gasha(int32 Step)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetUp_Gasha");

	Params::ProbabilityDisplay_C_SetUp_Gasha Parms{};

	Parms.Step = Step;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.ChangeGashaItemList
// (BlueprintCallable, BlueprintEvent)

void UProbabilityDisplay_C::ChangeGashaItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "ChangeGashaItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.UpdateSelectButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_C::UpdateSelectButton(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "UpdateSelectButton");

	Params::ProbabilityDisplay_C_UpdateSelectButton Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.OnClick_Common
// (BlueprintCallable, BlueprintEvent)

void UProbabilityDisplay_C::OnClick_Common()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "OnClick_Common");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.OnClick_RoseOrb
// (BlueprintCallable, BlueprintEvent)

void UProbabilityDisplay_C::OnClick_RoseOrb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "OnClick_RoseOrb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupGasha_ButtonList
// (BlueprintCallable, BlueprintEvent)

void UProbabilityDisplay_C::SetupGasha_ButtonList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupGasha_ButtonList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupWeaponCraft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftMasterData                 Param_CraftMaster                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UProbabilityDisplay_C::SetupWeaponCraft(const struct FCraftMasterData& Param_CraftMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupWeaponCraft");

	Params::ProbabilityDisplay_C_SetupWeaponCraft Parms{};

	Parms.Param_CraftMaster = std::move(Param_CraftMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupWeaponCraft_Internal
// (BlueprintCallable, BlueprintEvent)

void UProbabilityDisplay_C::SetupWeaponCraft_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupWeaponCraft_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupWeaponCraftByLotteryReward
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterRewardLotteryGroupsRewardsLotteryReward                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UProbabilityDisplay_C::SetupWeaponCraftByLotteryReward(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupWeaponCraftByLotteryReward");

	Params::ProbabilityDisplay_C_SetupWeaponCraftByLotteryReward Parms{};

	Parms.LotteryReward = std::move(LotteryReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupWeaponCraftSlot
// (BlueprintCallable, BlueprintEvent)

void UProbabilityDisplay_C::SetupWeaponCraftSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupWeaponCraftSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetupWeaponCraftPerk
// (BlueprintCallable, BlueprintEvent)

void UProbabilityDisplay_C::SetupWeaponCraftPerk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetupWeaponCraftPerk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.GetWeaponPerkRates
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBWeaponKillerPerkPickMasterData>List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<float>                           Rate                                                   (Parm, OutParm)

void UProbabilityDisplay_C::GetWeaponPerkRates(TArray<struct FSBWeaponKillerPerkPickMasterData>& List, TArray<float>* Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "GetWeaponPerkRates");

	Params::ProbabilityDisplay_C_GetWeaponPerkRates Parms{};

	Parms.List = std::move(List);

	UObject::ProcessEvent(Func, &Parms);

	List = std::move(Parms.List);

	if (Rate != nullptr)
		*Rate = std::move(Parms.Rate);
}


// Function ProbabilityDisplay.ProbabilityDisplay_C.SetFang_expedition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionRewardData     Fang_expeditionRewardData                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           AreaName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UProbabilityDisplay_C::SetFang_expedition(const struct FSBFang_expeditionRewardData& Fang_expeditionRewardData, const class FString& AreaName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_C", "SetFang_expedition");

	Params::ProbabilityDisplay_C_SetFang_expedition Parms{};

	Parms.Fang_expeditionRewardData = std::move(Fang_expeditionRewardData);
	Parms.AreaName = std::move(AreaName);

	UObject::ProcessEvent(Func, &Parms);
}

}

