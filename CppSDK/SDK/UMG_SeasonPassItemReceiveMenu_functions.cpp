#pragma once

 

// Package: UMG_SeasonPassItemReceiveMenu

#include "Basic.hpp"

#include "UMG_SeasonPassItemReceiveMenu_classes.hpp"
#include "UMG_SeasonPassItemReceiveMenu_parameters.hpp"


namespace SDK
{

// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.OnClick_Receive__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassItemReceiveMenu_C::OnClick_Receive__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "OnClick_Receive__DelegateSignature");

	Params::UMG_SeasonPassItemReceiveMenu_C_OnClick_Receive__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_SeasonPassItemReceiveMenu_C* Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassItemReceiveMenu_C::OnClose__DelegateSignature(class UUMG_SeasonPassItemReceiveMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "OnClose__DelegateSignature");

	Params::UMG_SeasonPassItemReceiveMenu_C_OnClose__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassItemReceiveMenu_C::ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu");

	Params::UMG_SeasonPassItemReceiveMenu_C_ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.OnUpdateData
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassItemReceiveMenu_C::OnUpdateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "OnUpdateData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.UpdateDesignAndData
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassItemReceiveMenu_C::UpdateDesignAndData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "UpdateDesignAndData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.UpdateDesign
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassItemReceiveMenu_C::UpdateDesign()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "UpdateDesign");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassItemReceiveMenu_C::BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.SetProductData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_SBProductData_C>Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SeasonPassItemReceiveMenu_C::SetProductData(TScriptInterface<class IBPI_SBProductData_C> Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "SetProductData");

	Params::UMG_SeasonPassItemReceiveMenu_C_SetProductData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassItemReceiveMenu_C::SetData(class USBSeasonPassMenuRewardItemData* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "SetData");

	Params::UMG_SeasonPassItemReceiveMenu_C_SetData Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_SeasonPassItemReceiveMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassItemReceiveMenu_C::BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature");

	Params::UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassItemReceiveMenu_C::BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature");

	Params::UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_10_OnClickZoomOut__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassItemReceiveMenu_C::BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_10_OnClickZoomOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_10_OnClickZoomOut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUMG_SeasonPassItemReceiveMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_0_OnReceiveButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassItemReceiveMenu_C::BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_0_OnReceiveButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_0_OnReceiveButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SeasonPassItemReceiveMenu_C::BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature");

	Params::UMG_SeasonPassItemReceiveMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SeasonPassItemReceiveMenu_C::BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Param_Data, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature");

	Params::UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassItemReceiveMenu_C::BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature");

	Params::UMG_SeasonPassItemReceiveMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassItemReceiveMenu_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassItemReceiveMenu_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassItemReceiveMenu_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}

}

