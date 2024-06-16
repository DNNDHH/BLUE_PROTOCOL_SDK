#pragma once

 

// Package: KeyConfig_List

#include "Basic.hpp"

#include "KeyConfig_List_classes.hpp"
#include "KeyConfig_List_parameters.hpp"


namespace SDK
{

// Function KeyConfig_List.KeyConfig_List_C.ResetSliderChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyConfig_List_C::ResetSliderChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ResetSliderChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_List.KeyConfig_List_C.UpdateData
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyConfig_List_C::UpdateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "UpdateData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_List.KeyConfig_List_C.CalcTop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Limit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Top                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::CalcTop(int32 Limit, float* Top)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "CalcTop");

	Params::KeyConfig_List_C_CalcTop Parms{};

	Parms.Limit = Limit;

	UObject::ProcessEvent(Func, &Parms);

	if (Top != nullptr)
		*Top = Parms.Top;
}


// Function KeyConfig_List.KeyConfig_List_C.ResetInputModes
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyConfig_List_C::ResetInputModes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ResetInputModes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_List.KeyConfig_List_C.GetNoneTop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyConfig_ConfigSlot_C*          AsKey_Config_Config_Slot                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bChanged                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_List_C::GetNoneTop(class UKeyConfig_ConfigSlot_C** AsKey_Config_Config_Slot, bool* bChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "GetNoneTop");

	Params::KeyConfig_List_C_GetNoneTop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsKey_Config_Config_Slot != nullptr)
		*AsKey_Config_Config_Slot = Parms.AsKey_Config_Config_Slot;

	if (bChanged != nullptr)
		*bChanged = Parms.bChanged;
}


// Function KeyConfig_List.KeyConfig_List_C.HasNone
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHasNone                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_List_C::HasNone(bool* bHasNone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "HasNone");

	Params::KeyConfig_List_C_HasNone Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bHasNone != nullptr)
		*bHasNone = Parms.bHasNone;
}


// Function KeyConfig_List.KeyConfig_List_C.GetChangedTop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Target                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bChanged                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_List_C::GetChangedTop(class UUserWidget** Target, bool* bChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "GetChangedTop");

	Params::KeyConfig_List_C_GetChangedTop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

	if (bChanged != nullptr)
		*bChanged = Parms.bChanged;
}


// Function KeyConfig_List.KeyConfig_List_C.ApplyKeyConfigDatas
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      SBPlayerClassKeyConfigData                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyConfig_List_C::ApplyKeyConfigDatas(struct FSBPlayerClassKeyConfigData& SBPlayerClassKeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ApplyKeyConfigDatas");

	Params::KeyConfig_List_C_ApplyKeyConfigDatas Parms{};

	Parms.SBPlayerClassKeyConfigData = std::move(SBPlayerClassKeyConfigData);

	UObject::ProcessEvent(Func, &Parms);

	SBPlayerClassKeyConfigData = std::move(Parms.SBPlayerClassKeyConfigData);
}


// Function KeyConfig_List.KeyConfig_List_C.CreateChildWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyConfigType                   ConfigureType                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UUserWidget*                      Child                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EConfig_KeyConfigItemType               ItemType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::CreateChildWidget(const struct FKeyConfigType& ConfigureType, class UUserWidget** Child, EConfig_KeyConfigItemType* ItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "CreateChildWidget");

	Params::KeyConfig_List_C_CreateChildWidget Parms{};

	Parms.ConfigureType = std::move(ConfigureType);

	UObject::ProcessEvent(Func, &Parms);

	if (Child != nullptr)
		*Child = Parms.Child;

	if (ItemType != nullptr)
		*ItemType = Parms.ItemType;
}


// Function KeyConfig_List.KeyConfig_List_C.ApplyPadKeyConfig
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBGamePadSettings               SBGamePadSettings                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyConfig_List_C::ApplyPadKeyConfig(const struct FSBGamePadSettings& SBGamePadSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ApplyPadKeyConfig");

	Params::KeyConfig_List_C_ApplyPadKeyConfig Parms{};

	Parms.SBGamePadSettings = std::move(SBGamePadSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.ApplyKeyboardMouseData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBKeyboardSettings              SBKeyboardSettings                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBMouseSettings                 SBMouseSettings                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyConfig_List_C::ApplyKeyboardMouseData(const struct FSBKeyboardSettings& SBKeyboardSettings, const struct FSBMouseSettings& SBMouseSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ApplyKeyboardMouseData");

	Params::KeyConfig_List_C_ApplyKeyboardMouseData Parms{};

	Parms.SBKeyboardSettings = std::move(SBKeyboardSettings);
	Parms.SBMouseSettings = std::move(SBMouseSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.CheckChangedKey
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      Base                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBPlayerClassKeyConfigData      Now                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyConfig_List_C::CheckChangedKey(const struct FSBPlayerClassKeyConfigData& Base, const struct FSBPlayerClassKeyConfigData& Now)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "CheckChangedKey");

	Params::KeyConfig_List_C_CheckChangedKey Parms{};

	Parms.Base = std::move(Base);
	Parms.Now = std::move(Now);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.OnChangeSlider
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EConfig_KeyconfigItems                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyConfig_Slider_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::OnChangeSlider(int32 Value, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "OnChangeSlider");

	Params::KeyConfig_List_C_OnChangeSlider Parms{};

	Parms.Value = Value;
	Parms.Ratio = Ratio;
	Parms.Type = Type;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.OnChangeRadio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EConfig_KeyconfigItems                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::OnChangeRadio(int32 Param_Index, EConfig_KeyconfigItems Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "OnChangeRadio");

	Params::KeyConfig_List_C_OnChangeRadio Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.ApplySliders
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UKeyConfig_List_C::ApplySliders(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ApplySliders");

	Params::KeyConfig_List_C_ApplySliders Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.ApplyRadio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UKeyConfig_List_C::ApplyRadio(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ApplyRadio");

	Params::KeyConfig_List_C_ApplyRadio Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.CheckChangedSlider
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyConfig_Slider_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBPlayerClassKeyConfigData      Base                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSBPlayerClassKeyConfigData      Now                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UKeyConfig_List_C::CheckChangedSlider(class UKeyConfig_Slider_C* Target, const struct FSBPlayerClassKeyConfigData& Base, const struct FSBPlayerClassKeyConfigData& Now)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "CheckChangedSlider");

	Params::KeyConfig_List_C_CheckChangedSlider Parms{};

	Parms.Target = Target;
	Parms.Base = std::move(Base);
	Parms.Now = std::move(Now);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.OnDeleteBookmarks
// (BlueprintCallable, BlueprintEvent)

void UKeyConfig_List_C::OnDeleteBookmarks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "OnDeleteBookmarks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_List.KeyConfig_List_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_List_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "PreConstruct");

	Params::KeyConfig_List_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.KeyChangeWait
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EConfig_KeyconfigItems                  KeyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyConfig_ConfigSlot_C*          Caller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::KeyChangeWait(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "KeyChangeWait");

	Params::KeyConfig_List_C_KeyChangeWait Parms{};

	Parms.KeyType = KeyType;
	Parms.Caller = Caller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.PadChangeWait
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EConfig_KeyconfigItems                  KeyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyConfig_ConfigSlot_C*          Caller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::PadChangeWait(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "PadChangeWait");

	Params::KeyConfig_List_C_PadChangeWait Parms{};

	Parms.KeyType = KeyType;
	Parms.Caller = Caller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.ScrollChangeTop
// (BlueprintCallable, BlueprintEvent)

void UKeyConfig_List_C::ScrollChangeTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ScrollChangeTop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_List.KeyConfig_List_C.ScrollNoneTop
// (BlueprintCallable, BlueprintEvent)

void UKeyConfig_List_C::ScrollNoneTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ScrollNoneTop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_List.KeyConfig_List_C.ExecuteUbergraph_KeyConfig_List
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::ExecuteUbergraph_KeyConfig_List(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ExecuteUbergraph_KeyConfig_List");

	Params::KeyConfig_List_C_ExecuteUbergraph_KeyConfig_List Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.BookmarkDeletes__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UKeyConfig_List_C::BookmarkDeletes__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "BookmarkDeletes__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyConfig_List.KeyConfig_List_C.ChangeRadio__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EConfig_KeyconfigItems                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::ChangeRadio__DelegateSignature(int32 Param_Index, EConfig_KeyconfigItems Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ChangeRadio__DelegateSignature");

	Params::KeyConfig_List_C_ChangeRadio__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.SliderChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EConfig_KeyconfigItems                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyConfig_Slider_C*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::SliderChange__DelegateSignature(int32 Value, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "SliderChange__DelegateSignature");

	Params::KeyConfig_List_C_SliderChange__DelegateSignature Parms{};

	Parms.Value = Value;
	Parms.Ratio = Ratio;
	Parms.Type = Type;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.ClickedPadChangeWait__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConfig_KeyconfigItems                  KeyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::ClickedPadChangeWait__DelegateSignature(EConfig_KeyconfigItems KeyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ClickedPadChangeWait__DelegateSignature");

	Params::KeyConfig_List_C_ClickedPadChangeWait__DelegateSignature Parms{};

	Parms.KeyType = KeyType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.ClickedKeyChangeWait__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EConfig_KeyconfigItems                  KeyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::ClickedKeyChangeWait__DelegateSignature(EConfig_KeyconfigItems KeyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ClickedKeyChangeWait__DelegateSignature");

	Params::KeyConfig_List_C_ClickedKeyChangeWait__DelegateSignature Parms{};

	Parms.KeyType = KeyType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_List.KeyConfig_List_C.GetNoAssignedItemTop
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfig                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// EConfig_KeyconfigItems                  InputType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_List_C::GetNoAssignedItemTop(const struct FSBPlayerClassKeyConfigData& KeyConfig, EConfig_KeyconfigItems* InputType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "GetNoAssignedItemTop");

	Params::KeyConfig_List_C_GetNoAssignedItemTop Parms{};

	Parms.KeyConfig = std::move(KeyConfig);

	UObject::ProcessEvent(Func, &Parms);

	if (InputType != nullptr)
		*InputType = Parms.InputType;
}


// Function KeyConfig_List.KeyConfig_List_C.ContainsNoAssignedKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfig                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Assigned                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_List_C::ContainsNoAssignedKey(const struct FSBPlayerClassKeyConfigData& KeyConfig, bool* Assigned) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_List_C", "ContainsNoAssignedKey");

	Params::KeyConfig_List_C_ContainsNoAssignedKey Parms{};

	Parms.KeyConfig = std::move(KeyConfig);

	UObject::ProcessEvent(Func, &Parms);

	if (Assigned != nullptr)
		*Assigned = Parms.Assigned;
}

}

