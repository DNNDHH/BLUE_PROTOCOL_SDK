#pragma once

 

// Package: GashaShopSubWindow

#include "Basic.hpp"

#include "GashaShopSubWindow_classes.hpp"
#include "GashaShopSubWindow_parameters.hpp"


namespace SDK
{

// Function GashaShopSubWindow.GashaShopSubWindow_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGashaShopSubWindow_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.OnExecution__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBGashaTickets                  TicketData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   TicketPlayCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaShopSubWindow_C::OnExecution__DelegateSignature(const struct FSBGashaTickets& TicketData, int32 TicketPlayCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "OnExecution__DelegateSignature");

	Params::GashaShopSubWindow_C_OnExecution__DelegateSignature Parms{};

	Parms.TicketData = std::move(TicketData);
	Parms.TicketPlayCount = TicketPlayCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.OnChangeSkipBtn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsSkip                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGashaShopSubWindow_C::OnChangeSkipBtn__DelegateSignature(bool Param_IsSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "OnChangeSkipBtn__DelegateSignature");

	Params::GashaShopSubWindow_C_OnChangeSkipBtn__DelegateSignature Parms{};

	Parms.Param_IsSkip = Param_IsSkip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.OnShopRoseOrbBtn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGashaShopSubWindow_C::OnShopRoseOrbBtn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "OnShopRoseOrbBtn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.OnShopBPPBtn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGashaShopSubWindow_C::OnShopBPPBtn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "OnShopBPPBtn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.ExecuteUbergraph_GashaShopSubWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaShopSubWindow_C::ExecuteUbergraph_GashaShopSubWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "ExecuteUbergraph_GashaShopSubWindow");

	Params::GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_Btn_Commerce_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_Btn_Commerce_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__GashaShopSubWindow_Btn_Commerce_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_CloseBtnLackOfTickets_1_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_CloseBtnLackOfTickets_1_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__GashaShopSubWindow_CloseBtnLackOfTickets_1_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_Btn_Exit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_Btn_Exit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__GashaShopSubWindow_Btn_Exit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGashaShopSubWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.OnTicketGashaLever
// (BlueprintCallable, BlueprintEvent)

void UGashaShopSubWindow_C::OnTicketGashaLever()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "OnTicketGashaLever");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_8_OnBPPointClicked__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_8_OnBPPointClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_8_OnBPPointClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_0_OnRoseOrbClicked__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_0_OnRoseOrbClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_0_OnRoseOrbClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.SelectTicketAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBGashaTickets                  TicketData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaShopSubWindow_C::SelectTicketAnimFinished(const struct FSBGashaTickets& TicketData, int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "SelectTicketAnimFinished");

	Params::GashaShopSubWindow_C_SelectTicketAnimFinished Parms{};

	Parms.TicketData = std::move(TicketData);
	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_7_EventRotateAnimFinished__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__GashaLever_K2Node_ComponentBoundEvent_7_EventRotateAnimFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__GashaLever_K2Node_ComponentBoundEvent_7_EventRotateAnimFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__CloseBtnLackOfTickets_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__CloseBtnLackOfTickets_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__CloseBtnLackOfTickets_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__Btn_Off_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__Btn_Off_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__Btn_Off_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__Btn_On_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__Btn_On_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__Btn_On_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UGashaShopSubWindow_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGashaShopSubWindow_C::BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.Close
// (BlueprintCallable, BlueprintEvent)

void UGashaShopSubWindow_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGashaShopSubWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBGashaInfo                     Param_GashaInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature(const struct FSBGashaInfo& Param_GashaInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature");

	Params::GashaShopSubWindow_C_BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature Parms{};

	Parms.Param_GashaInfo = std::move(Param_GashaInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.StepUpConstruct
// (BlueprintCallable, BlueprintEvent)

void UGashaShopSubWindow_C::StepUpConstruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "StepUpConstruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.Update Product List
// (Public, BlueprintCallable, BlueprintEvent)

void UGashaShopSubWindow_C::Update_Product_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "Update Product List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.Set Info
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBGashaReward>           InRewardList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGashaShopSubWindow_C::Set_Info(TArray<struct FSBGashaReward>& InRewardList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "Set Info");

	Params::GashaShopSubWindow_C_Set_Info Parms{};

	Parms.InRewardList = std::move(InRewardList);

	UObject::ProcessEvent(Func, &Parms);

	InRewardList = std::move(Parms.InRewardList);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.SetExecutionInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTickets                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InTitleName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBGashaPurchaseType                    Param_PurchaseType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Price                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBGashaPrices                   GashaPrice                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FSBGashaTickets>          GashaTickets                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InitSkip                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Gender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PaidOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGashaShopSubWindow_C::SetExecutionInfo(bool IsTickets, const class FString& InTitleName, ESBGashaPurchaseType Param_PurchaseType, int32 Amount, int32 Price, const struct FSBGashaPrices& GashaPrice, TArray<struct FSBGashaTickets>& GashaTickets, bool InitSkip, int32 Gender, bool PaidOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "SetExecutionInfo");

	Params::GashaShopSubWindow_C_SetExecutionInfo Parms{};

	Parms.IsTickets = IsTickets;
	Parms.InTitleName = std::move(InTitleName);
	Parms.Param_PurchaseType = Param_PurchaseType;
	Parms.Amount = Amount;
	Parms.Price = Price;
	Parms.GashaPrice = std::move(GashaPrice);
	Parms.GashaTickets = std::move(GashaTickets);
	Parms.InitSkip = InitSkip;
	Parms.Gender = Gender;
	Parms.PaidOnly = PaidOnly;

	UObject::ProcessEvent(Func, &Parms);

	GashaTickets = std::move(Parms.GashaTickets);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.SelectTicket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBGashaTickets                  TicketData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaShopSubWindow_C::SelectTicket(const struct FSBGashaTickets& TicketData, int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "SelectTicket");

	Params::GashaShopSubWindow_C_SelectTicket Parms{};

	Parms.TicketData = std::move(TicketData);
	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.SetWarningComment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GashaId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGashaShopSubWindow_C::SetWarningComment(const class FString& GashaId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "SetWarningComment");

	Params::GashaShopSubWindow_C_SetWarningComment Parms{};

	Parms.GashaId = std::move(GashaId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.Set Credit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Price                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBGashaCurrencyType                    CurrencyType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PaidOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGashaShopSubWindow_C::Set_Credit(int32 Price, ESBGashaCurrencyType CurrencyType, bool PaidOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "Set Credit");

	Params::GashaShopSubWindow_C_Set_Credit Parms{};

	Parms.Price = Price;
	Parms.CurrencyType = CurrencyType;
	Parms.PaidOnly = PaidOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaShopSubWindow.GashaShopSubWindow_C.Update Warning Comment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGashaShopSubWindow_C::Update_Warning_Comment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaShopSubWindow_C", "Update Warning Comment");

	UObject::ProcessEvent(Func, nullptr);
}

}

