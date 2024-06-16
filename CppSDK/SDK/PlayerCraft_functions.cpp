#pragma once

 

// Package: PlayerCraft

#include "Basic.hpp"

#include "PlayerCraft_classes.hpp"
#include "PlayerCraft_parameters.hpp"


namespace SDK
{

// Function PlayerCraft.PlayerCraft_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCrafted                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerCraft_C::OnClose__DelegateSignature(bool IsCrafted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "OnClose__DelegateSignature");

	Params::PlayerCraft_C_OnClose__DelegateSignature Parms{};

	Parms.IsCrafted = IsCrafted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCraft.PlayerCraft_C.OnCloseAll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCrafted                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerCraft_C::OnCloseAll__DelegateSignature(bool IsCrafted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "OnCloseAll__DelegateSignature");

	Params::PlayerCraft_C_OnCloseAll__DelegateSignature Parms{};

	Parms.IsCrafted = IsCrafted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCraft.PlayerCraft_C.ExecuteUbergraph_PlayerCraft
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerCraft_C::ExecuteUbergraph_PlayerCraft(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "ExecuteUbergraph_PlayerCraft");

	Params::PlayerCraft_C_ExecuteUbergraph_PlayerCraft Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCraft.PlayerCraft_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerCraft_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerCraft.PlayerCraft_C.AdventureBoardError_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerCraft_C::AdventureBoardError_Event(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "AdventureBoardError_Event");

	Params::PlayerCraft_C_AdventureBoardError_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCraft.PlayerCraft_C.SetColorChangeMoney_����_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WhiteColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerCraft_C::SetColorChangeMoney______1(bool WhiteColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "SetColorChangeMoney_����_1");

	Params::PlayerCraft_C_SetColorChangeMoney______1 Parms{};

	Parms.WhiteColor = WhiteColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCraft.PlayerCraft_C.OnSelectRecepi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            Recepi                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UPlayerCraft_C::OnSelectRecepi(const struct FCharacterCraftRecepi& Recepi)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "OnSelectRecepi");

	Params::PlayerCraft_C_OnSelectRecepi Parms{};

	Parms.Recepi = std::move(Recepi);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCraft.PlayerCraft_C.OnMultiCompl
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCritical                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   ItemUniqueids                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   CriticalNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFail                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   TotalAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                            Criticals                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Param_SaleAmount                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_SaleProfits                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerCraft_C::OnMultiCompl(int32 ErrorCode, const bool IsCritical, const TArray<class FString>& ItemUniqueids, int32 CriticalNum, bool IsFail, int32 TotalAmount, const TArray<bool>& Criticals, const int32 Param_SaleAmount, const int32 Param_SaleProfits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "OnMultiCompl");

	Params::PlayerCraft_C_OnMultiCompl Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.IsCritical = IsCritical;
	Parms.ItemUniqueids = std::move(ItemUniqueids);
	Parms.CriticalNum = CriticalNum;
	Parms.IsFail = IsFail;
	Parms.TotalAmount = TotalAmount;
	Parms.Criticals = std::move(Criticals);
	Parms.Param_SaleAmount = Param_SaleAmount;
	Parms.Param_SaleProfits = Param_SaleProfits;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCraft.PlayerCraft_C.BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    Param_LockInput                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerCraft_C::BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature(bool Param_LockInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature");

	Params::PlayerCraft_C_BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature Parms{};

	Parms.Param_LockInput = Param_LockInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCraft.PlayerCraft_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerCraft_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerCraft.PlayerCraft_C.RepOnClose
// (BlueprintCallable, BlueprintEvent)

void UPlayerCraft_C::RepOnClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "RepOnClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerCraft.PlayerCraft_C.OnSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerCraft_C::OnSelect(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "OnSelect");

	Params::PlayerCraft_C_OnSelect Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCraft.PlayerCraft_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerCraft_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerCraft.PlayerCraft_C.AnimFinished
// (BlueprintCallable, BlueprintEvent)

void UPlayerCraft_C::AnimFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "AnimFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerCraft.PlayerCraft_C.OnComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSuccess                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsCritical                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           ItemUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   TotalAmount                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_SaleAmount                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_SaleProfits                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerCraft_C::OnComplete(int32 ErrorCode, const bool IsSuccess, const bool IsCritical, const class FString& ItemUniqueId, const int32 TotalAmount, const int32 Param_SaleAmount, const int32 Param_SaleProfits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "OnComplete");

	Params::PlayerCraft_C_OnComplete Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.IsSuccess = IsSuccess;
	Parms.IsCritical = IsCritical;
	Parms.ItemUniqueId = std::move(ItemUniqueId);
	Parms.TotalAmount = TotalAmount;
	Parms.Param_SaleAmount = Param_SaleAmount;
	Parms.Param_SaleProfits = Param_SaleProfits;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerCraft.PlayerCraft_C.Close
// (BlueprintCallable, BlueprintEvent)

void UPlayerCraft_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerCraft.PlayerCraft_C.Listen Action Close
// (BlueprintCallable, BlueprintEvent)

void UPlayerCraft_C::Listen_Action_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "Listen Action Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerCraft.PlayerCraft_C.UpdateTimeoutVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerCraft_C::UpdateTimeoutVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerCraft_C", "UpdateTimeoutVisible");

	UObject::ProcessEvent(Func, nullptr);
}

}

