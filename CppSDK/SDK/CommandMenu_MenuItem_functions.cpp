#pragma once

 

// Package: CommandMenu_MenuItem

#include "Basic.hpp"

#include "CommandMenu_MenuItem_classes.hpp"
#include "CommandMenu_MenuItem_parameters.hpp"


namespace SDK
{

// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommandMenu_MenuItem_C*          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_MenuItem_C::OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "OnSelect__DelegateSignature");

	Params::CommandMenu_MenuItem_C_OnSelect__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.ExecuteUbergraph_CommandMenu_MenuItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_MenuItem_C::ExecuteUbergraph_CommandMenu_MenuItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "ExecuteUbergraph_CommandMenu_MenuItem");

	Params::CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.ShowExcramation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_MenuItem_C::ShowExcramation(bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "ShowExcramation");

	Params::CommandMenu_MenuItem_C_ShowExcramation Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_MenuItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "PreConstruct");

	Params::CommandMenu_MenuItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_97_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_MenuItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_97_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_97_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_MenuItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_76_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_MenuItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.Play Btn Anim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bActive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_MenuItem_C::Play_Btn_Anim(bool Param_bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "Play Btn Anim");

	Params::CommandMenu_MenuItem_C_Play_Btn_Anim Parms{};

	Parms.Param_bActive = Param_bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.GetMenuType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBCommandMenuType                      MenuType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_MenuItem_C::GetMenuType(ESBCommandMenuType* MenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "GetMenuType");

	Params::CommandMenu_MenuItem_C_GetMenuType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MenuType != nullptr)
		*MenuType = Parms.MenuType;
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.SetBtnTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bActive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_MenuItem_C::SetBtnTextColor(bool Param_bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "SetBtnTextColor");

	Params::CommandMenu_MenuItem_C_SetBtnTextColor Parms{};

	Parms.Param_bActive = Param_bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.SetBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bActive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_MenuItem_C::SetBtn(bool Param_bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "SetBtn");

	Params::CommandMenu_MenuItem_C_SetBtn Parms{};

	Parms.Param_bActive = Param_bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.IsActiveExcramation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_MenuItem_C::IsActiveExcramation(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "IsActiveExcramation");

	Params::CommandMenu_MenuItem_C_IsActiveExcramation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;
}


// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.UpdateMailRestrictions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Aleat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Warning                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_MenuItem_C::UpdateMailRestrictions(bool Aleat, bool Warning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem_C", "UpdateMailRestrictions");

	Params::CommandMenu_MenuItem_C_UpdateMailRestrictions Parms{};

	Parms.Aleat = Aleat;
	Parms.Warning = Warning;

	UObject::ProcessEvent(Func, &Parms);
}

}

