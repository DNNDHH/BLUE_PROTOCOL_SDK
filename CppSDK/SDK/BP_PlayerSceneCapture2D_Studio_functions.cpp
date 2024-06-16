#pragma once

 

// Package: BP_PlayerSceneCapture2D_Studio

#include "Basic.hpp"

#include "BP_PlayerSceneCapture2D_Studio_classes.hpp"
#include "BP_PlayerSceneCapture2D_Studio_parameters.hpp"


namespace SDK
{

// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCharaPartsLoadedDelegete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::OnCharaPartsLoadedDelegete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "OnCharaPartsLoadedDelegete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnUploadImageCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::OnUploadImageCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "OnUploadImageCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnEmoteFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::OnEmoteFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "OnEmoteFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio");

	Params::BP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ForceCaptureEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::ForceCaptureEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "ForceCaptureEnabled");

	Params::BP_PlayerSceneCapture2D_Studio_C_ForceCaptureEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "ReceiveEndPlay");

	Params::BP_PlayerSceneCapture2D_Studio_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnInitialLoaded
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::OnInitialLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "OnInitialLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SendCommand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Command                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::SendCommand(class FName Command)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SendCommand");

	Params::BP_PlayerSceneCapture2D_Studio_C_SendCommand Parms{};

	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.TargetMoving
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::TargetMoving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "TargetMoving");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CaptureWhenMovingUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::CaptureWhenMovingUpdate(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "CaptureWhenMovingUpdate");

	Params::BP_PlayerSceneCapture2D_Studio_C_CaptureWhenMovingUpdate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCharaPartsLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::OnCharaPartsLoaded(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "OnCharaPartsLoaded");

	Params::BP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoaded Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.Tick_PlayerAvatarRotate
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::Tick_PlayerAvatarRotate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "Tick_PlayerAvatarRotate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "ReceiveTick");

	Params::BP_PlayerSceneCapture2D_Studio_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetPlayerAvatarVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetPlayerAvatarVisibility");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarVisibility Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CompleteUploadImage
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::CompleteUploadImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "CompleteUploadImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnPlayerAvatarPoseChangedToDefault_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InPrevStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNextStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::OnPlayerAvatarPoseChangedToDefault_____(const class FString& InPrevStateName, const class FString& InNextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "OnPlayerAvatarPoseChangedToDefault_����");

	Params::BP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault_____ Parms{};

	Parms.InPrevStateName = std::move(InPrevStateName);
	Parms.InNextStateName = std::move(InNextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RequestPlayerAvatarResetPoseToDefault
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::RequestPlayerAvatarResetPoseToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "RequestPlayerAvatarResetPoseToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnUploadFacemageComplete_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::OnUploadFacemageComplete_____(const bool bResult, int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "OnUploadFacemageComplete_����");

	Params::BP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete_____ Parms{};

	Parms.bResult = bResult;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DoFaceImageUpload
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::DoFaceImageUpload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "DoFaceImageUpload");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.StartUploadImage
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::StartUploadImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "StartUploadImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnDisableCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::OnDisableCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "OnDisableCapture");

	Params::BP_PlayerSceneCapture2D_Studio_C_OnDisableCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnEnableCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::OnEnableCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "OnEnableCapture");

	Params::BP_PlayerSceneCapture2D_Studio_C_OnEnableCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnDestroyCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::OnDestroyCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "OnDestroyCapture");

	Params::BP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCreateCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::OnCreateCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "OnCreateCapture");

	Params::BP_PlayerSceneCapture2D_Studio_C_OnCreateCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DestructPriorityGraph
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::DestructPriorityGraph()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "DestructPriorityGraph");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ConstructPriorityGraph
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::ConstructPriorityGraph()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "ConstructPriorityGraph");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.AddAvatarRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaRotationZ                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::AddAvatarRotation(float DeltaRotationZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "AddAvatarRotation");

	Params::BP_PlayerSceneCapture2D_Studio_C_AddAvatarRotation Parms{};

	Parms.DeltaRotationZ = DeltaRotationZ;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CaptureFaceImage
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::CaptureFaceImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "CaptureFaceImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RotatePlayerAvatar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InAddRotateValue                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::RotatePlayerAvatar(float InAddRotateValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "RotatePlayerAvatar");

	Params::BP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar Parms{};

	Parms.InAddRotateValue = InAddRotateValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ResetPlayerAvatarRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::ResetPlayerAvatarRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "ResetPlayerAvatarRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarRotateActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetPlayerAvatarRotateActive(bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetPlayerAvatarRotateActive");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarRotateActive Parms{};

	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdateAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharaCreateParameter          InNewCharaCreateParameter                              (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerSceneCapture2D_Studio_C::UpdateAvatar(const struct FSBCharaCreateParameter& InNewCharaCreateParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "UpdateAvatar");

	Params::BP_PlayerSceneCapture2D_Studio_C_UpdateAvatar Parms{};

	Parms.InNewCharaCreateParameter = std::move(InNewCharaCreateParameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdatePlayerAvatar
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::UpdatePlayerAvatar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "UpdatePlayerAvatar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RefreshAvatar
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::RefreshAvatar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "RefreshAvatar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetStudioVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetStudioVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetStudioVisibility");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetStudioVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetCaptureEnable(bool bIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetCaptureEnable");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable Parms{};

	Parms.bIsEnable = bIsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.AdjustSceneCapture2dTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneCaptureComponent2D*         InSceneCapture                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InSceneCaptue2dOffsetLocation                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         InSceneCapture2dOffsetRotator                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::AdjustSceneCapture2dTransform(class USceneCaptureComponent2D* InSceneCapture, const struct FVector& InSceneCaptue2dOffsetLocation, const struct FRotator& InSceneCapture2dOffsetRotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "AdjustSceneCapture2dTransform");

	Params::BP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform Parms{};

	Parms.InSceneCapture = InSceneCapture;
	Parms.InSceneCaptue2dOffsetLocation = std::move(InSceneCaptue2dOffsetLocation);
	Parms.InSceneCapture2dOffsetRotator = std::move(InSceneCapture2dOffsetRotator);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarEyeBlinkEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetPlayerAvatarEyeBlinkEnable(bool InIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetPlayerAvatarEyeBlinkEnable");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable Parms{};

	Parms.InIsEnable = InIsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.GetDirectionalLightRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator ABP_PlayerSceneCapture2D_Studio_C::GetDirectionalLightRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "GetDirectionalLightRotation");

	Params::BP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetIsPlayerAvatarNaked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNaked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetIsPlayerAvatarNaked(bool InIsNaked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetIsPlayerAvatarNaked");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked Parms{};

	Parms.InIsNaked = InIsNaked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RequestEmote
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EmoteName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::RequestEmote(class FName EmoteName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "RequestEmote");

	Params::BP_PlayerSceneCapture2D_Studio_C_RequestEmote Parms{};

	Parms.EmoteName = EmoteName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CancelEmote
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::CancelEmote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "CancelEmote");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureWhenMovingMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bCaptureWhenMovingMode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Param_CaptureGraceTime                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::SetCaptureWhenMovingMode(bool Param_bCaptureWhenMovingMode, float Param_CaptureGraceTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetCaptureWhenMovingMode");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode Parms{};

	Parms.Param_bCaptureWhenMovingMode = Param_bCaptureWhenMovingMode;
	Parms.Param_CaptureGraceTime = Param_CaptureGraceTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.IsEmoteFinished
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_PlayerSceneCapture2D_Studio_C::IsEmoteFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "IsEmoteFinished");

	Params::BP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetForceDirectionalLightEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetForceDirectionalLightEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetForceDirectionalLightEnable");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetForceDirectionalLightEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCostumePartsData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 CostumeData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerSceneCapture2D_Studio_C::SetCostumePartsData(const struct FSBMasterCostume& CostumeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetCostumePartsData");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData Parms{};

	Parms.CostumeData = std::move(CostumeData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCostumePartsDataByUniqueId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 CostumeData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::SetCostumePartsDataByUniqueId(const struct FSBMasterCostume& CostumeData, const class FString& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetCostumePartsDataByUniqueId");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId Parms{};

	Parms.CostumeData = std::move(CostumeData);
	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCharaCreateParameterOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharaCreateParameter          CharaCreateParameter                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerSceneCapture2D_Studio_C::SetCharaCreateParameterOnly(const struct FSBCharaCreateParameter& CharaCreateParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetCharaCreateParameterOnly");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly Parms{};

	Parms.CharaCreateParameter = std::move(CharaCreateParameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RefreshEnableFlag
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::RefreshEnableFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "RefreshEnableFlag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetLightEnable
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetLightEnable(bool bIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetLightEnable");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetLightEnable Parms{};

	Parms.bIsEnable = bIsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnableByMoveing
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetCaptureEnableByMoveing(bool bIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetCaptureEnableByMoveing");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing Parms{};

	Parms.bIsEnable = bIsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnable_Internal
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bWantVisible                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetCaptureEnable_Internal(bool bIsEnable, bool* bWantVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetCaptureEnable_Internal");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal Parms{};

	Parms.bIsEnable = bIsEnable;

	UObject::ProcessEvent(Func, &Parms);

	if (bWantVisible != nullptr)
		*bWantVisible = Parms.bWantVisible;
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdatePlayerAvatarWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::UpdatePlayerAvatarWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "UpdatePlayerAvatarWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetSceneCapture2DCameraForBattleSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsBattleSet                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetSceneCapture2DCameraForBattleSet(bool InIsBattleSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetSceneCapture2DCameraForBattleSet");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet Parms{};

	Parms.InIsBattleSet = InIsBattleSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.JumpMaschineState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MachinName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           StateName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::JumpMaschineState(const class FString& MachinName, const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "JumpMaschineState");

	Params::BP_PlayerSceneCapture2D_Studio_C_JumpMaschineState Parms{};

	Parms.MachinName = std::move(MachinName);
	Parms.StateName = std::move(StateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetFacialType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFacialType                           InFacialType                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_Studio_C::SetFacialType(const ESBFacialType InFacialType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetFacialType");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetFacialType Parms{};

	Parms.InFacialType = InFacialType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DoOnEnableCapture
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_Studio_C::DoOnEnableCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "DoOnEnableCapture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetFaceCaptureVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_Studio_C::SetFaceCaptureVisibility(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_Studio_C", "SetFaceCaptureVisibility");

	Params::BP_PlayerSceneCapture2D_Studio_C_SetFaceCaptureVisibility Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

}

