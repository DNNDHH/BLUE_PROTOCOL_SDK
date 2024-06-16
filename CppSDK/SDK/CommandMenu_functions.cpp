#pragma once

 

// Package: CommandMenu

#include "Basic.hpp"

#include "CommandMenu_classes.hpp"
#include "CommandMenu_parameters.hpp"


namespace SDK
{

// Function CommandMenu.CommandMenu_C.OnTermed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::OnTermed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnTermed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnTerm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::OnTerm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnTerm__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnFinishCreateChildWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::OnFinishCreateChildWidget__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnFinishCreateChildWidget__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.ExecuteUbergraph_CommandMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::ExecuteUbergraph_CommandMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "ExecuteUbergraph_CommandMenu");

	Params::CommandMenu_C_ExecuteUbergraph_CommandMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.OnAddBgGroupContents
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::OnAddBgGroupContents(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnAddBgGroupContents");

	Params::CommandMenu_C_OnAddBgGroupContents Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnRequestDirectChat
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::OnRequestDirectChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnRequestDirectChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnSubMenuTermReady
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::OnSubMenuTermReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnSubMenuTermReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UCommandMenu_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnAnimationFinished");

	Params::CommandMenu_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.OnPress_MainMenu
// (Event, Public, BlueprintEvent)

void UCommandMenu_C::OnPress_MainMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnPress_MainMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_PartyMenuButton_K2Node_ComponentBoundEvent_7_OnOpenPartyMenu__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_C::BndEvt__CommandMenu_PartyMenuButton_K2Node_ComponentBoundEvent_7_OnOpenPartyMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__CommandMenu_PartyMenuButton_K2Node_ComponentBoundEvent_7_OnOpenPartyMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UnbindMailComponent
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UnbindMailComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UnbindMailComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BindMailComponent
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BindMailComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BindMailComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnMailDelegateEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsAleat                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::OnMailDelegateEvents(bool bIsAleat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnMailDelegateEvents");

	Params::CommandMenu_C_OnMailDelegateEvents Parms{};

	Parms.bIsAleat = bIsAleat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.OnDelegateMails
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::OnDelegateMails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnDelegateMails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsStart                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature(bool IsStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature");

	Params::CommandMenu_C_BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature Parms{};

	Parms.IsStart = IsStart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.Event_OnCompletedGuildAddedNewMember
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::Event_OnCompletedGuildAddedNewMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Event_OnCompletedGuildAddedNewMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.ForceCloseRmShop
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::ForceCloseRmShop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "ForceCloseRmShop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnIsCmnBackBtnVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsVisible                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::OnIsCmnBackBtnVisible(const bool bInIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnIsCmnBackBtnVisible");

	Params::CommandMenu_C_OnIsCmnBackBtnVisible Parms{};

	Parms.bInIsVisible = bInIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.Event_OnCompletedCancelEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::Event_OnCompletedCancelEntry(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Event_OnCompletedCancelEntry");

	Params::CommandMenu_C_Event_OnCompletedCancelEntry Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.Event_OnCompletedInviteArraignment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAccept                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InEntryId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommandMenu_C::Event_OnCompletedInviteArraignment(const int32 RetCode, bool IsAccept, const class FString& InEntryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Event_OnCompletedInviteArraignment");

	Params::CommandMenu_C_Event_OnCompletedInviteArraignment Parms{};

	Parms.RetCode = RetCode;
	Parms.IsAccept = IsAccept;
	Parms.InEntryId = std::move(InEntryId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.Event_OnCompletedGGetEntryList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::Event_OnCompletedGGetEntryList(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Event_OnCompletedGGetEntryList");

	Params::CommandMenu_C_Event_OnCompletedGGetEntryList Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.Event_OnCompletedWithDraw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::Event_OnCompletedWithDraw(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Event_OnCompletedWithDraw");

	Params::CommandMenu_C_Event_OnCompletedWithDraw Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.Event_OnCompletedGetInviteList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::Event_OnCompletedGetInviteList(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Event_OnCompletedGetInviteList");

	Params::CommandMenu_C_Event_OnCompletedGetInviteList Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.Event_OnCompletedGetEntries
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::Event_OnCompletedGetEntries(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Event_OnCompletedGetEntries");

	Params::CommandMenu_C_Event_OnCompletedGetEntries Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_BtnSkyStore_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_C::BndEvt__CommandMenu_BtnSkyStore_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__CommandMenu_BtnSkyStore_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnCloseRmShopMenuEvent
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::OnCloseRmShopMenuEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnCloseRmShopMenuEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommandMenu_MenuItem_C*          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature");

	Params::CommandMenu_C_BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.OnUpdateSeasonPassAnyInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::OnUpdateSeasonPassAnyInfo(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnUpdateSeasonPassAnyInfo");

	Params::CommandMenu_C_OnUpdateSeasonPassAnyInfo Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.OnCommandMenuVisible_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::OnCommandMenuVisible_Event_0(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnCommandMenuVisible_Event_0");

	Params::CommandMenu_C_OnCommandMenuVisible_Event_0 Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.DisplayRmShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       StartUpShopType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::DisplayRmShop(ESBRmShopMenuType StartUpShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "DisplayRmShop");

	Params::CommandMenu_C_DisplayRmShop Parms{};

	Parms.StartUpShopType = StartUpShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommandMenu_MenuItem_C*          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature");

	Params::CommandMenu_C_BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.OnCloseOptionMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::OnCloseOptionMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnCloseOptionMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.RequestUpdateLibraryNewIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::RequestUpdateLibraryNewIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "RequestUpdateLibraryNewIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BndEvt__GuildMenuButton_K2Node_ComponentBoundEvent_0_OpenGuildMenu__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_C::BndEvt__GuildMenuButton_K2Node_ComponentBoundEvent_0_OpenGuildMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__GuildMenuButton_K2Node_ComponentBoundEvent_0_OpenGuildMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature(ESBCommandMenuType MenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature");

	Params::CommandMenu_C_BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature Parms{};

	Parms.MenuType = MenuType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.UpdateUnreadMark
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UpdateUnreadMark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UpdateUnreadMark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnStartOption
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::OnStartOption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnStartOption");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommandMenu_MenuItem_C*          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature");

	Params::CommandMenu_C_BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.ResetMouseCursorTypeToDefault
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::ResetMouseCursorTypeToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "ResetMouseCursorTypeToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnOpenDungeonMatchingMenu__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_C::BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnOpenDungeonMatchingMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnOpenDungeonMatchingMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_28_OnOpenMatchingMenu__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_C::BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_28_OnOpenMatchingMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_28_OnOpenMatchingMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature(ESBCommandMenuType MenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature");

	Params::CommandMenu_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature Parms{};

	Parms.MenuType = MenuType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature(ESBCommandMenuType MenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature");

	Params::CommandMenu_C_BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature Parms{};

	Parms.MenuType = MenuType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommandMenu_MenuItem_C*          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature");

	Params::CommandMenu_C_BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.StartChildMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      Param_InMenuType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsStartup                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    First                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::StartChildMenu(ESBCommandMenuType Param_InMenuType, bool bIsStartup, bool First)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "StartChildMenu");

	Params::CommandMenu_C_StartChildMenu Parms{};

	Parms.Param_InMenuType = Param_InMenuType;
	Parms.bIsStartup = bIsStartup;
	Parms.First = First;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.TryStartChildMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      Param_InMenuType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InParamName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::TryStartChildMenu(ESBCommandMenuType Param_InMenuType, class FName InParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "TryStartChildMenu");

	Params::CommandMenu_C_TryStartChildMenu Parms{};

	Parms.Param_InMenuType = Param_InMenuType;
	Parms.InParamName = InParamName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommandMenu_MenuItem_C*          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature");

	Params::CommandMenu_C_BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommandMenu_MenuItem_C*          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature");

	Params::CommandMenu_C_BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommandMenu_MenuItem_C*          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature");

	Params::CommandMenu_C_BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommandMenu_MenuItem_C*          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature");

	Params::CommandMenu_C_BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.CallTryTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::CallTryTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "CallTryTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.ForceTerm
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::ForceTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "ForceTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.TryTerm
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::TryTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "TryTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.Term
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::Term()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Term");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.ExitGame_TermMenu
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::ExitGame_TermMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "ExitGame_TermMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnHide_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::OnHide_Event_0(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnHide_Event_0");

	Params::CommandMenu_C_OnHide_Event_0 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.StartExitGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    QuitFlag                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   DlalogMsgID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::StartExitGame(bool QuitFlag, int32 DlalogMsgID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "StartExitGame");

	Params::CommandMenu_C_StartExitGame Parms{};

	Parms.QuitFlag = QuitFlag;
	Parms.DlalogMsgID = DlalogMsgID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.ExitGame
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::ExitGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "ExitGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.TryAchievementDataLoad
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::TryAchievementDataLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "TryAchievementDataLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.CustomEvent_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::CustomEvent_6(const bool Result, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "CustomEvent_6");

	Params::CommandMenu_C_CustomEvent_6 Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::CustomEvent_5(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "CustomEvent_5");

	Params::CommandMenu_C_CustomEvent_5 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.OnUpdateMatchingMenuButtonNew
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::OnUpdateMatchingMenuButtonNew(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnUpdateMatchingMenuButtonNew");

	Params::CommandMenu_C_OnUpdateMatchingMenuButtonNew Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BindUpdateMatchingMenuButtonNew
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BindUpdateMatchingMenuButtonNew()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BindUpdateMatchingMenuButtonNew");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.Event_OnCompleteCommandMenuGetDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::Event_OnCompleteCommandMenuGetDelegate(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Event_OnCompleteCommandMenuGetDelegate");

	Params::CommandMenu_C_Event_OnCompleteCommandMenuGetDelegate Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.�������_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::_________3(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "�������_3");

	Params::CommandMenu_C__________3 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BindUpdateQuestButtonNew
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BindUpdateQuestButtonNew()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BindUpdateQuestButtonNew");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UnbindUpdateItemNew
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UnbindUpdateItemNew()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UnbindUpdateItemNew");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::CustomEvent_4(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "CustomEvent_4");

	Params::CommandMenu_C_CustomEvent_4 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BindUpdateItemNew
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BindUpdateItemNew()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BindUpdateItemNew");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BindDungeonClearDelegate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BindDungeonClearDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BindDungeonClearDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BindGameOverDelegate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BindGameOverDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BindGameOverDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BindOnDeathDelegate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BindOnDeathDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BindOnDeathDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UnbindDungeonClearDelegate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UnbindDungeonClearDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UnbindDungeonClearDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.QuitCommandMenuDelegate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::QuitCommandMenuDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "QuitCommandMenuDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UnbindOnDeathDelegate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UnbindOnDeathDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UnbindOnDeathDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UnbindGameOverDelegate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UnbindGameOverDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UnbindGameOverDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BindDemoPlayStartDelegate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BindDemoPlayStartDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BindDemoPlayStartDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UnbindDemoPlayStartDelegate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UnbindDemoPlayStartDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UnbindDemoPlayStartDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.DemoPlayStartDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::DemoPlayStartDelegate_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "DemoPlayStartDelegate_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BindOnRequestTermCommandMenuDelegate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BindOnRequestTermCommandMenuDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BindOnRequestTermCommandMenuDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UnbindOnRequestTermCommandMenuDelegate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UnbindOnRequestTermCommandMenuDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UnbindOnRequestTermCommandMenuDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnRequestTermCommandMenuDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bForce                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::OnRequestTermCommandMenuDelegate_Event_0(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnRequestTermCommandMenuDelegate_Event_0");

	Params::CommandMenu_C_OnRequestTermCommandMenuDelegate_Event_0 Parms{};

	Parms.bForce = bForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BindUpdatedUnreadCount
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BindUpdatedUnreadCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BindUpdatedUnreadCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UnbindUpdatedUnreadCount
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UnbindUpdatedUnreadCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UnbindUpdatedUnreadCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnUnreadUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   UnreadCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::OnUnreadUpdate(bool bWasSuccessful, int32 ErrorCode, int32 UnreadCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnUnreadUpdate");

	Params::CommandMenu_C_OnUnreadUpdate Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ErrorCode = ErrorCode;
	Parms.UnreadCount = UnreadCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.RequestTransitionMenuNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_BookmarkType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             InParamName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::RequestTransitionMenuNew(ESBCommandMenuType MenuType, const class FString& Param_BookmarkType, const class FName InParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "RequestTransitionMenuNew");

	Params::CommandMenu_C_RequestTransitionMenuNew Parms{};

	Parms.MenuType = MenuType;
	Parms.Param_BookmarkType = std::move(Param_BookmarkType);
	Parms.InParamName = InParamName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BookmarkUpdate
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BookmarkUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BookmarkUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.BookmarkUpdateRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::BookmarkUpdateRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BookmarkUpdateRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::CustomEvent_3(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "CustomEvent_3");

	Params::CommandMenu_C_CustomEvent_3 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BookmarkDelete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommandMenu_C::BookmarkDelete(const class FString& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BookmarkDelete");

	Params::CommandMenu_C_BookmarkDelete Parms{};

	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BookmarkRegistration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_BookmarkType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommandMenu_C::BookmarkRegistration(const class FString& Param_BookmarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BookmarkRegistration");

	Params::CommandMenu_C_BookmarkRegistration Parms{};

	Parms.Param_BookmarkType = std::move(Param_BookmarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBBookMarkerSlot                       BookmarkSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           KeyString                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommandMenu_C::CustomEvent_2(ESBBookMarkerSlot BookmarkSlot, const class FString& KeyString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "CustomEvent_2");

	Params::CommandMenu_C_CustomEvent_2 Parms{};

	Parms.BookmarkSlot = BookmarkSlot;
	Parms.KeyString = std::move(KeyString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::CustomEvent_1(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "CustomEvent_1");

	Params::CommandMenu_C_CustomEvent_1 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.BookmarkProcessing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_BookmarkType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommandMenu_C::BookmarkProcessing(const class FString& Param_BookmarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "BookmarkProcessing");

	Params::CommandMenu_C_BookmarkProcessing Parms{};

	Parms.Param_BookmarkType = std::move(Param_BookmarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.TransitionMenuFromSubMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      Param_InMenuType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             InParamName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::TransitionMenuFromSubMenu(ESBCommandMenuType Param_InMenuType, const class FString& InBookMarkType, class FName InParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "TransitionMenuFromSubMenu");

	Params::CommandMenu_C_TransitionMenuFromSubMenu Parms{};

	Parms.Param_InMenuType = Param_InMenuType;
	Parms.InBookMarkType = std::move(InBookMarkType);
	Parms.InParamName = InParamName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.StartQuickAccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      Param_InMenuType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::StartQuickAccess(ESBCommandMenuType Param_InMenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "StartQuickAccess");

	Params::CommandMenu_C_StartQuickAccess Parms{};

	Parms.Param_InMenuType = Param_InMenuType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.OnPress_QuickAccess
// (Event, Public, BlueprintEvent)
// Parameters:
// ESBKeyConfigAction                      QuickAccess                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::OnPress_QuickAccess(ESBKeyConfigAction QuickAccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnPress_QuickAccess");

	Params::CommandMenu_C_OnPress_QuickAccess Parms{};

	Parms.QuickAccess = QuickAccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.Event_CloseCommandMenu
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::Event_CloseCommandMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Event_CloseCommandMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.Event_OpenCommandMenu
// (BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::Event_OpenCommandMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Event_OpenCommandMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnLoaded_AE38282A462780609F3445B36A750DC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UCommandMenu_C::OnLoaded_AE38282A462780609F3445B36A750DC5(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnLoaded_AE38282A462780609F3445B36A750DC5");

	Params::CommandMenu_C_OnLoaded_AE38282A462780609F3445B36A750DC5 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.OnLoaded_6ACEB693478345863D5B688D8FC8E59D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UCommandMenu_C::OnLoaded_6ACEB693478345863D5B688D8FC8E59D(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnLoaded_6ACEB693478345863D5B688D8FC8E59D");

	Params::CommandMenu_C_OnLoaded_6ACEB693478345863D5B688D8FC8E59D Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.OnLoaded_A56FA3C649A13B2523A4D78B50954D35
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UCommandMenu_C::OnLoaded_A56FA3C649A13B2523A4D78B50954D35(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnLoaded_A56FA3C649A13B2523A4D78B50954D35");

	Params::CommandMenu_C_OnLoaded_A56FA3C649A13B2523A4D78B50954D35 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.CollectMenuButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::CollectMenuButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "CollectMenuButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.SetActiveMenuButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      ActiveMenuType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::SetActiveMenuButton(ESBCommandMenuType ActiveMenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "SetActiveMenuButton");

	Params::CommandMenu_C_SetActiveMenuButton Parms{};

	Parms.ActiveMenuType = ActiveMenuType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.Add BGGroup Contents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::Add_BGGroup_Contents(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Add BGGroup Contents");

	Params::CommandMenu_C_Add_BGGroup_Contents Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.RequestDirectChat
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::RequestDirectChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "RequestDirectChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.DisableMenuButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::DisableMenuButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "DisableMenuButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.SetActiveMenuButtonAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      ActiveMenuType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::SetActiveMenuButtonAnim(ESBCommandMenuType ActiveMenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "SetActiveMenuButtonAnim");

	Params::CommandMenu_C_SetActiveMenuButtonAnim Parms{};

	Parms.ActiveMenuType = ActiveMenuType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.Update Library New Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::Update_Library_New_Icon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Update Library New Icon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.Create Child Menu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_Class                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBCommandMenuChildBase*          CreateChildWidget                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::Create_Child_Menu(class UClass* Param_Class, class USBCommandMenuChildBase** CreateChildWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Create Child Menu");

	Params::CommandMenu_C_Create_Child_Menu Parms{};

	Parms.Param_Class = Param_Class;

	UObject::ProcessEvent(Func, &Parms);

	if (CreateChildWidget != nullptr)
		*CreateChildWidget = Parms.CreateChildWidget;
}


// Function CommandMenu.CommandMenu_C.GetCommondMenuType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBKeyConfigAction                      Action                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCommandMenuType                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESBCommandMenuType UCommandMenu_C::GetCommondMenuType(const ESBKeyConfigAction& Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "GetCommondMenuType");

	Params::CommandMenu_C_GetCommondMenuType Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommandMenu.CommandMenu_C.GetBookmarkType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBKeyConfigAction                      Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UCommandMenu_C::GetBookmarkType(ESBKeyConfigAction Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "GetBookmarkType");

	Params::CommandMenu_C_GetBookmarkType Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommandMenu.CommandMenu_C.IsBookmarkType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBKeyConfigAction                      Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bBookmark                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::IsBookmarkType(ESBKeyConfigAction Param_Index, bool* bBookmark)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "IsBookmarkType");

	Params::CommandMenu_C_IsBookmarkType Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (bBookmark != nullptr)
		*bBookmark = Parms.bBookmark;
}


// Function CommandMenu.CommandMenu_C.Get Now Page
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NowBookMarkType                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UCommandMenu_C::Get_Now_Page(class FString* NowBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Get Now Page");

	Params::CommandMenu_C_Get_Now_Page Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NowBookMarkType != nullptr)
		*NowBookMarkType = std::move(Parms.NowBookMarkType);
}


// Function CommandMenu.CommandMenu_C.TsCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::TsCheck(const class FString& InputPin, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "TsCheck");

	Params::CommandMenu_C_TsCheck Parms{};

	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function CommandMenu.CommandMenu_C.UpdateSeasonPassMenuButton
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UpdateSeasonPassMenuButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UpdateSeasonPassMenuButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UpdateLetterButton
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UpdateLetterButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UpdateLetterButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.GetIsRmShopDisplayed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsRmShopOpen                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::GetIsRmShopDisplayed(bool* OutIsRmShopOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "GetIsRmShopDisplayed");

	Params::CommandMenu_C_GetIsRmShopDisplayed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsRmShopOpen != nullptr)
		*OutIsRmShopOpen = Parms.OutIsRmShopOpen;
}


// Function CommandMenu.CommandMenu_C.UpdateGuildButton
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UpdateGuildButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UpdateGuildButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UCommandMenu_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "GetGuildComp");

	Params::CommandMenu_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommandMenu.CommandMenu_C.UpdateGuildButtonExclamation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UpdateGuildButtonExclamation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UpdateGuildButtonExclamation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UpdateMatchingMenuButtonExclamation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UpdateMatchingMenuButtonExclamation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UpdateMatchingMenuButtonExclamation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.SetCmnBackBtnVIsibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::SetCmnBackBtnVIsibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "SetCmnBackBtnVIsibility");

	Params::CommandMenu_C_SetCmnBackBtnVIsibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.UpdateConsent
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UpdateConsent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UpdateConsent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UnbindConsent
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UnbindConsent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UnbindConsent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.CommandMenu_AutoGenFunc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ApprovalMax                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bNoOverride                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FContactListData>         ItemListData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::CommandMenu_AutoGenFunc(const bool bWasSuccessful, const int32 ApprovalMax, const bool bNoOverride, const TArray<struct FContactListData>& ItemListData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "CommandMenu_AutoGenFunc");

	Params::CommandMenu_C_CommandMenu_AutoGenFunc Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ApprovalMax = ApprovalMax;
	Parms.bNoOverride = bNoOverride;
	Parms.ItemListData = std::move(ItemListData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.Update Button Inventory
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::Update_Button_Inventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "Update Button Inventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.UpdateQuestButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::UpdateQuestButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "UpdateQuestButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnMatchedGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBMatchingGameState*             MatchedGame                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::OnMatchedGame(class USBMatchingGameState* MatchedGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnMatchedGame");

	Params::CommandMenu_C_OnMatchedGame Parms{};

	Parms.MatchedGame = MatchedGame;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.OnFailedMatch
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::OnFailedMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnFailedMatch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.OnCancelMatch
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::OnCancelMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "OnCancelMatch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.SetIsEnabledBtnSkyStore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::SetIsEnabledBtnSkyStore(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "SetIsEnabledBtnSkyStore");

	Params::CommandMenu_C_SetIsEnabledBtnSkyStore Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu.CommandMenu_C.SetSkyShopBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_C::SetSkyShopBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "SetSkyShopBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu.CommandMenu_C.CheckReadDemoIdList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommandMenu_C::CheckReadDemoIdList(TArray<class FName>& In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "CheckReadDemoIdList");

	Params::CommandMenu_C_CheckReadDemoIdList Parms{};

	Parms.In = std::move(In);

	UObject::ProcessEvent(Func, &Parms);

	In = std::move(Parms.In);
}


// Function CommandMenu.CommandMenu_C.GetFirstMenuType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESBCommandMenuType                      MenuType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::GetFirstMenuType(ESBCommandMenuType* MenuType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "GetFirstMenuType");

	Params::CommandMenu_C_GetFirstMenuType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MenuType != nullptr)
		*MenuType = Parms.MenuType;
}


// Function CommandMenu.CommandMenu_C.IsRememberMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESBCommandMenuType                      Param_InMenuType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRet                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::IsRememberMenu(ESBCommandMenuType Param_InMenuType, bool* bRet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "IsRememberMenu");

	Params::CommandMenu_C_IsRememberMenu Parms{};

	Parms.Param_InMenuType = Param_InMenuType;

	UObject::ProcessEvent(Func, &Parms);

	if (bRet != nullptr)
		*bRet = Parms.bRet;
}


// Function CommandMenu.CommandMenu_C.IsEnableMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESBCommandMenuType                      Param_InMenuType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_C::IsEnableMenu(ESBCommandMenuType Param_InMenuType, bool* bEnable) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "IsEnableMenu");

	Params::CommandMenu_C_IsEnableMenu Parms{};

	Parms.Param_InMenuType = Param_InMenuType;

	UObject::ProcessEvent(Func, &Parms);

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;
}


// Function CommandMenu.CommandMenu_C.GetFirstMenuType_Internal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESBCommandMenuType                      MenuType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_C::GetFirstMenuType_Internal(ESBCommandMenuType* MenuType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_C", "GetFirstMenuType_Internal");

	Params::CommandMenu_C_GetFirstMenuType_Internal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MenuType != nullptr)
		*MenuType = Parms.MenuType;
}

}

