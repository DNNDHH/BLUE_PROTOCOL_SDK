#pragma once

 

// Package: InheritCustomPerkSlotItem

#include "Basic.hpp"

#include "InheritCustomPerkSlotItem_classes.hpp"
#include "InheritCustomPerkSlotItem_parameters.hpp"


namespace SDK
{

// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.OnProtectClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UInheritCustomPerkSlotItem_C::OnProtectClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "OnProtectClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ExecuteUbergraph_InheritCustomPerkSlotItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInheritCustomPerkSlotItem_C::ExecuteUbergraph_InheritCustomPerkSlotItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "ExecuteUbergraph_InheritCustomPerkSlotItem");

	Params::InheritCustomPerkSlotItem_C_ExecuteUbergraph_InheritCustomPerkSlotItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInheritCustomPerkSlotItem_C::BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ApplyData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInheritCustomPerkSlotItem_C::ApplyData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "ApplyData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetWeaponData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       Param_SBCharacter_Weapon_Perk_Data                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UInheritCustomPerkSlotItem_C::SetWeaponData(const struct FSBCharacterWeaponPerkData& Param_SBCharacter_Weapon_Perk_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "SetWeaponData");

	Params::InheritCustomPerkSlotItem_C_SetWeaponData Parms{};

	Parms.Param_SBCharacter_Weapon_Perk_Data = std::move(Param_SBCharacter_Weapon_Perk_Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetProtectButtonVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInheritCustomPerkSlotItem_C::SetProtectButtonVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "SetProtectButtonVisible");

	Params::InheritCustomPerkSlotItem_C_SetProtectButtonVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInheritCustomPerkSlotItem_C::SetItemData(const int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "SetItemData");

	Params::InheritCustomPerkSlotItem_C_SetItemData Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInheritCustomPerkSlotItem_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "SetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.UpdateSlotHeight
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInheritCustomPerkSlotItem_C::UpdateSlotHeight(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "UpdateSlotHeight");

	Params::InheritCustomPerkSlotItem_C_UpdateSlotHeight Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.UpdateProtectBtn
// (Protected, BlueprintCallable, BlueprintEvent)

void UInheritCustomPerkSlotItem_C::UpdateProtectBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "UpdateProtectBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetNewPerkVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInheritCustomPerkSlotItem_C::SetNewPerkVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "SetNewPerkVisible");

	Params::InheritCustomPerkSlotItem_C_SetNewPerkVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetChangeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChangeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInheritCustomPerkSlotItem_C::SetChangeData(bool bChangeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "SetChangeData");

	Params::InheritCustomPerkSlotItem_C_SetChangeData Parms{};

	Parms.bChangeData = bChangeData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ActivateCraftResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInheritCustomPerkSlotItem_C::ActivateCraftResult(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "ActivateCraftResult");

	Params::InheritCustomPerkSlotItem_C_ActivateCraftResult Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.IsProtected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_IsProtected                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInheritCustomPerkSlotItem_C::IsProtected(bool* Param_IsProtected) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "IsProtected");

	Params::InheritCustomPerkSlotItem_C_IsProtected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsProtected != nullptr)
		*Param_IsProtected = Parms.Param_IsProtected;
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.GetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBCharacterWeaponPerkData       Data                                                   (Parm, OutParm, NoDestructor)

void UInheritCustomPerkSlotItem_C::GetData(struct FSBCharacterWeaponPerkData* Data) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "GetData");

	Params::InheritCustomPerkSlotItem_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.IsEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_bIsEmpty                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInheritCustomPerkSlotItem_C::IsEmpty(bool* Param_bIsEmpty) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritCustomPerkSlotItem_C", "IsEmpty");

	Params::InheritCustomPerkSlotItem_C_IsEmpty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bIsEmpty != nullptr)
		*Param_bIsEmpty = Parms.Param_bIsEmpty;
}

}

