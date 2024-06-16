#pragma once

 

// Package: Sound_ControlItem

#include "Basic.hpp"

#include "Sound_ControlItem_classes.hpp"
#include "Sound_ControlItem_parameters.hpp"


namespace SDK
{

// Function Sound_ControlItem.Sound_ControlItem_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USound_ControlItem_C::SetText(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "SetText");

	Params::Sound_ControlItem_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_ControlItem.Sound_ControlItem_C.SetLabelTextId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USound_ControlItem_C::SetLabelTextId(int32 TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "SetLabelTextId");

	Params::Sound_ControlItem_C_SetLabelTextId Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_ControlItem.Sound_ControlItem_C.UpdateBtn
// (Public, BlueprintCallable, BlueprintEvent)

void USound_ControlItem_C::UpdateBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "UpdateBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Sound_ControlItem.Sound_ControlItem_C.SetVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Volume                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bMute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USound_ControlItem_C::SetVolume(int32 Param_Volume, bool bMute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "SetVolume");

	Params::Sound_ControlItem_C_SetVolume Parms{};

	Parms.Param_Volume = Param_Volume;
	Parms.bMute = bMute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_ControlItem.Sound_ControlItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USound_ControlItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "PreConstruct");

	Params::Sound_ControlItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USound_ControlItem_C::BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::Sound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USound_ControlItem_C::BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature");

	Params::Sound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USound_ControlItem_C::BndEvt__BtnMute_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "BndEvt__BtnMute_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void USound_ControlItem_C::BndEvt__Volume_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "BndEvt__Volume_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Sound_ControlItem.Sound_ControlItem_C.RequestSound
// (BlueprintCallable, BlueprintEvent)

void USound_ControlItem_C::RequestSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "RequestSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USound_ControlItem_C::BndEvt__BtnMute_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "BndEvt__BtnMute_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USound_ControlItem_C::BndEvt__BtnMute_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "BndEvt__BtnMute_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void USound_ControlItem_C::BndEvt__Volume_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "BndEvt__Volume_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Sound_ControlItem.Sound_ControlItem_C.ExecuteUbergraph_Sound_ControlItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USound_ControlItem_C::ExecuteUbergraph_Sound_ControlItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "ExecuteUbergraph_Sound_ControlItem");

	Params::Sound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_ControlItem.Sound_ControlItem_C.RequestSoundEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USound_ControlItem_C::RequestSoundEvent__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "RequestSoundEvent__DelegateSignature");

	Params::Sound_ControlItem_C_RequestSoundEvent__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_ControlItem.Sound_ControlItem_C.ValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Volume                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bMute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USound_ControlItem_C::ValueChanged__DelegateSignature(int32 Param_Index, int32 Param_Volume, bool bMute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "ValueChanged__DelegateSignature");

	Params::Sound_ControlItem_C_ValueChanged__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Param_Volume = Param_Volume;
	Parms.bMute = bMute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_ControlItem.Sound_ControlItem_C.GetRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   Rate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USound_ControlItem_C::GetRate(float* Rate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_ControlItem_C", "GetRate");

	Params::Sound_ControlItem_C_GetRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;
}

}

