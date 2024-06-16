#pragma once

 

// Package: RmShopMenu

#include "Basic.hpp"

#include "RmShopMenu_classes.hpp"
#include "RmShopMenu_parameters.hpp"


namespace SDK
{

// Function RmShopMenu.RmShopMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnCommandMenuVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_C::OnCommandMenuVisible__DelegateSignature(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnCommandMenuVisible__DelegateSignature");

	Params::RmShopMenu_C_OnCommandMenuVisible__DelegateSignature Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnDialogButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogType                           DialogType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERsDialogButtonType                     ButtonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::OnDialogButtonClicked__DelegateSignature(ERsDialogType DialogType, ERsDialogButtonType ButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnDialogButtonClicked__DelegateSignature");

	Params::RmShopMenu_C_OnDialogButtonClicked__DelegateSignature Parms{};

	Parms.DialogType = DialogType;
	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnDialogUseCoupon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CouponCode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void URmShopMenu_C::OnDialogUseCoupon__DelegateSignature(const class FString& CouponCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnDialogUseCoupon__DelegateSignature");

	Params::RmShopMenu_C_OnDialogUseCoupon__DelegateSignature Parms{};

	Parms.CouponCode = std::move(CouponCode);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.ExecuteUbergraph_RmShopMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::ExecuteUbergraph_RmShopMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ExecuteUbergraph_RmShopMenu");

	Params::RmShopMenu_C_ExecuteUbergraph_RmShopMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnSubMenuTermReady_RoPurchaseEx
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnSubMenuTermReady_RoPurchaseEx()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnSubMenuTermReady_RoPurchaseEx");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnUpdateSeasonPassAnyInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::OnUpdateSeasonPassAnyInfo(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnUpdateSeasonPassAnyInfo");

	Params::RmShopMenu_C_OnUpdateSeasonPassAnyInfo Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.ForceClose
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::ForceClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ForceClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopErrorStatus                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::CustomEvent_1(const ESBRmShopErrorStatus Result, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "CustomEvent_1");

	Params::RmShopMenu_C_CustomEvent_1 Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.CreateMaintenanceALL
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::CreateMaintenanceALL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "CreateMaintenanceALL");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::CustomEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "CustomEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URmShopMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnSet_BirthdayInfo
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnSet_BirthdayInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnSet_BirthdayInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnRegist_BirthdayInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Year                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Month                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::OnRegist_BirthdayInfo(int32 Year, int32 Month)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnRegist_BirthdayInfo");

	Params::RmShopMenu_C_OnRegist_BirthdayInfo Parms{};

	Parms.Year = Year;
	Parms.Month = Month;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnEndOutAnim
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnEndOutAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnEndOutAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnEndInAnim
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnEndInAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnEndInAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnUseCoupon_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CouponCode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void URmShopMenu_C::OnUseCoupon_Event(const class FString& CouponCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnUseCoupon_Event");

	Params::RmShopMenu_C_OnUseCoupon_Event Parms{};

	Parms.CouponCode = std::move(CouponCode);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnButtonClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogType                           DialogType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERsDialogButtonType                     ButtonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::OnButtonClicked_Event(ERsDialogType DialogType, ERsDialogButtonType ButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnButtonClicked_Event");

	Params::RmShopMenu_C_OnButtonClicked_Event Parms{};

	Parms.DialogType = DialogType;
	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnGetCryptocurrency_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCryptoCurrency                Cryptocurrency                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void URmShopMenu_C::OnGetCryptocurrency_Event(const bool Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnGetCryptocurrency_Event");

	Params::RmShopMenu_C_OnGetCryptocurrency_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.Cryptocurrency = std::move(Cryptocurrency);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnAnimeEnd_MenuIn
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnAnimeEnd_MenuIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnAnimeEnd_MenuIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnCloseShopMenu
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnCloseShopMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnCloseShopMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnEndRmShopMenu_Event
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnEndRmShopMenu_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnEndRmShopMenu_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_11_EventClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_11_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_11_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URmShopMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.DoClose_ExWindow
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::DoClose_ExWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "DoClose_ExWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnRequestDel_BpHistory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHistoryType                          Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::OnRequestDel_BpHistory(ESBHistoryType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnRequestDel_BpHistory");

	Params::RmShopMenu_C_OnRequestDel_BpHistory Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnRequest_BpHistory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHistoryType                          Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Year                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Month                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::OnRequest_BpHistory(ESBHistoryType Type, int32 Year, int32 Month, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnRequest_BpHistory");

	Params::RmShopMenu_C_OnRequest_BpHistory Parms{};

	Parms.Type = Type;
	Parms.Year = Year;
	Parms.Month = Month;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnClose_BpHistory
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnClose_BpHistory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnClose_BpHistory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__RmShopMenu_RmShopMenu_MenuItem3_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__RmShopMenu_RmShopMenu_MenuItem3_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__RmShopMenu_RmShopMenu_MenuItem3_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.SwitchExtraWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       NextShop                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SwitchExtraWindow(ESBRmShopMenuType NextShop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SwitchExtraWindow");

	Params::RmShopMenu_C_SwitchExtraWindow Parms{};

	Parms.NextShop = NextShop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.CloseExtraWindow
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::CloseExtraWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "CloseExtraWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OpenExtraWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ExtraType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::OpenExtraWindow(ESBRmShopMenuType ExtraType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OpenExtraWindow");

	Params::RmShopMenu_C_OpenExtraWindow Parms{};

	Parms.ExtraType = ExtraType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnRsDialogManagerCloseReady
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnRsDialogManagerCloseReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnRsDialogManagerCloseReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnSubDialogCloseReady
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnSubDialogCloseReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnSubDialogCloseReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.DialogOpen_Certification
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::DialogOpen_Certification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "DialogOpen_Certification");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.SetEscIconVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_C::SetEscIconVisibility(bool IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetEscIconVisibility");

	Params::RmShopMenu_C_SetEscIconVisibility Parms{};

	Parms.IsShow = IsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.SetCertificationButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SetCertificationButton(ESBRmShopMenuType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetCertificationButton");

	Params::RmShopMenu_C_SetCertificationButton Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.SetCommerceButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SetCommerceButton(ESBRmShopMenuType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetCommerceButton");

	Params::RmShopMenu_C_SetCommerceButton Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.SetBpHistoryButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SetBpHistoryButton(ESBRmShopMenuType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetBpHistoryButton");

	Params::RmShopMenu_C_SetBpHistoryButton Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.SetSubButtonVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SetSubButtonVisibility(ESBRmShopMenuType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetSubButtonVisibility");

	Params::RmShopMenu_C_SetSubButtonVisibility Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_BpHistory_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__MenuItem2_BpHistory_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__MenuItem2_BpHistory_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.SetRoHistoryButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SetRoHistoryButton(ESBRmShopMenuType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetRoHistoryButton");

	Params::RmShopMenu_C_SetRoHistoryButton Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnEndInAnim_Event
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnEndInAnim_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnEndInAnim_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnSubMenuTermReady
// (Event, Public, BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OnSubMenuTermReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnSubMenuTermReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPRP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__Btn_Shop_SPRP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__Btn_Shop_SPRP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_History_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__MenuItem2_History_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__MenuItem2_History_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_Certification_K2Node_ComponentBoundEvent_17_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__MenuItem2_Certification_K2Node_ComponentBoundEvent_17_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__MenuItem2_Certification_K2Node_ComponentBoundEvent_17_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_Commerce_K2Node_ComponentBoundEvent_16_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__MenuItem2_Commerce_K2Node_ComponentBoundEvent_16_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__MenuItem2_Commerce_K2Node_ComponentBoundEvent_16_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.Close_Event
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::Close_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "Close_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OpenHistoryWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHistoryType                          Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::OpenHistoryWindow(ESBHistoryType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OpenHistoryWindow");

	Params::RmShopMenu_C_OpenHistoryWindow Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__BpCertification_K2Node_ComponentBoundEvent_12_OnClose__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__BpCertification_K2Node_ComponentBoundEvent_12_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__BpCertification_K2Node_ComponentBoundEvent_12_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Year                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Month                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature(int32 Year, int32 Month)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature");

	Params::RmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature Parms{};

	Parms.Year = Year;
	Parms.Month = Month;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OpenCertWindow
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::OpenCertWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OpenCertWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.StartChildShopMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::StartChildShopMenu(ESBRmShopMenuType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "StartChildShopMenu");

	Params::RmShopMenu_C_StartChildShopMenu Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.TryStartShopMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsReload                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_C::TryStartShopMenu(ESBRmShopMenuType ShopType, bool IsReload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "TryStartShopMenu");

	Params::RmShopMenu_C_TryStartShopMenu Parms{};

	Parms.ShopType = ShopType;
	Parms.IsReload = IsReload;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPS_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__Btn_Shop_SPS_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__Btn_Shop_SPS_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__Btn_Shop_SPP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__Btn_Shop_SPP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_Gasya_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__Btn_Shop_Gasya_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__Btn_Shop_Gasya_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_BPPS_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__Btn_Shop_BPPS_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__Btn_Shop_BPPS_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_BPPE_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__Btn_Shop_BPPE_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__Btn_Shop_BPPE_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_ROS_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__Btn_Shop_ROS_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__Btn_Shop_ROS_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_ROP_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_C::BndEvt__Btn_Shop_ROP_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "BndEvt__Btn_Shop_ROP_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.LanchWebBrowser
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCashExchangeType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::LanchWebBrowser(ESBCashExchangeType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "LanchWebBrowser");

	Params::RmShopMenu_C_LanchWebBrowser Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.GetHistoryExpired_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBHistoryExpired                HistoryExpired                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void URmShopMenu_C::GetHistoryExpired_Event(const bool Result, const int32 RetCode, const struct FSBHistoryExpired& HistoryExpired)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "GetHistoryExpired_Event");

	Params::RmShopMenu_C_GetHistoryExpired_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.HistoryExpired = std::move(HistoryExpired);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.Request_GetHistoryExpired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHistoryType                          Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::Request_GetHistoryExpired(ESBHistoryType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "Request_GetHistoryExpired");

	Params::RmShopMenu_C_Request_GetHistoryExpired Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnGetHistory_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBCashHistory>           HistoryData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URmShopMenu_C::OnGetHistory_Event(const bool Result, const int32 RetCode, const TArray<struct FSBCashHistory>& HistoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnGetHistory_Event");

	Params::RmShopMenu_C_OnGetHistory_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.HistoryData = std::move(HistoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.Request_GetHistory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHistoryType                          Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Year                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Month                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::Request_GetHistory(ESBHistoryType Type, int32 Year, int32 Month, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "Request_GetHistory");

	Params::RmShopMenu_C_Request_GetHistory Parms{};

	Parms.Type = Type;
	Parms.Year = Year;
	Parms.Month = Month;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnCertification_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::OnCertification_Event(const bool Result, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnCertification_Event");

	Params::RmShopMenu_C_OnCertification_Event Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.Request_Certification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Year                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Month                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::Request_Certification(int32 Year, int32 Month)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "Request_Certification");

	Params::RmShopMenu_C_Request_Certification Parms{};

	Parms.Year = Year;
	Parms.Month = Month;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.SetDiscountRate_SeasonPass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SetDiscountRate_SeasonPass(int32 Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetDiscountRate_SeasonPass");

	Params::RmShopMenu_C_SetDiscountRate_SeasonPass Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.SetSeasonPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SetSeasonPoint(int32 SP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetSeasonPoint");

	Params::RmShopMenu_C_SetSeasonPoint Parms{};

	Parms.SP = SP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.SetBPPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SetBPPoint(int32 BP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetBPPoint");

	Params::RmShopMenu_C_SetBPPoint Parms{};

	Parms.BP = BP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.SetRoseOrb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Free                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Paid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        FreeExpired                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        PaidExpired                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SetRoseOrb(int32 Free, int32 Paid, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetRoseOrb");

	Params::RmShopMenu_C_SetRoseOrb Parms{};

	Parms.Free = Free;
	Parms.Paid = Paid;
	Parms.FreeExpired = std::move(FreeExpired);
	Parms.PaidExpired = std::move(PaidExpired);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.SetDiscountRate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SetDiscountRate(int32 Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetDiscountRate");

	Params::RmShopMenu_C_SetDiscountRate Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.ShowDialog_Caution
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::ShowDialog_Caution()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ShowDialog_Caution");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.ShowDialog_ChargeRoseOrb
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::ShowDialog_ChargeRoseOrb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ShowDialog_ChargeRoseOrb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.ShowDialog_InputCoupon
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::ShowDialog_InputCoupon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ShowDialog_InputCoupon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.AddItem_LimitCondition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAchieve                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void URmShopMenu_C::AddItem_LimitCondition(bool IsAchieve, const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "AddItem_LimitCondition");

	Params::RmShopMenu_C_AddItem_LimitCondition Parms{};

	Parms.IsAchieve = IsAchieve;
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.ShowDialog_LimitCondition
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::ShowDialog_LimitCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ShowDialog_LimitCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.CloseDialog
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::CloseDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "CloseDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.ShowDialog_Processing
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::ShowDialog_Processing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ShowDialog_Processing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.SetDialog_CommonInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogProductTitleType               ProductTitleType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ProductName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   RankFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RankTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowPurchaseNum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   PurchaseNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERsDialogPaymentType                    PaymentType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PurchasePrice                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PaidOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_C::SetDialog_CommonInfo(ERsDialogProductTitleType ProductTitleType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, bool ShowPurchaseNum, int32 PurchaseNum, ERsDialogPaymentType PaymentType, int32 PurchasePrice, bool PaidOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetDialog_CommonInfo");

	Params::RmShopMenu_C_SetDialog_CommonInfo Parms{};

	Parms.ProductTitleType = ProductTitleType;
	Parms.ItemSetId = ItemSetId;
	Parms.ProductName = std::move(ProductName);
	Parms.RankFrom = RankFrom;
	Parms.RankTo = RankTo;
	Parms.ShowPurchaseNum = ShowPurchaseNum;
	Parms.PurchaseNum = PurchaseNum;
	Parms.PaymentType = PaymentType;
	Parms.PurchasePrice = PurchasePrice;
	Parms.PaidOnly = PaidOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.ShowDialog_UseItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             EffectDescription                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void URmShopMenu_C::ShowDialog_UseItem(const class FText& EffectDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ShowDialog_UseItem");

	Params::RmShopMenu_C_ShowDialog_UseItem Parms{};

	Parms.EffectDescription = std::move(EffectDescription);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.ShowDialog_Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShowMsgStoreLetter                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ERsDialogCurrencyPaidType               PaidType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::ShowDialog_Completed(bool ShowMsgStoreLetter, ERsDialogCurrencyPaidType PaidType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ShowDialog_Completed");

	Params::RmShopMenu_C_ShowDialog_Completed Parms{};

	Parms.ShowMsgStoreLetter = ShowMsgStoreLetter;
	Parms.PaidType = PaidType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.ShowDialog_Payment
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::ShowDialog_Payment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ShowDialog_Payment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.ShowDialog_ErrorMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::ShowDialog_ErrorMessage(int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ShowDialog_ErrorMessage");

	Params::RmShopMenu_C_ShowDialog_ErrorMessage Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.ShowDialog_Purchase
// (BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::ShowDialog_Purchase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ShowDialog_Purchase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.OnLoaded_41D74A5F49658128DFE26A8ECAB6D644
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void URmShopMenu_C::OnLoaded_41D74A5F49658128DFE26A8ECAB6D644(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnLoaded_41D74A5F49658128DFE26A8ECAB6D644");

	Params::RmShopMenu_C_OnLoaded_41D74A5F49658128DFE26A8ECAB6D644 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void URmShopMenu_C::OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55");

	Params::RmShopMenu_C_OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.ExecSubWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOpen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_C::ExecSubWindow(bool IsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "ExecSubWindow");

	Params::RmShopMenu_C_ExecSubWindow Parms{};

	Parms.IsOpen = IsOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.GetComponentRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_C::GetComponentRef(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "GetComponentRef");

	Params::RmShopMenu_C_GetComponentRef Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function RmShopMenu.RmShopMenu_C.SelectShopBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URmShopMenu_MenuItem_C*           InShopBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SelectShopBtn(class URmShopMenu_MenuItem_C* InShopBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SelectShopBtn");

	Params::RmShopMenu_C_SelectShopBtn Parms{};

	Parms.InShopBtn = InShopBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.SetCommandMenuVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisivle                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_C::SetCommandMenuVisible(bool IsVisivle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetCommandMenuVisible");

	Params::RmShopMenu_C_SetCommandMenuVisible Parms{};

	Parms.IsVisivle = IsVisivle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.InitButtonState
// (Public, BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::InitButtonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "InitButtonState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.SetBirthdayInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Year                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Month                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRegister                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_C::SetBirthdayInfo(int32 Year, int32 Month, int32 Count, bool IsRegister)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetBirthdayInfo");

	Params::RmShopMenu_C_SetBirthdayInfo Parms{};

	Parms.Year = Year;
	Parms.Month = Month;
	Parms.Count = Count;
	Parms.IsRegister = IsRegister;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.SetShopBtn_ExtraWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Open                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Close                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Swtich                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBRmShopMenuType                       NextShop                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::SetShopBtn_ExtraWindow(bool Open, bool Close, bool Swtich, ESBRmShopMenuType NextShop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetShopBtn_ExtraWindow");

	Params::RmShopMenu_C_SetShopBtn_ExtraWindow Parms{};

	Parms.Open = Open;
	Parms.Close = Close;
	Parms.Swtich = Swtich;
	Parms.NextShop = NextShop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.GetOutSiteURL
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBCashExchangeType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           URL                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void URmShopMenu_C::GetOutSiteURL(ESBCashExchangeType Type, class FString* URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "GetOutSiteURL");

	Params::RmShopMenu_C_GetOutSiteURL Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (URL != nullptr)
		*URL = std::move(Parms.URL);
}


// Function RmShopMenu.RmShopMenu_C.SetIconCaution
// (Public, BlueprintCallable, BlueprintEvent)

void URmShopMenu_C::SetIconCaution()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetIconCaution");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu.RmShopMenu_C.GetBpHistory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHistoryWindow_C*                 Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::GetBpHistory(class UHistoryWindow_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "GetBpHistory");

	Params::RmShopMenu_C_GetBpHistory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function RmShopMenu.RmShopMenu_C.GetExpiredTimeRoseOrb
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                        Date                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_C::GetExpiredTimeRoseOrb(struct FDateTime* Date)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "GetExpiredTimeRoseOrb");

	Params::RmShopMenu_C_GetExpiredTimeRoseOrb Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Date != nullptr)
		*Date = std::move(Parms.Date);
}


// Function RmShopMenu.RmShopMenu_C.SetMaskBGVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_C::SetMaskBGVisibility(bool IsVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "SetMaskBGVisibility");

	Params::RmShopMenu_C_SetMaskBGVisibility Parms{};

	Parms.IsVisibility = IsVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu.RmShopMenu_C.Set Esc Extra
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_C::Set_Esc_Extra(bool IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_C", "Set Esc Extra");

	Params::RmShopMenu_C_Set_Esc_Extra Parms{};

	Parms.IsShow = IsShow;

	UObject::ProcessEvent(Func, &Parms);
}

}

