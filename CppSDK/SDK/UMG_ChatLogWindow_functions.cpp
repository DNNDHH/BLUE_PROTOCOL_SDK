#pragma once

 

// Package: UMG_ChatLogWindow

#include "Basic.hpp"

#include "UMG_ChatLogWindow_classes.hpp"
#include "UMG_ChatLogWindow_parameters.hpp"


namespace SDK
{

// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatRoomMessaageReceived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBChatMessage*                   Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::OnChatRoomMessaageReceived__DelegateSignature(class USBChatMessage* Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnChatRoomMessaageReceived__DelegateSignature");

	Params::UMG_ChatLogWindow_C_OnChatRoomMessaageReceived__DelegateSignature Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogWindowAddRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    RequestSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::OnChatLogWindowAddRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnChatLogWindowAddRequest__DelegateSignature");

	Params::UMG_ChatLogWindow_C_OnChatLogWindowAddRequest__DelegateSignature Parms{};

	Parms.RequestSlot = RequestSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogWindowCloseRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    SlotType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::OnChatLogWindowCloseRequest__DelegateSignature(ESBChatLogWindowSlot SlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnChatLogWindowCloseRequest__DelegateSignature");

	Params::UMG_ChatLogWindow_C_OnChatLogWindowCloseRequest__DelegateSignature Parms{};

	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogTabAddRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    RequestSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::OnChatLogTabAddRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnChatLogTabAddRequest__DelegateSignature");

	Params::UMG_ChatLogWindow_C_OnChatLogTabAddRequest__DelegateSignature Parms{};

	Parms.RequestSlot = RequestSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogTabCloseRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    RequestSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_FilterType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_DetailFilterType                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::OnChatLogTabCloseRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot, int32 Param_FilterType, int32 Param_DetailFilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnChatLogTabCloseRequest__DelegateSignature");

	Params::UMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature Parms{};

	Parms.RequestSlot = RequestSlot;
	Parms.Param_FilterType = Param_FilterType;
	Parms.Param_DetailFilterType = Param_DetailFilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.ExecuteUbergraph_UMG_ChatLogWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::ExecuteUbergraph_UMG_ChatLogWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "ExecuteUbergraph_UMG_ChatLogWindow");

	Params::UMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetFilterType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InFilterType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::SetFilterType(int32 InType, int32 InFilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "SetFilterType");

	Params::UMG_ChatLogWindow_C_SetFilterType Parms{};

	Parms.InType = InType;
	Parms.InFilterType = InFilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnPopTimeUpdate
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatLogWindow_C::OnPopTimeUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnPopTimeUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChangeUnreadVisibleEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatLogWindow_C::OnChangeUnreadVisibleEvent(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnChangeUnreadVisibleEvent");

	Params::UMG_ChatLogWindow_C_OnChangeUnreadVisibleEvent Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetWindowSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::SetWindowSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "SetWindowSize");

	Params::UMG_ChatLogWindow_C_SetWindowSize Parms{};

	Parms.InSize = std::move(InSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChangeTab
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatLogWindow_C::OnChangeTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnChangeTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedCloseTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    RequestSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::OnClickedCloseTab(ESBChatLogWindowSlot RequestSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnClickedCloseTab");

	Params::UMG_ChatLogWindow_C_OnClickedCloseTab Parms{};

	Parms.RequestSlot = RequestSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedAddTab
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatLogWindow_C::OnClickedAddTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnClickedAddTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnUpdateTempLogList
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatLogWindow_C::OnUpdateTempLogList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnUpdateTempLogList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnAnimationFinished");

	Params::UMG_ChatLogWindow_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnUpdateFilterType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InDetailType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::OnUpdateFilterType(int32 InType, int32 InDetailType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnUpdateFilterType");

	Params::UMG_ChatLogWindow_C_OnUpdateFilterType Parms{};

	Parms.InType = InType;
	Parms.InDetailType = InDetailType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedCloseWindow
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatLogWindow_C::OnClickedCloseWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnClickedCloseWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedAddWindow
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatLogWindow_C::OnClickedAddWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnClickedAddWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ChatLogWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnReceiveMessageDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBChatMessage*                   Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBChatUIMessage                 Mess                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_ChatLogWindow_C::OnReceiveMessageDelegate_Event(const class USBChatMessage* Message, const struct FSBChatUIMessage& Mess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "OnReceiveMessageDelegate_Event");

	Params::UMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event Parms{};

	Parms.Message = Message;
	Parms.Mess = std::move(Mess);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ChatLogWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetWindowMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWindow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatLogWindow_C::SetWindowMode(bool bWindow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "SetWindowMode");

	Params::UMG_ChatLogWindow_C_SetWindowMode Parms{};

	Parms.bWindow = bWindow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetEditMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EditMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatLogWindow_C::SetEditMode(bool EditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "SetEditMode");

	Params::UMG_ChatLogWindow_C_SetEditMode Parms{};

	Parms.EditMode = EditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsTab                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatLogWindow_C::SetVisible(bool bIsVisible, bool bIsTab)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "SetVisible");

	Params::UMG_ChatLogWindow_C_SetVisible Parms{};

	Parms.bIsVisible = bIsVisible;
	Parms.bIsTab = bIsTab;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetChatLogSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    Param_ChatLogSlot                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatLogWindow_C::SetChatLogSlot(ESBChatLogWindowSlot Param_ChatLogSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "SetChatLogSlot");

	Params::UMG_ChatLogWindow_C_SetChatLogSlot Parms{};

	Parms.Param_ChatLogSlot = Param_ChatLogSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.InitChildMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ChatLogWindow_C::InitChildMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "InitChildMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsShowNewMessageIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatUIMessage                 InMess                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatLogWindow_C::IsShowNewMessageIcon(const struct FSBChatUIMessage& InMess, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "IsShowNewMessageIcon");

	Params::UMG_ChatLogWindow_C_IsShowNewMessageIcon Parms{};

	Parms.InMess = std::move(InMess);

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.RefreshLog
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ChatLogWindow_C::RefreshLog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "RefreshLog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.ShowWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ChatLogWindow_C::ShowWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "ShowWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.HideWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ChatLogWindow_C::HideWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "HideWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetFullChildWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InFull                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatLogWindow_C::SetFullChildWindow(bool InFull)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "SetFullChildWindow");

	Params::UMG_ChatLogWindow_C_SetFullChildWindow Parms{};

	Parms.InFull = InFull;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Set Tab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    InSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAdd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatLogWindow_C::Set_Tab(ESBChatLogWindowSlot InSlot, bool bAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "Set Tab");

	Params::UMG_ChatLogWindow_C_Set_Tab Parms{};

	Parms.InSlot = InSlot;
	Parms.bAdd = bAdd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Next Tab Selection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatLogWindow_C::Next_Tab_Selection(bool bPrevious)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "Next Tab Selection");

	Params::UMG_ChatLogWindow_C_Next_Tab_Selection Parms{};

	Parms.bPrevious = bPrevious;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Update Chat Log Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatLogWindowStatusSave       InStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    IsLoad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatLogWindow_C::Update_Chat_Log_Status(const struct FSBChatLogWindowStatusSave& InStatus, bool IsLoad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "Update Chat Log Status");

	Params::UMG_ChatLogWindow_C_Update_Chat_Log_Status Parms{};

	Parms.InStatus = std::move(InStatus);
	Parms.IsLoad = IsLoad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsVisibleLog
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_IsVisible                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatLogWindow_C::IsVisibleLog(bool* Param_IsVisible) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "IsVisibleLog");

	Params::UMG_ChatLogWindow_C_IsVisibleLog Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsVisible != nullptr)
		*Param_IsVisible = Parms.Param_IsVisible;
}


// Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsVisibleTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_IsVisible                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatLogWindow_C::IsVisibleTab(bool* Param_IsVisible) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatLogWindow_C", "IsVisibleTab");

	Params::UMG_ChatLogWindow_C_IsVisibleTab Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsVisible != nullptr)
		*Param_IsVisible = Parms.Param_IsVisible;
}

}

