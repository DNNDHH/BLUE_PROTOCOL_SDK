#pragma once

 

// Package: MyCharaMenu_DetailedStatus

#include "Basic.hpp"

#include "MyCharaMenu_DetailedStatus_classes.hpp"
#include "MyCharaMenu_DetailedStatus_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.CloseEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_DetailedStatus_C::CloseEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "CloseEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.ExecuteUbergraph_MyCharaMenu_DetailedStatus
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_DetailedStatus_C::ExecuteUbergraph_MyCharaMenu_DetailedStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "ExecuteUbergraph_MyCharaMenu_DetailedStatus");

	Params::MyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.BndEvt__MyCharaMenu_DetailedStatus_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_DetailedStatus_C::BndEvt__MyCharaMenu_DetailedStatus_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "BndEvt__MyCharaMenu_DetailedStatus_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UMyCharaMenu_DetailedStatus_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_DetailedStatus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_DetailedStatus_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "PreConstruct");

	Params::MyCharaMenu_DetailedStatus_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_DetailedStatus_C::PlayInAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "PlayInAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayOutAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_DetailedStatus_C::PlayOutAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "PlayOutAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_DetailedStatus_C::SetupStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "SetupStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.ImmediateClose
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_DetailedStatus_C::ImmediateClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "ImmediateClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.CreateAttributeDurabilityList
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_DetailedStatus_C::CreateAttributeDurabilityList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "CreateAttributeDurabilityList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.GetAttributeDurabilityListItemObj
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBAttribute                            InAttribute                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMyCharaMenu_AttributeDurabilityListItem_C*OutObj                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_DetailedStatus_C::GetAttributeDurabilityListItemObj(ESBAttribute InAttribute, class UMyCharaMenu_AttributeDurabilityListItem_C** OutObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "GetAttributeDurabilityListItemObj");

	Params::MyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj Parms{};

	Parms.InAttribute = InAttribute;

	UObject::ProcessEvent(Func, &Parms);

	if (OutObj != nullptr)
		*OutObj = Parms.OutObj;
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatusPresetEquip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBPlayerPresetEquipItem> InPresetEquipItemList                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_DetailedStatus_C::SetupStatusPresetEquip(TArray<struct FSBPlayerPresetEquipItem>& InPresetEquipItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "SetupStatusPresetEquip");

	Params::MyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip Parms{};

	Parms.InPresetEquipItemList = std::move(InPresetEquipItemList);

	UObject::ProcessEvent(Func, &Parms);

	InPresetEquipItemList = std::move(Parms.InPresetEquipItemList);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatusParam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InValueList                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_DetailedStatus_C::SetupStatusParam(TArray<int32>& InValueList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "SetupStatusParam");

	Params::MyCharaMenu_DetailedStatus_C_SetupStatusParam Parms{};

	Parms.InValueList = std::move(InValueList);

	UObject::ProcessEvent(Func, &Parms);

	InValueList = std::move(Parms.InValueList);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimBase
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDoStatusUpdate                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_DetailedStatus_C::PlayInAnimBase(bool InDoStatusUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "PlayInAnimBase");

	Params::MyCharaMenu_DetailedStatus_C_PlayInAnimBase Parms{};

	Parms.InDoStatusUpdate = InDoStatusUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimPresetEquip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBPlayerPresetEquipItem> InPresetEquipItemList                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_DetailedStatus_C::PlayInAnimPresetEquip(TArray<struct FSBPlayerPresetEquipItem>& InPresetEquipItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "PlayInAnimPresetEquip");

	Params::MyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip Parms{};

	Parms.InPresetEquipItemList = std::move(InPresetEquipItemList);

	UObject::ProcessEvent(Func, &Parms);

	InPresetEquipItemList = std::move(Parms.InPresetEquipItemList);
}


// Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimForDhcBattleTopMenu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBDhcBattleAttributeResistanceInfo>InDhcBattleScoreAttrResistInfos                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_DetailedStatus_C::PlayInAnimForDhcBattleTopMenu(TArray<struct FSBDhcBattleAttributeResistanceInfo>& InDhcBattleScoreAttrResistInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_DetailedStatus_C", "PlayInAnimForDhcBattleTopMenu");

	Params::MyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu Parms{};

	Parms.InDhcBattleScoreAttrResistInfos = std::move(InDhcBattleScoreAttrResistInfos);

	UObject::ProcessEvent(Func, &Parms);

	InDhcBattleScoreAttrResistInfos = std::move(Parms.InDhcBattleScoreAttrResistInfos);
}

}

