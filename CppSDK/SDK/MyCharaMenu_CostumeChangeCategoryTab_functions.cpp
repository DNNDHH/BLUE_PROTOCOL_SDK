#pragma once

 

// Package: MyCharaMenu_CostumeChangeCategoryTab

#include "Basic.hpp"

#include "MyCharaMenu_CostumeChangeCategoryTab_classes.hpp"
#include "MyCharaMenu_CostumeChangeCategoryTab_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.OnCostumeCategoryIconBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_CostumeCategory           InCostumeCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeCategoryTab_C::OnCostumeCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_CostumeCategory InCostumeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeCategoryTab_C", "OnCostumeCategoryIconBtnClicked__DelegateSignature");

	Params::MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClicked__DelegateSignature Parms{};

	Parms.InCostumeCategory = InCostumeCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeCategoryTab_C::ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeCategoryTab_C", "ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab");

	Params::MyCharaMenu_CostumeChangeCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_CostumeChangeCategoryTab_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeCategoryTab_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.OnCostumeCategoryIconBtnClickedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_CostumeCategory           InCostumeCategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeCategoryTab_C::OnCostumeCategoryIconBtnClickedEvent(E_MyCharaMenu_CostumeCategory InCostumeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeCategoryTab_C", "OnCostumeCategoryIconBtnClickedEvent");

	Params::MyCharaMenu_CostumeChangeCategoryTab_C_OnCostumeCategoryIconBtnClickedEvent Parms{};

	Parms.InCostumeCategory = InCostumeCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_CostumeChangeCategoryTab_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeCategoryTab_C", "PreConstruct");

	Params::MyCharaMenu_CostumeChangeCategoryTab_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.UpdateSelectedCostumeCategoryIconBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_CostumeCategory           InSelectedCostumeCategory                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeCategoryTab_C::UpdateSelectedCostumeCategoryIconBtn(E_MyCharaMenu_CostumeCategory InSelectedCostumeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeCategoryTab_C", "UpdateSelectedCostumeCategoryIconBtn");

	Params::MyCharaMenu_CostumeChangeCategoryTab_C_UpdateSelectedCostumeCategoryIconBtn Parms{};

	Parms.InSelectedCostumeCategory = InSelectedCostumeCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C.SetSelectedCostumeCategoryIconBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_CostumeCategory           InSelectedCostumeCategory                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeCategoryTab_C::SetSelectedCostumeCategoryIconBtn(E_MyCharaMenu_CostumeCategory InSelectedCostumeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeCategoryTab_C", "SetSelectedCostumeCategoryIconBtn");

	Params::MyCharaMenu_CostumeChangeCategoryTab_C_SetSelectedCostumeCategoryIconBtn Parms{};

	Parms.InSelectedCostumeCategory = InSelectedCostumeCategory;

	UObject::ProcessEvent(Func, &Parms);
}

}

