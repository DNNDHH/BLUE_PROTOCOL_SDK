#pragma once

 

// Package: SelectMenu

#include "Basic.hpp"

#include "SelectMenu_classes.hpp"
#include "SelectMenu_parameters.hpp"


namespace SDK
{

// Function SelectMenu.SelectMenu_C.OnSelectItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMenu_C::OnSelectItem__DelegateSignature(int32 SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "OnSelectItem__DelegateSignature");

	Params::SelectMenu_C_OnSelectItem__DelegateSignature Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMenu.SelectMenu_C.ExecuteUbergraph_SelectMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMenu_C::ExecuteUbergraph_SelectMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "ExecuteUbergraph_SelectMenu");

	Params::SelectMenu_C_ExecuteUbergraph_SelectMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMenu.SelectMenu_C.AddItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void USelectMenu_C::AddItem(const class FText& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "AddItem");

	Params::SelectMenu_C_AddItem Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMenu.SelectMenu_C.AddItemFromStringArray
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   ItemArray                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USelectMenu_C::AddItemFromStringArray(const TArray<class FString>& ItemArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "AddItemFromStringArray");

	Params::SelectMenu_C_AddItemFromStringArray Parms{};

	Parms.ItemArray = std::move(ItemArray);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMenu.SelectMenu_C.Close
// (BlueprintCallable, BlueprintEvent)

void USelectMenu_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMenu.SelectMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMenu.SelectMenu_C.ProcSelectItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMenu_C::ProcSelectItem(int32 SelectItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "ProcSelectItem");

	Params::SelectMenu_C_ProcSelectItem Parms{};

	Parms.SelectItemIndex = SelectItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMenu.SelectMenu_C.Show
// (BlueprintCallable, BlueprintEvent)

void USelectMenu_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectMenu.SelectMenu_C.SetCurrentItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CurrentItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMenu_C::SetCurrentItem(int32 Param_CurrentItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "SetCurrentItem");

	Params::SelectMenu_C_SetCurrentItem Parms{};

	Parms.Param_CurrentItem = Param_CurrentItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMenu.SelectMenu_C.ChangeCurrentItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CurrentItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMenu_C::ChangeCurrentItem(int32 Param_CurrentItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "ChangeCurrentItem");

	Params::SelectMenu_C_ChangeCurrentItem Parms{};

	Parms.Param_CurrentItem = Param_CurrentItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMenu.SelectMenu_C.OnSelectMenuItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USelectMenuItem_C*                SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectMenu_C::OnSelectMenuItem(class USelectMenuItem_C* SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "OnSelectMenuItem");

	Params::SelectMenu_C_OnSelectMenuItem Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMenu.SelectMenu_C.AddItemFromArray
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                     ItemArray                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USelectMenu_C::AddItemFromArray(const TArray<class FText>& ItemArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "AddItemFromArray");

	Params::SelectMenu_C_AddItemFromArray Parms{};

	Parms.ItemArray = std::move(ItemArray);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectMenu.SelectMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

