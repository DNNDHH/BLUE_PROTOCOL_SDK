#pragma once

 

// Package: CraftRecepiItem

#include "Basic.hpp"

#include "CraftRecepiItem_classes.hpp"
#include "CraftRecepiItem_parameters.hpp"


namespace SDK
{

// Function CraftRecepiItem.CraftRecepiItem_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            SelectRecepi                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UCraftRecepiItem_C*               SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftRecepiItem_C::OnSelect__DelegateSignature(const struct FCharacterCraftRecepi& SelectRecepi, class UCraftRecepiItem_C* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "OnSelect__DelegateSignature");

	Params::CraftRecepiItem_C_OnSelect__DelegateSignature Parms{};

	Parms.SelectRecepi = std::move(SelectRecepi);
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiItem.CraftRecepiItem_C.ExecuteUbergraph_CraftRecepiItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftRecepiItem_C::ExecuteUbergraph_CraftRecepiItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "ExecuteUbergraph_CraftRecepiItem");

	Params::CraftRecepiItem_C_ExecuteUbergraph_CraftRecepiItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiItem.CraftRecepiItem_C.Update Wishlist
// (BlueprintCallable, BlueprintEvent)

void UCraftRecepiItem_C::Update_Wishlist()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "Update Wishlist");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.OnUpdate Boosst
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftRecepiItem_C::OnUpdate_Boosst(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "OnUpdate Boosst");

	Params::CraftRecepiItem_C_OnUpdate_Boosst Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiItem.CraftRecepiItem_C.Unbind Boost
// (BlueprintCallable, BlueprintEvent)

void UCraftRecepiItem_C::Unbind_Boost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "Unbind Boost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.Bind Boost
// (BlueprintCallable, BlueprintEvent)

void UCraftRecepiItem_C::Bind_Boost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "Bind Boost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.Construct_RecepiAttach
// (BlueprintCallable, BlueprintEvent)

void UCraftRecepiItem_C::Construct_RecepiAttach()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "Construct_RecepiAttach");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.Destruct_RecepiAttach
// (BlueprintCallable, BlueprintEvent)

void UCraftRecepiItem_C::Destruct_RecepiAttach()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "Destruct_RecepiAttach");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.OnChangeRecepi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecepiId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftRecepiItem_C::OnChangeRecepi(int32 RecepiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "OnChangeRecepi");

	Params::CraftRecepiItem_C_OnChangeRecepi Parms{};

	Parms.RecepiId = RecepiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiItem.CraftRecepiItem_C.UnbindItemChangeAmountDelegate 
// (BlueprintCallable, BlueprintEvent)

void UCraftRecepiItem_C::UnbindItemChangeAmountDelegate_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "UnbindItemChangeAmountDelegate ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftRecepiItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.Bind OnChangeAmount
// (BlueprintCallable, BlueprintEvent)

void UCraftRecepiItem_C::Bind_OnChangeAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "Bind OnChangeAmount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.OnOwnItemUpdate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChangeItemAmountParam         InParam                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCraftRecepiItem_C::OnOwnItemUpdate(const struct FSBChangeItemAmountParam& InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "OnOwnItemUpdate");

	Params::CraftRecepiItem_C_OnOwnItemUpdate Parms{};

	Parms.InParam = std::move(InParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiItem.CraftRecepiItem_C.Set Recepi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            Param_ItemRecepi                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCraftRecepiItem_C::Set_Recepi(const struct FCharacterCraftRecepi& Param_ItemRecepi)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "Set Recepi");

	Params::CraftRecepiItem_C_Set_Recepi Parms{};

	Parms.Param_ItemRecepi = std::move(Param_ItemRecepi);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiItem.CraftRecepiItem_C.BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCraftRecepiItem_C::BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftRecepiItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftRecepiItem_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "SetBtnSelected");

	Params::CraftRecepiItem_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiItem.CraftRecepiItem_C.isItemRecepi
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsItem                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftRecepiItem_C::IsItemRecepi(bool* Param_IsItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "isItemRecepi");

	Params::CraftRecepiItem_C_IsItemRecepi Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsItem != nullptr)
		*Param_IsItem = Parms.Param_IsItem;
}


// Function CraftRecepiItem.CraftRecepiItem_C.UpdateBoost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCraftRecepiItem_C::UpdateBoost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "UpdateBoost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.Bind Wishlist Update
// (Public, BlueprintCallable, BlueprintEvent)

void UCraftRecepiItem_C::Bind_Wishlist_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "Bind Wishlist Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiItem.CraftRecepiItem_C.Unbind Wishlist Update
// (Public, BlueprintCallable, BlueprintEvent)

void UCraftRecepiItem_C::Unbind_Wishlist_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiItem_C", "Unbind Wishlist Update");

	UObject::ProcessEvent(Func, nullptr);
}

}

