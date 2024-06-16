#pragma once

 

// Package: UMG_ProductItem

#include "Basic.hpp"

#include "UMG_ProductItem_classes.hpp"
#include "UMG_ProductItem_parameters.hpp"


namespace SDK
{

// Function UMG_ProductItem.UMG_ProductItem_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_ProductItem_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.OnPurchase__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_ProductItem_C::OnPurchase__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "OnPurchase__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "OnItemClicked__DelegateSignature");

	Params::UMG_ProductItem_C_OnItemClicked__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.OnReceiveButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_ProductItem_C::OnReceiveButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "OnReceiveButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.OnSelectedItemData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItem_C::OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Param_Data, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "OnSelectedItemData__DelegateSignature");

	Params::UMG_ProductItem_C_OnSelectedItemData__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.OnChangeStep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBGashaInfo                     GashaInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_ProductItem_C::OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "OnChangeStep__DelegateSignature");

	Params::UMG_ProductItem_C_OnChangeStep__DelegateSignature Parms{};

	Parms.GashaInfo = std::move(GashaInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.OnChangePurchaseType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BtnId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::OnChangePurchaseType__DelegateSignature(int32 BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "OnChangePurchaseType__DelegateSignature");

	Params::UMG_ProductItem_C_OnChangePurchaseType__DelegateSignature Parms{};

	Parms.BtnId = BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.ExecuteUbergraph_UMG_ProductItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::ExecuteUbergraph_UMG_ProductItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "ExecuteUbergraph_UMG_ProductItem");

	Params::UMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ProductItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_ProductItem_C::BndEvt__UMG_ProductItem_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "BndEvt__UMG_ProductItem_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__BtnPurchase_1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_ProductItem_C::BndEvt__BtnPurchase_1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "BndEvt__BtnPurchase_1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");

	Params::UMG_ProductItem_C_BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.CreateItemList
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_SBProductItemData_C*>  ItemDataList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ProductItem_C::CreateItemList(const TArray<class UBP_SBProductItemData_C*>& ItemDataList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "CreateItemList");

	Params::UMG_ProductItem_C_CreateItemList Parms{};

	Parms.ItemDataList = std::move(ItemDataList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.OnInputCancelKey
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItem_C::OnInputCancelKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "OnInputCancelKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItem_C::BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Param_Data, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature");

	Params::UMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__BtnReceive_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_ProductItem_C::BndEvt__BtnReceive_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "BndEvt__BtnReceive_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature");

	Params::UMG_ProductItem_C_BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.UpdateLayout
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItem_C::UpdateLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "UpdateLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "PreConstruct");

	Params::UMG_ProductItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ProductItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_ProductItem_C::BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.SetProductData_RoPS
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBRoseOrbShopItemMasterData     Param_ProductData                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_ProductItem_C::SetProductData_RoPS(const struct FSBRoseOrbShopItemMasterData& Param_ProductData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "SetProductData_RoPS");

	Params::UMG_ProductItem_C_SetProductData_RoPS Parms{};

	Parms.Param_ProductData = std::move(Param_ProductData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.Destruct_Gasha
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItem_C::Destruct_Gasha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "Destruct_Gasha");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.InitStepUp
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItem_C::InitStepUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "InitStepUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.OnClose_SubWindow
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItem_C::OnClose_SubWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "OnClose_SubWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__GashaShopProductDetail_BtnNotes_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_ProductItem_C::BndEvt__GashaShopProductDetail_BtnNotes_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "BndEvt__GashaShopProductDetail_BtnNotes_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBGashaInfo                     GashaInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_ProductItem_C::BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature");

	Params::UMG_ProductItem_C_BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature Parms{};

	Parms.GashaInfo = std::move(GashaInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged __DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItem_C::BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged___DelegateSignature(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged __DelegateSignature");

	Params::UMG_ProductItem_C_BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged___DelegateSignature Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.InitUpdateGasha
// (BlueprintCallable, BlueprintEvent)

void UUMG_ProductItem_C::InitUpdateGasha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "InitUpdateGasha");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   BtnId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32 BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UMG_ProductItem_C_BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature Parms{};

	Parms.BtnId = BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.SetProductInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_ProductData                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FShopItemInfo>            ItemInfoList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ProductItem_C::SetProductInfo(bool Param_ProductData, const class FText& Description, TArray<struct FShopItemInfo>& ItemInfoList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "SetProductInfo");

	Params::UMG_ProductItem_C_SetProductInfo Parms{};

	Parms.Param_ProductData = Param_ProductData;
	Parms.Description = std::move(Description);
	Parms.ItemInfoList = std::move(ItemInfoList);

	UObject::ProcessEvent(Func, &Parms);

	ItemInfoList = std::move(Parms.ItemInfoList);
}


// Function UMG_ProductItem.UMG_ProductItem_C.GetRemainNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Remain                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::GetRemainNum(int32* Remain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "GetRemainNum");

	Params::UMG_ProductItem_C_GetRemainNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Remain != nullptr)
		*Remain = Parms.Remain;
}


// Function UMG_ProductItem.UMG_ProductItem_C.SetPurcahseNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::SetPurcahseNum(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "SetPurcahseNum");

	Params::UMG_ProductItem_C_SetPurcahseNum Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.SetDetailType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBProductDetailType                   InDetailType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::SetDetailType(E_SBProductDetailType InDetailType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "SetDetailType");

	Params::UMG_ProductItem_C_SetDetailType Parms{};

	Parms.InDetailType = InDetailType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.SetProductInterfaceData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_SBProductData_C>Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItem_C::SetProductInterfaceData(TScriptInterface<class IBPI_SBProductData_C> Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "SetProductInterfaceData");

	Params::UMG_ProductItem_C_SetProductInterfaceData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.SetProductData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductData_C*              Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::SetProductData(class UBP_SBProductData_C* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "SetProductData");

	Params::UMG_ProductItem_C_SetProductData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::SetData(class UBP_SBProductItemData_C* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "SetData");

	Params::UMG_ProductItem_C_SetData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.SetPrice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Price                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_RankPoint                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::SetPrice(int32 Param_Price, int32 Param_RankPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "SetPrice");

	Params::UMG_ProductItem_C_SetPrice Parms{};

	Parms.Param_Price = Param_Price;
	Parms.Param_RankPoint = Param_RankPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.SetVisibleReceiveButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItem_C::SetVisibleReceiveButton(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "SetVisibleReceiveButton");

	Params::UMG_ProductItem_C_SetVisibleReceiveButton Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.Set Enable Purchase Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItem_C::Set_Enable_Purchase_Button(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "Set Enable Purchase Button");

	Params::UMG_ProductItem_C_Set_Enable_Purchase_Button Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItem.UMG_ProductItem_C.UnBindCancelKey
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ProductItem_C::UnBindCancelKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "UnBindCancelKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductItem.UMG_ProductItem_C.GetInputNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItem_C::GetInputNum(int32* Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "GetInputNum");

	Params::UMG_ProductItem_C_GetInputNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;
}


// Function UMG_ProductItem.UMG_ProductItem_C.ShowNumberSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItem_C::ShowNumberSelect(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItem_C", "ShowNumberSelect");

	Params::UMG_ProductItem_C_ShowNumberSelect Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}

