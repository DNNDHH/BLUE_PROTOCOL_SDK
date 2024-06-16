#pragma once

 

// Package: CommandMenu_MenuItem2

#include "Basic.hpp"

#include "CommandMenu_MenuItem2_classes.hpp"
#include "CommandMenu_MenuItem2_parameters.hpp"


namespace SDK
{

// Function CommandMenu_MenuItem2.CommandMenu_MenuItem2_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      Param_MenuType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_MenuItem2_C::OnSelect__DelegateSignature(ESBCommandMenuType Param_MenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem2_C", "OnSelect__DelegateSignature");

	Params::CommandMenu_MenuItem2_C_OnSelect__DelegateSignature Parms{};

	Parms.Param_MenuType = Param_MenuType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem2.CommandMenu_MenuItem2_C.ExecuteUbergraph_CommandMenu_MenuItem2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_MenuItem2_C::ExecuteUbergraph_CommandMenu_MenuItem2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem2_C", "ExecuteUbergraph_CommandMenu_MenuItem2");

	Params::CommandMenu_MenuItem2_C_ExecuteUbergraph_CommandMenu_MenuItem2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem2.CommandMenu_MenuItem2_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_MenuItem2_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem2_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_MenuItem2.CommandMenu_MenuItem2_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_MenuItem2_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem2_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_MenuItem2.CommandMenu_MenuItem2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_MenuItem2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem2_C", "PreConstruct");

	Params::CommandMenu_MenuItem2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem2.CommandMenu_MenuItem2_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_MenuItem2_C::BndEvt__Button_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem2_C", "BndEvt__Button_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_MenuItem2.CommandMenu_MenuItem2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenu_MenuItem2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

