#pragma once

 

// Package: ActionMenu

#include "Basic.hpp"

#include "ActionMenu_classes.hpp"
#include "ActionMenu_parameters.hpp"


namespace SDK
{

// Function ActionMenu.ActionMenu_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionMenu_C::OnItemSelected__DelegateSignature(int32 SelectItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenu_C", "OnItemSelected__DelegateSignature");

	Params::ActionMenu_C_OnItemSelected__DelegateSignature Parms{};

	Parms.SelectItemIndex = SelectItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionMenu.ActionMenu_C.ExecuteUbergraph_ActionMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionMenu_C::ExecuteUbergraph_ActionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenu_C", "ExecuteUbergraph_ActionMenu");

	Params::ActionMenu_C_ExecuteUbergraph_ActionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionMenu.ActionMenu_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UActionMenu_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenu_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActionMenu.ActionMenu_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionMenu_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenu_C", "OnAnimationFinished");

	Params::ActionMenu_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionMenu.ActionMenu_C.OnClicked_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionMenuButton_C*              Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionMenu_C::OnClicked_Event_0(class UActionMenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenu_C", "OnClicked_Event_0");

	Params::ActionMenu_C_OnClicked_Event_0 Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionMenu.ActionMenu_C.AddItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UActionMenu_C::AddItem(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenu_C", "AddItem");

	Params::ActionMenu_C_AddItem Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionMenu.ActionMenu_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UActionMenu_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenu_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActionMenu.ActionMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActionMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActionMenu.ActionMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActionMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

