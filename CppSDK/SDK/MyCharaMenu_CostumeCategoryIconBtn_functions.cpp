#pragma once

 

// Package: MyCharaMenu_CostumeCategoryIconBtn

#include "Basic.hpp"

#include "MyCharaMenu_CostumeCategoryIconBtn_classes.hpp"
#include "MyCharaMenu_CostumeCategoryIconBtn_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_CostumeCategory           InCostumeCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeCategoryIconBtn_C::OnButtonClicked__DelegateSignature(E_MyCharaMenu_CostumeCategory InCostumeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeCategoryIconBtn_C", "OnButtonClicked__DelegateSignature");

	Params::MyCharaMenu_CostumeCategoryIconBtn_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.InCostumeCategory = InCostumeCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeCategoryIconBtn_C::ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeCategoryIconBtn_C", "ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn");

	Params::MyCharaMenu_CostumeCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_CostumeCategoryIconBtn_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeCategoryIconBtn_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_CostumeCategoryIconBtn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeCategoryIconBtn_C", "PreConstruct");

	Params::MyCharaMenu_CostumeCategoryIconBtn_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.SetCostumeCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_CostumeCategory           InCostumeCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeCategoryIconBtn_C::SetCostumeCategory(E_MyCharaMenu_CostumeCategory InCostumeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeCategoryIconBtn_C", "SetCostumeCategory");

	Params::MyCharaMenu_CostumeCategoryIconBtn_C_SetCostumeCategory Parms{};

	Parms.InCostumeCategory = InCostumeCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.GetCostumeCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_MyCharaMenu_CostumeCategory           OutCostumeCategory                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeCategoryIconBtn_C::GetCostumeCategory(E_MyCharaMenu_CostumeCategory* OutCostumeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeCategoryIconBtn_C", "GetCostumeCategory");

	Params::MyCharaMenu_CostumeCategoryIconBtn_C_GetCostumeCategory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCostumeCategory != nullptr)
		*OutCostumeCategory = Parms.OutCostumeCategory;
}


// Function MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_CostumeCategoryIconBtn_C::SetSelected(bool InIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeCategoryIconBtn_C", "SetSelected");

	Params::MyCharaMenu_CostumeCategoryIconBtn_C_SetSelected Parms{};

	Parms.InIsSelected = InIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

