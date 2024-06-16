#pragma once

 

// Package: TokenSelectorListView

#include "Basic.hpp"

#include "TokenSelectorListView_classes.hpp"
#include "TokenSelectorListView_parameters.hpp"


namespace SDK
{

// Function TokenSelectorListView.TokenSelectorListView_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTokenSelectorListView_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListView.TokenSelectorListView_C.OnSelectClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListView_C::OnSelectClose__DelegateSignature(int32 TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "OnSelectClose__DelegateSignature");

	Params::TokenSelectorListView_C_OnSelectClose__DelegateSignature Parms{};

	Parms.TokenID = TokenID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListView.TokenSelectorListView_C.ExecuteUbergraph_TokenSelectorListView
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListView_C::ExecuteUbergraph_TokenSelectorListView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "ExecuteUbergraph_TokenSelectorListView");

	Params::TokenSelectorListView_C_ExecuteUbergraph_TokenSelectorListView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListView.TokenSelectorListView_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UTokenSelectorListView_C::WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListView.TokenSelectorListView_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTokenSelectorListView_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListView.TokenSelectorListView_C.OnPressCancel
// (BlueprintCallable, BlueprintEvent)

void UTokenSelectorListView_C::OnPressCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "OnPressCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UTokenSelectorListView_C::BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature
// (BlueprintEvent)

void UTokenSelectorListView_C::BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListView.TokenSelectorListView_C.Set Window Alignment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InAlignment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListView_C::Set_Window_Alignment(const struct FVector2D& InAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "Set Window Alignment");

	Params::TokenSelectorListView_C_Set_Window_Alignment Parms{};

	Parms.InAlignment = std::move(InAlignment);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListView.TokenSelectorListView_C.SetWindowPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListView_C::SetWindowPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "SetWindowPosition");

	Params::TokenSelectorListView_C_SetWindowPosition Parms{};

	Parms.InPosition = std::move(InPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListView.TokenSelectorListView_C.BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTokenSelectorListView_C::BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListView.TokenSelectorListView_C.Close
// (BlueprintCallable, BlueprintEvent)

void UTokenSelectorListView_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListView.TokenSelectorListView_C.OnSelectTicket
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTokenSelectorListItem_C*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListView_C::OnSelectTicket(class UTokenSelectorListItem_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "OnSelectTicket");

	Params::TokenSelectorListView_C_OnSelectTicket Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListView.TokenSelectorListView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTokenSelectorListView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListView.TokenSelectorListView_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTokenSelectorListView_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListView.TokenSelectorListView_C.UpdateCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTokenSelectorListItem_C*         OnSelect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListView_C::UpdateCheck(class UTokenSelectorListItem_C* OnSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "UpdateCheck");

	Params::TokenSelectorListView_C_UpdateCheck Parms{};

	Parms.OnSelect = OnSelect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListView.TokenSelectorListView_C.SetResepiData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftMasterData                 Param_RecepiData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTokenSelectorListView_C::SetResepiData(const struct FCraftMasterData& Param_RecepiData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "SetResepiData");

	Params::TokenSelectorListView_C_SetResepiData Parms{};

	Parms.Param_RecepiData = std::move(Param_RecepiData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListView.TokenSelectorListView_C.SetCraftCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CraftCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListView_C::SetCraftCount(int32 CraftCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListView_C", "SetCraftCount");

	Params::TokenSelectorListView_C_SetCraftCount Parms{};

	Parms.CraftCount = CraftCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

