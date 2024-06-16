#pragma once

 

// Package: CategoryList_Type1_Item

#include "Basic.hpp"

#include "CategoryList_Type1_Item_classes.hpp"
#include "CategoryList_Type1_Item_parameters.hpp"


namespace SDK
{

// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ListIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_Item_C::OnClick__DelegateSignature(int32 Param_ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Item_C", "OnClick__DelegateSignature");

	Params::CategoryList_Type1_Item_C_OnClick__DelegateSignature Parms{};

	Parms.Param_ListIndex = Param_ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.ExecuteUbergraph_CategoryList_Type1_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_Item_C::ExecuteUbergraph_CategoryList_Type1_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Item_C", "ExecuteUbergraph_CategoryList_Type1_Item");

	Params::CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCategoryList_Type1_Item_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Item_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCategoryList_Type1_Item_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Item_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCategoryList_Type1_Item_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Item_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCategoryList_Type1_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCategoryList_Type1_Item_C::SetName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Item_C", "SetName");

	Params::CategoryList_Type1_Item_C_SetName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_Item_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Item_C", "SetBtnSelected");

	Params::CategoryList_Type1_Item_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.SetNewIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_Item_C::SetNewIcon(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Item_C", "SetNewIcon");

	Params::CategoryList_Type1_Item_C_SetNewIcon Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

