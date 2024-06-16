#pragma once

 

// Package: ChatTypeWindow

#include "Basic.hpp"

#include "ChatTypeWindow_classes.hpp"
#include "ChatTypeWindow_parameters.hpp"


namespace SDK
{

// Function ChatTypeWindow.ChatTypeWindow_C.EventTypeSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogType                          SelectedType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatTypeWindow_C::EventTypeSelected__DelegateSignature(ESBChatLogType SelectedType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "EventTypeSelected__DelegateSignature");

	Params::ChatTypeWindow_C_EventTypeSelected__DelegateSignature Parms{};

	Parms.SelectedType = SelectedType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatTypeWindow.ChatTypeWindow_C.ExecuteUbergraph_ChatTypeWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatTypeWindow_C::ExecuteUbergraph_ChatTypeWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "ExecuteUbergraph_ChatTypeWindow");

	Params::ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatTypeWindow_Button_Hit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UChatTypeWindow_C::BndEvt__ChatTypeWindow_Button_Hit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "BndEvt__ChatTypeWindow_Button_Hit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatTypeWindow.ChatTypeWindow_C.OnPressCancel
// (BlueprintCallable, BlueprintEvent)

void UChatTypeWindow_C::OnPressCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "OnPressCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatTypeWindow.ChatTypeWindow_C.OnClickedDirectChatItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChatWindowTypeItem_C*            TypeItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatTypeWindow_C::OnClickedDirectChatItem(class UChatWindowTypeItem_C* TypeItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "OnClickedDirectChatItem");

	Params::ChatTypeWindow_C_OnClickedDirectChatItem Parms{};

	Parms.TypeItem = TypeItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatTypeWindow.ChatTypeWindow_C.OnAnimationFinished_����_0
// (BlueprintCallable, BlueprintEvent)

void UChatTypeWindow_C::OnAnimationFinished______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "OnAnimationFinished_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UChatWindowTypeItem_C*            TypeItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatTypeWindow_C::BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature");

	Params::ChatTypeWindow_C_BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature Parms{};

	Parms.TypeItem = TypeItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UChatWindowTypeItem_C*            TypeItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatTypeWindow_C::BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature");

	Params::ChatTypeWindow_C_BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature Parms{};

	Parms.TypeItem = TypeItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UChatWindowTypeItem_C*            TypeItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatTypeWindow_C::BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature");

	Params::ChatTypeWindow_C_BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature Parms{};

	Parms.TypeItem = TypeItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UChatWindowTypeItem_C*            TypeItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatTypeWindow_C::BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature");

	Params::ChatTypeWindow_C_BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature Parms{};

	Parms.TypeItem = TypeItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatTypeWindow.ChatTypeWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatTypeWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatTypeWindow.ChatTypeWindow_C.ShowWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UChatTypeWindow_C::ShowWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "ShowWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatTypeWindow.ChatTypeWindow_C.HideWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UChatTypeWindow_C::HideWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "HideWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatTypeWindow.ChatTypeWindow_C.EndChat
// (Public, BlueprintCallable, BlueprintEvent)

void UChatTypeWindow_C::EndChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "EndChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatTypeWindow.ChatTypeWindow_C.IsEndAnimOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsEnd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatTypeWindow_C::IsEndAnimOut(bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "IsEndAnimOut");

	Params::ChatTypeWindow_C_IsEndAnimOut Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;
}


// Function ChatTypeWindow.ChatTypeWindow_C.InitDirectChatItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatTypeWindow_C::InitDirectChatItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "InitDirectChatItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatTypeWindow.ChatTypeWindow_C.CalcPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        Param_Position                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatTypeWindow_C::CalcPosition(struct FVector2D* Param_Position) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatTypeWindow_C", "CalcPosition");

	Params::ChatTypeWindow_C_CalcPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Position != nullptr)
		*Param_Position = std::move(Parms.Param_Position);
}

}

