#pragma once

 

// Package: OptionMenu

#include "Basic.hpp"

#include "OptionMenu_classes.hpp"
#include "OptionMenu_parameters.hpp"


namespace SDK
{

// Function OptionMenu.OptionMenu_C.OnCloseAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::OnCloseAnimationFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "OnCloseAnimationFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.ExecuteUbergraph_OptionMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenu_C::ExecuteUbergraph_OptionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "ExecuteUbergraph_OptionMenu");

	Params::OptionMenu_C_ExecuteUbergraph_OptionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu.OptionMenu_C.OnCloseEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenu_C::OnCloseEvent(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "OnCloseEvent");

	Params::OptionMenu_C_OnCloseEvent Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu.OptionMenu_C.OnCheckDead
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBDamageEvent                   DamageEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Myself                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenu_C::OnCheckDead(float Damage, const struct FSBDamageEvent& DamageEvent, class AActor* DamageCauser, class AActor* Myself)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "OnCheckDead");

	Params::OptionMenu_C_OnCheckDead Parms{};

	Parms.Damage = Damage;
	Parms.DamageEvent = std::move(DamageEvent);
	Parms.DamageCauser = DamageCauser;
	Parms.Myself = Myself;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu.OptionMenu_C.DemoPlayEvent
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::DemoPlayEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "DemoPlayEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.UnbindForceCloseEvent
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::UnbindForceCloseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "UnbindForceCloseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.TermCommandMenuEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bForce                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenu_C::TermCommandMenuEvent(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "TermCommandMenuEvent");

	Params::OptionMenu_C_TermCommandMenuEvent Parms{};

	Parms.bForce = bForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu.OptionMenu_C.BindForceCloseEvent
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::BindForceCloseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "BindForceCloseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.UpdateEscText
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::UpdateEscText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "UpdateEscText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UOptionMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.OnUICancel
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::OnUICancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "OnUICancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UOptionMenu_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.UnbindGameOverDelegate
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::UnbindGameOverDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "UnbindGameOverDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.ForceClose
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::ForceClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "ForceClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.Press On MainMenu
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::Press_On_MainMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "Press On MainMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.Pless On Cancel
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::Pless_On_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "Pless On Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionMenu_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_86_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.ShowHint
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::ShowHint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "ShowHint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.BndEvt__ConfigMenu_K2Node_ComponentBoundEvent_3_RequestParentFocus__DelegateSignature
// (BlueprintEvent)

void UOptionMenu_C::BndEvt__ConfigMenu_K2Node_ComponentBoundEvent_3_RequestParentFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "BndEvt__ConfigMenu_K2Node_ComponentBoundEvent_3_RequestParentFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.OnChangeEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bisEditMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenu_C::OnChangeEditMode(bool bisEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "OnChangeEditMode");

	Params::OptionMenu_C_OnChangeEditMode Parms{};

	Parms.bisEditMode = bisEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu.OptionMenu_C.OnClickedOptionCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenu_C::OnClickedOptionCategory(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "OnClickedOptionCategory");

	Params::OptionMenu_C_OnClickedOptionCategory Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu.OptionMenu_C.NoProblem
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::NoProblem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "NoProblem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.HasProblem?
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::HasProblem_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "HasProblem?");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.CheckClose
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::CheckClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "CheckClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.Changed
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::Changed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "Changed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.CheckChanged
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::CheckChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "CheckChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.Init
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.OnCloseOptionMenu
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::OnCloseOptionMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "OnCloseOptionMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.OnPress_QuickAccess_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBKeyConfigAction                      QuickAccess                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenu_C::OnPress_QuickAccess_1(ESBKeyConfigAction QuickAccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "OnPress_QuickAccess_1");

	Params::OptionMenu_C_OnPress_QuickAccess_1 Parms{};

	Parms.QuickAccess = QuickAccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu.OptionMenu_C.DialogClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenu_C::DialogClose(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "DialogClose");

	Params::OptionMenu_C_DialogClose Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu.OptionMenu_C.BrowserOpenCheck
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::BrowserOpenCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "BrowserOpenCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.CloseOptionMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionMenu_C::CloseOptionMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "CloseOptionMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu.OptionMenu_C.SetSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOptionMenuItemType                     InSelectedItemType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenu_C::SetSelectedItem(EOptionMenuItemType InSelectedItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "SetSelectedItem");

	Params::OptionMenu_C_SetSelectedItem Parms{};

	Parms.InSelectedItemType = InSelectedItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu.OptionMenu_C.IsChangedItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChanged                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenu_C::IsChangedItem(bool* bChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "IsChangedItem");

	Params::OptionMenu_C_IsChangedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bChanged != nullptr)
		*bChanged = Parms.bChanged;
}


// Function OptionMenu.OptionMenu_C.IsClosable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanClose                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenu_C::IsClosable(bool* CanClose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "IsClosable");

	Params::OptionMenu_C_IsClosable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanClose != nullptr)
		*CanClose = Parms.CanClose;
}


// Function OptionMenu.OptionMenu_C.SetCloseState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Close                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenu_C::SetCloseState(bool Close)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_C", "SetCloseState");

	Params::OptionMenu_C_SetCloseState Parms{};

	Parms.Close = Close;

	UObject::ProcessEvent(Func, &Parms);
}

}

