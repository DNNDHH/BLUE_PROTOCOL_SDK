#pragma once

 

// Package: StampWidget

#include "Basic.hpp"

#include "StampWidget_classes.hpp"
#include "StampWidget_parameters.hpp"


namespace SDK
{

// Function StampWidget.StampWidget_C.ExecuteUbergraph_StampWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampWidget_C::ExecuteUbergraph_StampWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampWidget_C", "ExecuteUbergraph_StampWidget");

	Params::StampWidget_C_ExecuteUbergraph_StampWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampWidget.StampWidget_C.SetStamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StampId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   StampSize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampWidget_C::SetStamp(int32 StampId, float StampSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampWidget_C", "SetStamp");

	Params::StampWidget_C_SetStamp Parms{};

	Parms.StampId = StampId;
	Parms.StampSize = StampSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampWidget.StampWidget_C.OnLoaded_C6C1A4DA493A48B31FADE282B44EF873
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampWidget_C::OnLoaded_C6C1A4DA493A48B31FADE282B44EF873(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampWidget_C", "OnLoaded_C6C1A4DA493A48B31FADE282B44EF873");

	Params::StampWidget_C_OnLoaded_C6C1A4DA493A48B31FADE282B44EF873 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampWidget.StampWidget_C.PlayStampVoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StampId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                       AttachCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampWidget_C::PlayStampVoice(int32 StampId, class ACharacter* AttachCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampWidget_C", "PlayStampVoice");

	Params::StampWidget_C_PlayStampVoice Parms{};

	Parms.StampId = StampId;
	Parms.AttachCharacter = AttachCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}

