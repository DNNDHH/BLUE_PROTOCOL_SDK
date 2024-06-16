#pragma once

 

// Package: ResolutionSettingPanel

#include "Basic.hpp"

#include "ResolutionSettingPanel_classes.hpp"
#include "ResolutionSettingPanel_parameters.hpp"


namespace SDK
{

// Function ResolutionSettingPanel.ResolutionSettingPanel_C.SetupResolutionList
// (Public, BlueprintCallable, BlueprintEvent)

void UResolutionSettingPanel_C::SetupResolutionList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "SetupResolutionList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.AddOptionByCustomSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                        Size                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolutionSettingPanel_C::AddOptionByCustomSize(const struct FIntPoint& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "AddOptionByCustomSize");

	Params::ResolutionSettingPanel_C_AddOptionByCustomSize Parms{};

	Parms.Size = std::move(Size);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.AddOptionBySize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                        Size                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolutionSettingPanel_C::AddOptionBySize(const struct FIntPoint& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "AddOptionBySize");

	Params::ResolutionSettingPanel_C_AddOptionBySize Parms{};

	Parms.Size = std::move(Size);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.FindNearySupportedPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntPoint                        Resolutions                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                        Finded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolutionSettingPanel_C::FindNearySupportedPoint(const struct FIntPoint& Resolutions, struct FIntPoint* Finded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "FindNearySupportedPoint");

	Params::ResolutionSettingPanel_C_FindNearySupportedPoint Parms{};

	Parms.Resolutions = std::move(Resolutions);

	UObject::ProcessEvent(Func, &Parms);

	if (Finded != nullptr)
		*Finded = std::move(Parms.Finded);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.GetFilteredResolutions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FIntPoint>                FilterdResolutions                                     (Parm, OutParm)

void UResolutionSettingPanel_C::GetFilteredResolutions(TArray<struct FIntPoint>* FilterdResolutions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "GetFilteredResolutions");

	Params::ResolutionSettingPanel_C_GetFilteredResolutions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FilterdResolutions != nullptr)
		*FilterdResolutions = std::move(Parms.FilterdResolutions);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.On_Cmb_Resolution_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UResolutionSettingPanel_C::On_Cmb_Resolution_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "On_Cmb_Resolution_GenerateWidget_0");

	Params::ResolutionSettingPanel_C_On_Cmb_Resolution_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.ExecuteResolution Point
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                        Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolutionSettingPanel_C::ExecuteResolution_Point(const struct FIntPoint& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "ExecuteResolution Point");

	Params::ResolutionSettingPanel_C_ExecuteResolution_Point Parms{};

	Parms.Size = std::move(Size);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.Execure Resolution Str
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ResStr                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UResolutionSettingPanel_C::Execure_Resolution_Str(const class FString& ResStr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "Execure Resolution Str");

	Params::ResolutionSettingPanel_C_Execure_Resolution_Str Parms{};

	Parms.ResStr = std::move(ResStr);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResolutionSettingPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "PreConstruct");

	Params::ResolutionSettingPanel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResolutionSettingPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.OnSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolutionSettingPanel_C::OnSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "OnSelectionChanged");

	Params::ResolutionSettingPanel_C_OnSelectionChanged Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.TimerEvt
// (BlueprintCallable, BlueprintEvent)

void UResolutionSettingPanel_C::TimerEvt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "TimerEvt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.WindowMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadioButton_C*                   RadioButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolutionSettingPanel_C::WindowMode(bool IsChecked, class URadioButton_C* RadioButton, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "WindowMode");

	Params::ResolutionSettingPanel_C_WindowMode Parms{};

	Parms.IsChecked = IsChecked;
	Parms.RadioButton = RadioButton;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.ShowConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UResolutionSettingPanel_C::ShowConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "ShowConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResolutionSettingPanel.ResolutionSettingPanel_C.ExecuteUbergraph_ResolutionSettingPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolutionSettingPanel_C::ExecuteUbergraph_ResolutionSettingPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResolutionSettingPanel_C", "ExecuteUbergraph_ResolutionSettingPanel");

	Params::ResolutionSettingPanel_C_ExecuteUbergraph_ResolutionSettingPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

