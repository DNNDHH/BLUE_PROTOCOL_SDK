#pragma once

 

// Package: UMG_SeasonPassMenuReward

#include "Basic.hpp"

#include "UMG_SeasonPassMenuReward_classes.hpp"
#include "UMG_SeasonPassMenuReward_parameters.hpp"


namespace SDK
{

// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.OnClickRewardItemIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  RewardItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuReward_C::OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "OnClickRewardItemIcon__DelegateSignature");

	Params::UMG_SeasonPassMenuReward_C_OnClickRewardItemIcon__DelegateSignature Parms{};

	Parms.RewardItemData = RewardItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.OnClickUpgrade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuReward_C::OnClickUpgrade__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "OnClickUpgrade__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.ExecuteUbergraph_UMG_SeasonPassMenuReward
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuReward_C::ExecuteUbergraph_UMG_SeasonPassMenuReward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "ExecuteUbergraph_UMG_SeasonPassMenuReward");

	Params::UMG_SeasonPassMenuReward_C_ExecuteUbergraph_UMG_SeasonPassMenuReward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.BndEvt__UMG_SeasonPassMenuReward_BtnUpgrade_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenuReward_C::BndEvt__UMG_SeasonPassMenuReward_BtnUpgrade_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "BndEvt__UMG_SeasonPassMenuReward_BtnUpgrade_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_SeasonPassMenuReward_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.OnUpdateSeasonPassRank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuReward_C::OnUpdateSeasonPassRank(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "OnUpdateSeasonPassRank");

	Params::UMG_SeasonPassMenuReward_C_OnUpdateSeasonPassRank Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SeasonPassMenuReward_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "PreConstruct");

	Params::UMG_SeasonPassMenuReward_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.UpdateDesignAndData
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuReward_C::UpdateDesignAndData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "UpdateDesignAndData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.UpdateDesign
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuReward_C::UpdateDesign()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "UpdateDesign");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.OnUpdateData
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuReward_C::OnUpdateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "OnUpdateData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.ScrollToRank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AnimateScroll                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SeasonPassMenuReward_C::ScrollToRank(int32 Rank, bool AnimateScroll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "ScrollToRank");

	Params::UMG_SeasonPassMenuReward_C_ScrollToRank Parms{};

	Parms.Rank = Rank;
	Parms.AnimateScroll = AnimateScroll;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_SeasonPassMenuReward_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   CurrentOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuReward_C::BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");

	Params::UMG_SeasonPassMenuReward_C_BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature Parms{};

	Parms.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  RewardItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuReward_C::BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature");

	Params::UMG_SeasonPassMenuReward_C_BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature Parms{};

	Parms.RewardItemData = RewardItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.OnClickRankRewardItemIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  RewardItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuReward_C::OnClickRankRewardItemIcon(class USBSeasonPassMenuRewardItemData* RewardItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "OnClickRankRewardItemIcon");

	Params::UMG_SeasonPassMenuReward_C_OnClickRankRewardItemIcon Parms{};

	Parms.RewardItemData = RewardItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardData*      Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuReward_C::SetData(class USBSeasonPassMenuRewardData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "SetData");

	Params::UMG_SeasonPassMenuReward_C_SetData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.ClearRewardRankItem
// (Private, BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuReward_C::ClearRewardRankItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "ClearRewardRankItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.CreateRewardRankItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardData*      Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuReward_C::CreateRewardRankItem(class USBSeasonPassMenuRewardData* Param_Data, int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "CreateRewardRankItem");

	Params::UMG_SeasonPassMenuReward_C_CreateRewardRankItem Parms{};

	Parms.Param_Data = Param_Data;
	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuReward.UMG_SeasonPassMenuReward_C.ChangePickupRewardIfNeeded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ScrollOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuReward_C::ChangePickupRewardIfNeeded(float ScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuReward_C", "ChangePickupRewardIfNeeded");

	Params::UMG_SeasonPassMenuReward_C_ChangePickupRewardIfNeeded Parms{};

	Parms.ScrollOffset = ScrollOffset;

	UObject::ProcessEvent(Func, &Parms);
}

}

