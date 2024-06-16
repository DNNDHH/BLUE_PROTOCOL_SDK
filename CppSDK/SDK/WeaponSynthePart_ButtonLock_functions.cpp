#pragma once

 

// Package: WeaponSynthePart_ButtonLock

#include "Basic.hpp"

#include "WeaponSynthePart_ButtonLock_classes.hpp"
#include "WeaponSynthePart_ButtonLock_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsLock                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_ButtonLock_C::OnClicked__DelegateSignature(bool Param_IsLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ButtonLock_C", "OnClicked__DelegateSignature");

	Params::WeaponSynthePart_ButtonLock_C_OnClicked__DelegateSignature Parms{};

	Parms.Param_IsLock = Param_IsLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.ExecuteUbergraph_WeaponSynthePart_ButtonLock
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_ButtonLock_C::ExecuteUbergraph_WeaponSynthePart_ButtonLock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ButtonLock_C", "ExecuteUbergraph_WeaponSynthePart_ButtonLock");

	Params::WeaponSynthePart_ButtonLock_C_ExecuteUbergraph_WeaponSynthePart_ButtonLock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthePart_ButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ButtonLock_C", "BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthePart_ButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ButtonLock_C", "BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthePart_ButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ButtonLock_C", "BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthePart_ButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ButtonLock_C", "BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthePart_ButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ButtonLock_C", "BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponSynthePart_ButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ButtonLock_C", "BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.SetLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsLock                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_ButtonLock_C::SetLock(bool Param_IsLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ButtonLock_C", "SetLock");

	Params::WeaponSynthePart_ButtonLock_C_SetLock Parms{};

	Parms.Param_IsLock = Param_IsLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.SetLocking
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_ButtonLock_C::SetLocking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ButtonLock_C", "SetLocking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.IsLock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_IsLock                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_ButtonLock_C::IsLock(bool* Param_IsLock) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ButtonLock_C", "IsLock");

	Params::WeaponSynthePart_ButtonLock_C_IsLock Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsLock != nullptr)
		*Param_IsLock = Parms.Param_IsLock;
}

}

