#pragma once

 

// Package: MaterialButtonView

#include "Basic.hpp"

#include "MaterialButtonView_classes.hpp"
#include "MaterialButtonView_parameters.hpp"


namespace SDK
{

// Function MaterialButtonView.MaterialButtonView_C.OnReselect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMaterialButtonView_C::OnReselect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "OnReselect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MaterialButtonView.MaterialButtonView_C.ExecuteUbergraph_MaterialButtonView
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMaterialButtonView_C::ExecuteUbergraph_MaterialButtonView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "ExecuteUbergraph_MaterialButtonView");

	Params::MaterialButtonView_C_ExecuteUbergraph_MaterialButtonView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MaterialButtonView.MaterialButtonView_C.BndEvt__MaterialButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UMaterialButtonView_C::BndEvt__MaterialButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "BndEvt__MaterialButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MaterialButtonView.MaterialButtonView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMaterialButtonView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MaterialButtonView.MaterialButtonView_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMaterialButtonView_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MaterialButtonView.MaterialButtonView_C.InitializeTickets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMaterialButtonView_C::InitializeTickets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "InitializeTickets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MaterialButtonView.MaterialButtonView_C.UpdateLackColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       ColorText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMaterialButtonView_C::UpdateLackColor(class UTextBlock* ColorText, bool IsLack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "UpdateLackColor");

	Params::MaterialButtonView_C_UpdateLackColor Parms{};

	Parms.ColorText = ColorText;
	Parms.IsLack = IsLack;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MaterialButtonView.MaterialButtonView_C.SetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_TargetItem                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FOwnItemInfo>             Param_GridView                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Param_bUseTicket                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMaterialButtonView_C::SetData(const struct FOwnItemInfo& Param_TargetItem, TArray<struct FOwnItemInfo>& Param_GridView, bool Param_bUseTicket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "SetData");

	Params::MaterialButtonView_C_SetData Parms{};

	Parms.Param_TargetItem = std::move(Param_TargetItem);
	Parms.Param_GridView = std::move(Param_GridView);
	Parms.Param_bUseTicket = Param_bUseTicket;

	UObject::ProcessEvent(Func, &Parms);

	Param_GridView = std::move(Parms.Param_GridView);
}


// Function MaterialButtonView.MaterialButtonView_C.UpdateDiscountColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       _____                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDiscount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMaterialButtonView_C::UpdateDiscountColor(class UTextBlock* _____, bool* IsDiscount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "UpdateDiscountColor");

	Params::MaterialButtonView_C_UpdateDiscountColor Parms{};

	Parms._____ = _____;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDiscount != nullptr)
		*IsDiscount = Parms.IsDiscount;
}


// Function MaterialButtonView.MaterialButtonView_C.GetCalculatedItemNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   BaseAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SupportItemId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CalculatedAmount                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMaterialButtonView_C::GetCalculatedItemNum(int32 BaseAmount, int32 SupportItemId, int32* CalculatedAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "GetCalculatedItemNum");

	Params::MaterialButtonView_C_GetCalculatedItemNum Parms{};

	Parms.BaseAmount = BaseAmount;
	Parms.SupportItemId = SupportItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (CalculatedAmount != nullptr)
		*CalculatedAmount = Parms.CalculatedAmount;
}


// Function MaterialButtonView.MaterialButtonView_C.CalclateRewardBoostSupportItemNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   BaseAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SupportItemId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CalculatedAmount                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMaterialButtonView_C::CalclateRewardBoostSupportItemNum(int32 BaseAmount, int32 SupportItemId, int32* CalculatedAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "CalclateRewardBoostSupportItemNum");

	Params::MaterialButtonView_C_CalclateRewardBoostSupportItemNum Parms{};

	Parms.BaseAmount = BaseAmount;
	Parms.SupportItemId = SupportItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (CalculatedAmount != nullptr)
		*CalculatedAmount = Parms.CalculatedAmount;
}


// Function MaterialButtonView.MaterialButtonView_C.GetUseMoney
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Money                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMaterialButtonView_C::GetUseMoney(int32* Money) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MaterialButtonView_C", "GetUseMoney");

	Params::MaterialButtonView_C_GetUseMoney Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Money != nullptr)
		*Money = Parms.Money;
}

}

