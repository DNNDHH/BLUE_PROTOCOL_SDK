#pragma once

 

// Package: GashaMenu_CategoryItem

#include "Basic.hpp"

#include "GashaMenu_CategoryItem_classes.hpp"
#include "GashaMenu_CategoryItem_parameters.hpp"


namespace SDK
{

// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.OnBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_BtnId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaMenu_CategoryItem_C::OnBtnClicked__DelegateSignature(int32 Param_BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_CategoryItem_C", "OnBtnClicked__DelegateSignature");

	Params::GashaMenu_CategoryItem_C_OnBtnClicked__DelegateSignature Parms{};

	Parms.Param_BtnId = Param_BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.ExecuteUbergraph_GashaMenu_CategoryItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaMenu_CategoryItem_C::ExecuteUbergraph_GashaMenu_CategoryItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_CategoryItem_C", "ExecuteUbergraph_GashaMenu_CategoryItem");

	Params::GashaMenu_CategoryItem_C_ExecuteUbergraph_GashaMenu_CategoryItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGashaMenu_CategoryItem_C::BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_CategoryItem_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.Set Tab Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaMenu_CategoryItem_C::Set_Tab_Text(int32 TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_CategoryItem_C", "Set Tab Text");

	Params::GashaMenu_CategoryItem_C_Set_Tab_Text Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGashaMenu_CategoryItem_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_CategoryItem_C", "SetBtnSelected");

	Params::GashaMenu_CategoryItem_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.GetTabText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaMenu_CategoryItem_C::GetTabText(int32* TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_CategoryItem_C", "GetTabText");

	Params::GashaMenu_CategoryItem_C_GetTabText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TextId != nullptr)
		*TextId = Parms.TextId;
}


// Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.SetRibbon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RibbonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaMenu_CategoryItem_C::SetRibbon(int32 RibbonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_CategoryItem_C", "SetRibbon");

	Params::GashaMenu_CategoryItem_C_SetRibbon Parms{};

	Parms.RibbonType = RibbonType;

	UObject::ProcessEvent(Func, &Parms);
}

}

