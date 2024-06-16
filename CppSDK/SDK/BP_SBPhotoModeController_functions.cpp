#pragma once

 

// Package: BP_SBPhotoModeController

#include "Basic.hpp"

#include "BP_SBPhotoModeController_classes.hpp"
#include "BP_SBPhotoModeController_parameters.hpp"


namespace SDK
{

// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ScreenShotCapturedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SBPhotoModeController_C::ScreenShotCapturedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "ScreenShotCapturedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ExecuteUbergraph_BP_SBPhotoModeController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::ExecuteUbergraph_BP_SBPhotoModeController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "ExecuteUbergraph_BP_SBPhotoModeController");

	Params::BP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_OnUpdatePlayerControlData
// (Event, Protected, BlueprintEvent)

void ABP_SBPhotoModeController_C::BP_OnUpdatePlayerControlData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "BP_OnUpdatePlayerControlData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_OnRequestQuitPhotoMode
// (Event, Public, BlueprintEvent)

void ABP_SBPhotoModeController_C::BP_OnRequestQuitPhotoMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "BP_OnRequestQuitPhotoMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_TogglePlayerControlView
// (Event, Protected, BlueprintEvent)

void ABP_SBPhotoModeController_C::BP_TogglePlayerControlView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "BP_TogglePlayerControlView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_ToggleCameraControlView
// (Event, Protected, BlueprintEvent)

void ABP_SBPhotoModeController_C::BP_ToggleCameraControlView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "BP_ToggleCameraControlView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeFov
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bByUi                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SBPhotoModeController_C::OnChangeFov(float Value, bool bByUi)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "OnChangeFov");

	Params::BP_SBPhotoModeController_C_OnChangeFov Parms{};

	Parms.Value = Value;
	Parms.bByUi = bByUi;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_ResetCamera
// (Event, Protected, BlueprintEvent)

void ABP_SBPhotoModeController_C::BP_ResetCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "BP_ResetCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "ReceiveEndPlay");

	Params::BP_SBPhotoModeController_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeTalkMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInTalkMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bPreChange                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SBPhotoModeController_C::OnChangeTalkMode(bool bInTalkMode, bool bPreChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "OnChangeTalkMode");

	Params::BP_SBPhotoModeController_C_OnChangeTalkMode Parms{};

	Parms.bInTalkMode = bInTalkMode;
	Parms.bPreChange = bPreChange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeControlMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInPlayerControlMode                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bPreChange                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SBPhotoModeController_C::OnChangeControlMode(bool bInPlayerControlMode, bool bPreChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "OnChangeControlMode");

	Params::BP_SBPhotoModeController_C_OnChangeControlMode Parms{};

	Parms.bInPlayerControlMode = bInPlayerControlMode;
	Parms.bPreChange = bPreChange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnPreDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*                OriginalPC                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::ReceiveOnPreDeactivate(class APlayerController* OriginalPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "ReceiveOnPreDeactivate");

	Params::BP_SBPhotoModeController_C_ReceiveOnPreDeactivate Parms{};

	Parms.OriginalPC = OriginalPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnPostActivate
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*                OriginalPC                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::ReceiveOnPostActivate(class APlayerController* OriginalPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "ReceiveOnPostActivate");

	Params::BP_SBPhotoModeController_C_ReceiveOnPostActivate Parms{};

	Parms.OriginalPC = OriginalPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "ReceiveTick");

	Params::BP_SBPhotoModeController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnPossessPhotoModePawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SBPhotoModePawn_C*            Param_PhotoModePawn                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::OnPossessPhotoModePawn(class ABP_SBPhotoModePawn_C* Param_PhotoModePawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "OnPossessPhotoModePawn");

	Params::BP_SBPhotoModeController_C_OnPossessPhotoModePawn Parms{};

	Parms.Param_PhotoModePawn = Param_PhotoModePawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "ReceivePossess");

	Params::BP_SBPhotoModeController_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*                RestoredPC                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::ReceiveOnDeactivate(class APlayerController* RestoredPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "ReceiveOnDeactivate");

	Params::BP_SBPhotoModeController_C_ReceiveOnDeactivate Parms{};

	Parms.RestoredPC = RestoredPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnActivate
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*                OriginalPC                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::ReceiveOnActivate(class APlayerController* OriginalPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "ReceiveOnActivate");

	Params::BP_SBPhotoModeController_C_ReceiveOnActivate Parms{};

	Parms.OriginalPC = OriginalPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeLookAtPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SBPhotoModeController_C::OnChangeLookAtPlayer(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "OnChangeLookAtPlayer");

	Params::BP_SBPhotoModeController_C_OnChangeLookAtPlayer Parms{};

	Parms.bValue = bValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnUploadPhotoModeImageDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SBPhotoModeController_C::OnUploadPhotoModeImageDelegate(const bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "OnUploadPhotoModeImageDelegate");

	Params::BP_SBPhotoModeController_C_OnUploadPhotoModeImageDelegate Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnEndDialogScreenshotCaptuerd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::OnEndDialogScreenshotCaptuerd(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "OnEndDialogScreenshotCaptuerd");

	Params::BP_SBPhotoModeController_C_OnEndDialogScreenshotCaptuerd Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnScreenshotCaptured
// (Event, Protected, BlueprintEvent)

void ABP_SBPhotoModeController_C::OnScreenshotCaptured()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "OnScreenshotCaptured");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetFocusToPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bFocusToPlayer                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SBPhotoModeController_C::SetFocusToPlayer(bool Param_bFocusToPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "SetFocusToPlayer");

	Params::BP_SBPhotoModeController_C_SetFocusToPlayer Parms{};

	Parms.Param_bFocusToPlayer = Param_bFocusToPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestResetCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_SBPhotoModeController_C::RequestResetCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "RequestResetCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestToggleTalkMode
// (BlueprintCallable, BlueprintEvent)

void ABP_SBPhotoModeController_C::RequestToggleTalkMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "RequestToggleTalkMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestQuit
// (BlueprintCallable, BlueprintEvent)

void ABP_SBPhotoModeController_C::RequestQuit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "RequestQuit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestToggleControlMode
// (BlueprintCallable, BlueprintEvent)

void ABP_SBPhotoModeController_C::RequestToggleControlMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "RequestToggleControlMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetEnableDOF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SBPhotoModeController_C::SetEnableDOF(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "SetEnableDOF");

	Params::BP_SBPhotoModeController_C_SetEnableDOF Parms{};

	Parms.bValue = bValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetMaxBackgroundRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::SetMaxBackgroundRadius(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "SetMaxBackgroundRadius");

	Params::BP_SBPhotoModeController_C_SetMaxBackgroundRadius Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetMaxForegroundRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::SetMaxForegroundRadius(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "SetMaxForegroundRadius");

	Params::BP_SBPhotoModeController_C_SetMaxForegroundRadius Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetAperture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::SetAperture(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "SetAperture");

	Params::BP_SBPhotoModeController_C_SetAperture Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetFocalDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::SetFocalDistance(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "SetFocalDistance");

	Params::BP_SBPhotoModeController_C_SetFocalDistance Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestSkillAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    Position                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPressed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SBPhotoModeController_C::RequestSkillAction(const ESkillActionPosition Position, bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "RequestSkillAction");

	Params::BP_SBPhotoModeController_C_RequestSkillAction Parms{};

	Parms.Position = Position;
	Parms.bPressed = bPressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationYaw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::SetCameraRotationYaw(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "SetCameraRotationYaw");

	Params::BP_SBPhotoModeController_C_SetCameraRotationYaw Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationPitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::SetCameraRotationPitch(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "SetCameraRotationPitch");

	Params::BP_SBPhotoModeController_C_SetCameraRotationPitch Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationRoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SBPhotoModeController_C::SetCameraRotationRoll(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "SetCameraRotationRoll");

	Params::BP_SBPhotoModeController_C_SetCameraRotationRoll Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetControlRotationByUi
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         NewRotation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void ABP_SBPhotoModeController_C::SetControlRotationByUi(const struct FRotator& NewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "SetControlRotationByUi");

	Params::BP_SBPhotoModeController_C_SetControlRotationByUi Parms{};

	Parms.NewRotation = std::move(NewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.Tick_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_SBPhotoModeController_C::Tick_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "Tick_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SpawnBpPlayerSceneCapture2d
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class ASBPlayerCharacter*               BasePlayerCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerSceneCapture2D_C*       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ABP_PlayerSceneCapture2D_C* ABP_SBPhotoModeController_C::SpawnBpPlayerSceneCapture2d(const struct FTransform& SpawnTransform, class ASBPlayerCharacter* BasePlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "SpawnBpPlayerSceneCapture2d");

	Params::BP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.BasePlayerCharacter = BasePlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.GetImage_PNGData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<uint8>                           Param_Image_PNGData                                    (Parm, OutParm)

void ABP_SBPhotoModeController_C::GetImage_PNGData(TArray<uint8>* Param_Image_PNGData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeController_C", "GetImage_PNGData");

	Params::BP_SBPhotoModeController_C_GetImage_PNGData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Image_PNGData != nullptr)
		*Param_Image_PNGData = std::move(Parms.Param_Image_PNGData);
}

}

