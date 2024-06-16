#pragma once

 

// Package: BI_seqTrack

#include "Basic.hpp"

#include "BI_seqTrack_classes.hpp"
#include "BI_seqTrack_parameters.hpp"


namespace SDK
{

// Function BI_seqTrack.BI_seqTrack_C.NSonTick
// (Public, BlueprintCallable, BlueprintEvent)

void IBI_seqTrack_C::NSonTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_seqTrack_C", "NSonTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_seqTrack.BI_seqTrack_C.NSonBegin
// (Public, BlueprintCallable, BlueprintEvent)

void IBI_seqTrack_C::NSonBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_seqTrack_C", "NSonBegin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_seqTrack.BI_seqTrack_C.NSonEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IBI_seqTrack_C::NSonEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_seqTrack_C", "NSonEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_seqTrack.BI_seqTrack_C.setSeqTrackInfoString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   NewParam1                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_seqTrack_C::SetSeqTrackInfoString(const class FString& NewParam, int32 NewParam1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_seqTrack_C", "setSeqTrackInfoString");

	Params::BI_seqTrack_C_SetSeqTrackInfoString Parms{};

	Parms.NewParam = std::move(NewParam);
	Parms.NewParam1 = NewParam1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_seqTrack.BI_seqTrack_C.getSeqTrackInfoIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewParam1                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_seqTrack_C::GetSeqTrackInfoIndex(int32* NewParam1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_seqTrack_C", "getSeqTrackInfoIndex");

	Params::BI_seqTrack_C_GetSeqTrackInfoIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam1 != nullptr)
		*NewParam1 = Parms.NewParam1;
}


// Function BI_seqTrack.BI_seqTrack_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           NewParam1                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void IBI_seqTrack_C::GetText(int32 NewParam, class FString* NewParam1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_seqTrack_C", "GetText");

	Params::BI_seqTrack_C_GetText Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam1 != nullptr)
		*NewParam1 = std::move(Parms.NewParam1);
}


// Function BI_seqTrack.BI_seqTrack_C.ANon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Test                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_seqTrack_C::ANon(int32 Test)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_seqTrack_C", "ANon");

	Params::BI_seqTrack_C_ANon Parms{};

	Parms.Test = Test;

	UObject::ProcessEvent(Func, &Parms);
}

}

