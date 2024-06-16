#pragma once

 

// Package: KeyConfig_ConfigSlot

#include "Basic.hpp"

#include "KeyConfig_ConfigSlot_classes.hpp"
#include "KeyConfig_ConfigSlot_parameters.hpp"


namespace SDK
{

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ConvertBookMark
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EConfig_KeyconfigItems                  ConfigType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBBookMarkerSlot                       Param_Slot                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_ConfigSlot_C::ConvertBookMark(EConfig_KeyconfigItems ConfigType, bool* bIsValid, ESBBookMarkerSlot* Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "ConvertBookMark");

	Params::KeyConfig_ConfigSlot_C_ConvertBookMark Parms{};

	Parms.ConfigType = ConfigType;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (Param_Slot != nullptr)
		*Param_Slot = Parms.Param_Slot;
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.IsBookMarks
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EConfig_KeyconfigItems                  KeyConfigItems                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsBookMark                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_ConfigSlot_C::IsBookMarks(EConfig_KeyconfigItems KeyConfigItems, bool* IsBookMark)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "IsBookMarks");

	Params::KeyConfig_ConfigSlot_C_IsBookMarks Parms{};

	Parms.KeyConfigItems = KeyConfigItems;

	UObject::ProcessEvent(Func, &Parms);

	if (IsBookMark != nullptr)
		*IsBookMark = Parms.IsBookMark;
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.GetItemStringId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EConfig_KeyconfigItems                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TextId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_ConfigSlot_C::GetItemStringId(EConfig_KeyconfigItems Type, int32* TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "GetItemStringId");

	Params::KeyConfig_ConfigSlot_C_GetItemStringId Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (TextId != nullptr)
		*TextId = Parms.TextId;
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ResetInputMode
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyConfig_ConfigSlot_C::ResetInputMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "ResetInputMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.BndEvt__KeyMouseInput_Btn_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UKeyConfig_ConfigSlot_C::BndEvt__KeyMouseInput_Btn_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "BndEvt__KeyMouseInput_Btn_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyConfigType                   ConfigData                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UKeyConfig_ConfigSlot_C::SetData(const struct FKeyConfigType& ConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "SetData");

	Params::KeyConfig_ConfigSlot_C_SetData Parms{};

	Parms.ConfigData = std::move(ConfigData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.CheckChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bChanged                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_ConfigSlot_C::CheckChanged(bool Param_bChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "CheckChanged");

	Params::KeyConfig_ConfigSlot_C_CheckChanged Parms{};

	Parms.Param_bChanged = Param_bChanged;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetKeyMouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBKeyConfigKeyboardKey                 KeyboardKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBKeyConfigMouseKey                    MouseKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_ConfigSlot_C::SetKeyMouse(ESBKeyConfigKeyboardKey KeyboardKey, ESBKeyConfigMouseKey MouseKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "SetKeyMouse");

	Params::KeyConfig_ConfigSlot_C_SetKeyMouse Parms{};

	Parms.KeyboardKey = KeyboardKey;
	Parms.MouseKey = MouseKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetGamePadButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBKeyConfigGamepadKey                  Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSwichLR                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_ConfigSlot_C::SetGamePadButton(ESBKeyConfigGamepadKey Selection, bool bSwichLR)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "SetGamePadButton");

	Params::KeyConfig_ConfigSlot_C_SetGamePadButton Parms{};

	Parms.Selection = Selection;
	Parms.bSwichLR = bSwichLR;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.KeyMouseChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_KeyMouseChanged                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_ConfigSlot_C::KeyMouseChanged(bool Param_KeyMouseChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "KeyMouseChanged");

	Params::KeyConfig_ConfigSlot_C_KeyMouseChanged Parms{};

	Parms.Param_KeyMouseChanged = Param_KeyMouseChanged;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.PadChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_PadChanged                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_ConfigSlot_C::PadChanged(bool Param_PadChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "PadChanged");

	Params::KeyConfig_ConfigSlot_C_PadChanged Parms{};

	Parms.Param_PadChanged = Param_PadChanged;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ApplySlateWidget
// (BlueprintCallable, BlueprintEvent)

void UKeyConfig_ConfigSlot_C::ApplySlateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "ApplySlateWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.BndEvt__GamePadInput_Btn_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UKeyConfig_ConfigSlot_C::BndEvt__GamePadInput_Btn_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "BndEvt__GamePadInput_Btn_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetRequireSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRequire                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_ConfigSlot_C::SetRequireSetting(bool bRequire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "SetRequireSetting");

	Params::KeyConfig_ConfigSlot_C_SetRequireSetting Parms{};

	Parms.bRequire = bRequire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ExecuteUbergraph_KeyConfig_ConfigSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_ConfigSlot_C::ExecuteUbergraph_KeyConfig_ConfigSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "ExecuteUbergraph_KeyConfig_ConfigSlot");

	Params::KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ButtonClicked_Pad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConfig_KeyconfigItems                  Param_KeyType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyConfig_ConfigSlot_C*          Caller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_ConfigSlot_C::ButtonClicked_Pad__DelegateSignature(EConfig_KeyconfigItems Param_KeyType, class UKeyConfig_ConfigSlot_C* Caller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "ButtonClicked_Pad__DelegateSignature");

	Params::KeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature Parms{};

	Parms.Param_KeyType = Param_KeyType;
	Parms.Caller = Caller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ButtonClicked_Key__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConfig_KeyconfigItems                  Param_KeyType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyConfig_ConfigSlot_C*          Caller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_ConfigSlot_C::ButtonClicked_Key__DelegateSignature(EConfig_KeyconfigItems Param_KeyType, class UKeyConfig_ConfigSlot_C* Caller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "ButtonClicked_Key__DelegateSignature");

	Params::KeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature Parms{};

	Parms.Param_KeyType = Param_KeyType;
	Parms.Caller = Caller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.StartWaitInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UKeyConfig_ConfigSlot_C::StartWaitInput__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_ConfigSlot_C", "StartWaitInput__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

