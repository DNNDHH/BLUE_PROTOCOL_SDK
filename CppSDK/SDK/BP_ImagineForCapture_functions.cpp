#pragma once

 

// Package: BP_ImagineForCapture

#include "Basic.hpp"

#include "BP_ImagineForCapture_classes.hpp"
#include "BP_ImagineForCapture_parameters.hpp"


namespace SDK
{

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnSetImagineData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ImagineForCapture_C::OnSetImagineData__DelegateSignature(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "OnSetImagineData__DelegateSignature");

	Params::BP_ImagineForCapture_C_OnSetImagineData__DelegateSignature Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.ExecuteUbergraph_BP_ImagineForCapture
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ImagineForCapture_C::ExecuteUbergraph_BP_ImagineForCapture(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "ExecuteUbergraph_BP_ImagineForCapture");

	Params::BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnCreateLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bInResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ImagineForCapture_C::OnCreateLoaded(const bool bInResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "OnCreateLoaded");

	Params::BP_ImagineForCapture_C_OnCreateLoaded Parms{};

	Parms.bInResult = bInResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ImagineForCapture_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "ReceiveTick");

	Params::BP_ImagineForCapture_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnAssetLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bInResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ImagineForCapture_C::OnAssetLoaded(const bool bInResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "OnAssetLoaded");

	Params::BP_ImagineForCapture_C_OnAssetLoaded Parms{};

	Parms.bInResult = bInResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.SetImagineData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ImagineForCapture_C::SetImagineData(int32 InImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "SetImagineData");

	Params::BP_ImagineForCapture_C_SetImagineData Parms{};

	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ImagineForCapture_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ImagineForCapture_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.SetWeapons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ImagineForCapture_C::SetWeapons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "SetWeapons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.FindCaptureImagineData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCaptureStudioImagineData      Param_ImagineData                                      (Parm, OutParm)
// bool                                    bExist                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ImagineForCapture_C::FindCaptureImagineData(int32 InImagineId, struct FSBCaptureStudioImagineData* Param_ImagineData, bool* bExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "FindCaptureImagineData");

	Params::BP_ImagineForCapture_C_FindCaptureImagineData Parms{};

	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ImagineData != nullptr)
		*Param_ImagineData = std::move(Parms.Param_ImagineData);

	if (bExist != nullptr)
		*bExist = Parms.bExist;
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.ApplyImagineData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ImagineForCapture_C::ApplyImagineData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "ApplyImagineData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.GetTargetBodyMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBSkeletalMeshComponent*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBSkeletalMeshComponent* ABP_ImagineForCapture_C::GetTargetBodyMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "GetTargetBodyMesh");

	Params::BP_ImagineForCapture_C_GetTargetBodyMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ImagineForCapture.BP_ImagineForCapture_C.Update Chara Create Component
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ImagineForCapture_C::Update_Chara_Create_Component()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ImagineForCapture_C", "Update Chara Create Component");

	Params::BP_ImagineForCapture_C_Update_Chara_Create_Component Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

