#pragma once

 

// Package: UMG_ProductDetail

#include "Basic.hpp"

#include "UMG_ProductDetail_classes.hpp"
#include "UMG_ProductDetail_parameters.hpp"


namespace SDK
{

// Function UMG_ProductDetail.UMG_ProductDetail_C.OnShowDetails__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetail_C::OnShowDetails__DelegateSignature(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "OnShowDetails__DelegateSignature");

	Params::UMG_ProductDetail_C_OnShowDetails__DelegateSignature Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.OnClickZoomIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetail_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "OnClickZoomIn__DelegateSignature");

	Params::UMG_ProductDetail_C_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.OnClickItemBoxDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetail_C::OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "OnClickItemBoxDetail__DelegateSignature");

	Params::UMG_ProductDetail_C_OnClickItemBoxDetail__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.ExecuteUbergraph_UMG_ProductDetail
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetail_C::ExecuteUbergraph_UMG_ProductDetail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "ExecuteUbergraph_UMG_ProductDetail");

	Params::UMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ProductDetail_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.CloseItemDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAnimation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetail_C::CloseItemDetail(bool bAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "CloseItemDetail");

	Params::UMG_ProductDetail_C_CloseItemDetail Parms{};

	Parms.bAnimation = bAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_SBProductData_C>Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetail_C::SetData(TScriptInterface<class IBPI_SBProductData_C> Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "SetData");

	Params::UMG_ProductDetail_C_SetData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.SetZoomFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bZoomIn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bOnlyDisplay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAnimation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetail_C::SetZoomFlag(bool Param_bZoomIn, bool bOnlyDisplay, bool bAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "SetZoomFlag");

	Params::UMG_ProductDetail_C_SetZoomFlag Parms{};

	Parms.Param_bZoomIn = Param_bZoomIn;
	Parms.bOnlyDisplay = bOnlyDisplay;
	Parms.bAnimation = bAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABP_PlayerSceneCapture2D_Studio_C*PlayerCapture                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetail_C::BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature(class ABP_PlayerSceneCapture2D_Studio_C* PlayerCapture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature");

	Params::UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature Parms{};

	Parms.PlayerCapture = PlayerCapture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetail_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "PreConstruct");

	Params::UMG_ProductDetail_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ProductDetail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetail_C::BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature");

	Params::UMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature
// (BlueprintEvent)

void UUMG_ProductDetail_C::BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetail_C::BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature");

	Params::UMG_ProductDetail_C_BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature
// (BlueprintEvent)

void UUMG_ProductDetail_C::BndEvt__CmnCostume_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "BndEvt__CmnCostume_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)

void UUMG_ProductDetail_C::BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetail_C::BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature(int32 ItemIndex, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature");

	Params::UMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.SetTryingCostumeItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUpdateCapture                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetail_C::SetTryingCostumeItemData(class UBP_SBProductItemData_C* Param_Data, bool bTrying, bool bUpdateCapture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "SetTryingCostumeItemData");

	Params::UMG_ProductDetail_C_SetTryingCostumeItemData Parms{};

	Parms.Param_Data = Param_Data;
	Parms.bTrying = bTrying;
	Parms.bUpdateCapture = bUpdateCapture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.SetTryingAllIfCostumeSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_ProductDetail_C::SetTryingAllIfCostumeSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "SetTryingAllIfCostumeSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.SetSelectedItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bToggleTrying                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bForceTrying                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetail_C::SetSelectedItemData(class UBP_SBProductItemData_C* ItemData, bool bToggleTrying, bool bForceTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "SetSelectedItemData");

	Params::UMG_ProductDetail_C_SetSelectedItemData Parms{};

	Parms.ItemData = ItemData;
	Parms.bToggleTrying = bToggleTrying;
	Parms.bForceTrying = bForceTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.UnsetTryingCostumeItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetail_C::UnsetTryingCostumeItemData(class UBP_SBProductItemData_C* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "UnsetTryingCostumeItemData");

	Params::UMG_ProductDetail_C_UnsetTryingCostumeItemData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.UnsetSelectedItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetail_C::UnsetSelectedItemData(class UBP_SBProductItemData_C* ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "UnsetSelectedItemData");

	Params::UMG_ProductDetail_C_UnsetSelectedItemData Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.SetSelectedSimpleItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bToggleTrying                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bForceTrying                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductDetail_C::SetSelectedSimpleItemData(EItemType ItemType, int32 ItemIndex, int32 Amount, bool bToggleTrying, bool bForceTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "SetSelectedSimpleItemData");

	Params::UMG_ProductDetail_C_SetSelectedSimpleItemData Parms{};

	Parms.ItemType = ItemType;
	Parms.ItemIndex = ItemIndex;
	Parms.Amount = Amount;
	Parms.bToggleTrying = bToggleTrying;
	Parms.bForceTrying = bForceTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductDetail.UMG_ProductDetail_C.SetButtonPosition_Posing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EShopType                               IsExchangeShop                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductDetail_C::SetButtonPosition_Posing(EShopType IsExchangeShop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductDetail_C", "SetButtonPosition_Posing");

	Params::UMG_ProductDetail_C_SetButtonPosition_Posing Parms{};

	Parms.IsExchangeShop = IsExchangeShop;

	UObject::ProcessEvent(Func, &Parms);
}

}

