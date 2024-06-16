#pragma once

 

// Package: SelectMaterial

#include "Basic.hpp"

#include "SelectMaterial_classes.hpp"
#include "SelectMaterial_parameters.hpp"


namespace SDK
{

// Function SelectMaterial.SelectMaterial_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.OnSelected__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             Uids                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    UseTicket                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBStackBUseTicket               StackBTicket                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void USelectMaterial_C::OnSelected__DelegateSignature(TArray<struct FOwnItemInfo>& Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "OnSelected__DelegateSignature");

	Params::SelectMaterial_C_OnSelected__DelegateSignature Parms{};

	Parms.Uids = std::move(Uids);
	Parms.UseTicket = UseTicket;
	Parms.StackBTicket = std::move(StackBTicket);

	UObject::ProcessEvent(Func, &Parms);

	Uids = std::move(Parms.Uids);
}


// Function SelectMaterial.SelectMaterial_C.ExecuteUbergraph_SelectMaterial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMaterial_C::ExecuteUbergraph_SelectMaterial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "ExecuteUbergraph_SelectMaterial");

	Params::SelectMaterial_C_ExecuteUbergraph_SelectMaterial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   PageCurrent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMaterial_C::BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature(int32 PageCurrent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature");

	Params::SelectMaterial_C_BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature Parms{};

	Parms.PageCurrent = PageCurrent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.OnCloseDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMaterial_C::OnCloseDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "OnCloseDialog");

	Params::SelectMaterial_C_OnCloseDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
// (BlueprintEvent)

void USelectMaterial_C::BndEvt__SelectMaterial_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "BndEvt__SelectMaterial_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void USelectMaterial_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectMaterial_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.RequestClose
// (BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::RequestClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "RequestClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectMaterial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.OnEndBattleContains
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMaterial_C::OnEndBattleContains(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "OnEndBattleContains");

	Params::SelectMaterial_C_OnEndBattleContains Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void USelectMaterial_C::BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");

	Params::SelectMaterial_C_BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void USelectMaterial_C::BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature");

	Params::SelectMaterial_C_BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.OnSectedLockedItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMaterial_C::OnSectedLockedItems(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "OnSectedLockedItems");

	Params::SelectMaterial_C_OnSectedLockedItems Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void USelectMaterial_C::BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature");

	Params::SelectMaterial_C_BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USelectMaterial_C::BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature");

	Params::SelectMaterial_C_BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function SelectMaterial.SelectMaterial_C.OnEndDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMaterial_C::OnEndDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "OnEndDialog");

	Params::SelectMaterial_C_OnEndDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectMaterial_C::BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectMaterial_C::BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectMaterial_C::BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::SelectMaterial_C_BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBItemSortType                         SortType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMaterial_C::BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature(ESBItemSortType SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature");

	Params::SelectMaterial_C_BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature Parms{};

	Parms.SortType = SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectMaterial_C::BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.UpdateMaterialView
// (Public, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::UpdateMaterialView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "UpdateMaterialView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.HasMaterialStorage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bOutExist                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectMaterial_C::HasMaterialStorage(const struct FOwnItemInfo& ItemInfo, bool* bOutExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "HasMaterialStorage");

	Params::SelectMaterial_C_HasMaterialStorage Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (bOutExist != nullptr)
		*bOutExist = Parms.bOutExist;
}


// Function SelectMaterial.SelectMaterial_C.RemoveMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USelectMaterial_C::RemoveMaterial(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "RemoveMaterial");

	Params::SelectMaterial_C_RemoveMaterial Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.TextInitialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::TextInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "TextInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.InitializeTickets
// (Public, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::InitializeTickets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "InitializeTickets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.CacheTicketData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::CacheTicketData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "CacheTicketData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.UpdateTicketData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::UpdateTicketData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "UpdateTicketData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.TicketTextUpdate
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::TicketTextUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "TicketTextUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.UpdateSelectButton
// (Public, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::UpdateSelectButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "UpdateSelectButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.GenerateUIDs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<struct FOwnItemInfo>       ReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm)

const TArray<struct FOwnItemInfo> USelectMaterial_C::GenerateUIDs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "GenerateUIDs");

	Params::SelectMaterial_C_GenerateUIDs Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SelectMaterial.SelectMaterial_C.CalclateRewardBoostSupportItemNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   BaseAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SupportItemId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CalculatedAmount                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMaterial_C::CalclateRewardBoostSupportItemNum(int32 BaseAmount, int32 SupportItemId, int32* CalculatedAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "CalclateRewardBoostSupportItemNum");

	Params::SelectMaterial_C_CalclateRewardBoostSupportItemNum Parms{};

	Parms.BaseAmount = BaseAmount;
	Parms.SupportItemId = SupportItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (CalculatedAmount != nullptr)
		*CalculatedAmount = Parms.CalculatedAmount;
}


// Function SelectMaterial.SelectMaterial_C.CalculateRewardBoostMoney
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SupportItemId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   BasicNeedLuno                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CalculatedMoney                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMaterial_C::CalculateRewardBoostMoney(int32 SupportItemId, int32 BasicNeedLuno, int32* CalculatedMoney)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "CalculateRewardBoostMoney");

	Params::SelectMaterial_C_CalculateRewardBoostMoney Parms{};

	Parms.SupportItemId = SupportItemId;
	Parms.BasicNeedLuno = BasicNeedLuno;

	UObject::ProcessEvent(Func, &Parms);

	if (CalculatedMoney != nullptr)
		*CalculatedMoney = Parms.CalculatedMoney;
}


// Function SelectMaterial.SelectMaterial_C.CalculateLiquidMemoryMoneyDiscount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   BaseMoney                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CalclatedMoney                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMaterial_C::CalculateLiquidMemoryMoneyDiscount(int32 BaseMoney, int32* CalclatedMoney)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "CalculateLiquidMemoryMoneyDiscount");

	Params::SelectMaterial_C_CalculateLiquidMemoryMoneyDiscount Parms{};

	Parms.BaseMoney = BaseMoney;

	UObject::ProcessEvent(Func, &Parms);

	if (CalclatedMoney != nullptr)
		*CalclatedMoney = Parms.CalclatedMoney;
}


// Function SelectMaterial.SelectMaterial_C.SetFilterType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFilter_Type                            FilterType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMaterial_C::SetFilterType(EFilter_Type FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "SetFilterType");

	Params::SelectMaterial_C_SetFilterType Parms{};

	Parms.FilterType = FilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMaterial.SelectMaterial_C.RequestWalletShow
// (Public, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::RequestWalletShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "RequestWalletShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.IsMoneyAmount
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsAmount                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectMaterial_C::IsMoneyAmount(bool* IsAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "IsMoneyAmount");

	Params::SelectMaterial_C_IsMoneyAmount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsAmount != nullptr)
		*IsAmount = Parms.IsAmount;
}


// Function SelectMaterial.SelectMaterial_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.Get_HB_SelectAlert_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USelectMaterial_C::Get_HB_SelectAlert_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "Get_HB_SelectAlert_ToolTipWidget_0");

	Params::SelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SelectMaterial.SelectMaterial_C.UpdateSelectAlert
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USelectMaterial_C::UpdateSelectAlert()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "UpdateSelectAlert");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMaterial.SelectMaterial_C.IsMaterialFull
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsOk                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectMaterial_C::IsMaterialFull(bool* IsOk) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "IsMaterialFull");

	Params::SelectMaterial_C_IsMaterialFull Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOk != nullptr)
		*IsOk = Parms.IsOk;
}


// Function SelectMaterial.SelectMaterial_C.IsNeedMoreMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USelectMaterial_C::IsNeedMoreMaterial() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMaterial_C", "IsNeedMoreMaterial");

	Params::SelectMaterial_C_IsNeedMoreMaterial Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

