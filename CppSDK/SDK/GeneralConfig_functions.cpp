#pragma once

 

// Package: GeneralConfig

#include "Basic.hpp"

#include "GeneralConfig_classes.hpp"
#include "GeneralConfig_parameters.hpp"


namespace SDK
{

// Function GeneralConfig.GeneralConfig_C.Get_HideOthersPlayerAtFishing_Visibility_0
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UGeneralConfig_C::Get_HideOthersPlayerAtFishing_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "Get_HideOthersPlayerAtFishing_Visibility_0");

	Params::GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GeneralConfig.GeneralConfig_C.On_Cmb_LogoPosition_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGeneralConfig_C::On_Cmb_LogoPosition_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "On_Cmb_LogoPosition_GenerateWidget_0");

	Params::GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GeneralConfig.GeneralConfig_C.On_Cmb_PadKeyView_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGeneralConfig_C::On_Cmb_PadKeyView_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "On_Cmb_PadKeyView_GenerateWidget_0");

	Params::GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GeneralConfig.GeneralConfig_C.On_Cmb_LockTargetType_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGeneralConfig_C::On_Cmb_LockTargetType_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "On_Cmb_LockTargetType_GenerateWidget_0");

	Params::GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GeneralConfig.GeneralConfig_C.On_Cmb_AutoTarget_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGeneralConfig_C::On_Cmb_AutoTarget_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "On_Cmb_AutoTarget_GenerateWidget_0");

	Params::GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GeneralConfig.GeneralConfig_C.On_Cmb_WeaponVisibility_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGeneralConfig_C::On_Cmb_WeaponVisibility_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "On_Cmb_WeaponVisibility_GenerateWidget_0");

	Params::GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GeneralConfig.GeneralConfig_C.On_Cmb_ShortcutRingMode_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGeneralConfig_C::On_Cmb_ShortcutRingMode_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "On_Cmb_ShortcutRingMode_GenerateWidget_0");

	Params::GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GeneralConfig.GeneralConfig_C.GenerateLockTargetType
// (Public, BlueprintCallable, BlueprintEvent)

void UGeneralConfig_C::GenerateLockTargetType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "GenerateLockTargetType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.GenerateAutoTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UGeneralConfig_C::GenerateAutoTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "GenerateAutoTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.GenerateWeaponVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UGeneralConfig_C::GenerateWeaponVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "GenerateWeaponVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.GenerateShortcutRingMode
// (Public, BlueprintCallable, BlueprintEvent)

void UGeneralConfig_C::GenerateShortcutRingMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "GenerateShortcutRingMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.GenerateLogoPos
// (Public, BlueprintCallable, BlueprintEvent)

void UGeneralConfig_C::GenerateLogoPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "GenerateLogoPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.GeneratePadKeyView
// (Public, BlueprintCallable, BlueprintEvent)

void UGeneralConfig_C::GeneratePadKeyView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "GeneratePadKeyView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.GenerateComboBox
// (Public, BlueprintCallable, BlueprintEvent)

void UGeneralConfig_C::GenerateComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "GenerateComboBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.SetOperationModeCheckboxSeklected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBOperateMode                          InSelected_Operate_Mode                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralConfig_C::SetOperationModeCheckboxSeklected(ESBOperateMode InSelected_Operate_Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "SetOperationModeCheckboxSeklected");

	Params::GeneralConfig_C_SetOperationModeCheckboxSeklected Parms{};

	Parms.InSelected_Operate_Mode = InSelected_Operate_Mode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.Completed_C5B7DF9949CED661D78734AB2E938631
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           FilePath                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGeneralConfig_C::Completed_C5B7DF9949CED661D78734AB2E938631(bool Success, const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "Completed_C5B7DF9949CED661D78734AB2E938631");

	Params::GeneralConfig_C_Completed_C5B7DF9949CED661D78734AB2E938631 Parms{};

	Parms.Success = Success;
	Parms.FilePath = std::move(FilePath);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGeneralConfig_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.OnSaveCharaConfig
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    In_Result                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::OnSaveCharaConfig(bool In_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "OnSaveCharaConfig");

	Params::GeneralConfig_C_OnSaveCharaConfig Parms{};

	Parms.In_Result = In_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.Init
// (BlueprintCallable, BlueprintEvent)

void UGeneralConfig_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.OnSaveCharaConfigDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::OnSaveCharaConfigDelegate(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "OnSaveCharaConfigDelegate");

	Params::GeneralConfig_C_OnSaveCharaConfigDelegate Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGeneralConfig_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.UnbindDelegates
// (BlueprintCallable, BlueprintEvent)

void UGeneralConfig_C::UnbindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "UnbindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralConfig_C::BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature(int32 Value, float Ratio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature Parms{};

	Parms.Value = Value;
	Parms.Ratio = Ratio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralConfig_C::BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralConfig_C::BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Button_98_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGeneralConfig_C::BndEvt__Button_98_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Button_98_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGeneralConfig_C::BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.UpdateScreenshotSaveDirectoryText
// (BlueprintCallable, BlueprintEvent)

void UGeneralConfig_C::UpdateScreenshotSaveDirectoryText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "UpdateScreenshotSaveDirectoryText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralConfig_C::BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralConfig_C::BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGeneralConfig_C::BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGeneralConfig_C::BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralConfig_C::BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralConfig_C::BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralConfig_C::BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GeneralConfig_C_BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GeneralConfig.GeneralConfig_C.ExecuteUbergraph_GeneralConfig
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralConfig_C::ExecuteUbergraph_GeneralConfig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeneralConfig_C", "ExecuteUbergraph_GeneralConfig");

	Params::GeneralConfig_C_ExecuteUbergraph_GeneralConfig Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

