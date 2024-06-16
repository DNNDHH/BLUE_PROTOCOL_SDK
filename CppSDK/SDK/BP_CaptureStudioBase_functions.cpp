#pragma once

 

// Package: BP_CaptureStudioBase

#include "Basic.hpp"

#include "BP_CaptureStudioBase_classes.hpp"
#include "BP_CaptureStudioBase_parameters.hpp"


namespace SDK
{

// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ExecuteUbergraph_BP_CaptureStudioBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureStudioBase_C::ExecuteUbergraph_BP_CaptureStudioBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "ExecuteUbergraph_BP_CaptureStudioBase");

	Params::BP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.TargetMoving
// (BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::TargetMoving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "TargetMoving");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.CaptureWhenMovingUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureStudioBase_C::CaptureWhenMovingUpdate(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "CaptureWhenMovingUpdate");

	Params::BP_CaptureStudioBase_C_CaptureWhenMovingUpdate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureStudioBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "ReceiveEndPlay");

	Params::BP_CaptureStudioBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CaptureStudioBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DoDisable
// (BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::DoDisable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "DoDisable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureStudioBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "ReceiveTick");

	Params::BP_CaptureStudioBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DoEnable
// (BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::DoEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "DoEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ResetMeshAndCameraTransform
// (BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::ResetMeshAndCameraTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "ResetMeshAndCameraTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_ModelAndCameraReset
// (BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::Tick_ModelAndCameraReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "Tick_ModelAndCameraReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.UpdateCaptureCameraMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InAddMoveValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureStudioBase_C::UpdateCaptureCameraMove(float InAddMoveValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "UpdateCaptureCameraMove");

	Params::BP_CaptureStudioBase_C_UpdateCaptureCameraMove Parms{};

	Parms.InAddMoveValue = InAddMoveValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_CaptureCameraMove
// (BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::Tick_CaptureCameraMove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "Tick_CaptureCameraMove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_CaptureCameraZoom
// (BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::Tick_CaptureCameraZoom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "Tick_CaptureCameraZoom");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_MeshRotate
// (BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::Tick_MeshRotate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "Tick_MeshRotate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnDisableCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureStudioBase_C::OnDisableCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "OnDisableCapture");

	Params::BP_CaptureStudioBase_C_OnDisableCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnEnableCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureStudioBase_C::OnEnableCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "OnEnableCapture");

	Params::BP_CaptureStudioBase_C_OnEnableCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnDestroyCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureStudioBase_C::OnDestroyCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "OnDestroyCapture");

	Params::BP_CaptureStudioBase_C_OnDestroyCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnCreateCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureStudioBase_C::OnCreateCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "OnCreateCapture");

	Params::BP_CaptureStudioBase_C_OnCreateCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DestructPriorityGraph
// (BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::DestructPriorityGraph()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "DestructPriorityGraph");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ConstructPriorityGraph
// (BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::ConstructPriorityGraph()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "ConstructPriorityGraph");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetMeshRotateActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureStudioBase_C::SetMeshRotateActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "SetMeshRotateActive");

	Params::BP_CaptureStudioBase_C_SetMeshRotateActive Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureCameraMoveActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureStudioBase_C::SetCaptureCameraMoveActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "SetCaptureCameraMoveActive");

	Params::BP_CaptureStudioBase_C_SetCaptureCameraMoveActive Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureCameraZoomActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureStudioBase_C::SetCaptureCameraZoomActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "SetCaptureCameraZoomActive");

	Params::BP_CaptureStudioBase_C_SetCaptureCameraZoomActive Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RotateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InAddRotateValue                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureStudioBase_C::RotateMesh(float InAddRotateValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "RotateMesh");

	Params::BP_CaptureStudioBase_C_RotateMesh Parms{};

	Parms.InAddRotateValue = InAddRotateValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetMeshAndCameraResetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureStudioBase_C::SetMeshAndCameraResetActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "SetMeshAndCameraResetActive");

	Params::BP_CaptureStudioBase_C_SetMeshAndCameraResetActive Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureStudioBase_C::SetCaptureEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "SetCaptureEnable");

	Params::BP_CaptureStudioBase_C_SetCaptureEnable Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetStudioVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureStudioBase_C::SetStudioVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "SetStudioVisibility");

	Params::BP_CaptureStudioBase_C_SetStudioVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureWhenMovingMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bCaptureWhenMovingMode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Param_CaptureGraceTime                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureStudioBase_C::SetCaptureWhenMovingMode(bool Param_bCaptureWhenMovingMode, float Param_CaptureGraceTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "SetCaptureWhenMovingMode");

	Params::BP_CaptureStudioBase_C_SetCaptureWhenMovingMode Parms{};

	Parms.Param_bCaptureWhenMovingMode = Param_bCaptureWhenMovingMode;
	Parms.Param_CaptureGraceTime = Param_CaptureGraceTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RotateByExternalDirectionalLightRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureStudioBase_C::RotateByExternalDirectionalLightRotation(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "RotateByExternalDirectionalLightRotation");

	Params::BP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation Parms{};

	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnable_Internal
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bWantVisible                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureStudioBase_C::SetCaptureEnable_Internal(bool Enable, bool* bWantVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "SetCaptureEnable_Internal");

	Params::BP_CaptureStudioBase_C_SetCaptureEnable_Internal Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

	if (bWantVisible != nullptr)
		*bWantVisible = Parms.bWantVisible;
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetLightEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureStudioBase_C::SetLightEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "SetLightEnable");

	Params::BP_CaptureStudioBase_C_SetLightEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnableByMoveing
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureStudioBase_C::SetCaptureEnableByMoveing(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "SetCaptureEnableByMoveing");

	Params::BP_CaptureStudioBase_C_SetCaptureEnableByMoveing Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RefreshEnableFlag
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_CaptureStudioBase_C::RefreshEnableFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureStudioBase_C", "RefreshEnableFlag");

	UObject::ProcessEvent(Func, nullptr);
}

}

