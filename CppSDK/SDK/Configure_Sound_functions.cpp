#pragma once

 

// Package: Configure_Sound

#include "Basic.hpp"

#include "Configure_Sound_classes.hpp"
#include "Configure_Sound_parameters.hpp"


namespace SDK
{

// Function Configure_Sound.Configure_Sound_C.ApplyChatSoundData
// (Public, BlueprintCallable, BlueprintEvent)

void UConfigure_Sound_C::ApplyChatSoundData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "ApplyChatSoundData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_Sound.Configure_Sound_C.ApplyMainSoundSaveData
// (Public, BlueprintCallable, BlueprintEvent)

void UConfigure_Sound_C::ApplyMainSoundSaveData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "ApplyMainSoundSaveData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_Sound.Configure_Sound_C.PlayVoice
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConfigure_Sound_C::PlayVoice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "PlayVoice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_Sound.Configure_Sound_C.OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigure_Sound_C::OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE");

	Params::Configure_Sound_C_OnLoaded_5C45C3D747A8B3BC498D97853D67AFFE Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_Sound_C::BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_Sound_C_BndEvt__CB_PlayGuild_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_Sound_C::BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_Sound_C_BndEvt__CB_PlayNear_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_Sound_C::BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_Sound_C_BndEvt__CB_PlayParty_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_Sound_C::BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_Sound_C_BndEvt__CB_PlayPrivate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_Sound_C::BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_Sound_C_BndEvt__CB_PlayZone_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_Sound_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "PreConstruct");

	Params::Configure_Sound_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfigure_Sound_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_Sound.Configure_Sound_C.OnChangeValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Mute                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_Sound_C::OnChangeValue(int32 Param_Index, int32 Volume, bool Mute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "OnChangeValue");

	Params::Configure_Sound_C_OnChangeValue Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Volume = Volume;
	Parms.Mute = Mute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.ApplySaveData
// (BlueprintCallable, BlueprintEvent)

void UConfigure_Sound_C::ApplySaveData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "ApplySaveData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_Sound.Configure_Sound_C.OnRequestPlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigure_Sound_C::OnRequestPlaySound(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "OnRequestPlaySound");

	Params::Configure_Sound_C_OnRequestPlaySound Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.OnPlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigure_Sound_C::OnPlaySound(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "OnPlaySound");

	Params::Configure_Sound_C_OnPlaySound Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.BndEvt__SoundReset_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UConfigure_Sound_C::BndEvt__SoundReset_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "BndEvt__SoundReset_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_Sound.Configure_Sound_C.BndEvt__SoundReset_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfigure_Sound_C::BndEvt__SoundReset_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "BndEvt__SoundReset_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_Sound.Configure_Sound_C.BndEvt__SoundReset_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfigure_Sound_C::BndEvt__SoundReset_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "BndEvt__SoundReset_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_Sound_C::BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_Sound_C_BndEvt__CB_MuteCostumeSound_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_Sound_C::BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_Sound_C_BndEvt__CB_MuteGestureSound_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_Sound_C::BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Configure_Sound_C_BndEvt__Configure_Sound_CB_PlayNonActiveSound_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfigure_Sound_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_Sound.Configure_Sound_C.LoadVoiceAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>     AudioEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UConfigure_Sound_C::LoadVoiceAsset(TSoftObjectPtr<class UAkAudioEvent> AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "LoadVoiceAsset");

	Params::Configure_Sound_C_LoadVoiceAsset Parms{};

	Parms.AudioEvent = AudioEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.Open
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UConfigure_Sound_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_Sound.Configure_Sound_C.SetTitleMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTitle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UConfigure_Sound_C::SetTitleMode(bool bTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "SetTitleMode");

	Params::Configure_Sound_C_SetTitleMode Parms{};

	Parms.bTitle = bTitle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Configure_Sound.Configure_Sound_C.Close
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UConfigure_Sound_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Configure_Sound.Configure_Sound_C.ExecuteUbergraph_Configure_Sound
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfigure_Sound_C::ExecuteUbergraph_Configure_Sound(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Configure_Sound_C", "ExecuteUbergraph_Configure_Sound");

	Params::Configure_Sound_C_ExecuteUbergraph_Configure_Sound Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

