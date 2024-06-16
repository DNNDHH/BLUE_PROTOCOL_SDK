#pragma once

 

// Package: Config_Graphics

#include "Basic.hpp"

#include "Config_Graphics_classes.hpp"
#include "Config_Graphics_parameters.hpp"


namespace SDK
{

// Function Config_Graphics.Config_Graphics_C.On_Cmb_ViewLimit_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UConfig_Graphics_C::On_Cmb_ViewLimit_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "On_Cmb_ViewLimit_GenerateWidget_0");

	Params::Config_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Config_Graphics.Config_Graphics_C.On_Preset_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UConfig_Graphics_C::On_Preset_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "On_Preset_GenerateWidget_0");

	Params::Config_Graphics_C_On_Preset_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Config_Graphics.Config_Graphics_C.InitializePlayerSave
// (Public, BlueprintCallable, BlueprintEvent)

void UConfig_Graphics_C::InitializePlayerSave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "InitializePlayerSave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.FindPresetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Key                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UConfig_Graphics_C::FindPresetData(class FString* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "FindPresetData");

	Params::Config_Graphics_C_FindPresetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);
}


// Function Config_Graphics.Config_Graphics_C.On_Preset_GenerateWidget_1
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UConfig_Graphics_C::On_Preset_GenerateWidget_1(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "On_Preset_GenerateWidget_1");

	Params::Config_Graphics_C_On_Preset_GenerateWidget_1 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Config_Graphics.Config_Graphics_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfig_Graphics_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.ApplySetting
// (BlueprintCallable, BlueprintEvent)

void UConfig_Graphics_C::ApplySetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "ApplySetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.SelectPreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_Graphics_C::SelectPreset(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "SelectPreset");

	Params::Config_Graphics_C_SelectPreset Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.GeneratePresetData
// (BlueprintCallable, BlueprintEvent)

void UConfig_Graphics_C::GeneratePresetData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "GeneratePresetData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.OnChangeGraphicsSlider
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGraphicsSliderSetting                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_Graphics_C::OnChangeGraphicsSlider(int32 Value, float Ratio, EGraphicsSliderSetting Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "OnChangeGraphicsSlider");

	Params::Config_Graphics_C_OnChangeGraphicsSlider Parms{};

	Parms.Value = Value;
	Parms.Ratio = Ratio;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.LoadGraphicsSaveData
// (BlueprintCallable, BlueprintEvent)

void UConfig_Graphics_C::LoadGraphicsSaveData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "LoadGraphicsSaveData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.ApplyBaseData
// (BlueprintCallable, BlueprintEvent)

void UConfig_Graphics_C::ApplyBaseData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "ApplyBaseData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.GenerateFPSLimit
// (BlueprintCallable, BlueprintEvent)

void UConfig_Graphics_C::GenerateFPSLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "GenerateFPSLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_Graphics_C::BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.Save
// (BlueprintCallable, BlueprintEvent)

void UConfig_Graphics_C::Save()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "Save");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.GenerateViewLimit
// (BlueprintCallable, BlueprintEvent)

void UConfig_Graphics_C::GenerateViewLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "GenerateViewLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_Graphics_C::BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfig_Graphics_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   New_Value                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_Graphics_C::BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature(int32 New_Value, float Ratio, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature Parms{};

	Parms.New_Value = New_Value;
	Parms.Ratio = Ratio;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.SetTitleMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTitle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::SetTitleMode(bool bTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "SetTitleMode");

	Params::Config_Graphics_C_SetTitleMode Parms{};

	Parms.bTitle = bTitle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.Open
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UConfig_Graphics_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.Close
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UConfig_Graphics_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   New_Value                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_Graphics_C::BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature(int32 New_Value, float Ratio, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature Parms{};

	Parms.New_Value = New_Value;
	Parms.Ratio = Ratio;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   New_Value                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_Graphics_C::BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature(int32 New_Value, float Ratio, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature Parms{};

	Parms.New_Value = New_Value;
	Parms.Ratio = Ratio;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.ExecuteUbergraph_Config_Graphics
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_Graphics_C::ExecuteUbergraph_Config_Graphics(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "ExecuteUbergraph_Config_Graphics");

	Params::Config_Graphics_C_ExecuteUbergraph_Config_Graphics Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_Graphics.Config_Graphics_C.IsDiffOptions
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bDiff                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_Graphics_C::IsDiffOptions(bool* bDiff) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_Graphics_C", "IsDiffOptions");

	Params::Config_Graphics_C_IsDiffOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bDiff != nullptr)
		*bDiff = Parms.bDiff;
}

}

