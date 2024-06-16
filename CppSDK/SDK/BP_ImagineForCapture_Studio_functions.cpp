#pragma once

 

// Package: BP_ImagineForCapture_Studio

#include "Basic.hpp"

#include "BP_ImagineForCapture_Studio_classes.hpp"
#include "BP_ImagineForCapture_Studio_parameters.hpp"


namespace SDK
{

// Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.OnImagineLoadedDelegete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ImagineForCapture_Studio_C::OnImagineLoadedDelegete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_Studio_C", "OnImagineLoadedDelegete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.ExecuteUbergraph_BP_ImagineForCapture_Studio
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ImagineForCapture_Studio_C::ExecuteUbergraph_BP_ImagineForCapture_Studio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_Studio_C", "ExecuteUbergraph_BP_ImagineForCapture_Studio");

	Params::BP_ImagineForCapture_Studio_C_ExecuteUbergraph_BP_ImagineForCapture_Studio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.OnSetImagineData_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ImagineForCapture_Studio_C::OnSetImagineData_Event_0(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_Studio_C", "OnSetImagineData_Event_0");

	Params::BP_ImagineForCapture_Studio_C_OnSetImagineData_Event_0 Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.LoadImagineAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineItemId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ImagineForCapture_Studio_C::LoadImagineAsset(int32 InImagineItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_Studio_C", "LoadImagineAsset");

	Params::BP_ImagineForCapture_Studio_C_LoadImagineAsset Parms{};

	Parms.InImagineItemId = InImagineItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.ResetImagine
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ImagineForCapture_Studio_C::ResetImagine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_Studio_C", "ResetImagine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ImagineForCapture_Studio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_Studio_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ImagineForCapture_Studio_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_Studio_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

