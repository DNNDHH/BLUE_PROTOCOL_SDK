#pragma once

 

// Package: WeaponCustomPerkSlotItem

#include "Basic.hpp"

#include "WeaponCustomPerkSlotItem_classes.hpp"
#include "WeaponCustomPerkSlotItem_parameters.hpp"


namespace SDK
{

// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.OnProtectClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponCustomPerkSlotItem_C::OnProtectClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "OnProtectClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.ExecuteUbergraph_WeaponCustomPerkSlotItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomPerkSlotItem_C::ExecuteUbergraph_WeaponCustomPerkSlotItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "ExecuteUbergraph_WeaponCustomPerkSlotItem");

	Params::WeaponCustomPerkSlotItem_C_ExecuteUbergraph_WeaponCustomPerkSlotItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponCustomPerkSlotItem_C::BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.ApplyData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponCustomPerkSlotItem_C::ApplyData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "ApplyData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetWeaponData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       Param_SBCharacter_Weapon_Perk_Data                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWeaponCustomPerkSlotItem_C::SetWeaponData(const struct FSBCharacterWeaponPerkData& Param_SBCharacter_Weapon_Perk_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "SetWeaponData");

	Params::WeaponCustomPerkSlotItem_C_SetWeaponData Parms{};

	Parms.Param_SBCharacter_Weapon_Perk_Data = std::move(Param_SBCharacter_Weapon_Perk_Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetProtectButtonVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomPerkSlotItem_C::SetProtectButtonVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "SetProtectButtonVisible");

	Params::WeaponCustomPerkSlotItem_C_SetProtectButtonVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomPerkSlotItem_C::SetItemData(const int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "SetItemData");

	Params::WeaponCustomPerkSlotItem_C_SetItemData Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponCustomPerkSlotItem_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "SetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.UpdateSlotHeight
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomPerkSlotItem_C::UpdateSlotHeight(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "UpdateSlotHeight");

	Params::WeaponCustomPerkSlotItem_C_UpdateSlotHeight Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.UpdateProtectBtn
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponCustomPerkSlotItem_C::UpdateProtectBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "UpdateProtectBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetNewPerkVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomPerkSlotItem_C::SetNewPerkVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "SetNewPerkVisible");

	Params::WeaponCustomPerkSlotItem_C_SetNewPerkVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.SetChangeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChangeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomPerkSlotItem_C::SetChangeData(bool bChangeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "SetChangeData");

	Params::WeaponCustomPerkSlotItem_C_SetChangeData Parms{};

	Parms.bChangeData = bChangeData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.ActivateCraftResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomPerkSlotItem_C::ActivateCraftResult(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "ActivateCraftResult");

	Params::WeaponCustomPerkSlotItem_C_ActivateCraftResult Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.IsProtected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_IsProtected                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomPerkSlotItem_C::IsProtected(bool* Param_IsProtected) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "IsProtected");

	Params::WeaponCustomPerkSlotItem_C_IsProtected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsProtected != nullptr)
		*Param_IsProtected = Parms.Param_IsProtected;
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.GetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBCharacterWeaponPerkData       Data                                                   (Parm, OutParm, NoDestructor)

void UWeaponCustomPerkSlotItem_C::GetData(struct FSBCharacterWeaponPerkData* Data) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "GetData");

	Params::WeaponCustomPerkSlotItem_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C.IsEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_bIsEmpty                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomPerkSlotItem_C::IsEmpty(bool* Param_bIsEmpty) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomPerkSlotItem_C", "IsEmpty");

	Params::WeaponCustomPerkSlotItem_C_IsEmpty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bIsEmpty != nullptr)
		*Param_bIsEmpty = Parms.Param_bIsEmpty;
}

}

