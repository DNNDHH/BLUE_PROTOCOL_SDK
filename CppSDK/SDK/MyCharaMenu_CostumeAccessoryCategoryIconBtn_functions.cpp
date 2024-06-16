#pragma once

 

// Package: MyCharaMenu_CostumeAccessoryCategoryIconBtn

#include "Basic.hpp"

#include "MyCharaMenu_CostumeAccessoryCategoryIconBtn_classes.hpp"
#include "MyCharaMenu_CostumeAccessoryCategoryIconBtn_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_AccessoryCategory         InAccessoryCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::OnButtonClicked__DelegateSignature(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeAccessoryCategoryIconBtn_C", "OnButtonClicked__DelegateSignature");

	Params::MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.InAccessoryCategory = InAccessoryCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeAccessoryCategoryIconBtn_C", "ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn");

	Params::MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_ExecuteUbergraph_MyCharaMenu_CostumeAccessoryCategoryIconBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeAccessoryCategoryIconBtn_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeAccessoryCategoryIconBtn_C", "PreConstruct");

	Params::MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.SetAccessoryCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_AccessoryCategory         InAccessoryCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::SetAccessoryCategory(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeAccessoryCategoryIconBtn_C", "SetAccessoryCategory");

	Params::MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetAccessoryCategory Parms{};

	Parms.InAccessoryCategory = InAccessoryCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.GetAccessoryCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_MyCharaMenu_AccessoryCategory         OutAccessoryCategory                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::GetAccessoryCategory(E_MyCharaMenu_AccessoryCategory* OutAccessoryCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeAccessoryCategoryIconBtn_C", "GetAccessoryCategory");

	Params::MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_GetAccessoryCategory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutAccessoryCategory != nullptr)
		*OutAccessoryCategory = Parms.OutAccessoryCategory;
}


// Function MyCharaMenu_CostumeAccessoryCategoryIconBtn.MyCharaMenu_CostumeAccessoryCategoryIconBtn_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_CostumeAccessoryCategoryIconBtn_C::SetSelected(bool InIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeAccessoryCategoryIconBtn_C", "SetSelected");

	Params::MyCharaMenu_CostumeAccessoryCategoryIconBtn_C_SetSelected Parms{};

	Parms.InIsSelected = InIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

