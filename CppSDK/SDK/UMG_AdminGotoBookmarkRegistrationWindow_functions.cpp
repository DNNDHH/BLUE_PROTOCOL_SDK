#pragma once

 

// Package: UMG_AdminGotoBookmarkRegistrationWindow

#include "Basic.hpp"

#include "UMG_AdminGotoBookmarkRegistrationWindow_classes.hpp"
#include "UMG_AdminGotoBookmarkRegistrationWindow_parameters.hpp"


namespace SDK
{

// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkRegistrationWindow_C::ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindow_C", "ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow");

	Params::UMG_AdminGotoBookmarkRegistrationWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.OnUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBAdminGotoBookmarkItem*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkRegistrationWindow_C::OnUpdate(class USBAdminGotoBookmarkItem* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindow_C", "OnUpdate");

	Params::UMG_AdminGotoBookmarkRegistrationWindow_C_OnUpdate Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.ApplyEditingData
// (BlueprintCallable, BlueprintEvent)

void UUMG_AdminGotoBookmarkRegistrationWindow_C::ApplyEditingData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindow_C", "ApplyEditingData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.ChangeEditingData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBAdminGotoBookmarkItem*         Param_EditingData                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkRegistrationWindow_C::ChangeEditingData(class USBAdminGotoBookmarkItem* Param_EditingData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindow_C", "ChangeEditingData");

	Params::UMG_AdminGotoBookmarkRegistrationWindow_C_ChangeEditingData Parms{};

	Parms.Param_EditingData = Param_EditingData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.SetDataText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVector                          Positon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkRegistrationWindow_C::SetDataText(const class FString& MapId, const struct FVector& Positon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindow_C", "SetDataText");

	Params::UMG_AdminGotoBookmarkRegistrationWindow_C_SetDataText Parms{};

	Parms.MapId = std::move(MapId);
	Parms.Positon = std::move(Positon);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.BndEvt__Button_CurrPos_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_AdminGotoBookmarkRegistrationWindow_C::BndEvt__Button_CurrPos_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindow_C", "BndEvt__Button_CurrPos_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.BndEvt__Button_Register_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_AdminGotoBookmarkRegistrationWindow_C::BndEvt__Button_Register_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindow_C", "BndEvt__Button_Register_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkRegistrationWindow.UMG_AdminGotoBookmarkRegistrationWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_AdminGotoBookmarkRegistrationWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkRegistrationWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

