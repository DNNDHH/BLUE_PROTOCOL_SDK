#pragma once

 

// Package: DebugMenu

#include "Basic.hpp"

#include "DebugMenu_classes.hpp"
#include "DebugMenu_parameters.hpp"


namespace SDK
{

// Function DebugMenu.DebugMenu_C.EventDispatcher_OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::EventDispatcher_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "EventDispatcher_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::ExecuteUbergraph_DebugMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "ExecuteUbergraph_DebugMenu");

	Params::DebugMenu_C_ExecuteUbergraph_DebugMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebugMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.ProcVisibleSettingChange
// (Event, Public, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugMenu_C::ProcVisibleSettingChange(ESBUIType InUIType, const bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "ProcVisibleSettingChange");

	Params::DebugMenu_C_ProcVisibleSettingChange Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.OnRepeat_Down
// (Event, Public, BlueprintEvent)

void UDebugMenu_C::OnRepeat_Down()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnRepeat_Down");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.OnRepeat_Up
// (Event, Public, BlueprintEvent)

void UDebugMenu_C::OnRepeat_Up()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnRepeat_Up");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.OnSetFocusItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InFocusId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::OnSetFocusItem(int32 InFocusId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnSetFocusItem");

	Params::DebugMenu_C_OnSetFocusItem Parms{};

	Parms.InFocusId = InFocusId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UDebugMenu_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.DebugButton_OnClicked_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugButton_C*                   DebugButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::DebugButton_OnClicked_____(class UDebugButton_C* DebugButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "DebugButton_OnClicked_����");

	Params::DebugMenu_C_DebugButton_OnClicked_____ Parms{};

	Parms.DebugButton = DebugButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.EventDispatcher_OnClose_Event
// (BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::EventDispatcher_OnClose_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "EventDispatcher_OnClose_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UDebugMenu_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebugMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.NotificationLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugMenu_C::NotificationLoaded(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "NotificationLoaded");

	Params::DebugMenu_C_NotificationLoaded Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.CheatCommand_NotificationMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InSender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::CheatCommand_NotificationMenu(class UObject* InSender, class UObject* InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CheatCommand_NotificationMenu");

	Params::DebugMenu_C_CheatCommand_NotificationMenu Parms{};

	Parms.InSender = InSender;
	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.CheatCommand_BulkGetItemSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InSender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::CheatCommand_BulkGetItemSet(class UObject* InSender, class UObject* InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CheatCommand_BulkGetItemSet");

	Params::DebugMenu_C_CheatCommand_BulkGetItemSet Parms{};

	Parms.InSender = InSender;
	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.ChectCommand_AddMasterItemsMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InSender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::ChectCommand_AddMasterItemsMenu(class UObject* InSender, class UObject* InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "ChectCommand_AddMasterItemsMenu");

	Params::DebugMenu_C_ChectCommand_AddMasterItemsMenu Parms{};

	Parms.InSender = InSender;
	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.CheatCommand_ResponseChecker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InSender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::CheatCommand_ResponseChecker(class UObject* InSender, class UObject* InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CheatCommand_ResponseChecker");

	Params::DebugMenu_C_CheatCommand_ResponseChecker Parms{};

	Parms.InSender = InSender;
	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.CheatCommand_Party_Create_Invite_Send
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InSender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::CheatCommand_Party_Create_Invite_Send(class UObject* InSender, class UObject* InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CheatCommand_Party_Create_Invite_Send");

	Params::DebugMenu_C_CheatCommand_Party_Create_Invite_Send Parms{};

	Parms.InSender = InSender;
	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.CheatCommand_ItemSupplyer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InSender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::CheatCommand_ItemSupplyer(class UObject* InSender, class UObject* InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CheatCommand_ItemSupplyer");

	Params::DebugMenu_C_CheatCommand_ItemSupplyer Parms{};

	Parms.InSender = InSender;
	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.CheatCommand_LevelScriptList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InSender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::CheatCommand_LevelScriptList(class UObject* InSender, class UObject* InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CheatCommand_LevelScriptList");

	Params::DebugMenu_C_CheatCommand_LevelScriptList Parms{};

	Parms.InSender = InSender;
	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.CheatCommand_ScriptExecutor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InSender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::CheatCommand_ScriptExecutor(class UObject* InSender, class UObject* InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CheatCommand_ScriptExecutor");

	Params::DebugMenu_C_CheatCommand_ScriptExecutor Parms{};

	Parms.InSender = InSender;
	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.CheatCommand_RecepiBroker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InSender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::CheatCommand_RecepiBroker(class UObject* InSender, class UObject* InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CheatCommand_RecepiBroker");

	Params::DebugMenu_C_CheatCommand_RecepiBroker Parms{};

	Parms.InSender = InSender;
	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.ChectCommand_BulkGetItemMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InSender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::ChectCommand_BulkGetItemMenu(class UObject* InSender, class UObject* InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "ChectCommand_BulkGetItemMenu");

	Params::DebugMenu_C_ChectCommand_BulkGetItemMenu Parms{};

	Parms.InSender = InSender;
	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UDebugMenu_C::OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E");

	Params::DebugMenu_C_OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.OnLoaded_8950531E42034202AFA24B8A7E7E2D11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UDebugMenu_C::OnLoaded_8950531E42034202AFA24B8A7E7E2D11(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnLoaded_8950531E42034202AFA24B8A7E7E2D11");

	Params::DebugMenu_C_OnLoaded_8950531E42034202AFA24B8A7E7E2D11 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.OnLoaded_B6543B2E423821130C7933B54E69A6C5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UDebugMenu_C::OnLoaded_B6543B2E423821130C7933B54E69A6C5(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnLoaded_B6543B2E423821130C7933B54E69A6C5");

	Params::DebugMenu_C_OnLoaded_B6543B2E423821130C7933B54E69A6C5 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.OnLoaded_27772D90466B1887FF9CA8BA68DDE282
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UDebugMenu_C::OnLoaded_27772D90466B1887FF9CA8BA68DDE282(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnLoaded_27772D90466B1887FF9CA8BA68DDE282");

	Params::DebugMenu_C_OnLoaded_27772D90466B1887FF9CA8BA68DDE282 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.OnLoaded_4F44425143BDF3C769780FB39763FAA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UDebugMenu_C::OnLoaded_4F44425143BDF3C769780FB39763FAA8(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnLoaded_4F44425143BDF3C769780FB39763FAA8");

	Params::DebugMenu_C_OnLoaded_4F44425143BDF3C769780FB39763FAA8 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UDebugMenu_C::OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77");

	Params::DebugMenu_C_OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.OnLoaded_BCFFDC8A4AF2D3E733074AB599485936
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UDebugMenu_C::OnLoaded_BCFFDC8A4AF2D3E733074AB599485936(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnLoaded_BCFFDC8A4AF2D3E733074AB599485936");

	Params::DebugMenu_C_OnLoaded_BCFFDC8A4AF2D3E733074AB599485936 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.OnLoaded_102A04CB4074E1F46BB26DB6C4891B24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UDebugMenu_C::OnLoaded_102A04CB4074E1F46BB26DB6C4891B24(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "OnLoaded_102A04CB4074E1F46BB26DB6C4891B24");

	Params::DebugMenu_C_OnLoaded_102A04CB4074E1F46BB26DB6C4891B24 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.CreateCheckBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::CreateCheckBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CreateCheckBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.CreateInt32
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::CreateInt32()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CreateInt32");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.CreateFloat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::CreateFloat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CreateFloat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.CreateString
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::CreateString()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CreateString");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.CreateComboBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::CreateComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CreateComboBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.CreateCommand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::CreateCommand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CreateCommand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.CreateButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugButton_C*                   OutDebugButton                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::CreateButton(class UDebugButton_C** OutDebugButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CreateButton");

	Params::DebugMenu_C_CreateButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutDebugButton != nullptr)
		*OutDebugButton = Parms.OutDebugButton;
}


// Function DebugMenu.DebugMenu_C.InputDebugMenuButton
// (Public, BlueprintCallable, BlueprintEvent)

void UDebugMenu_C::InputDebugMenuButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "InputDebugMenuButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugMenu.DebugMenu_C.SetDebugMenuVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugMenu_C::SetDebugMenuVisibility(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "SetDebugMenuVisibility");

	Params::DebugMenu_C_SetDebugMenuVisibility Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.ProcFocusCursorMoveUpDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InMoveUp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugMenu_C::ProcFocusCursorMoveUpDown(bool InMoveUp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "ProcFocusCursorMoveUpDown");

	Params::DebugMenu_C_ProcFocusCursorMoveUpDown Parms{};

	Parms.InMoveUp = InMoveUp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.GetCurrentValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             CurrentValue                                           (Parm, OutParm)
// bool                                    ValueExists                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugMenu_C::GetCurrentValue(class FText* CurrentValue, bool* ValueExists)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "GetCurrentValue");

	Params::DebugMenu_C_GetCurrentValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentValue != nullptr)
		*CurrentValue = std::move(Parms.CurrentValue);

	if (ValueExists != nullptr)
		*ValueExists = Parms.ValueExists;
}


// Function DebugMenu.DebugMenu_C.AddChildMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Param_ChildMenu                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::AddChildMenu(class UUserWidget* Param_ChildMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "AddChildMenu");

	Params::DebugMenu_C_AddChildMenu Parms{};

	Parms.Param_ChildMenu = Param_ChildMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TitleText                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UDebugMenu_C::SetTitle(const class FText& TitleText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "SetTitle");

	Params::DebugMenu_C_SetTitle Parms{};

	Parms.TitleText = std::move(TitleText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.AddMenuItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBUserWidget*                    Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::AddMenuItem(class USBUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "AddMenuItem");

	Params::DebugMenu_C_AddMenuItem Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.CreateChildButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugChildButton_C*              OutDebugButton                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::CreateChildButton(class UDebugChildButton_C** OutDebugButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "CreateChildButton");

	Params::DebugMenu_C_CreateChildButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutDebugButton != nullptr)
		*OutDebugButton = Parms.OutDebugButton;
}


// Function DebugMenu.DebugMenu_C.GetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBTextTableAsset*                InTextTableAsset                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InOldTextId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutText                                                (Parm, OutParm)

void UDebugMenu_C::GetText(class USBTextTableAsset* InTextTableAsset, class FName InTextID, class FName InOldTextId, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "GetText");

	Params::DebugMenu_C_GetText Parms{};

	Parms.InTextTableAsset = InTextTableAsset;
	Parms.InTextID = InTextID;
	Parms.InOldTextId = InOldTextId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}


// Function DebugMenu.DebugMenu_C.Set Item Command
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemSetName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AllSouko                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::Set_Item_Command(class FName ItemSetName, int32 AllSouko)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "Set Item Command");

	Params::DebugMenu_C_Set_Item_Command Parms{};

	Parms.ItemSetName = ItemSetName;
	Parms.AllSouko = AllSouko;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugMenu.DebugMenu_C.GetItemStrageNumber
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   AllSouko                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StorageNumber                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugMenu_C::GetItemStrageNumber(int32 AllSouko, int32 ItemIndex, int32* StorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugMenu_C", "GetItemStrageNumber");

	Params::DebugMenu_C_GetItemStrageNumber Parms{};

	Parms.AllSouko = AllSouko;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (StorageNumber != nullptr)
		*StorageNumber = Parms.StorageNumber;
}

}

