#pragma once

 

// Package: ResultMenuBase

#include "Basic.hpp"

#include "ResultMenuBase_classes.hpp"
#include "ResultMenuBase_parameters.hpp"


namespace SDK
{

// Function ResultMenuBase.ResultMenuBase_C.ExecuteUbergraph_ResultMenuBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultMenuBase_C::ExecuteUbergraph_ResultMenuBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "ExecuteUbergraph_ResultMenuBase");

	Params::ResultMenuBase_C_ExecuteUbergraph_ResultMenuBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultMenuBase.ResultMenuBase_C.EventEndPendingReward
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventEndPendingReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventEndPendingReward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventCloseEnd
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventCloseEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventCloseEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutResultFooter
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventEndAnimOutResultFooter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventEndAnimOutResultFooter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutDialogLetter
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventEndAnimOutDialogLetter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventEndAnimOutDialogLetter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventEndCloseResultPanel
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventEndCloseResultPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventEndCloseResultPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventClose
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutDialogAbility
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventEndAnimOutDialogAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventEndAnimOutDialogAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventOpenEnd
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventOpenEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventOpenEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventEndAnimInResultFooter
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventEndAnimInResultFooter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventEndAnimInResultFooter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventEndOpenResultPanel
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventEndOpenResultPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventEndOpenResultPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventOpen
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventTelopWait
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventTelopWait()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventTelopWait");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.EventTelopStart
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EventTelopStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EventTelopStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.UnbindShortcutRing
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBShortcutRingWidget*            InShortcutRing                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultMenuBase_C::UnbindShortcutRing(class USBShortcutRingWidget* InShortcutRing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "UnbindShortcutRing");

	Params::ResultMenuBase_C_UnbindShortcutRing Parms{};

	Parms.InShortcutRing = InShortcutRing;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultMenuBase.ResultMenuBase_C.BindShortcutRing
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBShortcutRingWidget*            InShortcutRing                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultMenuBase_C::BindShortcutRing(class USBShortcutRingWidget* InShortcutRing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "BindShortcutRing");

	Params::ResultMenuBase_C_BindShortcutRing Parms{};

	Parms.InShortcutRing = InShortcutRing;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultMenuBase.ResultMenuBase_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.OnEventKeyUp
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultMenuBase_C::OnEventKeyUp(const struct FKeyEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "OnEventKeyUp");

	Params::ResultMenuBase_C_OnEventKeyUp Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultMenuBase.ResultMenuBase_C.OnEventKeyDown
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultMenuBase_C::OnEventKeyDown(const struct FKeyEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "OnEventKeyDown");

	Params::ResultMenuBase_C_OnEventKeyDown Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultMenuBase.ResultMenuBase_C.EnableControl
// (Protected, BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::EnableControl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "EnableControl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.DisableControl
// (Protected, BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::DisableControl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "DisableControl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.OnInitializeKeyGuide
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::OnInitializeKeyGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "OnInitializeKeyGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.OpenDialogAbility
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::OpenDialogAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "OpenDialogAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.isKeyDownShortcutRing
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultMenuBase_C::IsKeyDownShortcutRing(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "isKeyDownShortcutRing");

	Params::ResultMenuBase_C_IsKeyDownShortcutRing Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ResultMenuBase.ResultMenuBase_C.SetVisibleScreenOver
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultMenuBase_C::SetVisibleScreenOver(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "SetVisibleScreenOver");

	Params::ResultMenuBase_C_SetVisibleScreenOver Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultMenuBase.ResultMenuBase_C.SetActiveScreenOver
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultMenuBase_C::SetActiveScreenOver(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "SetActiveScreenOver");

	Params::ResultMenuBase_C_SetActiveScreenOver Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultMenuBase.ResultMenuBase_C.OnInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.OnEnd
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::OnEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "OnEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.ExecuteShortcutRing
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::ExecuteShortcutRing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "ExecuteShortcutRing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.ExecuteMenu
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::ExecuteMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "ExecuteMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.SetVisibleMouseCursor
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultMenuBase_C::SetVisibleMouseCursor(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "SetVisibleMouseCursor");

	Params::ResultMenuBase_C_SetVisibleMouseCursor Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultMenuBase.ResultMenuBase_C.OpenDialogLetter
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResultMenuBase_C::OpenDialogLetter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "OpenDialogLetter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultMenuBase.ResultMenuBase_C.isKeyDownMenu
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultMenuBase_C::IsKeyDownMenu(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "isKeyDownMenu");

	Params::ResultMenuBase_C_IsKeyDownMenu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ResultMenuBase.ResultMenuBase_C.GetKeyMenu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// const struct FKey                       ReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm, HasGetValueTypeHash)

const struct FKey UResultMenuBase_C::GetKeyMenu() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "GetKeyMenu");

	Params::ResultMenuBase_C_GetKeyMenu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultMenuBase.ResultMenuBase_C.GetScreenOverWidget
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetSwitcher*                  OutWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultMenuBase_C::GetScreenOverWidget(class UWidgetSwitcher** OutWidget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "GetScreenOverWidget");

	Params::ResultMenuBase_C_GetScreenOverWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutWidget != nullptr)
		*OutWidget = Parms.OutWidget;
}


// Function ResultMenuBase.ResultMenuBase_C.GetDialogLetter
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UResultDialog_Letter_C*           OutDialog                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultMenuBase_C::GetDialogLetter(class UResultDialog_Letter_C** OutDialog) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "GetDialogLetter");

	Params::ResultMenuBase_C_GetDialogLetter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutDialog != nullptr)
		*OutDialog = Parms.OutDialog;
}


// Function ResultMenuBase.ResultMenuBase_C.GetDialogAbility
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDialog_TacticalAbilityLearning_C*OutDialog                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultMenuBase_C::GetDialogAbility(class UDialog_TacticalAbilityLearning_C** OutDialog) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "GetDialogAbility");

	Params::ResultMenuBase_C_GetDialogAbility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutDialog != nullptr)
		*OutDialog = Parms.OutDialog;
}


// Function ResultMenuBase.ResultMenuBase_C.IsKeyDownAll
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FKey>                     InKeyList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultMenuBase_C::IsKeyDownAll(TArray<struct FKey>& InKeyList, bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "IsKeyDownAll");

	Params::ResultMenuBase_C_IsKeyDownAll Parms{};

	Parms.InKeyList = std::move(InKeyList);

	UObject::ProcessEvent(Func, &Parms);

	InKeyList = std::move(Parms.InKeyList);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ResultMenuBase.ResultMenuBase_C.IsSimpleMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultMenuBase_C::IsSimpleMode(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "IsSimpleMode");

	Params::ResultMenuBase_C_IsSimpleMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ResultMenuBase.ResultMenuBase_C.IsKeyDownJust
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultMenuBase_C::IsKeyDownJust(const struct FKey& Key, bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "IsKeyDownJust");

	Params::ResultMenuBase_C_IsKeyDownJust Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ResultMenuBase.ResultMenuBase_C.GetResultShortcutRing
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBShortcutRingWidget*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBShortcutRingWidget* UResultMenuBase_C::GetResultShortcutRing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "GetResultShortcutRing");

	Params::ResultMenuBase_C_GetResultShortcutRing Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultMenuBase.ResultMenuBase_C.GetResultKeyGuide
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBResultKeyGuide*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBResultKeyGuide* UResultMenuBase_C::GetResultKeyGuide() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "GetResultKeyGuide");

	Params::ResultMenuBase_C_GetResultKeyGuide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultMenuBase.ResultMenuBase_C.GetResultWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBResultPanelBaseWidget*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBResultPanelBaseWidget* UResultMenuBase_C::GetResultWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "GetResultWidget");

	Params::ResultMenuBase_C_GetResultWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultMenuBase.ResultMenuBase_C.GetFooter
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBResultFooter*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBResultFooter* UResultMenuBase_C::GetFooter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultMenuBase_C", "GetFooter");

	Params::ResultMenuBase_C_GetFooter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

