#pragma once

 

// Package: PlayerProfileLikeBtn

#include "Basic.hpp"

#include "PlayerProfileLikeBtn_classes.hpp"
#include "PlayerProfileLikeBtn_parameters.hpp"


namespace SDK
{

// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.BtnEventComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerProfileLikeBtn_C::BtnEventComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileLikeBtn_C", "BtnEventComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.ExecuteUbergraph_PlayerProfileLikeBtn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfileLikeBtn_C::ExecuteUbergraph_PlayerProfileLikeBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileLikeBtn_C", "ExecuteUbergraph_PlayerProfileLikeBtn");

	Params::PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonErrorType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWarning                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsSystemMessage                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfileLikeBtn_C::SetButtonErrorType(int32 InWarning, bool InIsSystemMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileLikeBtn_C", "SetButtonErrorType");

	Params::PlayerProfileLikeBtn_C_SetButtonErrorType Parms{};

	Parms.InWarning = InWarning;
	Parms.InIsSystemMessage = InIsSystemMessage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.OnSendLikeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Warning                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfileLikeBtn_C::OnSendLikeEvent(const bool bWasSuccessful, const int32 RetCode, const int32 Warning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileLikeBtn_C", "OnSendLikeEvent");

	Params::PlayerProfileLikeBtn_C_OnSendLikeEvent Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.RetCode = RetCode;
	Parms.Warning = Warning;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SendLike
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLikeSend>                SendLikeList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerProfileLikeBtn_C::SendLike(const TArray<struct FLikeSend>& SendLikeList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileLikeBtn_C", "SendLike");

	Params::PlayerProfileLikeBtn_C_SendLike Parms{};

	Parms.SendLikeList = std::move(SendLikeList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.BndEvt__BtnLike_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerProfileLikeBtn_C::BndEvt__BtnLike_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileLikeBtn_C", "BndEvt__BtnLike_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSendLIke                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OnlineStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PSOnlyDiff                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPlayerProfileLikeBtn_C::SetData(bool IsSendLIke, int32 OnlineStatus, bool PSOnlyDiff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileLikeBtn_C", "SetData");

	Params::PlayerProfileLikeBtn_C_SetData Parms{};

	Parms.IsSendLIke = IsSendLIke;
	Parms.OnlineStatus = OnlineStatus;
	Parms.PSOnlyDiff = PSOnlyDiff;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfileLikeBtn_C::SetButtonEnable(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileLikeBtn_C", "SetButtonEnable");

	Params::PlayerProfileLikeBtn_C_SetButtonEnable Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESendLikeError                          Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfileLikeBtn_C::SetButtonType(ESendLikeError Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileLikeBtn_C", "SetButtonType");

	Params::PlayerProfileLikeBtn_C_SetButtonType Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}

}

