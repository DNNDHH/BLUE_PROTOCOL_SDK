#pragma once

 

// Package: DeleteDialogFirst

#include "Basic.hpp"

#include "DeleteDialogFirst_classes.hpp"
#include "DeleteDialogFirst_parameters.hpp"


namespace SDK
{

// Function DeleteDialogFirst.DeleteDialogFirst_C.OnEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DELETE                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDeleteDialogFirst_C::OnEnd__DelegateSignature(bool DELETE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeleteDialogFirst_C", "OnEnd__DelegateSignature");

	Params::DeleteDialogFirst_C_OnEnd__DelegateSignature Parms{};

	Parms.DELETE = DELETE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DeleteDialogFirst.DeleteDialogFirst_C.ExecuteUbergraph_DeleteDialogFirst
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeleteDialogFirst_C::ExecuteUbergraph_DeleteDialogFirst(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeleteDialogFirst_C", "ExecuteUbergraph_DeleteDialogFirst");

	Params::DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DeleteDialogFirst.DeleteDialogFirst_C.BndEvt__DeleteDialogFirst_CmnClose01_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature
// (BlueprintEvent)

void UDeleteDialogFirst_C::BndEvt__DeleteDialogFirst_CmnClose01_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeleteDialogFirst_C", "BndEvt__DeleteDialogFirst_CmnClose01_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeleteDialogFirst.DeleteDialogFirst_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDeleteDialogFirst_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeleteDialogFirst_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeleteDialogFirst.DeleteDialogFirst_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UDeleteDialogFirst_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeleteDialogFirst_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeleteDialogFirst.DeleteDialogFirst_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDeleteDialogFirst_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeleteDialogFirst_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeleteDialogFirst.DeleteDialogFirst_C.BndEvt__BtnDelete_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDeleteDialogFirst_C::BndEvt__BtnDelete_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeleteDialogFirst_C", "BndEvt__BtnDelete_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeleteDialogFirst.DeleteDialogFirst_C.BndEvt__BtnDelete_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDeleteDialogFirst_C::BndEvt__BtnDelete_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeleteDialogFirst_C", "BndEvt__BtnDelete_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeleteDialogFirst.DeleteDialogFirst_C.BndEvt__BtnToWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDeleteDialogFirst_C::BndEvt__BtnToWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeleteDialogFirst_C", "BndEvt__BtnToWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

