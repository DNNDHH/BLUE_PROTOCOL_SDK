#pragma once

 

// Package: UMG_MatchingMenu

#include "Basic.hpp"

#include "UMG_MatchingMenu_classes.hpp"
#include "UMG_MatchingMenu_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MatchingMenu_C*              Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_C::OnClose__DelegateSignature(class UUMG_MatchingMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "OnClose__DelegateSignature");

	Params::UMG_MatchingMenu_C_OnClose__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchingStart_Success__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_C::OnMatchingStart_Success__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "OnMatchingStart_Success__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.ExecuteUbergraph_UMG_MatchingMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_C::ExecuteUbergraph_UMG_MatchingMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "ExecuteUbergraph_UMG_MatchingMenu");

	Params::UMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.ForceExitMenu
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_C::ForceExitMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "ForceExitMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_C::BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");

	Params::UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnCloseDetailMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_C::OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "OnCloseDetailMenu");

	Params::UMG_MatchingMenu_C_OnCloseDetailMenu Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_C::BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature");

	Params::UMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUMG_MatchingMenu_C::WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_C::BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_C::BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnUICancel_Event
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_C::OnUICancel_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "OnUICancel_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchedGameCloseWindow_Event
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_C::OnMatchedGameCloseWindow_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "OnMatchedGameCloseWindow_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchedGame_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBMatchingGameState*             MatchedGame                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_C::OnMatchedGame_Event(class USBMatchingGameState* MatchedGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "OnMatchedGame_Event");

	Params::UMG_MatchingMenu_C_OnMatchedGame_Event Parms{};

	Parms.MatchedGame = MatchedGame;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.ResetWindowState
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_C::ResetWindowState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "ResetWindowState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FSBMapInfo>               DungeonMapInfoArray                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bUnlimit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_C::BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature(TArray<struct FSBMapInfo>& DungeonMapInfoArray, bool bUnlimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature");

	Params::UMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature Parms{};

	Parms.DungeonMapInfoArray = std::move(DungeonMapInfoArray);
	Parms.bUnlimit = bUnlimit;

	UObject::ProcessEvent(Func, &Parms);

	DungeonMapInfoArray = std::move(Parms.DungeonMapInfoArray);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_C::BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.SetWindowState
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_C::SetWindowState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "SetWindowState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.GetCurrentWidget
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_MatchingMenu_C::GetCurrentWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "GetCurrentWidget");

	Params::UMG_MatchingMenu_C_GetCurrentWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnClickSupplyIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_C::OnClickSupplyIcon(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_C", "OnClickSupplyIcon");

	Params::UMG_MatchingMenu_C_OnClickSupplyIcon Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}

}

