#pragma once

 

// Package: MyCharaMenu_EquipRingHandSelectDialog

#include "Basic.hpp"

#include "MyCharaMenu_EquipRingHandSelectDialog_classes.hpp"
#include "MyCharaMenu_EquipRingHandSelectDialog_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsLeftHand                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_EquipRingHandSelectDialog_C::OnSelected__DelegateSignature(bool InIsLeftHand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "OnSelected__DelegateSignature");

	Params::MyCharaMenu_EquipRingHandSelectDialog_C_OnSelected__DelegateSignature Parms{};

	Parms.InIsLeftHand = InIsLeftHand;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_EquipRingHandSelectDialog_C::ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog");

	Params::MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnRightHand_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnRightHand_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnRightHand_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnRightHand_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnRightHand_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnRightHand_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnLeftHand_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnLeftHand_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnLeftHand_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnLeftHand_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnLeftHand_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnLeftHand_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.BndEvt__MyCharaMenu_EquipRingHandSelectDialog_CmnClose02_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::BndEvt__MyCharaMenu_EquipRingHandSelectDialog_CmnClose02_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "BndEvt__MyCharaMenu_EquipRingHandSelectDialog_CmnClose02_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.EventClose
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::EventClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "EventClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.BndEvt__BtnLeftHand_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::BndEvt__BtnLeftHand_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "BndEvt__BtnLeftHand_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "BndEvt__BtnScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.BndEvt__BtnRightHand_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::BndEvt__BtnRightHand_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "BndEvt__BtnRightHand_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EquipRingHandSelectDialog_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquipRingHandSelectDialog_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}

}

