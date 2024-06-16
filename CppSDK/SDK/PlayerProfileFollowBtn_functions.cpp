#pragma once

 

// Package: PlayerProfileFollowBtn

#include "Basic.hpp"

#include "PlayerProfileFollowBtn_classes.hpp"
#include "PlayerProfileFollowBtn_parameters.hpp"


namespace SDK
{

// Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.EventClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerProfileFollowBtn_C::EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileFollowBtn_C", "EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.ExecuteUbergraph_PlayerProfileFollowBtn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfileFollowBtn_C::ExecuteUbergraph_PlayerProfileFollowBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileFollowBtn_C", "ExecuteUbergraph_PlayerProfileFollowBtn");

	Params::PlayerProfileFollowBtn_C_ExecuteUbergraph_PlayerProfileFollowBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerProfileFollowBtn_C::BndEvt__BtnFollow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileFollowBtn_C", "BndEvt__BtnFollow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerProfileFollowBtn_C::BndEvt__BtnFollow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileFollowBtn_C", "BndEvt__BtnFollow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.BndEvt__BtnFollow_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerProfileFollowBtn_C::BndEvt__BtnFollow_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileFollowBtn_C", "BndEvt__BtnFollow_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.SetFollow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bFollow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfileFollowBtn_C::SetFollow(bool Param_bFollow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileFollowBtn_C", "SetFollow");

	Params::PlayerProfileFollowBtn_C_SetFollow Parms{};

	Parms.Param_bFollow = Param_bFollow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileFollowBtn.PlayerProfileFollowBtn_C.SetFriend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bFriend                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bDoneSend                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bCanSend                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfileFollowBtn_C::SetFriend(bool Param_bFriend, bool Param_bDoneSend, bool Param_bCanSend)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileFollowBtn_C", "SetFriend");

	Params::PlayerProfileFollowBtn_C_SetFriend Parms{};

	Parms.Param_bFriend = Param_bFriend;
	Parms.Param_bDoneSend = Param_bDoneSend;
	Parms.Param_bCanSend = Param_bCanSend;

	UObject::ProcessEvent(Func, &Parms);
}

}

