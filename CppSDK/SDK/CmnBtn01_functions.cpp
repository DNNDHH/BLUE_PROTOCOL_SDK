#pragma once

 

// Package: CmnBtn01

#include "Basic.hpp"

#include "CmnBtn01_classes.hpp"
#include "CmnBtn01_parameters.hpp"


namespace SDK
{

// Function CmnBtn01.CmnBtn01_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnBtn01_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn01.CmnBtn01_C.ExecuteUbergraph_CmnBtn01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn01_C::ExecuteUbergraph_CmnBtn01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "ExecuteUbergraph_CmnBtn01");

	Params::CmnBtn01_C_ExecuteUbergraph_CmnBtn01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn01.CmnBtn01_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UCmnBtn01_C::CustomEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "CustomEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn01.CmnBtn01_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnBtn01_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn01.CmnBtn01_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPadKeySkinType                       SkinType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn01_C::CustomEvent_1(const ESBPadKeySkinType SkinType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "CustomEvent_1");

	Params::CmnBtn01_C_CustomEvent_1 Parms{};

	Parms.SkinType = SkinType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn01.CmnBtn01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnBtn01_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn01.CmnBtn01_C.StopClickInputAction
// (BlueprintCallable, BlueprintEvent)

void UCmnBtn01_C::StopClickInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "StopClickInputAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn01.CmnBtn01_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UCmnBtn01_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn01.CmnBtn01_C.SetClickInputAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn01_C::SetClickInputAction(class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "SetClickInputAction");

	Params::CmnBtn01_C_SetClickInputAction Parms{};

	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn01.CmnBtn01_C.UpdateText
// (BlueprintCallable, BlueprintEvent)

void UCmnBtn01_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn01.CmnBtn01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn01_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn01.CmnBtn01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn01_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn01.CmnBtn01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn01_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn01.CmnBtn01_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnBtn01_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "PreConstruct");

	Params::CmnBtn01_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn01.CmnBtn01_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTextTableAsset*                Param_InTextTable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_InTextID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_InTextName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESystemSE                               InPressedSound                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn01_C::Set_Text(class USBTextTableAsset* Param_InTextTable, int32 Param_InTextID, class FName Param_InTextName, ESystemSE InPressedSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn01_C", "Set Text");

	Params::CmnBtn01_C_Set_Text Parms{};

	Parms.Param_InTextTable = Param_InTextTable;
	Parms.Param_InTextID = Param_InTextID;
	Parms.Param_InTextName = Param_InTextName;
	Parms.InPressedSound = InPressedSound;

	UObject::ProcessEvent(Func, &Parms);
}

}

