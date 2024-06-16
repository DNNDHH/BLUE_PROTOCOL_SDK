#pragma once

 

// Package: UMG_AdminGotoBookmarkWindow

#include "Basic.hpp"

#include "UMG_AdminGotoBookmarkWindow_classes.hpp"
#include "UMG_AdminGotoBookmarkWindow_parameters.hpp"


namespace SDK
{

// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.ExecuteUbergraph_UMG_AdminGotoBookmarkWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindow_C::ExecuteUbergraph_UMG_AdminGotoBookmarkWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "ExecuteUbergraph_UMG_AdminGotoBookmarkWindow");

	Params::UMG_AdminGotoBookmarkWindow_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.OnClickedItemMoveButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBAdminGotoBookmarkItem*         Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindow_C::OnClickedItemMoveButton(class USBAdminGotoBookmarkItem* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "OnClickedItemMoveButton");

	Params::UMG_AdminGotoBookmarkWindow_C_OnClickedItemMoveButton Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindow_C::BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature");

	Params::UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindow_C::BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature");

	Params::UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.Show
// (BlueprintCallable, BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__Button_Down_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::BndEvt__Button_Down_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "BndEvt__Button_Down_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__Button_Up_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::BndEvt__Button_Up_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "BndEvt__Button_Up_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.OnConfirmDelete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindow_C::OnConfirmDelete(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "OnConfirmDelete");

	Params::UMG_AdminGotoBookmarkWindow_C_OnConfirmDelete Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::BndEvt__Button_Delete_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "BndEvt__Button_Delete_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.CloseRegistrationWindow
// (BlueprintCallable, BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::CloseRegistrationWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "CloseRegistrationWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__Button_Edit_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::BndEvt__Button_Edit_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "BndEvt__Button_Edit_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.CreateRegistrationWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBAdminGotoBookmarkItem*         EditingData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindow_C::CreateRegistrationWindow(class USBAdminGotoBookmarkItem* EditingData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "CreateRegistrationWindow");

	Params::UMG_AdminGotoBookmarkWindow_C_CreateRegistrationWindow Parms{};

	Parms.EditingData = EditingData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.SetSelectedData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Param_SelectedData                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindow_C::SetSelectedData(class UObject* Param_SelectedData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "SetSelectedData");

	Params::UMG_AdminGotoBookmarkWindow_C_SetSelectedData Parms{};

	Parms.Param_SelectedData = Param_SelectedData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__Button_Move_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::BndEvt__Button_Move_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "BndEvt__Button_Move_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AdminGotoBookmarkWindow_C::BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::UMG_AdminGotoBookmarkWindow_C_BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.AddItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBAdminGotoBookmarkItem*         NewData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindow_C::AddItem(class USBAdminGotoBookmarkItem* NewData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "AddItem");

	Params::UMG_AdminGotoBookmarkWindow_C_AddItem Parms{};

	Parms.NewData = NewData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.BndEvt__Button_Register_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::BndEvt__Button_Register_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "BndEvt__Button_Register_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_AdminGotoBookmarkWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

