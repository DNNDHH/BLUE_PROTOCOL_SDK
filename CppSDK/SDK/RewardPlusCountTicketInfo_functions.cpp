#pragma once

 

// Package: RewardPlusCountTicketInfo

#include "Basic.hpp"

#include "RewardPlusCountTicketInfo_classes.hpp"
#include "RewardPlusCountTicketInfo_parameters.hpp"


namespace SDK
{

// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.ExecuteUbergraph_RewardPlusCountTicketInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPlusCountTicketInfo_C::ExecuteUbergraph_RewardPlusCountTicketInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "ExecuteUbergraph_RewardPlusCountTicketInfo");

	Params::RewardPlusCountTicketInfo_C_ExecuteUbergraph_RewardPlusCountTicketInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.OnRecoverRewardPlusCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRecoverRewardPlusCountResult         Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPlusCountTicketInfo_C::OnRecoverRewardPlusCount(ESBRecoverRewardPlusCountResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "OnRecoverRewardPlusCount");

	Params::RewardPlusCountTicketInfo_C_OnRecoverRewardPlusCount Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.BndEvt__RewardPlusCountTicketInfo_CmnBtn16Ticket_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void URewardPlusCountTicketInfo_C::BndEvt__RewardPlusCountTicketInfo_CmnBtn16Ticket_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "BndEvt__RewardPlusCountTicketInfo_CmnBtn16Ticket_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URewardPlusCountTicketInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetCountValueCurrent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardPlusCountTicketInfo_C::SetCountValueCurrent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "SetCountValueCurrent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetCountValueLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardPlusCountTicketInfo_C::SetCountValueLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "SetCountValueLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetTicketValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardPlusCountTicketInfo_C::SetTicketValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "SetTicketValue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetColorRedIfZero
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPlusCountTicketInfo_C::SetColorRedIfZero(class UTextBlock* Text, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "SetColorRedIfZero");

	Params::RewardPlusCountTicketInfo_C_SetColorRedIfZero Parms{};

	Parms.Text = Text;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.Get_ImageTicketIcon_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* URewardPlusCountTicketInfo_C::Get_ImageTicketIcon_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "Get_ImageTicketIcon_ToolTipWidget_0");

	Params::RewardPlusCountTicketInfo_C_Get_ImageTicketIcon_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetHUDMode
// (Public, BlueprintCallable, BlueprintEvent)

void URewardPlusCountTicketInfo_C::SetHUDMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "SetHUDMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.Get_ImageSeparation_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* URewardPlusCountTicketInfo_C::Get_ImageSeparation_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "Get_ImageSeparation_ToolTipWidget_0");

	Params::RewardPlusCountTicketInfo_C_Get_ImageSeparation_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetupToolTip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardPlusCountTicketInfo_C::SetupToolTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "SetupToolTip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.SetEnableBtn16Ticket
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardPlusCountTicketInfo_C::SetEnableBtn16Ticket()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "SetEnableBtn16Ticket");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.GetCountValueLimit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   CountValueLimit                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPlusCountTicketInfo_C::GetCountValueLimit(int32* CountValueLimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "GetCountValueLimit");

	Params::RewardPlusCountTicketInfo_C_GetCountValueLimit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CountValueLimit != nullptr)
		*CountValueLimit = Parms.CountValueLimit;
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.UpdateValue
// (Public, BlueprintCallable, BlueprintEvent)

void URewardPlusCountTicketInfo_C::UpdateValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "UpdateValue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C.UpdateSeasonPassInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewardPlusCountTicketInfo_C::UpdateSeasonPassInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPlusCountTicketInfo_C", "UpdateSeasonPassInfo");

	UObject::ProcessEvent(Func, nullptr);
}

}

