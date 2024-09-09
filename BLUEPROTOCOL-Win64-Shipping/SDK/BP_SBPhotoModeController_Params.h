#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SpawnBpPlayerSceneCapture2d
	 */
	struct ABP_SBPhotoModeController_C_SpawnBpPlayerSceneCapture2d_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class ASBPlayerCharacter*                                  BasePlayerCharacter;                                     // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_PlayerSceneCapture2D_C*                          ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.Tick_Internal
	 */
	struct ABP_SBPhotoModeController_C_Tick_Internal_Params
	{	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetControlRotationByUi
	 */
	struct ABP_SBPhotoModeController_C_SetControlRotationByUi_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationRoll
	 */
	struct ABP_SBPhotoModeController_C_SetCameraRotationRoll_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationPitch
	 */
	struct ABP_SBPhotoModeController_C_SetCameraRotationPitch_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetCameraRotationYaw
	 */
	struct ABP_SBPhotoModeController_C_SetCameraRotationYaw_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestSkillAction
	 */
	struct ABP_SBPhotoModeController_C_RequestSkillAction_Params
	{
	public:
		ESkillActionPosition                                       Position;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPressed;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetFocalDistance
	 */
	struct ABP_SBPhotoModeController_C_SetFocalDistance_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetAperture
	 */
	struct ABP_SBPhotoModeController_C_SetAperture_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetMaxForegroundRadius
	 */
	struct ABP_SBPhotoModeController_C_SetMaxForegroundRadius_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetMaxBackgroundRadius
	 */
	struct ABP_SBPhotoModeController_C_SetMaxBackgroundRadius_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetEnableDOF
	 */
	struct ABP_SBPhotoModeController_C_SetEnableDOF_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestToggleControlMode
	 */
	struct ABP_SBPhotoModeController_C_RequestToggleControlMode_Params
	{	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestQuit
	 */
	struct ABP_SBPhotoModeController_C_RequestQuit_Params
	{	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestToggleTalkMode
	 */
	struct ABP_SBPhotoModeController_C_RequestToggleTalkMode_Params
	{	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.RequestResetCamera
	 */
	struct ABP_SBPhotoModeController_C_RequestResetCamera_Params
	{	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.SetFocusToPlayer
	 */
	struct ABP_SBPhotoModeController_C_SetFocusToPlayer_Params
	{
	public:
		bool                                                       bFocusToPlayer;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeLookAtPlayer
	 */
	struct ABP_SBPhotoModeController_C_OnChangeLookAtPlayer_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnActivate
	 */
	struct ABP_SBPhotoModeController_C_ReceiveOnActivate_Params
	{
	public:
		class APlayerController*                                   OriginalPC;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnDeactivate
	 */
	struct ABP_SBPhotoModeController_C_ReceiveOnDeactivate_Params
	{
	public:
		class APlayerController*                                   RestoredPC;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceivePossess
	 */
	struct ABP_SBPhotoModeController_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnPossessPhotoModePawn
	 */
	struct ABP_SBPhotoModeController_C_OnPossessPhotoModePawn_Params
	{
	public:
		class ABP_SBPhotoModePawn_C*                               PhotoModePawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveTick
	 */
	struct ABP_SBPhotoModeController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnPostActivate
	 */
	struct ABP_SBPhotoModeController_C_ReceiveOnPostActivate_Params
	{
	public:
		class APlayerController*                                   OriginalPC;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveOnPreDeactivate
	 */
	struct ABP_SBPhotoModeController_C_ReceiveOnPreDeactivate_Params
	{
	public:
		class APlayerController*                                   OriginalPC;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeControlMode
	 */
	struct ABP_SBPhotoModeController_C_OnChangeControlMode_Params
	{
	public:
		bool                                                       bInPlayerControlMode;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreChange;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeTalkMode
	 */
	struct ABP_SBPhotoModeController_C_OnChangeTalkMode_Params
	{
	public:
		bool                                                       bInTalkMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreChange;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ReceiveEndPlay
	 */
	struct ABP_SBPhotoModeController_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_ResetCamera
	 */
	struct ABP_SBPhotoModeController_C_BP_ResetCamera_Params
	{	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.OnChangeFov
	 */
	struct ABP_SBPhotoModeController_C_OnChangeFov_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bByUi;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_ToggleCameraControlView
	 */
	struct ABP_SBPhotoModeController_C_BP_ToggleCameraControlView_Params
	{	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_TogglePlayerControlView
	 */
	struct ABP_SBPhotoModeController_C_BP_TogglePlayerControlView_Params
	{	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_OnRequestQuitPhotoMode
	 */
	struct ABP_SBPhotoModeController_C_BP_OnRequestQuitPhotoMode_Params
	{	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.BP_OnUpdatePlayerControlData
	 */
	struct ABP_SBPhotoModeController_C_BP_OnUpdatePlayerControlData_Params
	{	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ExecuteUbergraph_BP_SBPhotoModeController
	 */
	struct ABP_SBPhotoModeController_C_ExecuteUbergraph_BP_SBPhotoModeController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeController.BP_SBPhotoModeController_C.ScreenShotCapturedEvent__DelegateSignature
	 */
	struct ABP_SBPhotoModeController_C_ScreenShotCapturedEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
