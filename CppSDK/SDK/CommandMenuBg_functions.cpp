#pragma once

 

// Package: CommandMenuBg

#include "Basic.hpp"

#include "CommandMenuBg_classes.hpp"
#include "CommandMenuBg_parameters.hpp"


namespace SDK
{

// Function CommandMenuBg.CommandMenuBg_C.OnAnimInFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommandMenuBg_C::OnAnimInFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuBg_C", "OnAnimInFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuBg.CommandMenuBg_C.OnAnimTabInFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommandMenuBg_C::OnAnimTabInFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuBg_C", "OnAnimTabInFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuBg.CommandMenuBg_C.ExecuteUbergraph_CommandMenuBg
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuBg_C::ExecuteUbergraph_CommandMenuBg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuBg_C", "ExecuteUbergraph_CommandMenuBg");

	Params::CommandMenuBg_C_ExecuteUbergraph_CommandMenuBg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuBg.CommandMenuBg_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UCommandMenuBg_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuBg_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuBg.CommandMenuBg_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenuBg_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuBg_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenuBg.CommandMenuBg_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenuBg_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuBg_C", "PreConstruct");

	Params::CommandMenuBg_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuBg.CommandMenuBg_C.PlayInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bVisible                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_HelpId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Pos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenuBg_C::PlayInOut(bool Param_bVisible, int32 Param_HelpId, const class FText& Text, int32 Pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuBg_C", "PlayInOut");

	Params::CommandMenuBg_C_PlayInOut Parms{};

	Parms.Param_bVisible = Param_bVisible;
	Parms.Param_HelpId = Param_HelpId;
	Parms.Text = std::move(Text);
	Parms.Pos = Pos;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenuBg.CommandMenuBg_C.SetHelpText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommandMenuBg_C::SetHelpText(int32 ID, const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenuBg_C", "SetHelpText");

	Params::CommandMenuBg_C_SetHelpText Parms{};

	Parms.ID = ID;
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

