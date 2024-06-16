#pragma once

 

// Package: BP_RsDialogManager

#include "Basic.hpp"

#include "BP_RsDialogManager_classes.hpp"
#include "BP_RsDialogManager_parameters.hpp"


namespace SDK
{

// Function BP_RsDialogManager.BP_RsDialogManager_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogType                           RsDialogType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERsDialogButtonType                     ClickedButtonType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::OnButtonClicked__DelegateSignature(ERsDialogType RsDialogType, ERsDialogButtonType ClickedButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "OnButtonClicked__DelegateSignature");

	Params::BP_RsDialogManager_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.RsDialogType = RsDialogType;
	Parms.ClickedButtonType = ClickedButtonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.OnUseCoupon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CouponCode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::OnUseCoupon__DelegateSignature(const class FString& CouponCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "OnUseCoupon__DelegateSignature");

	Params::BP_RsDialogManager_C_OnUseCoupon__DelegateSignature Parms{};

	Parms.CouponCode = std::move(CouponCode);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ExecuteUbergraph_BP_RsDialogManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::ExecuteUbergraph_BP_RsDialogManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ExecuteUbergraph_BP_RsDialogManager");

	Params::BP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_Btn_Commerce_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialogManager_Btn_Commerce_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialogManager_Btn_Commerce_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.OnCloseDialog
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::OnCloseDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "OnCloseDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.RegistInput
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::RegistInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "RegistInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialogManager_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialogManager_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.CheckEndAnimIn_Event
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::CheckEndAnimIn_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "CheckEndAnimIn_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.SetSeasonPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::SetSeasonPoint(int32 SP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "SetSeasonPoint");

	Params::BP_RsDialogManager_C_SetSeasonPoint Parms{};

	Parms.SP = SP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.SetBPPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::SetBPPoint(int32 BP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "SetBPPoint");

	Params::BP_RsDialogManager_C_SetBPPoint Parms{};

	Parms.BP = BP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.SetRoseOrb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Free                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Paid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        FreeExpired                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        PaidExpired                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::SetRoseOrb(int32 Free, int32 Paid, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "SetRoseOrb");

	Params::BP_RsDialogManager_C_SetRoseOrb Parms{};

	Parms.Free = Free;
	Parms.Paid = Paid;
	Parms.FreeExpired = std::move(FreeExpired);
	Parms.PaidExpired = std::move(PaidExpired);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.NextDialog_Event
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::NextDialog_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "NextDialog_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.JumpShopMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       Shop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::JumpShopMenu(ESBRmShopMenuType Shop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "JumpShopMenu");

	Params::BP_RsDialogManager_C_JumpShopMenu Parms{};

	Parms.Shop = Shop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_09_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__DBtn_09_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__DBtn_09_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_08_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__DBtn_08_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__DBtn_08_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.CloseDialog_Force
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::CloseDialog_Force()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "CloseDialog_Force");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "Tick");

	Params::BP_RsDialogManager_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_07_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__DBtn_07_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__DBtn_07_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.SetCommonInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogProductTitleType               ProductTilteType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ProductName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   RankFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RankTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowPurchaseNum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   PurchaseNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERsDialogPaymentType                    PaymentType01                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PurchasePrice01                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERsDialogPaymentType                    PaymentType02                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PurchasePrice02                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PaidOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RsDialogManager_C::SetCommonInfo(ERsDialogProductTitleType ProductTilteType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, bool ShowPurchaseNum, int32 PurchaseNum, ERsDialogPaymentType PaymentType01, int32 PurchasePrice01, ERsDialogPaymentType PaymentType02, int32 PurchasePrice02, bool PaidOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "SetCommonInfo");

	Params::BP_RsDialogManager_C_SetCommonInfo Parms{};

	Parms.ProductTilteType = ProductTilteType;
	Parms.ItemSetId = ItemSetId;
	Parms.ProductName = std::move(ProductName);
	Parms.RankFrom = RankFrom;
	Parms.RankTo = RankTo;
	Parms.ShowPurchaseNum = ShowPurchaseNum;
	Parms.PurchaseNum = PurchaseNum;
	Parms.PaymentType01 = PaymentType01;
	Parms.PurchasePrice01 = PurchasePrice01;
	Parms.PaymentType02 = PaymentType02;
	Parms.PurchasePrice02 = PurchasePrice02;
	Parms.PaidOnly = PaidOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.HideDialog
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::HideDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "HideDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_06_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__DBtn_06_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__DBtn_06_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_05_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__DBtn_05_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__DBtn_05_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_04_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__DBtn_04_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__DBtn_04_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__DBtn_03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__DBtn_03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_02_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__DBtn_02_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__DBtn_02_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__DBtn_01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__DBtn_01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.SwitchDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogType                           Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::SwitchDialog(ERsDialogType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "SwitchDialog");

	Params::BP_RsDialogManager_C_SwitchDialog Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_07_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__DBtn_07_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__DBtn_07_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimOut_Dialog
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::EndAnimOut_Dialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "EndAnimOut_Dialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimIn_Dialog
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::EndAnimIn_Dialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "EndAnimIn_Dialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimOut_Base
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::EndAnimOut_Base()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "EndAnimOut_Base");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimIn_Base
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::EndAnimIn_Base()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "EndAnimIn_Base");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.EndUI
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::EndUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "EndUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.StartUI
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::StartUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "StartUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.Show
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Caution
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::ShowDialog_Caution()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ShowDialog_Caution");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_RsDialogManager_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_RsDialogManager_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.SetDiscountRate_SeasonPass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::SetDiscountRate_SeasonPass(int32 Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "SetDiscountRate_SeasonPass");

	Params::BP_RsDialogManager_C_SetDiscountRate_SeasonPass Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.SetDiscountRate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::SetDiscountRate(int32 Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "SetDiscountRate");

	Params::BP_RsDialogManager_C_SetDiscountRate Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::BP_RsDialogManager_C_BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Purchase
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::ShowDialog_Purchase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ShowDialog_Purchase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");

	Params::BP_RsDialogManager_C_BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Payment
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::ShowDialog_Payment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ShowDialog_Payment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.PlaySE_Completed
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::PlaySE_Completed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "PlaySE_Completed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::BP_RsDialogManager_C_BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShowMsgStoreLetter                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ERsDialogCurrencyPaidType               PaidType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::ShowDialog_Completed(bool ShowMsgStoreLetter, ERsDialogCurrencyPaidType PaidType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ShowDialog_Completed");

	Params::BP_RsDialogManager_C_ShowDialog_Completed Parms{};

	Parms.ShowMsgStoreLetter = ShowMsgStoreLetter;
	Parms.PaidType = PaidType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::BP_RsDialogManager_C_BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_UseItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             EffectDescription                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RsDialogManager_C::ShowDialog_UseItem(const class FText& EffectDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ShowDialog_UseItem");

	Params::BP_RsDialogManager_C_ShowDialog_UseItem Parms{};

	Parms.EffectDescription = std::move(EffectDescription);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_BP_RsDialog_Processing_K2Node_ComponentBoundEvent_12_OnDialogEnd__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialogManager_BP_RsDialog_Processing_K2Node_ComponentBoundEvent_12_OnDialogEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialogManager_BP_RsDialog_Processing_K2Node_ComponentBoundEvent_12_OnDialogEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Processing
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::ShowDialog_Processing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ShowDialog_Processing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	Params::BP_RsDialogManager_C_BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_ErrorMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::ShowDialog_ErrorMessage(int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ShowDialog_ErrorMessage");

	Params::BP_RsDialogManager_C_ShowDialog_ErrorMessage Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::BP_RsDialogManager_C_BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_ChargeRoseOrb
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::ShowDialog_ChargeRoseOrb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ShowDialog_ChargeRoseOrb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.AddItem_LimitCondition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAchieve                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::AddItem_LimitCondition(bool IsAchieve, const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "AddItem_LimitCondition");

	Params::BP_RsDialogManager_C_AddItem_LimitCondition Parms{};

	Parms.IsAchieve = IsAchieve;
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::BP_RsDialogManager_C_BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_LimitCondition
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::ShowDialog_LimitCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ShowDialog_LimitCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           Code                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature(const class FString& Code)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature");

	Params::BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature Parms{};

	Parms.Code = std::move(Code);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::BP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_InputCoupon
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::ShowDialog_InputCoupon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ShowDialog_InputCoupon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::BP_RsDialogManager_C_BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.SetErrorMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MessageId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::SetErrorMessage(int32 MessageId, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "SetErrorMessage");

	Params::BP_RsDialogManager_C_SetErrorMessage Parms{};

	Parms.MessageId = MessageId;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.Set Shop Type
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       Param_ShopType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::Set_Shop_Type(ESBRmShopMenuType Param_ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "Set Shop Type");

	Params::BP_RsDialogManager_C_Set_Shop_Type Parms{};

	Parms.Param_ShopType = Param_ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.Set Next Dialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogType                           Param_NextDialog                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialogManager_C::Set_Next_Dialog(ERsDialogType Param_NextDialog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "Set Next Dialog");

	Params::BP_RsDialogManager_C_Set_Next_Dialog Parms{};

	Parms.Param_NextDialog = Param_NextDialog;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.SwitchNextDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::SwitchNextDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "SwitchNextDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialogManager.BP_RsDialogManager_C.ExitClickedEscBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_RsDialogManager_C::ExitClickedEscBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialogManager_C", "ExitClickedEscBtn");

	UObject::ProcessEvent(Func, nullptr);
}

}

