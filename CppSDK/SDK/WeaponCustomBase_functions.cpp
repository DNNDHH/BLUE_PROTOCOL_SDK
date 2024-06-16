#pragma once

 

// Package: WeaponCustomBase

#include "Basic.hpp"

#include "WeaponCustomBase_classes.hpp"
#include "WeaponCustomBase_parameters.hpp"


namespace SDK
{

// Function WeaponCustomBase.WeaponCustomBase_C.ExecuteUbergraph_WeaponCustomBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomBase_C::ExecuteUbergraph_WeaponCustomBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "ExecuteUbergraph_WeaponCustomBase");

	Params::WeaponCustomBase_C_ExecuteUbergraph_WeaponCustomBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.RequestGetRewardBoost
// (BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::RequestGetRewardBoost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "RequestGetRewardBoost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OnRequest_GetRewardBoost_cmpl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomBase_C::OnRequest_GetRewardBoost_cmpl(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OnRequest_GetRewardBoost_cmpl");

	Params::WeaponCustomBase_C_OnRequest_GetRewardBoost_cmpl Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.CreateConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomBase_C::CreateConfirmDialog(const int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "CreateConfirmDialog");

	Params::WeaponCustomBase_C_CreateConfirmDialog Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OnCompletedConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomBase_C::OnCompletedConfirmDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OnCompletedConfirmDialog");

	Params::WeaponCustomBase_C_OnCompletedConfirmDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OnCompleteMasterFusionTicket
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::OnCompleteMasterFusionTicket(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OnCompleteMasterFusionTicket");

	Params::WeaponCustomBase_C_OnCompleteMasterFusionTicket Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OnCompleteMasterFusionCost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::OnCompleteMasterFusionCost(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OnCompleteMasterFusionCost");

	Params::WeaponCustomBase_C_OnCompleteMasterFusionCost Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.RequestMasterData
// (BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::RequestMasterData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "RequestMasterData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.DeregisterESCKey
// (BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::DeregisterESCKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "DeregisterESCKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.RegisterESCKey
// (BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::RegisterESCKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "RegisterESCKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OnPressESCKey
// (BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::OnPressESCKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OnPressESCKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.UnbindOnCompleteMasterDataLoad
// (BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::UnbindOnCompleteMasterDataLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "UnbindOnCompleteMasterDataLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.BindOnCompleteMasterDataLoad
// (BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::BindOnCompleteMasterDataLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "BindOnCompleteMasterDataLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.CompleteMasterData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::CompleteMasterData(bool IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "CompleteMasterData");

	Params::WeaponCustomBase_C_CompleteMasterData Parms{};

	Parms.IsSuccess = IsSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.CompletedRewardBoost
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomBase_C::CompletedRewardBoost(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "CompletedRewardBoost");

	Params::WeaponCustomBase_C_CompletedRewardBoost Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.SetEnableDecide
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::SetEnableDecide(bool InEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "SetEnableDecide");

	Params::WeaponCustomBase_C_SetEnableDecide Parms{};

	Parms.InEnabled = InEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleWeaponStatusWindow
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::SetVisibleWeaponStatusWindow(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "SetVisibleWeaponStatusWindow");

	Params::WeaponCustomBase_C_SetVisibleWeaponStatusWindow Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleTokenBox
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::SetVisibleTokenBox(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "SetVisibleTokenBox");

	Params::WeaponCustomBase_C_SetVisibleTokenBox Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleInfomation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::SetVisibleInfomation(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "SetVisibleInfomation");

	Params::WeaponCustomBase_C_SetVisibleInfomation Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleDecide
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::SetVisibleDecide(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "SetVisibleDecide");

	Params::WeaponCustomBase_C_SetVisibleDecide Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleBlocker
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::SetVisibleBlocker(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "SetVisibleBlocker");

	Params::WeaponCustomBase_C_SetVisibleBlocker Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleLoading
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::SetVisibleLoading(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "SetVisibleLoading");

	Params::WeaponCustomBase_C_SetVisibleLoading Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleSuccess
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::SetVisibleSuccess(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "SetVisibleSuccess");

	Params::WeaponCustomBase_C_SetVisibleSuccess Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.SetVisibleResult
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomBase_C::SetVisibleResult(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "SetVisibleResult");

	Params::WeaponCustomBase_C_SetVisibleResult Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OpenSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::OpenSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OpenSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OpenResult
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::OpenResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OpenResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.FinishedSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::FinishedSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "FinishedSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.CreateDialog
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBP_Dialog_C*                     OutDialog                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomBase_C::CreateDialog(const class FText& Message, class UBP_Dialog_C** OutDialog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "CreateDialog");

	Params::WeaponCustomBase_C_CreateDialog Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);

	if (OutDialog != nullptr)
		*OutDialog = Parms.OutDialog;
}


// Function WeaponCustomBase.WeaponCustomBase_C.CreateDialogwithDelegate
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TDelegate<void(EDialogResult Result)>   End_Dynamic_Delegate                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UBP_Dialog_C*                     OutDialog                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomBase_C::CreateDialogwithDelegate(const class FText& Message, TDelegate<void(EDialogResult Result)> End_Dynamic_Delegate, class UBP_Dialog_C** OutDialog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "CreateDialogwithDelegate");

	Params::WeaponCustomBase_C_CreateDialogwithDelegate Parms{};

	Parms.Message = std::move(Message);
	Parms.End_Dynamic_Delegate = End_Dynamic_Delegate;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDialog != nullptr)
		*OutDialog = Parms.OutDialog;
}


// Function WeaponCustomBase.WeaponCustomBase_C.CreateDialogYesNo
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TDelegate<void(EDialogResult Result)>   EndDynamicDelegate                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UBP_Dialog_C*                     OutDialog                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomBase_C::CreateDialogYesNo(const class FText& Message, TDelegate<void(EDialogResult Result)> EndDynamicDelegate, class UBP_Dialog_C** OutDialog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "CreateDialogYesNo");

	Params::WeaponCustomBase_C_CreateDialogYesNo Parms{};

	Parms.Message = std::move(Message);
	Parms.EndDynamicDelegate = EndDynamicDelegate;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDialog != nullptr)
		*OutDialog = Parms.OutDialog;
}


// Function WeaponCustomBase.WeaponCustomBase_C.OnInit
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::OnInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OnInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OnTerm
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::OnTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OnTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OnRequest
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::OnRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OnRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.Reset
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.OnComplete
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomBase_C::OnComplete(int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "OnComplete");

	Params::WeaponCustomBase_C_OnComplete Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomBase.WeaponCustomBase_C.ClickedDecide
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::ClickedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "ClickedDecide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.ClickedBack
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomBase_C::ClickedBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "ClickedBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomBase.WeaponCustomBase_C.GetUseConfirmDialogText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FOwnItemInfo                     Param_SelectWeapon                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWeaponCustomBase_C::GetUseConfirmDialogText(const struct FOwnItemInfo& Param_SelectWeapon) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "GetUseConfirmDialogText");

	Params::WeaponCustomBase_C_GetUseConfirmDialogText Parms{};

	Parms.Param_SelectWeapon = std::move(Param_SelectWeapon);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WeaponCustomBase.WeaponCustomBase_C.GetTokenConfirmDialogText
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWeaponCustomBase_C::GetTokenConfirmDialogText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomBase_C", "GetTokenConfirmDialogText");

	Params::WeaponCustomBase_C_GetTokenConfirmDialogText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

