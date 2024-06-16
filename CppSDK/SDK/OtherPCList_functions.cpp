#pragma once

 

// Package: OtherPCList

#include "Basic.hpp"

#include "OtherPCList_classes.hpp"
#include "OtherPCList_parameters.hpp"


namespace SDK
{

// Function OtherPCList.OtherPCList_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.EventButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::EventButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "EventButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.OnAllClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::OnAllClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "OnAllClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.ExecuteUbergraph_OtherPCList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCList_C::ExecuteUbergraph_OtherPCList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "ExecuteUbergraph_OtherPCList");

	Params::OtherPCList_C_ExecuteUbergraph_OtherPCList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCList.OtherPCList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOtherPCList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UOtherPCList_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.OnDirectChatEvent
// (BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::OnDirectChatEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "OnDirectChatEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.Close
// (BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_8_OnListUpdated__DelegateSignature
// (BlueprintEvent)

void UOtherPCList_C::BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_8_OnListUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_8_OnListUpdated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_6_OnClickUpdateButton__DelegateSignature
// (BlueprintEvent)

void UOtherPCList_C::BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_6_OnClickUpdateButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_6_OnClickUpdateButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ASBPlayerState*                   PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCList_C::BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature(class ASBPlayerState* PlayerState, class FName CharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature");

	Params::OtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CharacterId = CharacterId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCList_C::BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCList_C::BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCList_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "OnAnimationFinished");

	Params::OtherPCList_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCList.OtherPCList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOtherPCList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.InputPadButton
// (BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::InputPadButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "InputPadButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCList_C::BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.OnCloseOtherPCMenu
// (BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::OnCloseOtherPCMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "OnCloseOtherPCMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.Open
// (BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "CloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.SetRootVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCList_C::SetRootVisibility(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "SetRootVisibility");

	Params::OtherPCList_C_SetRootVisibility Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCList.OtherPCList_C.IsRootVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutVisible                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCList_C::IsRootVisibility(bool* OutVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "IsRootVisibility");

	Params::OtherPCList_C_IsRootVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutVisible != nullptr)
		*OutVisible = Parms.OutVisible;
}


// Function OtherPCList.OtherPCList_C.Anime_Tab
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::Anime_Tab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "Anime_Tab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.Anime_Tab_List
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::Anime_Tab_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "Anime_Tab_List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.Anime_AllOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::Anime_AllOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "Anime_AllOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.Anime_Tab_Menu
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::Anime_Tab_Menu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "Anime_Tab_Menu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.AllClose
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::AllClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "AllClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.UpdateTabKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::UpdateTabKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "UpdateTabKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.UpdateMouseCursorIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::UpdateMouseCursorIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "UpdateMouseCursorIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCList.OtherPCList_C.OpenCursorModeToOtherPCMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               InOtherPC                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bListUpdate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCList_C::OpenCursorModeToOtherPCMenu(class ASBPlayerCharacter* InOtherPC, bool bListUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "OpenCursorModeToOtherPCMenu");

	Params::OtherPCList_C_OpenCursorModeToOtherPCMenu Parms{};

	Parms.InOtherPC = InOtherPC;
	Parms.bListUpdate = bListUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCList.OtherPCList_C.ClearPCMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCList_C::ClearPCMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCList_C", "ClearPCMenu");

	UObject::ProcessEvent(Func, nullptr);
}

}

