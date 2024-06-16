#pragma once

 

// Package: ChatLogWindowTempList

#include "Basic.hpp"

#include "ChatLogWindowTempList_classes.hpp"
#include "ChatLogWindowTempList_parameters.hpp"


namespace SDK
{

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.ExecuteUbergraph_ChatLogWindowTempList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowTempList_C::ExecuteUbergraph_ChatLogWindowTempList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "ExecuteUbergraph_ChatLogWindowTempList");

	Params::ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnLogWindowTempVisibleDelegate_Event
// (BlueprintCallable, BlueprintEvent)

void UChatLogWindowTempList_C::OnLogWindowTempVisibleDelegate_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "OnLogWindowTempVisibleDelegate_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatLogWindowTempList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowTempList_C::BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");

	Params::ChatLogWindowTempList_C_BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnPopTimeEnd
// (BlueprintCallable, BlueprintEvent)

void UChatLogWindowTempList_C::OnPopTimeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "OnPopTimeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnUpdateFilterType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowTempList_C::OnUpdateFilterType(int32 InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "OnUpdateFilterType");

	Params::ChatLogWindowTempList_C_OnUpdateFilterType Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnCreateMessage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatUIMessage                 InMess                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bRecieve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowTempList_C::OnCreateMessage_Event(const struct FSBChatUIMessage& InMess, bool bRecieve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "OnCreateMessage_Event");

	Params::ChatLogWindowTempList_C_OnCreateMessage_Event Parms{};

	Parms.InMess = std::move(InMess);
	Parms.bRecieve = bRecieve;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatLogWindowTempList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.ShowWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UChatLogWindowTempList_C::ShowWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "ShowWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.HideWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UChatLogWindowTempList_C::HideWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "HideWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetEditMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEdit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowTempList_C::SetEditMode(bool InEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "SetEditMode");

	Params::ChatLogWindowTempList_C_SetEditMode Parms{};

	Parms.InEdit = InEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.GetWindowSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        RetSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowTempList_C::GetWindowSize(struct FVector2D* RetSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "GetWindowSize");

	Params::ChatLogWindowTempList_C_GetWindowSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetSize != nullptr)
		*RetSize = std::move(Parms.RetSize);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetWindowSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogWindowTempList_C::SetWindowSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "SetWindowSize");

	Params::ChatLogWindowTempList_C_SetWindowSize Parms{};

	Parms.InSize = std::move(InSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.ClearLogList
// (Public, BlueprintCallable, BlueprintEvent)

void UChatLogWindowTempList_C::ClearLogList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "ClearLogList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.CreateMessageEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatUIMessage                 InMess                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bRecieve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowTempList_C::CreateMessageEntry(const struct FSBChatUIMessage& InMess, bool bRecieve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "CreateMessageEntry");

	Params::ChatLogWindowTempList_C_CreateMessageEntry Parms{};

	Parms.InMess = std::move(InMess);
	Parms.bRecieve = bRecieve;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowTempList_C::SetVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "SetVisible");

	Params::ChatLogWindowTempList_C_SetVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.IsVisibleChat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBChatUIMessage                 InChatMessage                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Param_IsVisible                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowTempList_C::IsVisibleChat(const struct FSBChatUIMessage& InChatMessage, bool* Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "IsVisibleChat");

	Params::ChatLogWindowTempList_C_IsVisibleChat Parms{};

	Parms.InChatMessage = std::move(InChatMessage);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsVisible != nullptr)
		*Param_IsVisible = Parms.Param_IsVisible;
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetUnreadIconVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogWindowTempList_C::SetUnreadIconVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "SetUnreadIconVisible");

	Params::ChatLogWindowTempList_C_SetUnreadIconVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogWindowTempList.ChatLogWindowTempList_C.UpdatePopTime
// (Public, BlueprintCallable, BlueprintEvent)

void UChatLogWindowTempList_C::UpdatePopTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogWindowTempList_C", "UpdatePopTime");

	UObject::ProcessEvent(Func, nullptr);
}

}

