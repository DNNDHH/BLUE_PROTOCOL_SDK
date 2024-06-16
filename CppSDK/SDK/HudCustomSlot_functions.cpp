#pragma once

 

// Package: HudCustomSlot

#include "Basic.hpp"

#include "HudCustomSlot_classes.hpp"
#include "HudCustomSlot_parameters.hpp"


namespace SDK
{

// Function HudCustomSlot.HudCustomSlot_C.RequestSave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCustomHudLayoutSlot                  Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudCustomSlot_C::RequestSave__DelegateSignature(ESBCustomHudLayoutSlot Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "RequestSave__DelegateSignature");

	Params::HudCustomSlot_C_RequestSave__DelegateSignature Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudCustomSlot.HudCustomSlot_C.ExecuteUbergraph_HudCustomSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudCustomSlot_C::ExecuteUbergraph_HudCustomSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "ExecuteUbergraph_HudCustomSlot");

	Params::HudCustomSlot_C_ExecuteUbergraph_HudCustomSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHudCustomSlot_C::BndEvt__Btn_CS3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "BndEvt__Btn_CS3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHudCustomSlot_C::BndEvt__Btn_CS2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "BndEvt__Btn_CS2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHudCustomSlot_C::BndEvt__Btn_CS1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "BndEvt__Btn_CS1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomSlot.HudCustomSlot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHudCustomSlot_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomSlot.HudCustomSlot_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UHudCustomSlot_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHudCustomSlot_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomSlot.HudCustomSlot_C.OnTextInputed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           OnButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InputText                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UHudCustomSlot_C::OnTextInputed(EDialogResult OnButton, const class FText& InputText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "OnTextInputed");

	Params::HudCustomSlot_C_OnTextInputed Parms{};

	Parms.OnButton = OnButton;
	Parms.InputText = std::move(InputText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudCustomSlot.HudCustomSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHudCustomSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomSlot.HudCustomSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHudCustomSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "PreConstruct");

	Params::HudCustomSlot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudCustomSlot.HudCustomSlot_C.CollectBtnTxt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHudCustomSlot_C::CollectBtnTxt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "CollectBtnTxt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudCustomSlot.HudCustomSlot_C.GenerateTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHudCustomSlot_C::GenerateTexts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudCustomSlot_C", "GenerateTexts");

	UObject::ProcessEvent(Func, nullptr);
}

}

