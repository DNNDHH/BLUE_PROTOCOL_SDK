#pragma once

 

// Package: ChatWindowTypeItem

#include "Basic.hpp"

#include "ChatWindowTypeItem_classes.hpp"
#include "ChatWindowTypeItem_parameters.hpp"


namespace SDK
{

// Function ChatWindowTypeItem.ChatWindowTypeItem_C.EventBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChatWindowTypeItem_C*            TypeItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatWindowTypeItem_C::EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindowTypeItem_C", "EventBtnClicked__DelegateSignature");

	Params::ChatWindowTypeItem_C_EventBtnClicked__DelegateSignature Parms{};

	Parms.TypeItem = TypeItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatWindowTypeItem.ChatWindowTypeItem_C.ExecuteUbergraph_ChatWindowTypeItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatWindowTypeItem_C::ExecuteUbergraph_ChatWindowTypeItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindowTypeItem_C", "ExecuteUbergraph_ChatWindowTypeItem");

	Params::ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatWindowTypeItem.ChatWindowTypeItem_C.BndEvt__ChatWindowTypeItem_Btn1_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UChatWindowTypeItem_C::BndEvt__ChatWindowTypeItem_Btn1_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindowTypeItem_C", "BndEvt__ChatWindowTypeItem_Btn1_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatWindowTypeItem.ChatWindowTypeItem_C.BndEvt__ChatWindowTypeItem_Btn1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UChatWindowTypeItem_C::BndEvt__ChatWindowTypeItem_Btn1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindowTypeItem_C", "BndEvt__ChatWindowTypeItem_Btn1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatWindowTypeItem.ChatWindowTypeItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatWindowTypeItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindowTypeItem_C", "PreConstruct");

	Params::ChatWindowTypeItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatWindowTypeItem.ChatWindowTypeItem_C.SetType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogType                          Param_InChatLogType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatWindowTypeItem_C::SetType(ESBChatLogType Param_InChatLogType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindowTypeItem_C", "SetType");

	Params::ChatWindowTypeItem_C_SetType Parms{};

	Parms.Param_InChatLogType = Param_InChatLogType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatWindowTypeItem.ChatWindowTypeItem_C.SetDirectChatData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDirectChatSenderLogData       InSenderData                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UChatWindowTypeItem_C::SetDirectChatData(const struct FSBDirectChatSenderLogData& InSenderData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindowTypeItem_C", "SetDirectChatData");

	Params::ChatWindowTypeItem_C_SetDirectChatData Parms{};

	Parms.InSenderData = std::move(InSenderData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatWindowTypeItem.ChatWindowTypeItem_C.GetTypeWindowPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        Position                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatWindowTypeItem_C::GetTypeWindowPosition(struct FVector2D* Position) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindowTypeItem_C", "GetTypeWindowPosition");

	Params::ChatWindowTypeItem_C_GetTypeWindowPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}

}

