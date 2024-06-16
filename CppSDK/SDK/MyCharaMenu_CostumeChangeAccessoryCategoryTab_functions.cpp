#pragma once

 

// Package: MyCharaMenu_CostumeChangeAccessoryCategoryTab

#include "Basic.hpp"

#include "MyCharaMenu_CostumeChangeAccessoryCategoryTab_classes.hpp"
#include "MyCharaMenu_CostumeChangeAccessoryCategoryTab_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.OnAccessoryCategoryIconBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_AccessoryCategory         InAccessoryCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::OnAccessoryCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeAccessoryCategoryTab_C", "OnAccessoryCategoryIconBtnClicked__DelegateSignature");

	Params::MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryIconBtnClicked__DelegateSignature Parms{};

	Parms.InAccessoryCategory = InAccessoryCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeAccessoryCategoryTab_C", "ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab");

	Params::MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.OnAccessoryCategoryBtnClickedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_AccessoryCategory         InAccessoryCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::OnAccessoryCategoryBtnClickedEvent(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeAccessoryCategoryTab_C", "OnAccessoryCategoryBtnClickedEvent");

	Params::MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_OnAccessoryCategoryBtnClickedEvent Parms{};

	Parms.InAccessoryCategory = InAccessoryCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeAccessoryCategoryTab_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeAccessoryCategoryTab_C", "PreConstruct");

	Params::MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.UpdateSelectedAccessoryCategoryIconBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_AccessoryCategory         InAccessoryCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::UpdateSelectedAccessoryCategoryIconBtn(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeAccessoryCategoryTab_C", "UpdateSelectedAccessoryCategoryIconBtn");

	Params::MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_UpdateSelectedAccessoryCategoryIconBtn Parms{};

	Parms.InAccessoryCategory = InAccessoryCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C.SetSelectedAccessoryCategoryIconBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_AccessoryCategory         InAccessoryCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::SetSelectedAccessoryCategoryIconBtn(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CostumeChangeAccessoryCategoryTab_C", "SetSelectedAccessoryCategoryIconBtn");

	Params::MyCharaMenu_CostumeChangeAccessoryCategoryTab_C_SetSelectedAccessoryCategoryIconBtn Parms{};

	Parms.InAccessoryCategory = InAccessoryCategory;

	UObject::ProcessEvent(Func, &Parms);
}

}

