#pragma once

 

// Package: UMG_SeasonPassMenuRewardRank

#include "Basic.hpp"

#include "UMG_SeasonPassMenuRewardRank_classes.hpp"
#include "UMG_SeasonPassMenuRewardRank_parameters.hpp"


namespace SDK
{

// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.OnClickItemIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  RewardItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRank_C::OnClickItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "OnClickItemIcon__DelegateSignature");

	Params::UMG_SeasonPassMenuRewardRank_C_OnClickItemIcon__DelegateSignature Parms{};

	Parms.RewardItemData = RewardItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.ExecuteUbergraph_UMG_SeasonPassMenuRewardRank
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRank_C::ExecuteUbergraph_UMG_SeasonPassMenuRewardRank(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "ExecuteUbergraph_UMG_SeasonPassMenuRewardRank");

	Params::UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.DesignCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bPaidPlanSubscribed                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SeasonPassMenuRewardRank_C::DesignCheck(bool Param_bPaidPlanSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "DesignCheck");

	Params::UMG_SeasonPassMenuRewardRank_C_DesignCheck Parms{};

	Parms.Param_bPaidPlanSubscribed = Param_bPaidPlanSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.UpdateDesignAndData
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuRewardRank_C::UpdateDesignAndData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "UpdateDesignAndData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.OnUpdateData
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuRewardRank_C::OnUpdateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "OnUpdateData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.UpdateDesign
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuRewardRank_C::UpdateDesign()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "UpdateDesign");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRank_C::BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	Params::UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRank_C::BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	Params::UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRank_C::BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::UMG_SeasonPassMenuRewardRank_C_BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRank_C::BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardRankData*  Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRank_C::SetData(class USBSeasonPassMenuRewardRankData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "SetData");

	Params::UMG_SeasonPassMenuRewardRank_C_SetData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SeasonPassMenuRewardRank_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "PreConstruct");

	Params::UMG_SeasonPassMenuRewardRank_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.SetRewardData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardRankData*  Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRank_C::SetRewardData(class USBSeasonPassMenuRewardRankData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRank_C", "SetRewardData");

	Params::UMG_SeasonPassMenuRewardRank_C_SetRewardData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}

}

