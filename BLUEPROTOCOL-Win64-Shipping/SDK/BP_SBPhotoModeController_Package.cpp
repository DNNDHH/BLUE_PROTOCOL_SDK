/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SpawnBpPlayerSceneCapture2d
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class ASBPlayerCharacter*                          BasePlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class ABP_PlayerSceneCapture2D_C* ABP_SBPhotoModeController_C::SpawnBpPlayerSceneCapture2d(const struct FTransform& SpawnTransform, class ASBPlayerCharacter* BasePlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SpawnBpPlayerSceneCapture2d");
		
		ABP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d_Params params {};
		params.SpawnTransform = SpawnTransform;
		params.BasePlayerCharacter = BasePlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.Tick_Internal
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModeController_C::Tick_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.Tick_Internal");
		
		ABP_SBPhotoModeController_C_Tick_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetControlRotationByUi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_SBPhotoModeController_C::SetControlRotationByUi(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetControlRotationByUi");
		
		ABP_SBPhotoModeController_C_SetControlRotationByUi_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationRoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::SetCameraRotationRoll(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationRoll");
		
		ABP_SBPhotoModeController_C_SetCameraRotationRoll_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::SetCameraRotationPitch(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationPitch");
		
		ABP_SBPhotoModeController_C_SetCameraRotationPitch_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationYaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::SetCameraRotationYaw(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationYaw");
		
		ABP_SBPhotoModeController_C_SetCameraRotationYaw_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestSkillAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               Position                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SBPhotoModeController_C::RequestSkillAction(ESkillActionPosition Position, bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestSkillAction");
		
		ABP_SBPhotoModeController_C_RequestSkillAction_Params params {};
		params.Position = Position;
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetFocalDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::SetFocalDistance(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetFocalDistance");
		
		ABP_SBPhotoModeController_C_SetFocalDistance_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetAperture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::SetAperture(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetAperture");
		
		ABP_SBPhotoModeController_C_SetAperture_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetMaxForegroundRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::SetMaxForegroundRadius(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetMaxForegroundRadius");
		
		ABP_SBPhotoModeController_C_SetMaxForegroundRadius_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetMaxBackgroundRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::SetMaxBackgroundRadius(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetMaxBackgroundRadius");
		
		ABP_SBPhotoModeController_C_SetMaxBackgroundRadius_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetEnableDOF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SBPhotoModeController_C::SetEnableDOF(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetEnableDOF");
		
		ABP_SBPhotoModeController_C_SetEnableDOF_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestToggleControlMode
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModeController_C::RequestToggleControlMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestToggleControlMode");
		
		ABP_SBPhotoModeController_C_RequestToggleControlMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestQuit
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModeController_C::RequestQuit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestQuit");
		
		ABP_SBPhotoModeController_C_RequestQuit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestToggleTalkMode
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModeController_C::RequestToggleTalkMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestToggleTalkMode");
		
		ABP_SBPhotoModeController_C_RequestToggleTalkMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestResetCamera
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModeController_C::RequestResetCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestResetCamera");
		
		ABP_SBPhotoModeController_C_RequestResetCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetFocusToPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocusToPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SBPhotoModeController_C::SetFocusToPlayer(bool bFocusToPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetFocusToPlayer");
		
		ABP_SBPhotoModeController_C_SetFocusToPlayer_Params params {};
		params.bFocusToPlayer = bFocusToPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeLookAtPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SBPhotoModeController_C::OnChangeLookAtPlayer(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeLookAtPlayer");
		
		ABP_SBPhotoModeController_C_OnChangeLookAtPlayer_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnActivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           OriginalPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::ReceiveOnActivate(class APlayerController* OriginalPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnActivate");
		
		ABP_SBPhotoModeController_C_ReceiveOnActivate_Params params {};
		params.OriginalPC = OriginalPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnDeactivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           RestoredPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::ReceiveOnDeactivate(class APlayerController* RestoredPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnDeactivate");
		
		ABP_SBPhotoModeController_C_ReceiveOnDeactivate_Params params {};
		params.RestoredPC = RestoredPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceivePossess");
		
		ABP_SBPhotoModeController_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnPossessPhotoModePawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SBPhotoModePawn_C*                       PhotoModePawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::OnPossessPhotoModePawn(class ABP_SBPhotoModePawn_C* PhotoModePawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnPossessPhotoModePawn");
		
		ABP_SBPhotoModeController_C_OnPossessPhotoModePawn_Params params {};
		params.PhotoModePawn = PhotoModePawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveTick");
		
		ABP_SBPhotoModeController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnPostActivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           OriginalPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::ReceiveOnPostActivate(class APlayerController* OriginalPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnPostActivate");
		
		ABP_SBPhotoModeController_C_ReceiveOnPostActivate_Params params {};
		params.OriginalPC = OriginalPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnPreDeactivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           OriginalPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::ReceiveOnPreDeactivate(class APlayerController* OriginalPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnPreDeactivate");
		
		ABP_SBPhotoModeController_C_ReceiveOnPreDeactivate_Params params {};
		params.OriginalPC = OriginalPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeControlMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInPlayerControlMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreChange                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SBPhotoModeController_C::OnChangeControlMode(bool bInPlayerControlMode, bool bPreChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeControlMode");
		
		ABP_SBPhotoModeController_C_OnChangeControlMode_Params params {};
		params.bInPlayerControlMode = bInPlayerControlMode;
		params.bPreChange = bPreChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeTalkMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInTalkMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreChange                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SBPhotoModeController_C::OnChangeTalkMode(bool bInTalkMode, bool bPreChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeTalkMode");
		
		ABP_SBPhotoModeController_C_OnChangeTalkMode_Params params {};
		params.bInTalkMode = bInTalkMode;
		params.bPreChange = bPreChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveEndPlay");
		
		ABP_SBPhotoModeController_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_ResetCamera
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModeController_C::BP_ResetCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_ResetCamera");
		
		ABP_SBPhotoModeController_C_BP_ResetCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeFov
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bByUi                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SBPhotoModeController_C::OnChangeFov(float Value, bool bByUi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeFov");
		
		ABP_SBPhotoModeController_C_OnChangeFov_Params params {};
		params.Value = Value;
		params.bByUi = bByUi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_ToggleCameraControlView
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModeController_C::BP_ToggleCameraControlView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_ToggleCameraControlView");
		
		ABP_SBPhotoModeController_C_BP_ToggleCameraControlView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_TogglePlayerControlView
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModeController_C::BP_TogglePlayerControlView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_TogglePlayerControlView");
		
		ABP_SBPhotoModeController_C_BP_TogglePlayerControlView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_OnRequestQuitPhotoMode
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModeController_C::BP_OnRequestQuitPhotoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_OnRequestQuitPhotoMode");
		
		ABP_SBPhotoModeController_C_BP_OnRequestQuitPhotoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_OnUpdatePlayerControlData
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModeController_C::BP_OnUpdatePlayerControlData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_OnUpdatePlayerControlData");
		
		ABP_SBPhotoModeController_C_BP_OnUpdatePlayerControlData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ExecuteUbergraph_BP_SBPhotoModeController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModeController_C::ExecuteUbergraph_BP_SBPhotoModeController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ExecuteUbergraph_BP_SBPhotoModeController");
		
		ABP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ScreenShotCapturedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModeController_C::ScreenShotCapturedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ScreenShotCapturedEvent__DelegateSignature");
		
		ABP_SBPhotoModeController_C_ScreenShotCapturedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SBPhotoModeController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SBPhotoModeController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SBPhotoModeController.BP_SBPhotoModeController_C");
		return ptr;
	}

}


