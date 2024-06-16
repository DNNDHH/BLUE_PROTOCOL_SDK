#pragma once

 

// Package: Config_GraphicsCS

#include "Basic.hpp"

#include "Config_GraphicsCS_classes.hpp"
#include "Config_GraphicsCS_parameters.hpp"


namespace SDK
{

// Function Config_GraphicsCS.Config_GraphicsCS_C.On_Cmb_ViewLimit_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UConfig_GraphicsCS_C::On_Cmb_ViewLimit_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "On_Cmb_ViewLimit_GenerateWidget_0");

	Params::Config_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.On_Preset_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UConfig_GraphicsCS_C::On_Preset_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "On_Preset_GenerateWidget_0");

	Params::Config_GraphicsCS_C_On_Preset_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.InitializePlayerSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConfig_GraphicsCS_C::InitializePlayerSave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "InitializePlayerSave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.FindPresetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Key                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UConfig_GraphicsCS_C::FindPresetData(class FString* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "FindPresetData");

	Params::Config_GraphicsCS_C_FindPresetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.On_Preset_GenerateWidget_1
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UConfig_GraphicsCS_C::On_Preset_GenerateWidget_1(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "On_Preset_GenerateWidget_1");

	Params::Config_GraphicsCS_C_On_Preset_GenerateWidget_1 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_GraphicsCS_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "PreConstruct");

	Params::Config_GraphicsCS_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfig_GraphicsCS_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.ApplySetting
// (BlueprintCallable, BlueprintEvent)

void UConfig_GraphicsCS_C::ApplySetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "ApplySetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.SelectPreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_GraphicsCS_C::SelectPreset(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "SelectPreset");

	Params::Config_GraphicsCS_C_SelectPreset Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.GeneratePresetData
// (BlueprintCallable, BlueprintEvent)

void UConfig_GraphicsCS_C::GeneratePresetData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "GeneratePresetData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.OnChangeGraphicsSlider
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGraphicsSliderSetting                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_GraphicsCS_C::OnChangeGraphicsSlider(int32 Value, float Ratio, EGraphicsSliderSetting Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "OnChangeGraphicsSlider");

	Params::Config_GraphicsCS_C_OnChangeGraphicsSlider Parms{};

	Parms.Value = Value;
	Parms.Ratio = Ratio;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.LoadGraphicsSaveData
// (BlueprintCallable, BlueprintEvent)

void UConfig_GraphicsCS_C::LoadGraphicsSaveData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "LoadGraphicsSaveData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.ApplyBaseData
// (BlueprintCallable, BlueprintEvent)

void UConfig_GraphicsCS_C::ApplyBaseData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "ApplyBaseData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.GenerateFPSLimit
// (BlueprintCallable, BlueprintEvent)

void UConfig_GraphicsCS_C::GenerateFPSLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "GenerateFPSLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.Save
// (BlueprintCallable, BlueprintEvent)

void UConfig_GraphicsCS_C::Save()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "Save");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_GraphicsCS_C::BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_GraphicsCS_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_GraphicsCS_C::BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_GraphicsCS_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_GraphicsCS_C::BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_GraphicsCS_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.GenerateViewLimit
// (BlueprintCallable, BlueprintEvent)

void UConfig_GraphicsCS_C::GenerateViewLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "GenerateViewLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_GraphicsCS_C::BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::Config_GraphicsCS_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_GraphicsCS_C::BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_GraphicsCS_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_GraphicsCS_C::BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_GraphicsCS_C::BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Config_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfig_GraphicsCS_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.Open
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UConfig_GraphicsCS_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.Close
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UConfig_GraphicsCS_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.ExecuteUbergraph_Config_GraphicsCS
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfig_GraphicsCS_C::ExecuteUbergraph_Config_GraphicsCS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "ExecuteUbergraph_Config_GraphicsCS");

	Params::Config_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Config_GraphicsCS.Config_GraphicsCS_C.IsDiffOptions
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bDiff                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfig_GraphicsCS_C::IsDiffOptions(bool* bDiff) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Config_GraphicsCS_C", "IsDiffOptions");

	Params::Config_GraphicsCS_C_IsDiffOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bDiff != nullptr)
		*bDiff = Parms.bDiff;
}

}

