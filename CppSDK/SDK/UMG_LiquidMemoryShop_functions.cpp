#pragma once

 

// Package: UMG_LiquidMemoryShop

#include "Basic.hpp"

#include "UMG_LiquidMemoryShop_classes.hpp"
#include "UMG_LiquidMemoryShop_parameters.hpp"


namespace SDK
{

// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsLiquidMemoryUsed                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryShop_C::OnClose__DelegateSignature(bool Param_IsLiquidMemoryUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "OnClose__DelegateSignature");

	Params::UMG_LiquidMemoryShop_C_OnClose__DelegateSignature Parms{};

	Parms.Param_IsLiquidMemoryUsed = Param_IsLiquidMemoryUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.ExecuteUbergraph_UMG_LiquidMemoryShop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryShop_C::ExecuteUbergraph_UMG_LiquidMemoryShop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "ExecuteUbergraph_UMG_LiquidMemoryShop");

	Params::UMG_LiquidMemoryShop_C_ExecuteUbergraph_UMG_LiquidMemoryShop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__UMG_LiquidMemoryShop_SBButton_C_146_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryShop_C::BndEvt__UMG_LiquidMemoryShop_SBButton_C_146_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "BndEvt__UMG_LiquidMemoryShop_SBButton_C_146_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.Init
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.WidgetAnimationEvt_AnimDrink_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUMG_LiquidMemoryShop_C::WidgetAnimationEvt_AnimDrink_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "WidgetAnimationEvt_AnimDrink_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__UMG_LiquidMemoryShop_UMG_LiquidMemoryAccumlulateList_K2Node_ComponentBoundEvent_5_OnAccumulateCompleted__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryShop_C::BndEvt__UMG_LiquidMemoryShop_UMG_LiquidMemoryAccumlulateList_K2Node_ComponentBoundEvent_5_OnAccumulateCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "BndEvt__UMG_LiquidMemoryShop_UMG_LiquidMemoryAccumlulateList_K2Node_ComponentBoundEvent_5_OnAccumulateCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnPopupTokenList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LiquidMemoryId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFullCharge                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryShop_C::OnPopupTokenList(int32 LiquidMemoryId, bool IsFullCharge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "OnPopupTokenList");

	Params::UMG_LiquidMemoryShop_C_OnPopupTokenList Parms{};

	Parms.LiquidMemoryId = LiquidMemoryId;
	Parms.IsFullCharge = IsFullCharge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.GetTokenList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBTokenStates                   States                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_LiquidMemoryShop_C::GetTokenList(const struct FSBTokenStates& States)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "GetTokenList");

	Params::UMG_LiquidMemoryShop_C_GetTokenList Parms{};

	Parms.States = std::move(States);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryShop_C::BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryShop_C::BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UUMG_LiquidMemoryShop_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryShop_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnListItemPurchaseNumAddOveredMax
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::OnListItemPurchaseNumAddOveredMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "OnListItemPurchaseNumAddOveredMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.ExecOpen
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::ExecOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "ExecOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnAccumulateLiquidMemory_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBLiquidMemoryInfo>      InUpdatedLiquidMemoryInfos                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_LiquidMemoryShop_C::OnAccumulateLiquidMemory_Event(const int32 InRetCode, const TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "OnAccumulateLiquidMemory_Event");

	Params::UMG_LiquidMemoryShop_C_OnAccumulateLiquidMemory_Event Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InUpdatedLiquidMemoryInfos = std::move(InUpdatedLiquidMemoryInfos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnUseLiquidMemoryDelegate_����
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBLiquidMemoryInfo>      InUpdatedLiquidMemoryInfos                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_LiquidMemoryShop_C::OnUseLiquidMemoryDelegate_____(const int32 InRetCode, const TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "OnUseLiquidMemoryDelegate_����");

	Params::UMG_LiquidMemoryShop_C_OnUseLiquidMemoryDelegate_____ Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InUpdatedLiquidMemoryInfos = std::move(InUpdatedLiquidMemoryInfos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.EndUseLiquidMemoryYesNoDialog_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryShop_C::EndUseLiquidMemoryYesNoDialog_____(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "EndUseLiquidMemoryYesNoDialog_����");

	Params::UMG_LiquidMemoryShop_C_EndUseLiquidMemoryYesNoDialog_____ Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryShop_C::BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnDetailsCloseAnimationFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryShop_C::OnDetailsCloseAnimationFinished(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "OnDetailsCloseAnimationFinished");

	Params::UMG_LiquidMemoryShop_C_OnDetailsCloseAnimationFinished Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnListItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryShop_C::OnListItemSelected(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "OnListItemSelected");

	Params::UMG_LiquidMemoryShop_C_OnListItemSelected Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnListItemPurchaseNumSubbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryShop_C::OnListItemPurchaseNumSubbed(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "OnListItemPurchaseNumSubbed");

	Params::UMG_LiquidMemoryShop_C_OnListItemPurchaseNumSubbed Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnListItemPurchaseNumAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryShop_C::OnListItemPurchaseNumAdded(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "OnListItemPurchaseNumAdded");

	Params::UMG_LiquidMemoryShop_C_OnListItemPurchaseNumAdded Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.DoClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsLiquidMemoryUsed                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryShop_C::DoClose(bool Param_IsLiquidMemoryUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "DoClose");

	Params::UMG_LiquidMemoryShop_C_DoClose Parms{};

	Parms.Param_IsLiquidMemoryUsed = Param_IsLiquidMemoryUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryShop_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUMG_LiquidMemoryShop_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.onAnimTimer
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::OnAnimTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "onAnimTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.EndSystemMessage
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::EndSystemMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "EndSystemMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.ShowSystemMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessageText                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_LiquidMemoryShop_C::ShowSystemMessage(const class FText& InMessageText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "ShowSystemMessage");

	Params::UMG_LiquidMemoryShop_C_ShowSystemMessage Parms{};

	Parms.InMessageText = std::move(InMessageText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.OnLiquidMemoryDrinkingAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::OnLiquidMemoryDrinkingAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "OnLiquidMemoryDrinkingAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.PlayLiquidMemoryDrinkingAnimation
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::PlayLiquidMemoryDrinkingAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "PlayLiquidMemoryDrinkingAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CreateProductItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::CreateProductItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "CreateProductItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CreateItemDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::CreateItemDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "CreateItemDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.ShowLiquidMemoryDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLiquidMemoryId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InBottleNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryShop_C::ShowLiquidMemoryDetails(int32 InLiquidMemoryId, int32 InBottleNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "ShowLiquidMemoryDetails");

	Params::UMG_LiquidMemoryShop_C_ShowLiquidMemoryDetails Parms{};

	Parms.InLiquidMemoryId = InLiquidMemoryId;
	Parms.InBottleNum = InBottleNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.HideLiquidMemoryDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::HideLiquidMemoryDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "HideLiquidMemoryDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.InitProductItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::InitProductItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "InitProductItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.AddOrMinusLiquidMemoryIdAndLevelToUsingList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryShop_C::AddOrMinusLiquidMemoryIdAndLevelToUsingList(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "AddOrMinusLiquidMemoryIdAndLevelToUsingList");

	Params::UMG_LiquidMemoryShop_C_AddOrMinusLiquidMemoryIdAndLevelToUsingList Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CalculateTotalCost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::CalculateTotalCost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "CalculateTotalCost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.RandomPlayAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::RandomPlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "RandomPlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.RandomPlayAnimation2
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::RandomPlayAnimation2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "RandomPlayAnimation2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C.CalculateTotalUsingLiquidMemory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_C::CalculateTotalUsingLiquidMemory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_C", "CalculateTotalUsingLiquidMemory");

	UObject::ProcessEvent(Func, nullptr);
}

}

