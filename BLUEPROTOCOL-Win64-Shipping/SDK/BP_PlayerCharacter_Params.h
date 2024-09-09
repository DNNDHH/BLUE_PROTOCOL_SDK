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
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.DeadNotifyMessage
	 */
	struct ABP_PlayerCharacter_C_DeadNotifyMessage_Params
	{
	public:
		class FText                                                DeadCharacterName;                                       // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetEnemyStepJumpCollisionComponent
	 */
	struct ABP_PlayerCharacter_C_GetEnemyStepJumpCollisionComponent_Params
	{
	public:
		class USphereComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OffsetNamePlateLocation
	 */
	struct ABP_PlayerCharacter_C_OffsetNamePlateLocation_Params
	{
	public:
		bool                                                       IsOffset;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NHYV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OffsetDistance;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateClassHUD
	 */
	struct ABP_PlayerCharacter_C_CreateClassHUD_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Imagine Arts Voice Event
	 */
	struct ABP_PlayerCharacter_C_GetImagineArtsVoiceEvent_Params
	{
	public:
		class UAkAudioEvent*                                       Event;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBAkEventLOD                                              LOD;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ELPE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitEquipWeaponStatus
	 */
	struct ABP_PlayerCharacter_C_InitEquipWeaponStatus_Params
	{
	public:
		TArray<int32_t>                                            OutEquipWeaponStatus;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDamageReaction
	 */
	struct ABP_PlayerCharacter_C_GetDamageReaction_Params
	{
	public:
		struct FSBStunInfo                                         StunInfo;                                                // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		E_DamageReaction                                           DamageReaction;                                          // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4LYG[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnSheathe
	 */
	struct ABP_PlayerCharacter_C_UnSheathe_Params
	{
	public:
		ESBWeaponEquipType                                         EquipType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WZA1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponSocketOffset
	 */
	struct ABP_PlayerCharacter_C_GetWeaponSocketOffset_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N88N[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSocketOffset
	 */
	struct ABP_PlayerCharacter_C_GetSocketOffset_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugPrintEquipWeapon
	 */
	struct ABP_PlayerCharacter_C_DebugPrintEquipWeapon_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.WeaponAnimationUnsheathe
	 */
	struct ABP_PlayerCharacter_C_WeaponAnimationUnsheathe_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.WeaponAnimationSheathe
	 */
	struct ABP_PlayerCharacter_C_WeaponAnimationSheathe_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OpenOtherPCMenu
	 */
	struct ABP_PlayerCharacter_C_OpenOtherPCMenu_Params
	{
	public:
		class ASBPlayerCharacter*                                  InOtherPC;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeLifeGaugeColor
	 */
	struct ABP_PlayerCharacter_C_ChangeLifeGaugeColor_Params
	{
	public:
		bool                                                       IsHealChainColor;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B739[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableAtGatheringPopup
	 */
	struct ABP_PlayerCharacter_C_EnableAtGatheringPopup_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateAtGatheringPopup
	 */
	struct ABP_PlayerCharacter_C_UpdateAtGatheringPopup_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.Sheathe
	 */
	struct ABP_PlayerCharacter_C_Sheathe_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHairMaterial
	 */
	struct ABP_PlayerCharacter_C_UpdateHairMaterial_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript
	 */
	struct ABP_PlayerCharacter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_4
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_3
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_2
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_1
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_DebugMenu_K2Node_InputActionEvent_2
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_DebugMenu_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_1
	 */
	struct ABP_PlayerCharacter_C_InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDeathDelegate_イベント
	 */
	struct ABP_PlayerCharacter_C_OnDeathDelegate__Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnInteraction
	 */
	struct ABP_PlayerCharacter_C_OnInteraction_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetOtherPCMenu
	 */
	struct ABP_PlayerCharacter_C_SetOtherPCMenu_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveStateChange
	 */
	struct ABP_PlayerCharacter_C_ReceiveStateChange_Params
	{
	public:
		class FString                                              PreviousStateName;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              NextStateName;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowHitIndicator
	 */
	struct ABP_PlayerCharacter_C_ShowHitIndicator_Params
	{
	public:
		struct FVector                                             InHitPosition;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NPCP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InDamageCauser;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetInitialMiniMapInfo
	 */
	struct ABP_PlayerCharacter_C_OnSetInitialMiniMapInfo_Params
	{
	public:
		struct FSBPlayerMiniMapInfo                                Info;                                                    // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDeadNotifyMessage
	 */
	struct ABP_PlayerCharacter_C_OnDeadNotifyMessage_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_6
	 */
	struct ABP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_6_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_9
	 */
	struct ABP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_9_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_13
	 */
	struct ABP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_13_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_18
	 */
	struct ABP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_18_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_21
	 */
	struct ABP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_21_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryClientTravelWithFadeout
	 */
	struct ABP_PlayerCharacter_C_TryClientTravelWithFadeout_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Portal;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCastSkill
	 */
	struct ABP_PlayerCharacter_C_OnCastSkill_Params
	{
	public:
		ESkillActionPosition                                       Position;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick
	 */
	struct ABP_PlayerCharacter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveAnyDamage
	 */
	struct ABP_PlayerCharacter_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IAXJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveEndInitialLoad
	 */
	struct ABP_PlayerCharacter_C_ReceiveEndInitialLoad_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickMovingNoise
	 */
	struct ABP_PlayerCharacter_C_TickMovingNoise_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseOtherPCMenu
	 */
	struct ABP_PlayerCharacter_C_OnCloseOtherPCMenu_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDead
	 */
	struct ABP_PlayerCharacter_C_OnDead_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ForceCloseOtherPCMenu
	 */
	struct ABP_PlayerCharacter_C_ForceCloseOtherPCMenu_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnOtherPCMenuTargetLost
	 */
	struct ABP_PlayerCharacter_C_OnOtherPCMenuTargetLost_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveSheathe
	 */
	struct ABP_PlayerCharacter_C_ReceiveSheathe_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnsheathe
	 */
	struct ABP_PlayerCharacter_C_ReceiveUnsheathe_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnsheatheByEquipType
	 */
	struct ABP_PlayerCharacter_C_ReceiveUnsheatheByEquipType_Params
	{
	public:
		ESBWeaponEquipType                                         EquipType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLastHitActorInfo
	 */
	struct ABP_PlayerCharacter_C_OnLastHitActorInfo_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDamageCollisionTransformType
	 */
	struct ABP_PlayerCharacter_C_SetDamageCollisionTransformType_Params
	{
	public:
		ESBPlayerDamageCollisionTransformType                      TransformType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.CustomEvent
	 */
	struct ABP_PlayerCharacter_C_CustomEvent_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportWithDelayImpl
	 */
	struct ABP_PlayerCharacter_C_TeleportWithDelayImpl_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WithFade;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8M4H[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportWithDelay
	 */
	struct ABP_PlayerCharacter_C_TeleportWithDelay_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWithFade;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LN3B[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DelayTime;                                               // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.EndDemoTeleport
	 */
	struct ABP_PlayerCharacter_C_EndDemoTeleport_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnFindByEnemyFirst
	 */
	struct ABP_PlayerCharacter_C_OnFindByEnemyFirst_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLossByEnemyLast
	 */
	struct ABP_PlayerCharacter_C_OnLossByEnemyLast_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPlayerDeactivateGodMode
	 */
	struct ABP_PlayerCharacter_C_OnPlayerDeactivateGodMode_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveDestroyed
	 */
	struct ABP_PlayerCharacter_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
	 */
	struct ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
