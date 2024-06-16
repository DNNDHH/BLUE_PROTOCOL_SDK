#pragma once

 

// Package: CommonEquipmentBasicItemStatusParts

#include "Basic.hpp"

#include "CommonEquipmentBasicItemStatusParts_classes.hpp"
#include "CommonEquipmentBasicItemStatusParts_parameters.hpp"


namespace SDK
{

// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.Request_ShowRate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommonEquipmentBasicItemStatusParts_C::Request_ShowRate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicItemStatusParts_C", "Request_ShowRate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.ExecuteUbergraph_CommonEquipmentBasicItemStatusParts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentBasicItemStatusParts_C::ExecuteUbergraph_CommonEquipmentBasicItemStatusParts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicItemStatusParts_C", "ExecuteUbergraph_CommonEquipmentBasicItemStatusParts");

	Params::CommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.BndEvt__ItemDescription_Btn_RateDisplay_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UCommonEquipmentBasicItemStatusParts_C::BndEvt__ItemDescription_Btn_RateDisplay_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicItemStatusParts_C", "BndEvt__ItemDescription_Btn_RateDisplay_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.Set ItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemMasterData                  Param_MasterItem                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentBasicItemStatusParts_C::Set_ItemData(const struct FItemMasterData& Param_MasterItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicItemStatusParts_C", "Set ItemData");

	Params::CommonEquipmentBasicItemStatusParts_C_Set_ItemData Parms{};

	Parms.Param_MasterItem = std::move(Param_MasterItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetShowRateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentBasicItemStatusParts_C::SetShowRateButton(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicItemStatusParts_C", "SetShowRateButton");

	Params::CommonEquipmentBasicItemStatusParts_C_SetShowRateButton Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetCraftNumVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CraftNumMin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CraftNumMax                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentBasicItemStatusParts_C::SetCraftNumVisible(bool Param_Visibility, int32 CraftNumMin, int32 CraftNumMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicItemStatusParts_C", "SetCraftNumVisible");

	Params::CommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible Parms{};

	Parms.Param_Visibility = Param_Visibility;
	Parms.CraftNumMin = CraftNumMin;
	Parms.CraftNumMax = CraftNumMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetEventTermId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_EventTermId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonEquipmentBasicItemStatusParts_C::SetEventTermId(const class FString& Param_EventTermId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicItemStatusParts_C", "SetEventTermId");

	Params::CommonEquipmentBasicItemStatusParts_C_SetEventTermId Parms{};

	Parms.Param_EventTermId = std::move(Param_EventTermId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetRecepiId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_RecepiId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentBasicItemStatusParts_C::SetRecepiId(int32 Param_RecepiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentBasicItemStatusParts_C", "SetRecepiId");

	Params::CommonEquipmentBasicItemStatusParts_C_SetRecepiId Parms{};

	Parms.Param_RecepiId = Param_RecepiId;

	UObject::ProcessEvent(Func, &Parms);
}

}

