#pragma once

 

// Package: OptionMenu_ConfigMenu

#include "Basic.hpp"

#include "OptionMenu_ConfigMenu_classes.hpp"
#include "OptionMenu_ConfigMenu_parameters.hpp"


namespace SDK
{

// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetCloseState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Close                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenu_ConfigMenu_C::SetCloseState(bool Close)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "SetCloseState");

	Params::OptionMenu_ConfigMenu_C_SetCloseState Parms{};

	Parms.Close = Close;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.IsClosable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsClose                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenu_ConfigMenu_C::IsClosable(bool* IsClose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "IsClosable");

	Params::OptionMenu_ConfigMenu_C_IsClosable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsClose != nullptr)
		*IsClose = Parms.IsClose;
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.IsChangeable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChanged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenu_ConfigMenu_C::IsChangeable(bool* IsChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "IsChangeable");

	Params::OptionMenu_ConfigMenu_C_IsChangeable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsChanged != nullptr)
		*IsChanged = Parms.IsChanged;
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenu_ConfigMenu_C::SetSelectedItem(int32 InItemID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "SetSelectedItem");

	Params::OptionMenu_ConfigMenu_C_SetSelectedItem Parms{};

	Parms.InItemID = InItemID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Init
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnSaveCharaConfigDelegate_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenu_ConfigMenu_C::OnSaveCharaConfigDelegate_____(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "OnSaveCharaConfigDelegate_����");

	Params::OptionMenu_ConfigMenu_C_OnSaveCharaConfigDelegate_____ Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnSaveCharaConfig
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenu_ConfigMenu_C::OnSaveCharaConfig(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "OnSaveCharaConfig");

	Params::OptionMenu_ConfigMenu_C_OnSaveCharaConfig Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.ChangeCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_NextId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenu_ConfigMenu_C::ChangeCheck(int32 Param_NextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "ChangeCheck");

	Params::OptionMenu_ConfigMenu_C_ChangeCheck Parms{};

	Parms.Param_NextId = Param_NextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SuccessChanged_����_0
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::SuccessChanged______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "SuccessChanged_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.CheckChanged
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::CheckChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "CheckChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SuccessChanged_����_1
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::SuccessChanged______1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "SuccessChanged_����_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SelectSubMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenu_ConfigMenu_C::SelectSubMenu(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "SelectSubMenu");

	Params::OptionMenu_ConfigMenu_C_SelectSubMenu Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.FailChanged
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::FailChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "FailChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.PurgeHudLayoutButton
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::PurgeHudLayoutButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "PurgeHudLayoutButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.BndEvt__ConfigSwicher_K2Node_ComponentBoundEvent_2_RequestParentFocus__DelegateSignature
// (BlueprintEvent)

void UOptionMenu_ConfigMenu_C::BndEvt__ConfigSwicher_K2Node_ComponentBoundEvent_2_RequestParentFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "BndEvt__ConfigSwicher_K2Node_ComponentBoundEvent_2_RequestParentFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnHasChenged_����_0
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::OnHasChenged______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "OnHasChenged_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetTitleMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTitleMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionMenu_ConfigMenu_C::SetTitleMode(bool bTitleMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "SetTitleMode");

	Params::OptionMenu_ConfigMenu_C_SetTitleMode Parms{};

	Parms.bTitleMode = bTitleMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.UnbindDelegates
// (BlueprintCallable, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::UnbindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "UnbindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.ExecuteUbergraph_OptionMenu_ConfigMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionMenu_ConfigMenu_C::ExecuteUbergraph_OptionMenu_ConfigMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "ExecuteUbergraph_OptionMenu_ConfigMenu");

	Params::OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnHasChenged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::OnHasChenged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "OnHasChenged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.RequestParentFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::RequestParentFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "RequestParentFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptionMenu_ConfigMenu_C::OnChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionMenu_ConfigMenu_C", "OnChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

