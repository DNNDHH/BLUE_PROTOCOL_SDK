#pragma once

 

// Package: UMG_MatchingMenu_ContentInfo

#include "Basic.hpp"

#include "UMG_MatchingMenu_ContentInfo_classes.hpp"
#include "UMG_MatchingMenu_ContentInfo_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnCloseButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_ContentInfo_C::OnCloseButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ContentInfo_C", "OnCloseButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnClickRewardIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestRewardIcon_C*               Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_ContentInfo_C::OnClickRewardIcon__DelegateSignature(class UQuestRewardIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ContentInfo_C", "OnClickRewardIcon__DelegateSignature");

	Params::UMG_MatchingMenu_ContentInfo_C_OnClickRewardIcon__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnClickSupplyIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_ContentInfo_C::OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ContentInfo_C", "OnClickSupplyIcon__DelegateSignature");

	Params::UMG_MatchingMenu_ContentInfo_C_OnClickSupplyIcon__DelegateSignature Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.ExecuteUbergraph_UMG_MatchingMenu_ContentInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_ContentInfo_C::ExecuteUbergraph_UMG_MatchingMenu_ContentInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ContentInfo_C", "ExecuteUbergraph_UMG_MatchingMenu_ContentInfo");

	Params::UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_ContentInfo_C::BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ContentInfo_C", "BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature");

	Params::UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQuestRewardIcon_C*               Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_ContentInfo_C::BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature(class UQuestRewardIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ContentInfo_C", "BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature");

	Params::UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_ContentInfo_C::BndEvt__UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ContentInfo_C", "BndEvt__UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetDungeonInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMapInfo                       DungeonMapInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_MatchingMenu_ContentInfo_C::SetDungeonInfo(const struct FSBMapInfo& DungeonMapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ContentInfo_C", "SetDungeonInfo");

	Params::UMG_MatchingMenu_ContentInfo_C_SetDungeonInfo Parms{};

	Parms.DungeonMapInfo = std::move(DungeonMapInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetCommandMenuMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_ContentInfo_C::SetCommandMenuMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ContentInfo_C", "SetCommandMenuMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetBestScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Record                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ClearCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            ClassType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_ContentInfo_C::SetBestScore(int32 Record, int32 ClearCount, ESBClassType ClassType, class FName MapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ContentInfo_C", "SetBestScore");

	Params::UMG_MatchingMenu_ContentInfo_C_SetBestScore Parms{};

	Parms.Record = Record;
	Parms.ClearCount = ClearCount;
	Parms.ClassType = ClassType;
	Parms.MapId = MapId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetTerm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTerm                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_ContentInfo_C::SetTerm(class FName EventTerm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ContentInfo_C", "SetTerm");

	Params::UMG_MatchingMenu_ContentInfo_C_SetTerm Parms{};

	Parms.EventTerm = EventTerm;

	UObject::ProcessEvent(Func, &Parms);
}

}

