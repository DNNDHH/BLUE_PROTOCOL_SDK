#pragma once

 

// Package: InventoryTag

#include "Basic.hpp"

#include "InventoryTag_classes.hpp"
#include "InventoryTag_parameters.hpp"


namespace SDK
{

// Function InventoryTag.InventoryTag_C.ExecuteUbergraph_InventoryTag
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryTag_C::ExecuteUbergraph_InventoryTag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "ExecuteUbergraph_InventoryTag");

	Params::InventoryTag_C_ExecuteUbergraph_InventoryTag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventoryTag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InventoryTag.InventoryTag_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryTag_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "PreConstruct");

	Params::InventoryTag_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetPossibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPossible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryTag_C::SetPossibility(bool bPossible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetPossibility");

	Params::InventoryTag_C_SetPossibility Parms{};

	Parms.bPossible = bPossible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetBppChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_ItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Used                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBppIrredeemable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryTag_C::SetBppChange(ESBRewardItemType RewardType, int32 Param_ItemId, bool Used, bool IsBppIrredeemable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetBppChange");

	Params::InventoryTag_C_SetBppChange Parms{};

	Parms.RewardType = RewardType;
	Parms.Param_ItemId = Param_ItemId;
	Parms.Used = Used;
	Parms.IsBppIrredeemable = IsBppIrredeemable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetItemMasterData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemMasterData                  ItemMasterData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsBppIrredeemable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryTag_C::SetItemMasterData(const struct FItemMasterData& ItemMasterData, bool IsBppIrredeemable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetItemMasterData");

	Params::InventoryTag_C_SetItemMasterData Parms{};

	Parms.ItemMasterData = std::move(ItemMasterData);
	Parms.IsBppIrredeemable = IsBppIrredeemable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetWeaponMaster
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponMasterData              WeaponMaster                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Used                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBppIrredeemable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryTag_C::SetWeaponMaster(const struct FSBWeaponMasterData& WeaponMaster, bool Used, bool IsBppIrredeemable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetWeaponMaster");

	Params::InventoryTag_C_SetWeaponMaster Parms{};

	Parms.WeaponMaster = std::move(WeaponMaster);
	Parms.Used = Used;
	Parms.IsBppIrredeemable = IsBppIrredeemable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetMasterCostume
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 MasterCostume                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Used                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBppIrredeemable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryTag_C::SetMasterCostume(const struct FSBMasterCostume& MasterCostume, bool Used, bool IsBppIrredeemable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetMasterCostume");

	Params::InventoryTag_C_SetMasterCostume Parms{};

	Parms.MasterCostume = std::move(MasterCostume);
	Parms.Used = Used;
	Parms.IsBppIrredeemable = IsBppIrredeemable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetMasterImagine
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterImagine                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Used                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBppIrredeemable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryTag_C::SetMasterImagine(const struct FSBMasterImagine& MasterImagine, bool Used, bool IsBppIrredeemable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetMasterImagine");

	Params::InventoryTag_C_SetMasterImagine Parms{};

	Parms.MasterImagine = std::move(MasterImagine);
	Parms.Used = Used;
	Parms.IsBppIrredeemable = IsBppIrredeemable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetMasterMountImagine
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterMountImagine            MasterMountImagine                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Used                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBppIrredeemable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryTag_C::SetMasterMountImagine(const struct FSBMasterMountImagine& MasterMountImagine, bool Used, bool IsBppIrredeemable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetMasterMountImagine");

	Params::InventoryTag_C_SetMasterMountImagine Parms{};

	Parms.MasterMountImagine = std::move(MasterMountImagine);
	Parms.Used = Used;
	Parms.IsBppIrredeemable = IsBppIrredeemable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetMasterOrnament
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterOrnament                Master                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Used                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBppIrredeemable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryTag_C::SetMasterOrnament(const struct FSBMasterOrnament& Master, bool Used, bool IsBppIrredeemable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetMasterOrnament");

	Params::InventoryTag_C_SetMasterOrnament Parms{};

	Parms.Master = std::move(Master);
	Parms.Used = Used;
	Parms.IsBppIrredeemable = IsBppIrredeemable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetInventoryItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InventoryItemData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UInventoryTag_C::SetInventoryItemData(const struct FInventoryItemData& InventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetInventoryItemData");

	Params::InventoryTag_C_SetInventoryItemData Parms{};

	Parms.InventoryItemData = std::move(InventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetStackBMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StackBId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UInventoryTag_C::SetStackBMax(const class FString& StackBId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetStackBMax");

	Params::InventoryTag_C_SetStackBMax Parms{};

	Parms.StackBId = std::move(StackBId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetStackBMaxValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryTag_C::SetStackBMaxValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetStackBMaxValue");

	Params::InventoryTag_C_SetStackBMaxValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetOwnItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UInventoryTag_C::SetOwnItemInfo(const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetOwnItemInfo");

	Params::InventoryTag_C_SetOwnItemInfo Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.Set Stack BMax Visible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bStackBEnable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryTag_C::Set_Stack_BMax_Visible(bool bStackBEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "Set Stack BMax Visible");

	Params::InventoryTag_C_Set_Stack_BMax_Visible Parms{};

	Parms.bStackBEnable = bStackBEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.SetStackBMaxToolTipCreateInfos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EToolTipType                            Param_ToolTipType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryTag_C::SetStackBMaxToolTipCreateInfos(int32 Param_ItemId, EToolTipType Param_ToolTipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "SetStackBMaxToolTipCreateInfos");

	Params::InventoryTag_C_SetStackBMaxToolTipCreateInfos Parms{};

	Parms.Param_ItemId = Param_ItemId;
	Parms.Param_ToolTipType = Param_ToolTipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryTag.InventoryTag_C.CreateToolTipWidgetifNeeded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      OutTooltip                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryTag_C::CreateToolTipWidgetifNeeded(class UUserWidget** OutTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "CreateToolTipWidgetifNeeded");

	Params::InventoryTag_C_CreateToolTipWidgetifNeeded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutTooltip != nullptr)
		*OutTooltip = Parms.OutTooltip;
}


// Function InventoryTag.InventoryTag_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UInventoryTag_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "GetToolTipWidget_0");

	Params::InventoryTag_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventoryTag.InventoryTag_C.UpdateImagineStackBMaxToolTip
// (Private, BlueprintCallable, BlueprintEvent)

void UInventoryTag_C::UpdateImagineStackBMaxToolTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "UpdateImagineStackBMaxToolTip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InventoryTag.InventoryTag_C.UpdateWeaponStackBMaxToolTip
// (Private, BlueprintCallable, BlueprintEvent)

void UInventoryTag_C::UpdateWeaponStackBMaxToolTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "UpdateWeaponStackBMaxToolTip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InventoryTag.InventoryTag_C.InitOwnItemInfos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     NewOwnItemInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UInventoryTag_C::InitOwnItemInfos(const struct FOwnItemInfo& NewOwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryTag_C", "InitOwnItemInfos");

	Params::InventoryTag_C_InitOwnItemInfos Parms{};

	Parms.NewOwnItemInfo = std::move(NewOwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

