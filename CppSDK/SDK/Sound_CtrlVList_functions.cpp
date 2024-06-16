#pragma once

 

// Package: Sound_CtrlVList

#include "Basic.hpp"

#include "Sound_CtrlVList_classes.hpp"
#include "Sound_CtrlVList_parameters.hpp"


namespace SDK
{

// Function Sound_CtrlVList.Sound_CtrlVList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USound_CtrlVList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_CtrlVList_C", "PreConstruct");

	Params::Sound_CtrlVList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_CtrlVList.Sound_CtrlVList_C.OnValueChanges
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bMute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USound_CtrlVList_C::OnValueChanges(int32 Param_Index, int32 Volume, bool bMute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_CtrlVList_C", "OnValueChanges");

	Params::Sound_CtrlVList_C_OnValueChanges Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Volume = Volume;
	Parms.bMute = bMute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_CtrlVList.Sound_CtrlVList_C.SetVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bMute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USound_CtrlVList_C::SetVolume(int32 Param_Index, int32 Volume, bool bMute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_CtrlVList_C", "SetVolume");

	Params::Sound_CtrlVList_C_SetVolume Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Volume = Volume;
	Parms.bMute = bMute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_CtrlVList.Sound_CtrlVList_C.RequestSoundEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USound_CtrlVList_C::RequestSoundEvent(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_CtrlVList_C", "RequestSoundEvent");

	Params::Sound_CtrlVList_C_RequestSoundEvent Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_CtrlVList.Sound_CtrlVList_C.ExecuteUbergraph_Sound_CtrlVList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USound_CtrlVList_C::ExecuteUbergraph_Sound_CtrlVList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_CtrlVList_C", "ExecuteUbergraph_Sound_CtrlVList");

	Params::Sound_CtrlVList_C_ExecuteUbergraph_Sound_CtrlVList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_CtrlVList.Sound_CtrlVList_C.RequestPlaySound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USound_CtrlVList_C::RequestPlaySound__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_CtrlVList_C", "RequestPlaySound__DelegateSignature");

	Params::Sound_CtrlVList_C_RequestPlaySound__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_CtrlVList.Sound_CtrlVList_C.SoundChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Mute                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USound_CtrlVList_C::SoundChanged__DelegateSignature(int32 Param_Index, int32 Volume, bool Mute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_CtrlVList_C", "SoundChanged__DelegateSignature");

	Params::Sound_CtrlVList_C_SoundChanged__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Volume = Volume;
	Parms.Mute = Mute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Sound_CtrlVList.Sound_CtrlVList_C.GetChildrenNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ChildNum                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USound_CtrlVList_C::GetChildrenNum(int32* ChildNum) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_CtrlVList_C", "GetChildrenNum");

	Params::Sound_CtrlVList_C_GetChildrenNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ChildNum != nullptr)
		*ChildNum = Parms.ChildNum;
}


// Function Sound_CtrlVList.Sound_CtrlVList_C.GetChildValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SoundVolume                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USound_CtrlVList_C::GetChildValue(int32 Param_Index, int32* SoundVolume) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Sound_CtrlVList_C", "GetChildValue");

	Params::Sound_CtrlVList_C_GetChildValue Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (SoundVolume != nullptr)
		*SoundVolume = Parms.SoundVolume;
}

}

