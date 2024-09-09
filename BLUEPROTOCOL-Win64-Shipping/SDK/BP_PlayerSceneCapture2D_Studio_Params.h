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
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.IsStudioVisible
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_IsStudioVisible_Params
	{
	public:
		bool                                                       bOutIsVisible;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetFaceCaptureVisibility
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetFaceCaptureVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DoOnEnableCapture
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_DoOnEnableCapture_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetFacialType
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetFacialType_Params
	{
	public:
		ESBFacialType                                              InFacialType;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.JumpMaschineState
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_JumpMaschineState_Params
	{
	public:
		class FString                                              MachinName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              StateName;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetSceneCapture2DCameraForBattleSet
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetSceneCapture2DCameraForBattleSet_Params
	{
	public:
		bool                                                       InIsBattleSet;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M655[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdatePlayerAvatarWeapon
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatarWeapon_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnable_Internal
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Internal_Params
	{
	public:
		bool                                                       bIsEnable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWantVisible;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnableByMoveing
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetCaptureEnableByMoveing_Params
	{
	public:
		bool                                                       bIsEnable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetLightEnable
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetLightEnable_Params
	{
	public:
		bool                                                       bIsEnable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RefreshEnableFlag
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_RefreshEnableFlag_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCharaCreateParameterOnly
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetCharaCreateParameterOnly_Params
	{
	public:
		struct FSBCharaCreateParameter                             CharaCreateParameter;                                    // 0x0000(0x03C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCostumePartsDataByUniqueId
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetCostumePartsDataByUniqueId_Params
	{
	public:
		struct FSBMasterCostume                                    CostumeData;                                             // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              InUniqueId;                                              // 0x0088(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCostumePartsData
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetCostumePartsData_Params
	{
	public:
		struct FSBMasterCostume                                    CostumeData;                                             // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetForceDirectionalLightEnable
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetForceDirectionalLightEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.IsEmoteFinished
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_IsEmoteFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureWhenMovingMode
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetCaptureWhenMovingMode_Params
	{
	public:
		bool                                                       bCaptureWhenMovingMode;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N7NX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CaptureGraceTime;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CancelEmote
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_CancelEmote_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RequestEmote
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_RequestEmote_Params
	{
	public:
		class FName                                                EmoteName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetIsPlayerAvatarNaked
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetIsPlayerAvatarNaked_Params
	{
	public:
		bool                                                       InIsNaked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.GetDirectionalLightRotation
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_GetDirectionalLightRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarEyeBlinkEnable
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarEyeBlinkEnable_Params
	{
	public:
		bool                                                       InIsEnable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.AdjustSceneCapture2dTransform
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_AdjustSceneCapture2dTransform_Params
	{
	public:
		class USceneCaptureComponent2D*                            InSceneCapture;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InSceneCaptue2dOffsetLocation;                           // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            InSceneCapture2dOffsetRotator;                           // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetCaptureEnable
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetCaptureEnable_Params
	{
	public:
		bool                                                       bIsEnable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetStudioVisibility
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetStudioVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RefreshAvatar
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_RefreshAvatar_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdatePlayerAvatar
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_UpdatePlayerAvatar_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UpdateAvatar
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_UpdateAvatar_Params
	{
	public:
		struct FSBCharaCreateParameter                             InNewCharaCreateParameter;                               // 0x0000(0x03C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarRotateActive
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarRotateActive_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ResetPlayerAvatarRotation
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_ResetPlayerAvatarRotation_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RotatePlayerAvatar
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_RotatePlayerAvatar_Params
	{
	public:
		float                                                      InAddRotateValue;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0OF4[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.UserConstructionScript
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CaptureFaceImage
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_CaptureFaceImage_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.AddAvatarRotation
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_AddAvatarRotation_Params
	{
	public:
		float                                                      DeltaRotationZ;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ConstructPriorityGraph
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_ConstructPriorityGraph_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DestructPriorityGraph
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_DestructPriorityGraph_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCreateCapture
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_OnCreateCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnDestroyCapture
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_OnDestroyCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnEnableCapture
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_OnEnableCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnDisableCapture
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_OnDisableCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.StartUploadImage
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_StartUploadImage_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.DoFaceImageUpload
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_DoFaceImageUpload_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnUploadFacemageComplete_イベント
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_OnUploadFacemageComplete__Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZIOK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.RequestPlayerAvatarResetPoseToDefault
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_RequestPlayerAvatarResetPoseToDefault_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnPlayerAvatarPoseChangedToDefault_イベント
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_OnPlayerAvatarPoseChangedToDefault__Params
	{
	public:
		class FString                                              InPrevStateName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNextStateName;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CompleteUploadImage
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_CompleteUploadImage_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SetPlayerAvatarVisibility
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SetPlayerAvatarVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveTick
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.Tick_PlayerAvatarRotate
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_Tick_PlayerAvatarRotate_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCharaPartsLoaded
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoaded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.CaptureWhenMovingUpdate
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_CaptureWhenMovingUpdate_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.TargetMoving
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_TargetMoving_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.SendCommand
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_SendCommand_Params
	{
	public:
		class FName                                                Command;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnInitialLoaded
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_OnInitialLoaded_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ReceiveEndPlay
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ForceCaptureEnabled
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_ForceCaptureEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnEmoteFinished__DelegateSignature
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_OnEmoteFinished__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnUploadImageCompleted__DelegateSignature
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_OnUploadImageCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C.OnCharaPartsLoadedDelegete__DelegateSignature
	 */
	struct ABP_PlayerSceneCapture2D_Studio_C_OnCharaPartsLoadedDelegete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
