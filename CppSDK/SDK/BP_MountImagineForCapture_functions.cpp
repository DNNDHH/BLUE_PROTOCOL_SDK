#pragma once

 

// Package: BP_MountImagineForCapture

#include "Basic.hpp"

#include "BP_MountImagineForCapture_classes.hpp"
#include "BP_MountImagineForCapture_parameters.hpp"


namespace SDK
{

// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.OnSetImagineData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MountImagineForCapture_C::OnSetImagineData__DelegateSignature(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MountImagineForCapture_C", "OnSetImagineData__DelegateSignature");

	Params::BP_MountImagineForCapture_C_OnSetImagineData__DelegateSignature Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ExecuteUbergraph_BP_MountImagineForCapture
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MountImagineForCapture_C::ExecuteUbergraph_BP_MountImagineForCapture(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MountImagineForCapture_C", "ExecuteUbergraph_BP_MountImagineForCapture");

	Params::BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MountImagineForCapture_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MountImagineForCapture_C", "ReceiveTick");

	Params::BP_MountImagineForCapture_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.OnAssetLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bInResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MountImagineForCapture_C::OnAssetLoaded(const bool bInResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MountImagineForCapture_C", "OnAssetLoaded");

	Params::BP_MountImagineForCapture_C_OnAssetLoaded Parms{};

	Parms.bInResult = bInResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.SetImagineData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MountImagineForCapture_C::SetImagineData(int32 InImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MountImagineForCapture_C", "SetImagineData");

	Params::BP_MountImagineForCapture_C_SetImagineData Parms{};

	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MountImagineForCapture_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MountImagineForCapture_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MountImagineForCapture_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MountImagineForCapture_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.Set Weapons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MountImagineForCapture_C::Set_Weapons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MountImagineForCapture_C", "Set Weapons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.FindCaptureImagineData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCaptureStudioImagineData      Param_ImagineData                                      (Parm, OutParm)
// bool                                    bExist                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MountImagineForCapture_C::FindCaptureImagineData(int32 InImagineId, struct FSBCaptureStudioImagineData* Param_ImagineData, bool* bExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MountImagineForCapture_C", "FindCaptureImagineData");

	Params::BP_MountImagineForCapture_C_FindCaptureImagineData Parms{};

	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ImagineData != nullptr)
		*Param_ImagineData = std::move(Parms.Param_ImagineData);

	if (bExist != nullptr)
		*bExist = Parms.bExist;
}


// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ApplyImagineData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MountImagineForCapture_C::ApplyImagineData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MountImagineForCapture_C", "ApplyImagineData");

	UObject::ProcessEvent(Func, nullptr);
}

}

