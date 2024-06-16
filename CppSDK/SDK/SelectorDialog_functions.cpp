#pragma once

 

// Package: SelectorDialog

#include "Basic.hpp"

#include "SelectorDialog_classes.hpp"
#include "SelectorDialog_parameters.hpp"


namespace SDK
{

// Function SelectorDialog.SelectorDialog_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Selected                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectorDialog_C::OnSelected__DelegateSignature(int32 Param_Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "OnSelected__DelegateSignature");

	Params::SelectorDialog_C_OnSelected__DelegateSignature Parms{};

	Parms.Param_Selected = Param_Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorDialog.SelectorDialog_C.OnCanceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USelectorDialog_C::OnCanceled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "OnCanceled__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.ExecuteUbergraph_SelectorDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectorDialog_C::ExecuteUbergraph_SelectorDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "ExecuteUbergraph_SelectorDialog");

	Params::SelectorDialog_C_ExecuteUbergraph_SelectorDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorDialog.SelectorDialog_C.BndEvt__SelectorDialog_CmnClose01_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature
// (BlueprintEvent)

void USelectorDialog_C::BndEvt__SelectorDialog_CmnClose01_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "BndEvt__SelectorDialog_CmnClose01_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.AutoSelect
// (BlueprintCallable, BlueprintEvent)

void USelectorDialog_C::AutoSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "AutoSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.BndEvt__BtnClose_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectorDialog_C::BndEvt__BtnClose_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "BndEvt__BtnClose_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.BndEvt__BtnClose_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectorDialog_C::BndEvt__BtnClose_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "BndEvt__BtnClose_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.BndEvt__BtnClose_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectorDialog_C::BndEvt__BtnClose_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "BndEvt__BtnClose_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectorDialog_C::BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectorDialog_C::BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectorDialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.OnUI_Cancel
// (BlueprintCallable, BlueprintEvent)

void USelectorDialog_C::OnUI_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "OnUI_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.OnSelectedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USelectorDialogBtn_C*             Param_Selected                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SelectNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectorDialog_C::OnSelectedItem(class USelectorDialogBtn_C* Param_Selected, int32 SelectNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "OnSelectedItem");

	Params::SelectorDialog_C_OnSelectedItem Parms{};

	Parms.Param_Selected = Param_Selected;
	Parms.SelectNum = SelectNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorDialog.SelectorDialog_C.StartSelectDialog
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Vertical                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Desc                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>                   SelectItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   DefaultSelect                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BtnWidth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SelectOnClose                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectorDialog_C::StartSelectDialog(bool Param_Vertical, const class FString& Desc, const TArray<class FString>& SelectItem, const int32 DefaultSelect, float BtnWidth, bool SelectOnClose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "StartSelectDialog");

	Params::SelectorDialog_C_StartSelectDialog Parms{};

	Parms.Param_Vertical = Param_Vertical;
	Parms.Desc = std::move(Desc);
	Parms.SelectItem = std::move(SelectItem);
	Parms.DefaultSelect = DefaultSelect;
	Parms.BtnWidth = BtnWidth;
	Parms.SelectOnClose = SelectOnClose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorDialog.SelectorDialog_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectorDialog_C::BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.Close
// (BlueprintCallable, BlueprintEvent)

void USelectorDialog_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.BndEvt__Btn_OutBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectorDialog_C::BndEvt__Btn_OutBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "BndEvt__Btn_OutBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectorDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialog.SelectorDialog_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectorDialog_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialog_C", "PreConstruct");

	Params::SelectorDialog_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

