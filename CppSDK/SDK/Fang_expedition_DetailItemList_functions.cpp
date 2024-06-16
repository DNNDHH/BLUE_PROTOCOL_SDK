#pragma once

 

// Package: Fang_expedition_DetailItemList

#include "Basic.hpp"

#include "Fang_expedition_DetailItemList_classes.hpp"
#include "Fang_expedition_DetailItemList_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ExecuteUbergraph_Fang_expedition_DetailItemList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemList_C::ExecuteUbergraph_Fang_expedition_DetailItemList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "ExecuteUbergraph_Fang_expedition_DetailItemList");

	Params::Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DetailItemList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.CB_OnPageButtonClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemList_C::CB_OnPageButtonClick(const int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "CB_OnPageButtonClick");

	Params::Fang_expedition_DetailItemList_C_CB_OnPageButtonClick Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.BndEvt__Fang_expedition_DetailItemList_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailItemList_C::BndEvt__Fang_expedition_DetailItemList_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "BndEvt__Fang_expedition_DetailItemList_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.BndEvt__Fang_expedition_DetailItemList_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailItemList_C::BndEvt__Fang_expedition_DetailItemList_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "BndEvt__Fang_expedition_DetailItemList_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DetailItemList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetRewardData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBMasterReward>          RewardList                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_DetailItemList_C::SetRewardData(TArray<struct FSBMasterReward>& RewardList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "SetRewardData");

	Params::Fang_expedition_DetailItemList_C_SetRewardData Parms{};

	Parms.RewardList = std::move(RewardList);

	UObject::ProcessEvent(Func, &Parms);

	RewardList = std::move(Parms.RewardList);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Page                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemList_C::ChangePage(int32 Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "ChangePage");

	Params::Fang_expedition_DetailItemList_C_ChangePage Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage_FixedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Page                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemList_C::ChangePage_FixedItem(int32 Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "ChangePage_FixedItem");

	Params::Fang_expedition_DetailItemList_C_ChangePage_FixedItem Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.UpdatePageButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailItemList_C::UpdatePageButtonVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "UpdatePageButtonVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetRandomRewardData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBFang_expeditionRandomRewardData>RandomReward                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_DetailItemList_C::SetRandomRewardData(TArray<struct FSBFang_expeditionRandomRewardData>& RandomReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "SetRandomRewardData");

	Params::Fang_expedition_DetailItemList_C_SetRandomRewardData Parms{};

	Parms.RandomReward = std::move(RandomReward);

	UObject::ProcessEvent(Func, &Parms);

	RandomReward = std::move(Parms.RandomReward);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage_RandomItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Page                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemList_C::ChangePage_RandomItem(int32 Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "ChangePage_RandomItem");

	Params::Fang_expedition_DetailItemList_C_ChangePage_RandomItem Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetupPageButton
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailItemList_C::SetupPageButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "SetupPageButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.AddRandomRewardData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBFang_expeditionRandomRewardData>RandomReward                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_DetailItemList_C::AddRandomRewardData(TArray<struct FSBFang_expeditionRandomRewardData>& RandomReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "AddRandomRewardData");

	Params::Fang_expedition_DetailItemList_C_AddRandomRewardData Parms{};

	Parms.RandomReward = std::move(RandomReward);

	UObject::ProcessEvent(Func, &Parms);

	RandomReward = std::move(Parms.RandomReward);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetupRandomRewardPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Page                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemList_C::SetupRandomRewardPage(int32 Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "SetupRandomRewardPage");

	Params::Fang_expedition_DetailItemList_C_SetupRandomRewardPage Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ResetRewardData
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailItemList_C::ResetRewardData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemList_C", "ResetRewardData");

	UObject::ProcessEvent(Func, nullptr);
}

}

