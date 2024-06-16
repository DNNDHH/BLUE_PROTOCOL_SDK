#pragma once

 

// Package: CraftList

#include "Basic.hpp"

#include "CraftList_classes.hpp"
#include "CraftList_parameters.hpp"


namespace SDK
{

// Function CraftList.CraftList_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCraftList_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.SelectRecepi__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            Recepi                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCraftList_C::SelectRecepi__DelegateSignature(const struct FCharacterCraftRecepi& Recepi)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "SelectRecepi__DelegateSignature");

	Params::CraftList_C_SelectRecepi__DelegateSignature Parms{};

	Parms.Recepi = std::move(Recepi);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.ChengePointValidate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCraftList_C::ChengePointValidate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "ChengePointValidate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.ShowNpcCraftBtn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftList_C::ShowNpcCraftBtn__DelegateSignature(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "ShowNpcCraftBtn__DelegateSignature");

	Params::CraftList_C_ShowNpcCraftBtn__DelegateSignature Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.ChangeTabs__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCraftList_C::ChangeTabs__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "ChangeTabs__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.SetCancelLock__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LockInput                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftList_C::SetCancelLock__DelegateSignature(bool LockInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "SetCancelLock__DelegateSignature");

	Params::CraftList_C_SetCancelLock__DelegateSignature Parms{};

	Parms.LockInput = LockInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.SetColorChangeMoney__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WhiteColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftList_C::SetColorChangeMoney__DelegateSignature(bool WhiteColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "SetColorChangeMoney__DelegateSignature");

	Params::CraftList_C_SetColorChangeMoney__DelegateSignature Parms{};

	Parms.WhiteColor = WhiteColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.ExecuteUbergraph_CraftList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::ExecuteUbergraph_CraftList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "ExecuteUbergraph_CraftList");

	Params::CraftList_C_ExecuteUbergraph_CraftList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftList_C::BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::CraftList_C_BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.OnConditionCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::OnConditionCreated(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnConditionCreated");

	Params::CraftList_C_OnConditionCreated Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.OnOverflowAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::OnOverflowAccepted(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnOverflowAccepted");

	Params::CraftList_C_OnOverflowAccepted Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.OnDialogClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::OnDialogClosed(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnDialogClosed");

	Params::CraftList_C_OnDialogClosed Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.BndEvt__CraftList_UseTokenSelector_K2Node_ComponentBoundEvent_12_OnTokenSelectUpdate__DelegateSignature
// (BlueprintEvent)

void UCraftList_C::BndEvt__CraftList_UseTokenSelector_K2Node_ComponentBoundEvent_12_OnTokenSelectUpdate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__CraftList_UseTokenSelector_K2Node_ComponentBoundEvent_12_OnTokenSelectUpdate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.OnCloseDiffDialog
// (BlueprintCallable, BlueprintEvent)

void UCraftList_C::OnCloseDiffDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnCloseDiffDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCraftList_C::BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCraftList_C::BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCraftList_C::BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.ProbabilityOnClose
// (BlueprintCallable, BlueprintEvent)

void UCraftList_C::ProbabilityOnClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "ProbabilityOnClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.ShowRateDialog
// (BlueprintCallable, BlueprintEvent)

void UCraftList_C::ShowRateDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "ShowRateDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCraftList_C::BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCraftList_C::BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.BndEvt__CraftList_SBButton_C_62_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCraftList_C::BndEvt__CraftList_SBButton_C_62_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__CraftList_SBButton_C_62_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.OnCompletGetRewardBoost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::OnCompletGetRewardBoost(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnCompletGetRewardBoost");

	Params::CraftList_C_OnCompletGetRewardBoost Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.OnCanceled
// (BlueprintCallable, BlueprintEvent)

void UCraftList_C::OnCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.OnCloseClassCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::OnCloseClassCheck(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnCloseClassCheck");

	Params::CraftList_C_OnCloseClassCheck Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.OnTokenDemanded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::OnTokenDemanded(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnTokenDemanded");

	Params::CraftList_C_OnTokenDemanded Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.OnSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::OnSelected(int32 Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnSelected");

	Params::CraftList_C_OnSelected Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.OnCompl_Multi
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCritical                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   ItemUniqueids                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   CriticalNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFail                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   TotalAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                            Criticals                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   SaleAmount                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SaleProfits                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::OnCompl_Multi(int32 ErrorCode, const bool IsCritical, const TArray<class FString>& ItemUniqueids, int32 CriticalNum, bool IsFail, int32 TotalAmount, const TArray<bool>& Criticals, const int32 SaleAmount, const int32 SaleProfits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnCompl_Multi");

	Params::CraftList_C_OnCompl_Multi Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.IsCritical = IsCritical;
	Parms.ItemUniqueids = std::move(ItemUniqueids);
	Parms.CriticalNum = CriticalNum;
	Parms.IsFail = IsFail;
	Parms.TotalAmount = TotalAmount;
	Parms.Criticals = std::move(Criticals);
	Parms.SaleAmount = SaleAmount;
	Parms.SaleProfits = SaleProfits;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.OnCompl_PlayerRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSuccess                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsCritical                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           ItemUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   TotalAmount                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SaleAmount                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SaleProfits                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::OnCompl_PlayerRequest(int32 ErrorCode, const bool IsSuccess, const bool IsCritical, const class FString& ItemUniqueId, const int32 TotalAmount, const int32 SaleAmount, const int32 SaleProfits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnCompl_PlayerRequest");

	Params::CraftList_C_OnCompl_PlayerRequest Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.IsSuccess = IsSuccess;
	Parms.IsCritical = IsCritical;
	Parms.ItemUniqueId = std::move(ItemUniqueId);
	Parms.TotalAmount = TotalAmount;
	Parms.SaleAmount = SaleAmount;
	Parms.SaleProfits = SaleProfits;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.RestSelected
// (BlueprintCallable, BlueprintEvent)

void UCraftList_C::RestSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "RestSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
// (BlueprintEvent)

void UCraftList_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Param_Filters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCraftList_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature");

	Params::CraftList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature Parms{};

	Parms.Param_Filters = std::move(Param_Filters);

	UObject::ProcessEvent(Func, &Parms);

	Param_Filters = std::move(Parms.Param_Filters);
}


// Function CraftList.CraftList_C.BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Now                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature(int32 Now)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature");

	Params::CraftList_C_BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature Parms{};

	Parms.Now = Now;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           Param_SelectedItem                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(const class FString& Param_SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature");

	Params::CraftList_C_BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.Param_SelectedItem = std::move(Param_SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.EndEasyRedayCheckYesNoDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::EndEasyRedayCheckYesNoDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "EndEasyRedayCheckYesNoDialog");

	Params::CraftList_C_EndEasyRedayCheckYesNoDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.OnSelectDifficulty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_SelectedItem                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::OnSelectDifficulty(const class FString& Param_SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnSelectDifficulty");

	Params::CraftList_C_OnSelectDifficulty Parms{};

	Parms.Param_SelectedItem = std::move(Param_SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.OnSelectRecepi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            Param_SelectRecepi                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UCraftRecepiItem_C*               Param_SelectedItem                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::OnSelectRecepi(const struct FCharacterCraftRecepi& Param_SelectRecepi, class UCraftRecepiItem_C* Param_SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "OnSelectRecepi");

	Params::CraftList_C_OnSelectRecepi Parms{};

	Parms.Param_SelectRecepi = std::move(Param_SelectRecepi);
	Parms.Param_SelectedItem = Param_SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCraftList_C::BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCraftList_C::BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCraftList_C::BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.InitList
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharacterCraftRecepi>    InputPin                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCraftList_C::InitList(const TArray<struct FCharacterCraftRecepi>& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "InitList");

	Params::CraftList_C_InitList Parms{};

	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.SetupItemList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsWeaponShowed                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftList_C::SetupItemList(bool Param_IsWeaponShowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "SetupItemList");

	Params::CraftList_C_SetupItemList Parms{};

	Parms.Param_IsWeaponShowed = Param_IsWeaponShowed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.CreateSortType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCraftList_C::CreateSortType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "CreateSortType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.FilterItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCraftList_C::FilterItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "FilterItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftList.CraftList_C.isRecepiMaterialLocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsLocked                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftList_C::IsRecepiMaterialLocked(bool* OutIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "isRecepiMaterialLocked");

	Params::CraftList_C_IsRecepiMaterialLocked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsLocked != nullptr)
		*OutIsLocked = Parms.OutIsLocked;
}


// Function CraftList.CraftList_C.ShowRedayCheckYesNoDialog
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Dialog_C*                     OutIsDialog                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::ShowRedayCheckYesNoDialog(class UBP_Dialog_C** OutIsDialog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "ShowRedayCheckYesNoDialog");

	Params::CraftList_C_ShowRedayCheckYesNoDialog Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsDialog != nullptr)
		*OutIsDialog = Parms.OutIsDialog;
}


// Function CraftList.CraftList_C.On_DifficultyDropDown_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UCraftList_C::On_DifficultyDropDown_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "On_DifficultyDropDown_GenerateWidget_0");

	Params::CraftList_C_On_DifficultyDropDown_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CraftList.CraftList_C.On_CategoryDropDown_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UCraftList_C::On_CategoryDropDown_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "On_CategoryDropDown_GenerateWidget_0");

	Params::CraftList_C_On_CategoryDropDown_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CraftList.CraftList_C.SetupCategoryList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsWeapon1                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftList_C::SetupCategoryList(bool bIsWeapon1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "SetupCategoryList");

	Params::CraftList_C_SetupCategoryList Parms{};

	Parms.bIsWeapon1 = bIsWeapon1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.GenerateSortedIndexes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharacterCraftRecepi>    Resepis                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                           Indexes                                                (Parm, OutParm)

void UCraftList_C::GenerateSortedIndexes(TArray<struct FCharacterCraftRecepi>& Resepis, TArray<int32>* Indexes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "GenerateSortedIndexes");

	Params::CraftList_C_GenerateSortedIndexes Parms{};

	Parms.Resepis = std::move(Resepis);

	UObject::ProcessEvent(Func, &Parms);

	Resepis = std::move(Parms.Resepis);

	if (Indexes != nullptr)
		*Indexes = std::move(Parms.Indexes);
}


// Function CraftList.CraftList_C.GenerateLists
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharacterCraftRecepi>    InputPin                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCraftList_C::GenerateLists(const TArray<struct FCharacterCraftRecepi>& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "GenerateLists");

	Params::CraftList_C_GenerateLists Parms{};

	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.FilterLists
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCraftList_C::FilterLists(TArray<struct FFilterGroup>& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "FilterLists");

	Params::CraftList_C_FilterLists Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
}


// Function CraftList.CraftList_C.ConvertSortType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         SaveType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECraftRecepiSortType                    UseType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::ConvertSortType(ESBItemSortType SaveType, ECraftRecepiSortType* UseType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "ConvertSortType");

	Params::CraftList_C_ConvertSortType Parms{};

	Parms.SaveType = SaveType;

	UObject::ProcessEvent(Func, &Parms);

	if (UseType != nullptr)
		*UseType = Parms.UseType;
}


// Function CraftList.CraftList_C.ConvertSaveType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECraftRecepiSortType                    UseType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         SaveType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::ConvertSaveType(ECraftRecepiSortType UseType, ESBItemSortType* SaveType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "ConvertSaveType");

	Params::CraftList_C_ConvertSaveType Parms{};

	Parms.UseType = UseType;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveType != nullptr)
		*SaveType = Parms.SaveType;
}


// Function CraftList.CraftList_C.GetLastCraftStorage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_StorageType                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::GetLastCraftStorage(int32* Param_StorageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "GetLastCraftStorage");

	Params::CraftList_C_GetLastCraftStorage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_StorageType != nullptr)
		*Param_StorageType = Parms.Param_StorageType;
}


// Function CraftList.CraftList_C.GetCraftNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::GetCraftNum(int32* Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "GetCraftNum");

	Params::CraftList_C_GetCraftNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;
}


// Function CraftList.CraftList_C.SetWeaponShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsWeaponShowed                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftList_C::SetWeaponShow(bool Param_IsWeaponShowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "SetWeaponShow");

	Params::CraftList_C_SetWeaponShow Parms{};

	Parms.Param_IsWeaponShowed = Param_IsWeaponShowed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.UpdateRatio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecepiId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftList_C::UpdateRatio(int32 RecepiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "UpdateRatio");

	Params::CraftList_C_UpdateRatio Parms{};

	Parms.RecepiId = RecepiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftList.CraftList_C.InitCheckBox
// (Public, BlueprintCallable, BlueprintEvent)

void UCraftList_C::InitCheckBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftList_C", "InitCheckBox");

	UObject::ProcessEvent(Func, nullptr);
}

}

