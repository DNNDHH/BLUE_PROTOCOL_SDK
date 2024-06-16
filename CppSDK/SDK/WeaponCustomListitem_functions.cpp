#pragma once

 

// Package: WeaponCustomListitem

#include "Basic.hpp"

#include "WeaponCustomListitem_classes.hpp"
#include "WeaponCustomListitem_parameters.hpp"


namespace SDK
{

// Function WeaponCustomListitem.WeaponCustomListitem_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OnSelectWeapn                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWeaponCustomListitem_C*          Select                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomListitem_C::OnSelect__DelegateSignature(const struct FOwnItemInfo& OnSelectWeapn, class UWeaponCustomListitem_C* Select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomListitem_C", "OnSelect__DelegateSignature");

	Params::WeaponCustomListitem_C_OnSelect__DelegateSignature Parms{};

	Parms.OnSelectWeapn = std::move(OnSelectWeapn);
	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomListitem.WeaponCustomListitem_C.ExecuteUbergraph_WeaponCustomListitem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomListitem_C::ExecuteUbergraph_WeaponCustomListitem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomListitem_C", "ExecuteUbergraph_WeaponCustomListitem");

	Params::WeaponCustomListitem_C_ExecuteUbergraph_WeaponCustomListitem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomListitem.WeaponCustomListitem_C.BndEvt__WeaponCustomListitem_Btn_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponCustomListitem_C::BndEvt__WeaponCustomListitem_Btn_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomListitem_C", "BndEvt__WeaponCustomListitem_Btn_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomListitem.WeaponCustomListitem_C.SetWeaponData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     WeaponData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponCustomListitem_C::SetWeaponData(const struct FOwnItemInfo& WeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomListitem_C", "SetWeaponData");

	Params::WeaponCustomListitem_C_SetWeaponData Parms{};

	Parms.WeaponData = std::move(WeaponData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomListitem.WeaponCustomListitem_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomListitem_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomListitem_C", "SetSelected");

	Params::WeaponCustomListitem_C_SetSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

