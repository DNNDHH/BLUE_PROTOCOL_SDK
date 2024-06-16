#pragma once

 

// Package: KeyConfig

#include "Basic.hpp"

#include "KeyConfig_classes.hpp"
#include "KeyConfig_parameters.hpp"


namespace SDK
{

// Function KeyConfig.KeyConfig_C.ExecuteUbergraph_KeyConfig
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::ExecuteUbergraph_KeyConfig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "ExecuteUbergraph_KeyConfig");

	Params::KeyConfig_C_ExecuteUbergraph_KeyConfig Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.RequestParentFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UKeyConfig_C::RequestParentFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "RequestParentFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.IfShowWarnMsg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             InKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UKeyConfig_C::IfShowWarnMsg(const struct FKey& InKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "IfShowWarnMsg");

	Params::KeyConfig_C_IfShowWarnMsg Parms{};

	Parms.InKey = std::move(InKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.OnDeleteBookmarks
// (BlueprintCallable, BlueprintEvent)

void UKeyConfig_C::OnDeleteBookmarks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "OnDeleteBookmarks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UKeyConfig_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UKeyConfig_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "BndEvt__ApplyButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.BndEvt__ReInitButton_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UKeyConfig_C::BndEvt__ReInitButton_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "BndEvt__ReInitButton_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UKeyConfig_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.RequestUnassignableKeyMsg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UKeyConfig_C::RequestUnassignableKeyMsg(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "RequestUnassignableKeyMsg");

	Params::KeyConfig_C_RequestUnassignableKeyMsg Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.PlayKeySetSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnableKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_C::PlayKeySetSound(bool IsEnableKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "PlayKeySetSound");

	Params::KeyConfig_C_PlayKeySetSound Parms{};

	Parms.IsEnableKey = IsEnableKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.OnSavedResetKeyConfig
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_C::OnSavedResetKeyConfig(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "OnSavedResetKeyConfig");

	Params::KeyConfig_C_OnSavedResetKeyConfig Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.Cansel_Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::Cansel_Change(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "Cansel_Change");

	Params::KeyConfig_C_Cansel_Change Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.RadioButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EConfig_KeyconfigItems                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::RadioButton(int32 Param_Index, EConfig_KeyconfigItems Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "RadioButton");

	Params::KeyConfig_C_RadioButton Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.OnSliderChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EConfig_KeyconfigItems                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyConfig_Slider_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::OnSliderChange(int32 Value, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "OnSliderChange");

	Params::KeyConfig_C_OnSliderChange Parms{};

	Parms.Value = Value;
	Parms.Ratio = Ratio;
	Parms.Type = Type;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeyConfig_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.Result_Agreement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::Result_Agreement(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "Result_Agreement");

	Params::KeyConfig_C_Result_Agreement Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.SaveAgreementCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::SaveAgreementCheck(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "SaveAgreementCheck");

	Params::KeyConfig_C_SaveAgreementCheck Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.Checked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::Checked(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "Checked");

	Params::KeyConfig_C_Checked Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.UIBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_C::UIBlock(bool bLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "UIBlock");

	Params::KeyConfig_C_UIBlock Parms{};

	Parms.bLock = bLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.IsInitializable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::IsInitializable(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "IsInitializable");

	Params::KeyConfig_C_IsInitializable Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.KeyInputed_KeyMouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             DownKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UKeyConfig_C::KeyInputed_KeyMouse(const struct FKey& DownKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "KeyInputed_KeyMouse");

	Params::KeyConfig_C_KeyInputed_KeyMouse Parms{};

	Parms.DownKey = std::move(DownKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.PadChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EConfig_KeyconfigItems                  KeyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::PadChange(EConfig_KeyconfigItems KeyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "PadChange");

	Params::KeyConfig_C_PadChange Parms{};

	Parms.KeyType = KeyType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.KeyInputed_Pad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             DownKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UKeyConfig_C::KeyInputed_Pad(const struct FKey& DownKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "KeyInputed_Pad");

	Params::KeyConfig_C_KeyInputed_Pad Parms{};

	Parms.DownKey = std::move(DownKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.KeyChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EConfig_KeyconfigItems                  KeyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::KeyChange(EConfig_KeyconfigItems KeyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "KeyChange");

	Params::KeyConfig_C_KeyChange Parms{};

	Parms.KeyType = KeyType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.LoadKeyConfigData
// (BlueprintCallable, BlueprintEvent)

void UKeyConfig_C::LoadKeyConfigData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "LoadKeyConfigData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.ApplySettings
// (BlueprintCallable, BlueprintEvent)

void UKeyConfig_C::ApplySettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "ApplySettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.OnDropDownSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            NextClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::OnDropDownSelected(ESBClassType NextClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "OnDropDownSelected");

	Params::KeyConfig_C_OnDropDownSelected Parms{};

	Parms.NextClass = NextClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.SelectChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::SelectChanged(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "SelectChanged");

	Params::KeyConfig_C_SelectChanged Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeyConfig_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.ApplySlider
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyConfig_Slider_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::ApplySlider(class UKeyConfig_Slider_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "ApplySlider");

	Params::KeyConfig_C_ApplySlider Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.ShowErrorCmdsNone
// (BlueprintCallable, BlueprintEvent)

void UKeyConfig_C::ShowErrorCmdsNone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "ShowErrorCmdsNone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.CheckChanged
// (BlueprintCallable, BlueprintEvent)

void UKeyConfig_C::CheckChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "CheckChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.SaveKeyConfigData
// (BlueprintCallable, BlueprintEvent)

void UKeyConfig_C::SaveKeyConfigData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "SaveKeyConfigData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.ApplyList
// (BlueprintCallable, BlueprintEvent)

void UKeyConfig_C::ApplyList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "ApplyList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.GenerateComboBox
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LastRet1                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UKeyConfig_C::GenerateComboBox(class FString* LastRet1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "GenerateComboBox");

	Params::KeyConfig_C_GenerateComboBox Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LastRet1 != nullptr)
		*LastRet1 = std::move(Parms.LastRet1);
}


// Function KeyConfig.KeyConfig_C.ResetKeyConfig
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyConfig_C::ResetKeyConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "ResetKeyConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.SetGamePadSetting
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      SBPlayerClassKeyConfigData                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EConfig_KeyconfigItems                  Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             DownKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UKeyConfig_C::SetGamePadSetting(struct FSBPlayerClassKeyConfigData& SBPlayerClassKeyConfigData, EConfig_KeyconfigItems Selection, const struct FKey& DownKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "SetGamePadSetting");

	Params::KeyConfig_C_SetGamePadSetting Parms{};

	Parms.SBPlayerClassKeyConfigData = std::move(SBPlayerClassKeyConfigData);
	Parms.Selection = Selection;
	Parms.DownKey = std::move(DownKey);

	UObject::ProcessEvent(Func, &Parms);

	SBPlayerClassKeyConfigData = std::move(Parms.SBPlayerClassKeyConfigData);
}


// Function KeyConfig.KeyConfig_C.SetKeyBoardSetting
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      SBPlayerClassKeyConfigData                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EConfig_KeyconfigItems                  Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             DownKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UKeyConfig_C::SetKeyBoardSetting(struct FSBPlayerClassKeyConfigData& SBPlayerClassKeyConfigData, EConfig_KeyconfigItems Selection, const struct FKey& DownKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "SetKeyBoardSetting");

	Params::KeyConfig_C_SetKeyBoardSetting Parms{};

	Parms.SBPlayerClassKeyConfigData = std::move(SBPlayerClassKeyConfigData);
	Parms.Selection = Selection;
	Parms.DownKey = std::move(DownKey);

	UObject::ProcessEvent(Func, &Parms);

	SBPlayerClassKeyConfigData = std::move(Parms.SBPlayerClassKeyConfigData);
}


// Function KeyConfig.KeyConfig_C.SetMouseSetting
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      SBPlayerClassKeyConfigData                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EConfig_KeyconfigItems                  Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             DownKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UKeyConfig_C::SetMouseSetting(struct FSBPlayerClassKeyConfigData& SBPlayerClassKeyConfigData, EConfig_KeyconfigItems Selection, const struct FKey& DownKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "SetMouseSetting");

	Params::KeyConfig_C_SetMouseSetting Parms{};

	Parms.SBPlayerClassKeyConfigData = std::move(SBPlayerClassKeyConfigData);
	Parms.Selection = Selection;
	Parms.DownKey = std::move(DownKey);

	UObject::ProcessEvent(Func, &Parms);

	SBPlayerClassKeyConfigData = std::move(Parms.SBPlayerClassKeyConfigData);
}


// Function KeyConfig.KeyConfig_C.IsChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChanged                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_C::IsChanged(bool* bChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "IsChanged");

	Params::KeyConfig_C_IsChanged Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bChanged != nullptr)
		*bChanged = Parms.bChanged;
}


// Function KeyConfig.KeyConfig_C.IsNothingTypeMouse
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UKeyConfig_C::IsNothingTypeMouse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "IsNothingTypeMouse");

	Params::KeyConfig_C_IsNothingTypeMouse Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyConfig.KeyConfig_C.IsNothingTypePad
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyConfig_C::IsNothingTypePad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "IsNothingTypePad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig.KeyConfig_C.IsCommandKeyAsNone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bNone                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_C::IsCommandKeyAsNone(bool* bNone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "IsCommandKeyAsNone");

	Params::KeyConfig_C_IsCommandKeyAsNone Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bNone != nullptr)
		*bNone = Parms.bNone;
}


// Function KeyConfig.KeyConfig_C.IsModify
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UKeyConfig_C::IsModify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "IsModify");

	Params::KeyConfig_C_IsModify Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyConfig.KeyConfig_C.On_ClassSelect_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UKeyConfig_C::On_ClassSelect_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "On_ClassSelect_GenerateWidget_0");

	Params::KeyConfig_C_On_ClassSelect_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyConfig.KeyConfig_C.IsDispNoneDialog
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsNeedNoneDisp                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_C::IsDispNoneDialog(bool* IsNeedNoneDisp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "IsDispNoneDialog");

	Params::KeyConfig_C_IsDispNoneDialog Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsNeedNoneDisp != nullptr)
		*IsNeedNoneDisp = Parms.IsNeedNoneDisp;
}


// Function KeyConfig.KeyConfig_C.On_Cmb_ClassSelect_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UKeyConfig_C::On_Cmb_ClassSelect_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "On_Cmb_ClassSelect_GenerateWidget_0");

	Params::KeyConfig_C_On_Cmb_ClassSelect_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyConfig.KeyConfig_C.ConvertSliderValueToRealValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   InValueRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRange                      InValueRange                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::ConvertSliderValueToRealValue(float InValueRate, struct FFloatRange& InValueRange, float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "ConvertSliderValueToRealValue");

	Params::KeyConfig_C_ConvertSliderValueToRealValue Parms{};

	Parms.InValueRate = InValueRate;
	Parms.InValueRange = std::move(InValueRange);

	UObject::ProcessEvent(Func, &Parms);

	InValueRange = std::move(Parms.InValueRange);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function KeyConfig.KeyConfig_C.GetGamePadCameraSpeedRateYaw
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   InValueRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::GetGamePadCameraSpeedRateYaw(float InValueRate, float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "GetGamePadCameraSpeedRateYaw");

	Params::KeyConfig_C_GetGamePadCameraSpeedRateYaw Parms{};

	Parms.InValueRate = InValueRate;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function KeyConfig.KeyConfig_C.GetGamePadCameraSpeedRatePitch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   InValueRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::GetGamePadCameraSpeedRatePitch(float InValueRate, float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "GetGamePadCameraSpeedRatePitch");

	Params::KeyConfig_C_GetGamePadCameraSpeedRatePitch Parms{};

	Parms.InValueRate = InValueRate;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;
}


// Function KeyConfig.KeyConfig_C.IsClosed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsClosed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_C::IsClosed(bool* Param_IsClosed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "IsClosed");

	Params::KeyConfig_C_IsClosed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsClosed != nullptr)
		*Param_IsClosed = Parms.Param_IsClosed;
}


// Function KeyConfig.KeyConfig_C.SetCloseState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Close                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_C::SetCloseState(bool Close)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "SetCloseState");

	Params::KeyConfig_C_SetCloseState Parms{};

	Parms.Close = Close;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig.KeyConfig_C.GetNoAssignedTextId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   TextId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::GetNoAssignedTextId(int32* TextId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "GetNoAssignedTextId");

	Params::KeyConfig_C_GetNoAssignedTextId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TextId != nullptr)
		*TextId = Parms.TextId;
}


// Function KeyConfig.KeyConfig_C.IsWaitSaveing?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsWaiting                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_C::IsWaitSaveing_(bool* IsWaiting) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "IsWaitSaveing?");

	Params::KeyConfig_C_IsWaitSaveing_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsWaiting != nullptr)
		*IsWaiting = Parms.IsWaiting;
}


// Function KeyConfig.KeyConfig_C.HasUnassinableSetKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UKeyConfig_C::HasUnassinableSetKey() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "HasUnassinableSetKey");

	Params::KeyConfig_C_HasUnassinableSetKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyConfig.KeyConfig_C.Get Slot Data Table
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDataTable*                       Table                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_C::Get_Slot_Data_Table(class UDataTable** Table) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_C", "Get Slot Data Table");

	Params::KeyConfig_C_Get_Slot_Data_Table Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Table != nullptr)
		*Table = Parms.Table;
}

}

