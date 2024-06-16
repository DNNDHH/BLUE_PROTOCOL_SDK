#pragma once

 

// Package: Configure_SoundCS

#include "Basic.hpp"

#include "Configure_SoundCS_classes.hpp"
#include "Configure_SoundCS_parameters.hpp"


namespace SDK
{

// Function Configure_SoundCS.Configure_SoundCS_C.ApplyChatSoundData
// (Public, BlueprintCallable, BlueprintEvent)

void UConfigure_SoundCS_C::ApplyChatSoundData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "ApplyChatSoundData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_SoundCS.Configure_SoundCS_C.ApplyMainSoundSaveData
// (Public, BlueprintCallable, BlueprintEvent)

void UConfigure_SoundCS_C::ApplyMainSoundSaveData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "ApplyMainSoundSaveData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_SoundCS.Configure_SoundCS_C.PlayVoice
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConfigure_SoundCS_C::PlayVoice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "PlayVoice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_SoundCS.Configure_SoundCS_C.OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigure_SoundCS_C::OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2");

	Params::Configure_SoundCS_C_OnLoaded_AE1A01B5444D44DA1B6E25BF543D82B2 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_SoundCS_C::BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_SoundCS_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_SoundCS_C::BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_SoundCS_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_SoundCS_C::BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_SoundCS_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_SoundCS_C::BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_SoundCS_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_SoundCS_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "PreConstruct");

	Params::Configure_SoundCS_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfigure_SoundCS_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_SoundCS.Configure_SoundCS_C.OnChangeValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Mute                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_SoundCS_C::OnChangeValue(int32 Param_Index, int32 Volume, bool Mute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "OnChangeValue");

	Params::Configure_SoundCS_C_OnChangeValue Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Volume = Volume;
	Parms.Mute = Mute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.ApplySaveData
// (BlueprintCallable, BlueprintEvent)

void UConfigure_SoundCS_C::ApplySaveData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "ApplySaveData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_SoundCS.Configure_SoundCS_C.OnRequestPlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigure_SoundCS_C::OnRequestPlaySound(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "OnRequestPlaySound");

	Params::Configure_SoundCS_C_OnRequestPlaySound Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.OnPlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigure_SoundCS_C::OnPlaySound(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "OnPlaySound");

	Params::Configure_SoundCS_C_OnPlaySound Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__SoundReset_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UConfigure_SoundCS_C::BndEvt__SoundReset_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "BndEvt__SoundReset_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__SoundReset_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfigure_SoundCS_C::BndEvt__SoundReset_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "BndEvt__SoundReset_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__SoundReset_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfigure_SoundCS_C::BndEvt__SoundReset_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "BndEvt__SoundReset_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_SoundCS_C::BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_SoundCS_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_SoundCS_C::BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_SoundCS_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_SoundCS_C::BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_SoundCS_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.LoadVoiceAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>     AudioEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UConfigure_SoundCS_C::LoadVoiceAsset(TSoftObjectPtr<class UAkAudioEvent> AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "LoadVoiceAsset");

	Params::Configure_SoundCS_C_LoadVoiceAsset Parms{};

	Parms.AudioEvent = AudioEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfigure_SoundCS_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_SoundCS.Configure_SoundCS_C.Open
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UConfigure_SoundCS_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_SoundCS.Configure_SoundCS_C.Close
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UConfigure_SoundCS_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_SoundCS.Configure_SoundCS_C.SetTitleMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTitle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_SoundCS_C::SetTitleMode(bool bTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "SetTitleMode");

	Params::Configure_SoundCS_C_SetTitleMode Parms{};

	Parms.bTitle = bTitle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_SoundCS.Configure_SoundCS_C.ExecuteUbergraph_Configure_SoundCS
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigure_SoundCS_C::ExecuteUbergraph_Configure_SoundCS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_SoundCS_C", "ExecuteUbergraph_Configure_SoundCS");

	Params::Configure_SoundCS_C_ExecuteUbergraph_Configure_SoundCS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

