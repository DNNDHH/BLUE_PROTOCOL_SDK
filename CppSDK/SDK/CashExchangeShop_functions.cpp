#pragma once

 

// Package: CashExchangeShop

#include "Basic.hpp"

#include "CashExchangeShop_classes.hpp"
#include "CashExchangeShop_parameters.hpp"


namespace SDK
{

// Function CashExchangeShop.CashExchangeShop_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.ExecuteUbergraph_CashExchangeShop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCashExchangeShop_C::ExecuteUbergraph_CashExchangeShop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "ExecuteUbergraph_CashExchangeShop");

	Params::CashExchangeShop_C_ExecuteUbergraph_CashExchangeShop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.ListenInput
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsStart                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCashExchangeShop_C::ListenInput(bool IsStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "ListenInput");

	Params::CashExchangeShop_C_ListenInput Parms{};

	Parms.IsStart = IsStart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.OnEnd_OutAnim
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::OnEnd_OutAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnEnd_OutAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OnEnd_InAnim
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::OnEnd_InAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnEnd_InAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.ShopOutAnim
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::ShopOutAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "ShopOutAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.ShopInAnim
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::ShopInAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "ShopInAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OnCloseProductItem
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::OnCloseProductItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnCloseProductItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OnDialogButtonClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogType                           DialogType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERsDialogButtonType                     ButtonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCashExchangeShop_C::OnDialogButtonClicked_Event(ERsDialogType DialogType, ERsDialogButtonType ButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnDialogButtonClicked_Event");

	Params::CashExchangeShop_C_OnDialogButtonClicked_Event Parms{};

	Parms.DialogType = DialogType;
	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCashExchangeShop_C::BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Data, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature");

	Params::CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature Parms{};

	Parms.Data = Data;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCashExchangeShop_C::BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature");

	Params::CashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
// (BlueprintEvent)

void UCashExchangeShop_C::BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_0_OnPurchase__DelegateSignature
// (BlueprintEvent)

void UCashExchangeShop_C::BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_0_OnPurchase__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_0_OnPurchase__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.SetProductData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_SBProductData_C>Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCashExchangeShop_C::SetProductData(TScriptInterface<class IBPI_SBProductData_C> Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "SetProductData");

	Params::CashExchangeShop_C_SetProductData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.WidgetAnimationEvt_AnimDetailOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UCashExchangeShop_C::WidgetAnimationEvt_AnimDetailOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "WidgetAnimationEvt_AnimDetailOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.Close_Event
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Close_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Close_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OnListItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCashExchangeShop_C::OnListItemSelected(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnListItemSelected");

	Params::CashExchangeShop_C_OnListItemSelected Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCashExchangeShop_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCashExchangeShop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.Payment_ErrorHandling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCashExchangeShop_C::Payment_ErrorHandling(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Payment_ErrorHandling");

	Params::CashExchangeShop_C_Payment_ErrorHandling Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.OnCloseEvent
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::OnCloseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnCloseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.�������_0
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::_________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "�������_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.Event_MaintenanceUpdate
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Event_MaintenanceUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Event_MaintenanceUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OnClose_MainteAll
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::OnClose_MainteAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnClose_MainteAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.Event_MaintenanceAll
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Event_MaintenanceAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Event_MaintenanceAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.Event_MaintenanceShop
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Event_MaintenanceShop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Event_MaintenanceShop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.DoRequest_Purchase
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::DoRequest_Purchase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "DoRequest_Purchase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OnGetShopItems_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBShopItemRoPS>          ResponseData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   PruchasePrice                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCashExchangeShop_C::OnGetShopItems_Event(const bool Result, const int32 RetCode, const TArray<struct FSBShopItemRoPS>& ResponseData, const int32 PruchasePrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnGetShopItems_Event");

	Params::CashExchangeShop_C_OnGetShopItems_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.ResponseData = std::move(ResponseData);
	Parms.PruchasePrice = PruchasePrice;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.Request_GetShopItems
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Request_GetShopItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Request_GetShopItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OnCancelPurchase_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCashExchangeShop_C::OnCancelPurchase_Event(const bool Result, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnCancelPurchase_Event");

	Params::CashExchangeShop_C_OnCancelPurchase_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.Continue_RetryPurchase
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Continue_RetryPurchase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Continue_RetryPurchase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.Payment_Notify
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBPurchaseRoPSResponse          ResponseData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCashExchangeShop_C::Payment_Notify(const bool Result, const int32 RetCode, const struct FSBPurchaseRoPSResponse& ResponseData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Payment_Notify");

	Params::CashExchangeShop_C_Payment_Notify Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.ResponseData = std::move(ResponseData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.OnRetryPurchase_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCashExchangeShop_C::OnRetryPurchase_Event(const bool Result, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnRetryPurchase_Event");

	Params::CashExchangeShop_C_OnRetryPurchase_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.Request_RetryPurchase
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Request_RetryPurchase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Request_RetryPurchase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.Payment_SBPS
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Payment_SBPS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Payment_SBPS");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OnPurchaseRoPS_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBPurchaseRoPSResponse          ResponseData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCashExchangeShop_C::OnPurchaseRoPS_Event(const bool Result, const int32 RetCode, const struct FSBPurchaseRoPSResponse& ResponseData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnPurchaseRoPS_Event");

	Params::CashExchangeShop_C_OnPurchaseRoPS_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.ResponseData = std::move(ResponseData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.Payment_WebMoney
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Payment_WebMoney()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Payment_WebMoney");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OnPaymentCancel_Event
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::OnPaymentCancel_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnPaymentCancel_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OnPaymentDecide_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Payment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCashExchangeShop_C::OnPaymentDecide_Event(const class FString& Payment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnPaymentDecide_Event");

	Params::CashExchangeShop_C_OnPaymentDecide_Event Parms{};

	Parms.Payment = std::move(Payment);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.OnGetCurrency_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCryptoCurrency                Cryptocurrency                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UCashExchangeShop_C::OnGetCurrency_Event(const bool Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnGetCurrency_Event");

	Params::CashExchangeShop_C_OnGetCurrency_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.Cryptocurrency = std::move(Cryptocurrency);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.Request_GetRoseOrb
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Request_GetRoseOrb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Request_GetRoseOrb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.Request_Purchase
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Request_Purchase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Request_Purchase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.CheckCertification
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::CheckCertification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "CheckCertification");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.CheckCanPurchase
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::CheckCanPurchase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "CheckCanPurchase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OnDialogClose01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCashExchangeShop_C::OnDialogClose01(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OnDialogClose01");

	Params::CashExchangeShop_C_OnDialogClose01 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.CheckOverLimit
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::CheckOverLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "CheckOverLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.CheckWithinLimit
// (BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::CheckWithinLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "CheckWithinLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.Release
// (Public, BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::Release()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "Release");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.GetComponentRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCashExchangeShop_C::GetComponentRef(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "GetComponentRef");

	Params::CashExchangeShop_C_GetComponentRef Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function CashExchangeShop.CashExchangeShop_C.TryEscTerm
// (Public, BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::TryEscTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "TryEscTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.OpenProductItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCashExchangeShop_C::OpenProductItem(int32 SelectID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "OpenProductItem");

	Params::CashExchangeShop_C_OpenProductItem Parms{};

	Parms.SelectID = SelectID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.CloseProductItem
// (Public, BlueprintCallable, BlueprintEvent)

void UCashExchangeShop_C::CloseProductItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "CloseProductItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CashExchangeShop.CashExchangeShop_C.GetIconTexture
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Texture                                                (Parm, OutParm, HasGetValueTypeHash)

void UCashExchangeShop_C::GetIconTexture(int32 ID, TSoftObjectPtr<class UTexture2D>* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "GetIconTexture");

	Params::CashExchangeShop_C_GetIconTexture Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;
}


// Function CashExchangeShop.CashExchangeShop_C.TryEscVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCashExchangeShop_C::TryEscVisibility(bool IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "TryEscVisibility");

	Params::CashExchangeShop_C_TryEscVisibility Parms{};

	Parms.IsShow = IsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CashExchangeShop.CashExchangeShop_C.CheckRetryByRetCode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRetry                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCashExchangeShop_C::CheckRetryByRetCode(int32 RetCode, bool* IsRetry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "CheckRetryByRetCode");

	Params::CashExchangeShop_C_CheckRetryByRetCode Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRetry != nullptr)
		*IsRetry = Parms.IsRetry;
}


// Function CashExchangeShop.CashExchangeShop_C.CreateProductListRemake
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBShopItemRoPS>          GetList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCashExchangeShop_C::CreateProductListRemake(TArray<struct FSBShopItemRoPS>& GetList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "CreateProductListRemake");

	Params::CashExchangeShop_C_CreateProductListRemake Parms{};

	Parms.GetList = std::move(GetList);

	UObject::ProcessEvent(Func, &Parms);

	GetList = std::move(Parms.GetList);
}


// Function CashExchangeShop.CashExchangeShop_C.IsPurchasePriceCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsOver                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCashExchangeShop_C::IsPurchasePriceCheck(bool* IsOver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CashExchangeShop_C", "IsPurchasePriceCheck");

	Params::CashExchangeShop_C_IsPurchasePriceCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOver != nullptr)
		*IsOver = Parms.IsOver;
}

}

