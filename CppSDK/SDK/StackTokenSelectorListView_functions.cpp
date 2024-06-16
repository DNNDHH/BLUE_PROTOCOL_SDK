#pragma once

 

// Package: StackTokenSelectorListView

#include "Basic.hpp"

#include "StackTokenSelectorListView_classes.hpp"
#include "StackTokenSelectorListView_parameters.hpp"


namespace SDK
{

// Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStackTokenSelectorListView_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnSelectClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackTokenSelectorListView_C::OnSelectClose__DelegateSignature(int32 TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "OnSelectClose__DelegateSignature");

	Params::StackTokenSelectorListView_C_OnSelectClose__DelegateSignature Parms{};

	Parms.TokenID = TokenID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.ExecuteUbergraph_StackTokenSelectorListView
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackTokenSelectorListView_C::ExecuteUbergraph_StackTokenSelectorListView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "ExecuteUbergraph_StackTokenSelectorListView");

	Params::StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UStackTokenSelectorListView_C::WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStackTokenSelectorListView_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnPressCancel
// (BlueprintCallable, BlueprintEvent)

void UStackTokenSelectorListView_C::OnPressCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "OnPressCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UStackTokenSelectorListView_C::BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature
// (BlueprintEvent)

void UStackTokenSelectorListView_C::BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.Set Window Alignment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InAlignment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackTokenSelectorListView_C::Set_Window_Alignment(const struct FVector2D& InAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "Set Window Alignment");

	Params::StackTokenSelectorListView_C_Set_Window_Alignment Parms{};

	Parms.InAlignment = std::move(InAlignment);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.SetWindowPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackTokenSelectorListView_C::SetWindowPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "SetWindowPosition");

	Params::StackTokenSelectorListView_C_SetWindowPosition Parms{};

	Parms.InPosition = std::move(InPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStackTokenSelectorListView_C::BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.Close
// (BlueprintCallable, BlueprintEvent)

void UStackTokenSelectorListView_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnSelectTicket
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStackTokenSelectorListItem_C*    Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackTokenSelectorListView_C::OnSelectTicket(class UStackTokenSelectorListItem_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "OnSelectTicket");

	Params::StackTokenSelectorListView_C_OnSelectTicket Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStackTokenSelectorListView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStackTokenSelectorListView_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListView.StackTokenSelectorListView_C.UpdateCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStackTokenSelectorListItem_C*    OnSelect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackTokenSelectorListView_C::UpdateCheck(class UStackTokenSelectorListItem_C* OnSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListView_C", "UpdateCheck");

	Params::StackTokenSelectorListView_C_UpdateCheck Parms{};

	Parms.OnSelect = OnSelect;

	UObject::ProcessEvent(Func, &Parms);
}

}

