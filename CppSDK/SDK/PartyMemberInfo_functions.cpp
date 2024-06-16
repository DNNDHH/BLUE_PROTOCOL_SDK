#pragma once

 

// Package: PartyMemberInfo

#include "Basic.hpp"

#include "PartyMemberInfo_classes.hpp"
#include "PartyMemberInfo_parameters.hpp"


namespace SDK
{

// Function PartyMemberInfo.PartyMemberInfo_C.ExecuteUbergraph_PartyMemberInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_C::ExecuteUbergraph_PartyMemberInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_C", "ExecuteUbergraph_PartyMemberInfo");

	Params::PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo.PartyMemberInfo_C.OnChangeSameMap
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    InSameMap                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyMemberInfo_C::OnChangeSameMap(bool InSameMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_C", "OnChangeSameMap");

	Params::PartyMemberInfo_C_OnChangeSameMap Parms{};

	Parms.InSameMap = InSameMap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo.PartyMemberInfo_C.CustomEvent_2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerProfileSummaryData>PlayerProfileSummaryData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPartyMemberInfo_C::CustomEvent_2(const TArray<struct FPlayerProfileSummaryData>& PlayerProfileSummaryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_C", "CustomEvent_2");

	Params::PartyMemberInfo_C_CustomEvent_2 Parms{};

	Parms.PlayerProfileSummaryData = std::move(PlayerProfileSummaryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo.PartyMemberInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyMemberInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo.PartyMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyMemberInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo.PartyMemberInfo_C.SetHPMPGaugeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyMemberInfo_C::SetHPMPGaugeVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_C", "SetHPMPGaugeVisibility");

	Params::PartyMemberInfo_C_SetHPMPGaugeVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo.PartyMemberInfo_C.Update Follow Icon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerProfileSummaryData>InFriendList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPartyMemberInfo_C::Update_Follow_Icon(const TArray<struct FPlayerProfileSummaryData>& InFriendList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_C", "Update Follow Icon");

	Params::PartyMemberInfo_C_Update_Follow_Icon Parms{};

	Parms.InFriendList = std::move(InFriendList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo.PartyMemberInfo_C.UpdatePartyIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyMemberInfo_C::UpdatePartyIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_C", "UpdatePartyIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo.PartyMemberInfo_C.GetBattleStatusComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBBattleStatusComponent*         OutBattleStatus                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_C::GetBattleStatusComponent(class USBBattleStatusComponent** OutBattleStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_C", "GetBattleStatusComponent");

	Params::PartyMemberInfo_C_GetBattleStatusComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutBattleStatus != nullptr)
		*OutBattleStatus = Parms.OutBattleStatus;
}


// Function PartyMemberInfo.PartyMemberInfo_C.OnSetBufIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UPartyMemberInfo_C::OnSetBufIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_C", "OnSetBufIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo.PartyMemberInfo_C.ResetBuffIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UPartyMemberInfo_C::ResetBuffIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_C", "ResetBuffIcon");

	UObject::ProcessEvent(Func, nullptr);
}

}

