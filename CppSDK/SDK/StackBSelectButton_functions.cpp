#pragma once

 

// Package: StackBSelectButton

#include "Basic.hpp"

#include "StackBSelectButton_classes.hpp"
#include "StackBSelectButton_parameters.hpp"


namespace SDK
{

// Function StackBSelectButton.StackBSelectButton_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStackBSelectButton_C::OnSelect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSelectButton_C", "OnSelect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBSelectButton.StackBSelectButton_C.OnMouseOver__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStackBSelectButton_C::OnMouseOver__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSelectButton_C", "OnMouseOver__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBSelectButton.StackBSelectButton_C.OnMouseExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStackBSelectButton_C::OnMouseExit__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSelectButton_C", "OnMouseExit__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBSelectButton.StackBSelectButton_C.ExecuteUbergraph_StackBSelectButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBSelectButton_C::ExecuteUbergraph_StackBSelectButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSelectButton_C", "ExecuteUbergraph_StackBSelectButton");

	Params::StackBSelectButton_C_ExecuteUbergraph_StackBSelectButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBSelectButton.StackBSelectButton_C.BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStackBSelectButton_C::BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSelectButton_C", "BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBSelectButton.StackBSelectButton_C.BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStackBSelectButton_C::BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSelectButton_C", "BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBSelectButton.StackBSelectButton_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStackBSelectButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSelectButton_C", "OnMouseLeave");

	Params::StackBSelectButton_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBSelectButton.StackBSelectButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStackBSelectButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSelectButton_C", "OnMouseEnter");

	Params::StackBSelectButton_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBSelectButton.StackBSelectButton_C.BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStackBSelectButton_C::BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSelectButton_C", "BndEvt__StackBSelectButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBSelectButton.StackBSelectButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStackBSelectButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSelectButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBSelectButton.StackBSelectButton_C.UpdateShows
// (Public, BlueprintCallable, BlueprintEvent)

void UStackBSelectButton_C::UpdateShows()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSelectButton_C", "UpdateShows");

	UObject::ProcessEvent(Func, nullptr);
}

}

