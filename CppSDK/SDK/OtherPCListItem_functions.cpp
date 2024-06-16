#pragma once

 

// Package: OtherPCListItem

#include "Basic.hpp"

#include "OtherPCListItem_classes.hpp"
#include "OtherPCListItem_parameters.hpp"


namespace SDK
{

// Function OtherPCListItem.OtherPCListItem_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCListItem_C::OnClick__DelegateSignature(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListItem_C", "OnClick__DelegateSignature");

	Params::OtherPCListItem_C_OnClick__DelegateSignature Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListItem.OtherPCListItem_C.ExecuteUbergraph_OtherPCListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCListItem_C::ExecuteUbergraph_OtherPCListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListItem_C", "ExecuteUbergraph_OtherPCListItem");

	Params::OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListItem.OtherPCListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCListItem_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListItem_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListItem.OtherPCListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCListItem_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListItem_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListItem.OtherPCListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCListItem_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListItem_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListItem.OtherPCListItem_C.Set Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBTensionTagType                       TensionTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASBPlayerState*                   OtherPlayerState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCListItem_C::Set_Info(const class FString& Param_Name, ESBTensionTagType TensionTag, class ASBPlayerState* OtherPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListItem_C", "Set Info");

	Params::OtherPCListItem_C_Set_Info Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.TensionTag = TensionTag;
	Parms.OtherPlayerState = OtherPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListItem.OtherPCListItem_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCListItem_C::SetEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListItem_C", "SetEnable");

	Params::OtherPCListItem_C_SetEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListItem.OtherPCListItem_C.GetPlayerState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerState*                   OutPlayerState                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCListItem_C::GetPlayerState(class ASBPlayerState** OutPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListItem_C", "GetPlayerState");

	Params::OtherPCListItem_C_GetPlayerState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPlayerState != nullptr)
		*OutPlayerState = Parms.OutPlayerState;
}

}

