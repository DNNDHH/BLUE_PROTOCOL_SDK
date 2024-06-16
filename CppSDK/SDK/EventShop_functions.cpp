#pragma once

 

// Package: EventShop

#include "Basic.hpp"

#include "EventShop_classes.hpp"
#include "EventShop_parameters.hpp"


namespace SDK
{

// Function EventShop.EventShop_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEventShop_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.ExecuteUbergraph_EventShop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::ExecuteUbergraph_EventShop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "ExecuteUbergraph_EventShop");

	Params::EventShop_C_ExecuteUbergraph_EventShop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::EventShop_C_BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.OnCharaSkillMasteryOthersInfo_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Ret                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::OnCharaSkillMasteryOthersInfo_Event(int32 Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnCharaSkillMasteryOthersInfo_Event");

	Params::EventShop_C_OnCharaSkillMasteryOthersInfo_Event Parms{};

	Parms.Ret = Ret;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.GetSkillMastery
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::GetSkillMastery()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "GetSkillMastery");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.BndEvt__EventShop_Btn_StorageSelect1_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UEventShop_C::BndEvt__EventShop_Btn_StorageSelect1_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__EventShop_Btn_StorageSelect1_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OnClose_StorageSelect
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::OnClose_StorageSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnClose_StorageSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OnPressESC
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::OnPressESC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnPressESC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           Param_SelectedItem                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(const class FString& Param_SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");

	Params::EventShop_C_BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.Param_SelectedItem = std::move(Param_SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           Param_SelectedItem                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& Param_SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::EventShop_C_BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.Param_SelectedItem = std::move(Param_SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.OnEsc_StorageSelect
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::OnEsc_StorageSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnEsc_StorageSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.BndEvt__EventShop_BtnFull_Layer02_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEventShop_C::BndEvt__EventShop_BtnFull_Layer02_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__EventShop_BtnFull_Layer02_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEventShop_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UEventShop_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.onAnimTimer
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::OnAnimTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "onAnimTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.BndEvt__BpCashBox_K2Node_ComponentBoundEvent_7_OnPurchased__DelegateSignature
// (BlueprintEvent)

void UEventShop_C::BndEvt__BpCashBox_K2Node_ComponentBoundEvent_7_OnPurchased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__BpCashBox_K2Node_ComponentBoundEvent_7_OnPurchased__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.UpdateInfoClickedBanner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::UpdateInfoClickedBanner(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "UpdateInfoClickedBanner");

	Params::EventShop_C_UpdateInfoClickedBanner Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature");

	Params::EventShop_C_BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.OnListItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEventShopProductBox_Item_C*      Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bOnNumberInput                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::OnListItemSelected(class UEventShopProductBox_Item_C* Item, bool bOnNumberInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnListItemSelected");

	Params::EventShop_C_OnListItemSelected Parms{};

	Parms.Item = Item;
	Parms.bOnNumberInput = bOnNumberInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventShop_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.DoClose
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::DoClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "DoClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UEventShop_C::BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventShop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OnStorageSelectCancel
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::OnStorageSelectCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnStorageSelectCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.BndEvt__EventShop_btn_DetailedFilter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEventShop_C::BndEvt__EventShop_btn_DetailedFilter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__EventShop_btn_DetailedFilter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OnEndCheckRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::OnEndCheckRequest(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnEndCheckRequest");

	Params::EventShop_C_OnEndCheckRequest Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.CheckRequestTAbiliryShop
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::CheckRequestTAbiliryShop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CheckRequestTAbiliryShop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.CloseCheckListDialog
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::CloseCheckListDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CloseCheckListDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.ReleaseExchangeList
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::ReleaseExchangeList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "ReleaseExchangeList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OnCancelEvent
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::OnCancelEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnCancelEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OnExchange_Event
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::OnExchange_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnExchange_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.ShowExchangeList
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::ShowExchangeList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "ShowExchangeList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.ExtractItemId
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::ExtractItemId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "ExtractItemId");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OpenSelectorDialog
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::OpenSelectorDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OpenSelectorDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OnStorageSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::OnStorageSelected(int32 Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnStorageSelected");

	Params::EventShop_C_OnStorageSelected Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.CloseSelectorDialog
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::CloseSelectorDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CloseSelectorDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.UpdateProductInfo
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::UpdateProductInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "UpdateProductInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OnExchangeItem_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::OnExchangeItem_Event(const bool Result, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnExchangeItem_Event");

	Params::EventShop_C_OnExchangeItem_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.EndSystemMessage
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::EndSystemMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "EndSystemMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.ShowSystemMessageDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventShop_C::ShowSystemMessageDialog(const class FText& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "ShowSystemMessageDialog");

	Params::EventShop_C_ShowSystemMessageDialog Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.CloseConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::CloseConfirmDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CloseConfirmDialog");

	Params::EventShop_C_CloseConfirmDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.OpenConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::OpenConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OpenConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OnChangeTrying
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::OnChangeTrying(class UBP_SBProductItemData_C* Sender, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnChangeTrying");

	Params::EventShop_C_OnChangeTrying Parms{};

	Parms.Sender = Sender;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature");

	Params::EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.OnCloseDetailMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnCloseDetailMenu");

	Params::EventShop_C_OnCloseDetailMenu Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature");

	Params::EventShop_C_BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature");

	Params::EventShop_C_BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature
// (BlueprintEvent)

void UEventShop_C::BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.EndGetKillMaster_Event
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::EndGetKillMaster_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "EndGetKillMaster_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OnGetCryptocurrency_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCryptoCurrency                Cryptocurrency                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UEventShop_C::OnGetCryptocurrency_Event(const bool Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnGetCryptocurrency_Event");

	Params::EventShop_C_OnGetCryptocurrency_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.Cryptocurrency = std::move(Cryptocurrency);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.OnGetAdvBoard_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::OnGetAdvBoard_Event(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnGetAdvBoard_Event");

	Params::EventShop_C_OnGetAdvBoard_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.Request_GetAdvBoard
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::Request_GetAdvBoard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Request_GetAdvBoard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.OnGetExchangeHistory_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBEventShopExchangeHistory>History                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEventShop_C::OnGetExchangeHistory_Event(const bool Result, const int32 RetCode, const TArray<struct FSBEventShopExchangeHistory>& History)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "OnGetExchangeHistory_Event");

	Params::EventShop_C_OnGetExchangeHistory_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.History = std::move(History);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.Request_GetProductList
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::Request_GetProductList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Request_GetProductList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.DeleteTacticalAbilityDialog
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::DeleteTacticalAbilityDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "DeleteTacticalAbilityDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.TacticalAbilityDialogEndAnimOut
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::TacticalAbilityDialogEndAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "TacticalAbilityDialogEndAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.TacticalAbilityDialogEndAnimIn
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::TacticalAbilityDialogEndAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "TacticalAbilityDialogEndAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.UnbindTacticalAbilityDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialog_TacticalAbilityLearning_C*Dialog                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::UnbindTacticalAbilityDialog(class UDialog_TacticalAbilityLearning_C* Dialog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "UnbindTacticalAbilityDialog");

	Params::EventShop_C_UnbindTacticalAbilityDialog Parms{};

	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.BindTacticalAbilityDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialog_TacticalAbilityLearning_C*Dialog                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::BindTacticalAbilityDialog(class UDialog_TacticalAbilityLearning_C* Dialog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BindTacticalAbilityDialog");

	Params::EventShop_C_BindTacticalAbilityDialog Parms{};

	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.CreateTacticalAbilityDialog
// (BlueprintCallable, BlueprintEvent)

void UEventShop_C::CreateTacticalAbilityDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CreateTacticalAbilityDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.Release
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::Release()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Release");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.CreateEventList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEventShop_C::CreateEventList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CreateEventList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.CreateProductItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEventShop_C::CreateProductItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CreateProductItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.CreateTokenList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEventShop_C::CreateTokenList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CreateTokenList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.SetSelectItemInfoRemake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEventShopProductBox_Item_C*      Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bOnNumberInput                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::SetSelectItemInfoRemake(class UEventShopProductBox_Item_C* Item, bool bOnNumberInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "SetSelectItemInfoRemake");

	Params::EventShop_C_SetSelectItemInfoRemake Parms{};

	Parms.Item = Item;
	Parms.bOnNumberInput = bOnNumberInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.Set Select Message Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::Set_Select_Message_Visibility(bool IsSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Set Select Message Visibility");

	Params::EventShop_C_Set_Select_Message_Visibility Parms{};

	Parms.IsSelect = IsSelect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.Set Exchange Cost Text Remake
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEventShopProductBox_Item_C*      Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::Set_Exchange_Cost_Text_Remake(class UEventShopProductBox_Item_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Set Exchange Cost Text Remake");

	Params::EventShop_C_Set_Exchange_Cost_Text_Remake Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.BindEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::BindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "BindEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.UnBindEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::UnBindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "UnBindEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.RandomPlayAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::RandomPlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "RandomPlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.RandomPlayAnimation2
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::RandomPlayAnimation2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "RandomPlayAnimation2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.GetExchangeNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   EventId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::GetExchangeNum(int32 EventId, int32 ItemSetId, int32* Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "GetExchangeNum");

	Params::EventShop_C_GetExchangeNum Parms{};

	Parms.EventId = EventId;
	Parms.ItemSetId = ItemSetId;

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;
}


// Function EventShop.EventShop_C.GetIsAchieveRank
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   NeedRank                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAchieve                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::GetIsAchieveRank(int32 NeedRank, bool* IsAchieve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "GetIsAchieveRank");

	Params::EventShop_C_GetIsAchieveRank Parms{};

	Parms.NeedRank = NeedRank;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAchieve != nullptr)
		*IsAchieve = Parms.IsAchieve;
}


// Function EventShop.EventShop_C.GetIconTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Texture                                                (Parm, OutParm, HasGetValueTypeHash)

void UEventShop_C::GetIconTexture(int32 ID, TSoftObjectPtr<class UTexture2D>* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "GetIconTexture");

	Params::EventShop_C_GetIconTexture Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;
}


// Function EventShop.EventShop_C.CheckUseTokenList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Price                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::CheckUseTokenList(int32 TokenID, int32 Amount, int32 Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CheckUseTokenList");

	Params::EventShop_C_CheckUseTokenList Parms{};

	Parms.TokenID = TokenID;
	Parms.Amount = Amount;
	Parms.Price = Price;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.Is Equip Shop
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::Is_Equip_Shop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Is Equip Shop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.UpdateTokenList
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::UpdateTokenList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "UpdateTokenList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.On_txt_sort_list_GenerateWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UEventShop_C::On_txt_sort_list_GenerateWidget(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "On_txt_sort_list_GenerateWidget");

	Params::EventShop_C_On_txt_sort_list_GenerateWidget Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function EventShop.EventShop_C.On_txt_filter_list_GenerateWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UEventShop_C::On_txt_filter_list_GenerateWidget(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "On_txt_filter_list_GenerateWidget");

	Params::EventShop_C_On_txt_filter_list_GenerateWidget Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function EventShop.EventShop_C.CheckFilterSearch
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOk                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::CheckFilterSearch(int32 ItemSetId, bool* IsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CheckFilterSearch");

	Params::EventShop_C_CheckFilterSearch Parms{};

	Parms.ItemSetId = ItemSetId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOk != nullptr)
		*IsOk = Parms.IsOk;
}


// Function EventShop.EventShop_C.GetRewardItemType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRewardItemType                       Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::GetRewardItemType(int32 ID, ESBRewardItemType* Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "GetRewardItemType");

	Params::EventShop_C_GetRewardItemType Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;
}


// Function EventShop.EventShop_C.GetItemId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::GetItemId(int32 ItemSetId, int32* ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "GetItemId");

	Params::EventShop_C_GetItemId Parms{};

	Parms.ItemSetId = ItemSetId;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;
}


// Function EventShop.EventShop_C.CheckShopType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_ShopType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOk                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::CheckShopType(int32 Param_ShopType, bool* IsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CheckShopType");

	Params::EventShop_C_CheckShopType Parms{};

	Parms.Param_ShopType = Param_ShopType;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOk != nullptr)
		*IsOk = Parms.IsOk;
}


// Function EventShop.EventShop_C.IsExchangable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::IsExchangable(int32 ItemSetId, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "IsExchangable");

	Params::EventShop_C_IsExchangable Parms{};

	Parms.ItemSetId = ItemSetId;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function EventShop.EventShop_C.ResultGetTacticalAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEventShop_C::ResultGetTacticalAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "ResultGetTacticalAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.SetProductLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::SetProductLabel(int32 InId, int32* OutId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "SetProductLabel");

	Params::EventShop_C_SetProductLabel Parms{};

	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutId != nullptr)
		*OutId = Parms.OutId;
}


// Function EventShop.EventShop_C.AdjustProductList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::AdjustProductList(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "AdjustProductList");

	Params::EventShop_C_AdjustProductList Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop.EventShop_C.SetupByShopType
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::SetupByShopType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "SetupByShopType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.IsPickupLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::IsPickupLabel(int32 In, bool* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "IsPickupLabel");

	Params::EventShop_C_IsPickupLabel Parms{};

	Parms.In = In;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;
}


// Function EventShop.EventShop_C.CheckNeedLabel
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::CheckNeedLabel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CheckNeedLabel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.SetBtnVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::SetBtnVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "SetBtnVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.Is Valid Period
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                        Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        End                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::Is_Valid_Period(const struct FDateTime& Start, const struct FDateTime& End, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Is Valid Period");

	Params::EventShop_C_Is_Valid_Period Parms{};

	Parms.Start = std::move(Start);
	Parms.End = std::move(End);

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function EventShop.EventShop_C.GetBpStorageSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEventShopStorageSelect_C*        Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::GetBpStorageSelect(class UEventShopStorageSelect_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "GetBpStorageSelect");

	Params::EventShop_C_GetBpStorageSelect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function EventShop.EventShop_C.CheckItemRewardType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       ItemRewardType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::CheckItemRewardType(ESBRewardItemType ItemRewardType, int32 ItemSetId, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CheckItemRewardType");

	Params::EventShop_C_CheckItemRewardType Parms{};

	Parms.ItemRewardType = ItemRewardType;
	Parms.ItemSetId = ItemSetId;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function EventShop.EventShop_C.IsAccessory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EProtectorCategory                      Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAcc                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::IsAccessory(EProtectorCategory Category, bool* IsAcc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "IsAccessory");

	Params::EventShop_C_IsAccessory Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAcc != nullptr)
		*IsAcc = Parms.IsAcc;
}


// Function EventShop.EventShop_C.CheckDate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        StartDate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        EndDate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOk                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::CheckDate(const struct FDateTime& StartDate, const struct FDateTime& EndDate, bool* IsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CheckDate");

	Params::EventShop_C_CheckDate Parms{};

	Parms.StartDate = std::move(StartDate);
	Parms.EndDate = std::move(EndDate);

	UObject::ProcessEvent(Func, &Parms);

	if (IsOk != nullptr)
		*IsOk = Parms.IsOk;
}


// Function EventShop.EventShop_C.GetInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShop_C::GetInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "GetInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.CreateProductItemList_Filtering
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEventShop_C::CreateProductItemList_Filtering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CreateProductItemList_Filtering");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShop.EventShop_C.IsHaveBoard
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BoardId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::IsHaveBoard(int32 BoardId, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "IsHaveBoard");

	Params::EventShop_C_IsHaveBoard Parms{};

	Parms.BoardId = BoardId;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function EventShop.EventShop_C.GetNumberOfProducts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::GetNumberOfProducts(int32 ItemSetId, int32* Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "GetNumberOfProducts");

	Params::EventShop_C_GetNumberOfProducts Parms{};

	Parms.ItemSetId = ItemSetId;

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;
}


// Function EventShop.EventShop_C.StorageCheckSelectItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBEventShopPurchaseItemInfo>List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::StorageCheckSelectItem(TArray<struct FSBEventShopPurchaseItemInfo>& List, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "StorageCheckSelectItem");

	Params::EventShop_C_StorageCheckSelectItem Parms{};

	Parms.List = std::move(List);

	UObject::ProcessEvent(Func, &Parms);

	List = std::move(Parms.List);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function EventShop.EventShop_C.Sell Type Is Sold Out
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SellType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Limit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExchangable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::Sell_Type_Is_Sold_Out(int32 SellType, int32 Limit, int32 Stock, bool IsExchangable, int32* Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Sell Type Is Sold Out");

	Params::EventShop_C_Sell_Type_Is_Sold_Out Parms{};

	Parms.SellType = SellType;
	Parms.Limit = Limit;
	Parms.Stock = Stock;
	Parms.IsExchangable = IsExchangable;

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;
}


// Function EventShop.EventShop_C.CheckEquipGender
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOk                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::CheckEquipGender(int32 ID, bool* IsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "CheckEquipGender");

	Params::EventShop_C_CheckEquipGender Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOk != nullptr)
		*IsOk = Parms.IsOk;
}


// Function EventShop.EventShop_C.Is Mastery Skill
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SellType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_C::Is_Mastery_Skill(int32 ItemSetId, int32 SellType, int32* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "Is Mastery Skill");

	Params::EventShop_C_Is_Mastery_Skill Parms{};

	Parms.ItemSetId = ItemSetId;
	Parms.SellType = SellType;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function EventShop.EventShop_C.IsHaveCutomPartsById
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShop_C::IsHaveCutomPartsById(int32 ID, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_C", "IsHaveCutomPartsById");

	Params::EventShop_C_IsHaveCutomPartsById Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}

}

