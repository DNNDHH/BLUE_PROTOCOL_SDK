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
	 * Function BP_ScriptActor.BP_ScriptActor_C.ClearPartyMigrationState
	 */
	struct ABP_ScriptActor_C_ClearPartyMigrationState_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.GetPlayerNeckJOffset
	 */
	struct ABP_ScriptActor_C_GetPlayerNeckJOffset_Params
	{
	public:
		float                                                      ZOffset;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.SetTalkModeFixed_Internal
	 */
	struct ABP_ScriptActor_C_SetTalkModeFixed_Internal_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ViewParamId;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsNoCheck;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_79CA[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InCameraZOffset;                                         // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeTagetLocation
	 */
	struct ABP_ScriptActor_C_CalcTalkModeTagetLocation_Params
	{
	public:
		class AActor*                                              NPC;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Ret;                                                     // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeCameraLocation
	 */
	struct ABP_ScriptActor_C_CalcTalkModeCameraLocation_Params
	{
	public:
		class AActor*                                              NPC;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HeightDiff;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Ret;                                                     // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeHeightDiff
	 */
	struct ABP_ScriptActor_C_CalcTalkModeHeightDiff_Params
	{
	public:
		class AActor*                                              NPC;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ret;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PJTO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.AddStringArrayForDebug
	 */
	struct ABP_ScriptActor_C_AddStringArrayForDebug_Params
	{
	public:
		TArray<class FString>                                      SrcTextArray;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              DstText;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DstTitle;                                                // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.Get Actor Yaw Diff
	 */
	struct ABP_ScriptActor_C_GetActorYawDiff_Params
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DestinationActor;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YawDiff;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.LimitAngleDifference
	 */
	struct ABP_ScriptActor_C_LimitAngleDifference_Params
	{
	public:
		float                                                      Start;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Target;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutTarget;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CreateWalletWidgetIfNeeded
	 */
	struct ABP_ScriptActor_C_CreateWalletWidgetIfNeeded_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.PlayParticleFromActor_Internal
	 */
	struct ABP_ScriptActor_C_PlayParticleFromActor_Internal_Params
	{
	public:
		class AActor*                                              InTargetActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UParticleSystem*                                     InParticle;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InSocketId;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OffsetLocation;                                          // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CurViewTarget
	 */
	struct ABP_ScriptActor_C_CurViewTarget_Params
	{
	public:
		class AActor*                                              ViewTargetActor;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.GetFreeViewTarget
	 */
	struct ABP_ScriptActor_C_GetFreeViewTarget_Params
	{
	public:
		class AActor*                                              ViewTargetActor;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CalcViewTarget
	 */
	struct ABP_ScriptActor_C_CalcViewTarget_Params
	{
	public:
		struct FVector                                             InTargetLocation;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            InTargetRotation;                                        // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInRelative;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3MBL[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutTargetLocation;                                       // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            OutTargetRotation;                                       // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSucs;                                                   // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W4DO[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.SpawnSubActor_Internal
	 */
	struct ABP_ScriptActor_C_SpawnSubActor_Internal_Params
	{
	public:
		class UClass*                                              InActorClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InLocation;                                              // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TVBR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBCharaCreateData*                                  InCharaCreateData;                                       // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UASAnimationSet*                                     InAnimationSet;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.GetValidSubEvents
	 */
	struct ABP_ScriptActor_C_GetValidSubEvents_Params
	{
	public:
		TArray<class FName>                                        InCheckEvents;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FName>                                        OutValidEvents;                                          // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.IsActivatedDungeon
	 */
	struct ABP_ScriptActor_C_IsActivatedDungeon_Params
	{
	public:
		class FName                                                InDungeonId;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bActivated;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BKGP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.SetTalkMode
	 */
	struct ABP_ScriptActor_C_SetTalkMode_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DistancePlayer;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsNoCheckAtTeleport;                                    // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6AM4[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraZOffset;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.TryGetSocketLocation
	 */
	struct ABP_ScriptActor_C_TryGetSocketLocation_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkPlayerPosition
	 */
	struct ABP_ScriptActor_C_CalcTalkPlayerPosition_Params
	{
	public:
		class AActor*                                              NewTargetActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.GetViewTargetLocation
	 */
	struct ABP_ScriptActor_C_GetViewTargetLocation_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CalcViewTargetByActor
	 */
	struct ABP_ScriptActor_C_CalcViewTargetByActor_Params
	{
	public:
		class AActor*                                              NewTargetActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRelative;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XGYQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.LookAtTimer__FinishedFunc
	 */
	struct ABP_ScriptActor_C_LookAtTimer__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.LookAtTimer__UpdateFunc
	 */
	struct ABP_ScriptActor_C_LookAtTimer__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7
	 */
	struct ABP_ScriptActor_C_OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_919BBF95440C9B20CDB744AE50922B91
	 */
	struct ABP_ScriptActor_C_OnLoaded_919BBF95440C9B20CDB744AE50922B91_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B
	 */
	struct ABP_ScriptActor_C_OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8
	 */
	struct ABP_ScriptActor_C_OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_E0794065497F6D746C417B8FDB70CAC5
	 */
	struct ABP_ScriptActor_C_OnLoaded_E0794065497F6D746C417B8FDB70CAC5_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290
	 */
	struct ABP_ScriptActor_C_OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF
	 */
	struct ABP_ScriptActor_C_OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_EF4A23B0441F8A087072C0826ED33902
	 */
	struct ABP_ScriptActor_C_OnLoaded_EF4A23B0441F8A087072C0826ED33902_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B
	 */
	struct ABP_ScriptActor_C_OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_18FE13924D8C002D3FD33FA53CEABAB5
	 */
	struct ABP_ScriptActor_C_OnLoaded_18FE13924D8C002D3FD33FA53CEABAB5_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_LoginBonusCheck
	 */
	struct ABP_ScriptActor_C_BP_LoginBonusCheck_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.LoginBonusFinished
	 */
	struct ABP_ScriptActor_C_LoginBonusFinished_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.LoginBonusCheckCmplete
	 */
	struct ABP_ScriptActor_C_LoginBonusCheckCmplete_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PUZ1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnLoginBonusWindowClose
	 */
	struct ABP_ScriptActor_C_OnLoginBonusWindowClose_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.FangExpeditionClosed
	 */
	struct ABP_ScriptActor_C_FangExpeditionClosed_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowFang_expedition
	 */
	struct ABP_ScriptActor_C_BP_ShowFang_expedition_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_StartActorLipSyncAnim
	 */
	struct ABP_ScriptActor_C_BP_StartActorLipSyncAnim_Params
	{
	public:
		class USBCharaPartsFaceComponent*                          FaceComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Speed;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_RequestFreeBuffEffectActivation
	 */
	struct ABP_ScriptActor_C_BP_RequestFreeBuffEffectActivation_Params
	{
	public:
		class ASBFieldActorFreeBuffPoint*                          BuffPoint;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              PlayerCharacter;                                         // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowResearchTeamMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowResearchTeamMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowRmShopMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowRmShopMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClose_RmShopMenu_Event
	 */
	struct ABP_ScriptActor_C_OnClose_RmShopMenu_Event_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetEnvironmentMeshShadow
	 */
	struct ABP_ScriptActor_C_BP_SetEnvironmentMeshShadow_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCastShadow;                                             // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowGuildMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowGuildMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClosedNpcGuild
	 */
	struct ABP_ScriptActor_C_OnClosedNpcGuild_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowGuildJoinMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowGuildJoinMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnGuildJoinMenuClosed
	 */
	struct ABP_ScriptActor_C_OnGuildJoinMenuClosed_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClosedNpcGuildFromJoin
	 */
	struct ABP_ScriptActor_C_OnClosedNpcGuildFromJoin_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.ResetNpcGuildWidget
	 */
	struct ABP_ScriptActor_C_ResetNpcGuildWidget_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateWarpPoint
	 */
	struct ABP_ScriptActor_C_BP_ActivateWarpPoint_Params
	{
	public:
		class FName                                                InWarpPointId;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_1
	 */
	struct ABP_ScriptActor_C__1_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnChangeClass
	 */
	struct ABP_ScriptActor_C_OnChangeClass_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SendMail
	 */
	struct ABP_ScriptActor_C_BP_SendMail_Params
	{
	public:
		class FName                                                InMailId;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnCompletedMail
	 */
	struct ABP_ScriptActor_C_OnCompletedMail_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7RGZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.Retry
	 */
	struct ABP_ScriptActor_C_Retry_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_5
	 */
	struct ABP_ScriptActor_C_CustomEvent_5_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTutorialHelp
	 */
	struct ABP_ScriptActor_C_BP_ShowTutorialHelp_Params
	{
	public:
		class FName                                                InId;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_ShowMask
	 */
	struct ABP_ScriptActor_C_BP_ForceNavi_ShowMask_Params
	{
	public:
		class FName                                                TableKeyName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsNoWait;                                               // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnForceNaviMaskClosed
	 */
	struct ABP_ScriptActor_C_OnForceNaviMaskClosed_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_CloseMask
	 */
	struct ABP_ScriptActor_C_BP_ForceNavi_CloseMask_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_WaitEquipMountImagine
	 */
	struct ABP_ScriptActor_C_BP_ForceNavi_WaitEquipMountImagine_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnSaveCharaImagineEquipsDelegate_イベント_1
	 */
	struct ABP_ScriptActor_C_OnSaveCharaImagineEquipsDelegate__1_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          EquipType;                                               // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FEL8[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsEquip;                                                 // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0019(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_02KE[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0030(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_Delay
	 */
	struct ABP_ScriptActor_C_BP_ForceNavi_Delay_Params
	{
	public:
		float                                                      InDelayTime;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.ForceNaviCloseMask_Internal
	 */
	struct ABP_ScriptActor_C_ForceNaviCloseMask_Internal_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.ForceNaviShowMask_Internal
	 */
	struct ABP_ScriptActor_C_ForceNaviShowMask_Internal_Params
	{
	public:
		class FName                                                InKeyName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InNoWait;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_Mask_DebugExit
	 */
	struct ABP_ScriptActor_C_BP_ForceNavi_Mask_DebugExit_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ApplyDofSettings
	 */
	struct ABP_ScriptActor_C_BP_ApplyDofSettings_Params
	{
	public:
		class FName                                                InSettingId;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InTransitionTime;                                        // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnDofTransitionFinishe
	 */
	struct ABP_ScriptActor_C_OnDofTransitionFinishe_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayParticleFromActor
	 */
	struct ABP_ScriptActor_C_BP_PlayParticleFromActor_Params
	{
	public:
		class AActor*                                              InTargetActor;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InParticleId;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InAttachSocketId;                                        // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InOffsetLocation;                                        // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowChoiceDialog
	 */
	struct ABP_ScriptActor_C_BP_ShowChoiceDialog_Params
	{
	public:
		class FText                                                InQuestion;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FText>                                        InItems;                                                 // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_イベント_1
	 */
	struct ABP_ScriptActor_C_OnSelectItem__1_Params
	{
	public:
		int32_t                                                    InSelectItemIndex;                                       // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SpawnSubActor
	 */
	struct ABP_ScriptActor_C_BP_SpawnSubActor_Params
	{
	public:
		class FName                                                InCharacterId;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_LookAtLocation
	 */
	struct ABP_ScriptActor_C_BP_LookAtLocation_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InTargetLocation;                                        // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_LookAtActorForPlayer
	 */
	struct ABP_ScriptActor_C_BP_LookAtActorForPlayer_Params
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DestinationActor;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsMount;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.LookAtLocation_Internal
	 */
	struct ABP_ScriptActor_C_LookAtLocation_Internal_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InTargetLocation;                                        // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetContentLock
	 */
	struct ABP_ScriptActor_C_BP_SetContentLock_Params
	{
	public:
		ESBContentLockType                                         InContentLockType;                                       // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInLock;                                                 // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnSetKeyValueDelegate_Event_1
	 */
	struct ABP_ScriptActor_C_OnSetKeyValueDelegate_Event_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_GetEmote
	 */
	struct ABP_ScriptActor_C_BP_GetEmote_Params
	{
	public:
		class FName                                                InEmoteId;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent
	 */
	struct ABP_ScriptActor_C_CustomEvent_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.Event_OnSetKeyValue
	 */
	struct ABP_ScriptActor_C_Event_OnSetKeyValue_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetUserData
	 */
	struct ABP_ScriptActor_C_BP_SetUserData_Params
	{
	public:
		class FName                                                InKey;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              InValue;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnAddActivate_Event_1
	 */
	struct ABP_ScriptActor_C_OnAddActivate_Event_1_Params
	{
	public:
		class FName                                                DungeonId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateContent
	 */
	struct ABP_ScriptActor_C_BP_ActivateContent_Params
	{
	public:
		class FName                                                InContentId;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsStartMatching;                                        // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_3
	 */
	struct ABP_ScriptActor_C_OnClose_Event_3_Params
	{
	public:
		class UUMG_MatchingMenu_C*                                 Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowMoneyUI
	 */
	struct ABP_ScriptActor_C_BP_ShowMoneyUI_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_HideMoneyUI
	 */
	struct ABP_ScriptActor_C_BP_HideMoneyUI_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_GetValidSubEvent
	 */
	struct ABP_ScriptActor_C_BP_GetValidSubEvent_Params
	{
	public:
		TArray<class FName>                                        InSubEvents;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_Event_3
	 */
	struct ABP_ScriptActor_C_OnSelectItem_Event_3_Params
	{
	public:
		int32_t                                                    InSelectItemIndex;                                       // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEngramUI
	 */
	struct ABP_ScriptActor_C_BP_ShowEngramUI_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_HideEngramUI
	 */
	struct ABP_ScriptActor_C_BP_HideEngramUI_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowHudLayoutSelectPreset
	 */
	struct ABP_ScriptActor_C_BP_ShowHudLayoutSelectPreset_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_2
	 */
	struct ABP_ScriptActor_C__2_Params
	{
	public:
		ELayoutPresetTypes                                         Preset;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_3
	 */
	struct ABP_ScriptActor_C__3_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTitle2ndUI
	 */
	struct ABP_ScriptActor_C_BP_ShowTitle2ndUI_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_4
	 */
	struct ABP_ScriptActor_C__4_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowConnectToServerError
	 */
	struct ABP_ScriptActor_C_BP_ShowConnectToServerError_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowFmMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowFmMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnCloseFmMenu
	 */
	struct ABP_ScriptActor_C_OnCloseFmMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_Delay
	 */
	struct ABP_ScriptActor_C_BP_Delay_Params
	{
	public:
		float                                                      InDelayTime;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_FadeOut
	 */
	struct ABP_ScriptActor_C_BP_FadeOut_Params
	{
	public:
		float                                                      InDuration;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInWait;                                                 // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_FadeIn
	 */
	struct ABP_ScriptActor_C_BP_FadeIn_Params
	{
	public:
		float                                                      InDuration;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInWait;                                                 // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_WaitToIdlePlayer
	 */
	struct ABP_ScriptActor_C_BP_WaitToIdlePlayer_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.WaitToIdlePlayer_Internal
	 */
	struct ABP_ScriptActor_C_WaitToIdlePlayer_Internal_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetColorFilter
	 */
	struct ABP_ScriptActor_C_BP_SetColorFilter_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InDuration;                                              // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnColorFilterFadeEnd
	 */
	struct ABP_ScriptActor_C_OnColorFilterFadeEnd_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ResetColorFilter
	 */
	struct ABP_ScriptActor_C_BP_ResetColorFilter_Params
	{
	public:
		float                                                      InDuration;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_IsMatchingCanselMenu
	 */
	struct ABP_ScriptActor_C_BP_IsMatchingCanselMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnCheckMatcheCancel
	 */
	struct ABP_ScriptActor_C_OnCheckMatcheCancel_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.RetrySystemMessageWait Matching
	 */
	struct ABP_ScriptActor_C_RetrySystemMessageWaitMatching_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTargetActor
	 */
	struct ABP_ScriptActor_C_BP_SetViewTargetActor_Params
	{
	public:
		class AActor*                                              InNewTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInRelative;                                             // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ResetViewTarget
	 */
	struct ABP_ScriptActor_C_BP_ResetViewTarget_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetTalkMode
	 */
	struct ABP_ScriptActor_C_BP_SetTalkMode_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InDistancePlayer;                                        // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsNoCheckAtTeleportPlayer;                              // 0x000C(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3JJC[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InCameraZOffset;                                         // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.SetTalkModeFilterEnable
	 */
	struct ABP_ScriptActor_C_SetTalkModeFilterEnable_Params
	{
	public:
		bool                                                       bInEnable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTarget
	 */
	struct ABP_ScriptActor_C_BP_SetViewTarget_Params
	{
	public:
		struct FVector                                             InTargetLocation;                                        // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            InTargetRotation;                                        // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InBlendTime;                                             // 0x0018(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTargetPreset
	 */
	struct ABP_ScriptActor_C_BP_SetViewTargetPreset_Params
	{
	public:
		class FName                                                InCameraId;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InOffsetLocation;                                        // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InBlendTime;                                             // 0x0014(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetDemoModeWait
	 */
	struct ABP_ScriptActor_C_BP_SetDemoModeWait_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.SetDemoModeWait_Internal_
	 */
	struct ABP_ScriptActor_C_SetDemoModeWait_Internal__Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayCameraShake
	 */
	struct ABP_ScriptActor_C_BP_PlayCameraShake_Params
	{
	public:
		class FName                                                InId;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_StopCameraShake
	 */
	struct ABP_ScriptActor_C_BP_StopCameraShake_Params
	{
	public:
		class FName                                                InId;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetQuestEventMode
	 */
	struct ABP_ScriptActor_C_BP_SetQuestEventMode_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_PlaySubTitle
	 */
	struct ABP_ScriptActor_C_BP_PlaySubTitle_Params
	{
	public:
		class FName                                                InId;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_1
	 */
	struct ABP_ScriptActor_C_OnFinish_Event_1_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayDemo
	 */
	struct ABP_ScriptActor_C_BP_PlayDemo_Params
	{
	public:
		class FName                                                InDemoName;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.Event_OnSaveDemoBrowsed
	 */
	struct ABP_ScriptActor_C_Event_OnSaveDemoBrowsed_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7D3J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                DemoId;                                                  // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SaveDemoBrowsedFlag
	 */
	struct ABP_ScriptActor_C_BP_SaveDemoBrowsedFlag_Params
	{
	public:
		class FName                                                InDemoName;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_5
	 */
	struct ABP_ScriptActor_C__5_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DMIU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                DemoId;                                                  // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayDemo_SkipSave
	 */
	struct ABP_ScriptActor_C_BP_PlayDemo_SkipSave_Params
	{
	public:
		class FName                                                InDemoName;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.PlayDemo_Internal
	 */
	struct ABP_ScriptActor_C_PlayDemo_Internal_Params
	{
	public:
		class FName                                                InDemoId;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.Event_OnDemoPlayEnd
	 */
	struct ABP_ScriptActor_C_Event_OnDemoPlayEnd_Params
	{
	public:
		class ASBLevelSequenceActor*                               SequencerActor;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetTalkModeFixed
	 */
	struct ABP_ScriptActor_C_BP_SetTalkModeFixed_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ViewParamId;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsNoCheckAtTeleportPlayer;                              // 0x0010(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M1T6[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InCameraZOffset;                                         // 0x0014(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_WaitMusicCue
	 */
	struct ABP_ScriptActor_C_BP_WaitMusicCue_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnSBSoundMusicCueFinished
	 */
	struct ABP_ScriptActor_C_OnSBSoundMusicCueFinished_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowStorageMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowStorageMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWarpMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowWarpMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEstheMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowEstheMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowShopMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowShopMenu_Params
	{
	public:
		EShopType                                                  InShopType;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0R5P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InProductListId;                                         // 0x0004(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_2
	 */
	struct ABP_ScriptActor_C_OnClose_Event_2_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_4
	 */
	struct ABP_ScriptActor_C_CustomEvent_4_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowColosseumMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowColosseumMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowPlayerCraftMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowPlayerCraftMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnCloseEvnet_Storage
	 */
	struct ABP_ScriptActor_C_OnCloseEvnet_Storage_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event
	 */
	struct ABP_ScriptActor_C_OnClose_Event_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImaginCraft
	 */
	struct ABP_ScriptActor_C_BP_ShowImaginCraft_Params
	{
	public:
		bool                                                       bIsBattleImagine;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnCloseImagineCraft
	 */
	struct ABP_ScriptActor_C_OnCloseImagineCraft_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowColoringShop
	 */
	struct ABP_ScriptActor_C_BP_ShowColoringShop_Params
	{
	public:
		bool                                                       InIsCostumeChange;                                       // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsColorSVEnabled;                                      // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponSyntheMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowWeaponSyntheMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowLiquidMemoryShopMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowLiquidMemoryShopMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClose_LiquidMemoryShop_Event
	 */
	struct ABP_ScriptActor_C_OnClose_LiquidMemoryShop_Event_Params
	{
	public:
		bool                                                       IsLiquidMemoryUsed;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityExtender
	 */
	struct ABP_ScriptActor_C_BP_ShowWeaponAbilityExtender_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityRemover
	 */
	struct ABP_ScriptActor_C_BP_ShowWeaponAbilityRemover_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEventShopMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowEventShopMenu_Params
	{
	public:
		EShopType                                                  InShopType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClose_EventShop_Event
	 */
	struct ABP_ScriptActor_C_OnClose_EventShop_Event_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_4
	 */
	struct ABP_ScriptActor_C_OnFinish_Event_4_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowCashExchangeShopMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowCashExchangeShopMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClose_CashExchangeShop_Event
	 */
	struct ABP_ScriptActor_C_OnClose_CashExchangeShop_Event_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowAdventurerRankShopMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowAdventurerRankShopMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnAdventureRankShopClosed
	 */
	struct ABP_ScriptActor_C_OnAdventureRankShopClosed_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowRankingBoard
	 */
	struct ABP_ScriptActor_C_BP_ShowRankingBoard_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_4
	 */
	struct ABP_ScriptActor_C_OnClose_Event_4_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.StoratgeEquipSet_OnCloseEvent
	 */
	struct ABP_ScriptActor_C_StoratgeEquipSet_OnCloseEvent_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowStoragePresetEquipSetMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowStoragePresetEquipSetMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityReconditioner
	 */
	struct ABP_ScriptActor_C_BP_ShowWeaponAbilityReconditioner_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowAdventurerRankUp
	 */
	struct ABP_ScriptActor_C_BP_ShowAdventurerRankUp_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnAdventureRankUpClosed
	 */
	struct ABP_ScriptActor_C_OnAdventureRankUpClosed_Params
	{
	public:
		bool                                                       IsSuccess;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTAbilityShopMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowTAbilityShopMenu_Params
	{
	public:
		EShopType                                                  InShopType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponSynthe
	 */
	struct ABP_ScriptActor_C_OnClosed_WeaponSynthe_Params
	{
	public:
		bool                                                       IsUsed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponTuning
	 */
	struct ABP_ScriptActor_C_OnClosed_WeaponTuning_Params
	{
	public:
		bool                                                       IsUsed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponAbilityRemove
	 */
	struct ABP_ScriptActor_C_OnClosed_WeaponAbilityRemove_Params
	{
	public:
		bool                                                       IsUsed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponExtender
	 */
	struct ABP_ScriptActor_C_OnClosed_WeaponExtender_Params
	{
	public:
		bool                                                       IsUsed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnColoringShopWarpFailedDelegate
	 */
	struct ABP_ScriptActor_C_OnColoringShopWarpFailedDelegate_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImagineStackB
	 */
	struct ABP_ScriptActor_C_BP_ShowImagineStackB_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnCloseStackBImagineMenu
	 */
	struct ABP_ScriptActor_C_OnCloseStackBImagineMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowDhcUIMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowDhcUIMenu_Params
	{
	public:
		bool                                                       IsDhcMapMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClose_イベント_1
	 */
	struct ABP_ScriptActor_C_OnClose__1_Params
	{
	public:
		bool                                                       InGoToNext;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowCommandMenuAdventureBoard
	 */
	struct ABP_ScriptActor_C_BP_ShowCommandMenuAdventureBoard_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_2
	 */
	struct ABP_ScriptActor_C_CustomEvent_2_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_RequestMyRoom
	 */
	struct ABP_ScriptActor_C_BP_RequestMyRoom_Params
	{
	public:
		int32_t                                                    InRoomId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnCompleteRoomInfoDelegate_イベント_1
	 */
	struct ABP_ScriptActor_C_OnCompleteRoomInfoDelegate__1_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTApartMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowTApartMenu_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_6
	 */
	struct ABP_ScriptActor_C_CustomEvent_6_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImagineTypeSelector
	 */
	struct ABP_ScriptActor_C_BP_ShowImagineTypeSelector_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnCloseImagineTypeSelector
	 */
	struct ABP_ScriptActor_C_OnCloseImagineTypeSelector_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_7
	 */
	struct ABP_ScriptActor_C_CustomEvent_7_Params
	{
	public:
		bool                                                       IsUsed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityBuildup
	 */
	struct ABP_ScriptActor_C_BP_ShowWeaponAbilityBuildup_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnEstheWarpFailedDelegate
	 */
	struct ABP_ScriptActor_C_OnEstheWarpFailedDelegate_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnCloseAestheShopMenu
	 */
	struct ABP_ScriptActor_C_OnCloseAestheShopMenu_Params
	{
	public:
		bool                                                       InIsCourseDecided;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LE0U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InCourseId;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTicketTokenId;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InUseTicketNum;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ReportQuest
	 */
	struct ABP_ScriptActor_C_BP_ReportQuest_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestRequestMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowQuestRequestMenu_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_2
	 */
	struct ABP_ScriptActor_C_OnFinish_Event_2_Params
	{
	public:
		bool                                                       bReported;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_PickQuest
	 */
	struct ABP_ScriptActor_C_BP_PickQuest_Params
	{
	public:
		class FName                                                InClientId;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_Event_2
	 */
	struct ABP_ScriptActor_C_OnSelectItem_Event_2_Params
	{
	public:
		int32_t                                                    SelectItem;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestBoard
	 */
	struct ABP_ScriptActor_C_BP_ShowQuestBoard_Params
	{
	public:
		class FName                                                InQuestBoardId;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_1
	 */
	struct ABP_ScriptActor_C_OnClose_Event_1_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_QuestAccept
	 */
	struct ABP_ScriptActor_C_BP_QuestAccept_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnAcceptQuestDelegate_Event_1
	 */
	struct ABP_ScriptActor_C_OnAcceptQuestDelegate_Event_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EAcceptedQuestErrorCode                                    ErrorCode;                                               // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P3F7[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAcceptedQuestInfo                                  AcceptedQuestInfo;                                       // 0x0008(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestCompleteJingle
	 */
	struct ABP_ScriptActor_C_BP_ShowQuestCompleteJingle_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_3
	 */
	struct ABP_ScriptActor_C_OnFinish_Event_3_Params
	{
	public:
		EQuestDetail_FinishStatus                                  FinishStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C3OZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnQuestConfirmFinish_2
	 */
	struct ABP_ScriptActor_C_OnQuestConfirmFinish_2_Params
	{
	public:
		EQuestDetail_FinishStatus                                  FinishStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FU3Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestConfirm
	 */
	struct ABP_ScriptActor_C_BP_ShowQuestConfirm_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_CompleteQuestStep
	 */
	struct ABP_ScriptActor_C_BP_CompleteQuestStep_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStepIndex;                                             // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InConditionDataId;                                       // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnCompleteQuestStep_Completed
	 */
	struct ABP_ScriptActor_C_OnCompleteQuestStep_Completed_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PITB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAcceptedQuestInfo                                  PrevAcceptedQuestInfo;                                   // 0x0008(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_UpdateQuestProgressByTalkNpc
	 */
	struct ABP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NpcId;                                                   // 0x0004(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnUpdateQuestProgressCompleted
	 */
	struct ABP_ScriptActor_C_OnUpdateQuestProgressCompleted_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BC6M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAcceptedQuestInfo                                  PrevAcceptedQuestInfo;                                   // 0x0008(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowSelectMenu
	 */
	struct ABP_ScriptActor_C_BP_ShowSelectMenu_Params
	{
	public:
		TArray<class FText>                                        InItems;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      YOffset;                                                 // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowMessageDialog
	 */
	struct ABP_ScriptActor_C_BP_ShowMessageDialog_Params
	{
	public:
		class FText                                                MessageText;                                             // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_1
	 */
	struct ABP_ScriptActor_C_CustomEvent_1_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowYesNoDialog
	 */
	struct ABP_ScriptActor_C_BP_ShowYesNoDialog_Params
	{
	public:
		class FText                                                MessageText;                                             // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_0_Copy
	 */
	struct ABP_ScriptActor_C_CustomEvent_0_Copy_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowYesNoPopup
	 */
	struct ABP_ScriptActor_C_BP_ShowYesNoPopup_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTextWindow
	 */
	struct ABP_ScriptActor_C_BP_ShowTextWindow_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bWaitUserInput;                                          // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowBalloonWindow
	 */
	struct ABP_ScriptActor_C_BP_ShowBalloonWindow_Params
	{
	public:
		class ACharacter*                                          InAttachCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                InText;                                                  // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnItemSelected_Event_1
	 */
	struct ABP_ScriptActor_C_OnItemSelected_Event_1_Params
	{
	public:
		int32_t                                                    SelectItemIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ResumeChange
	 */
	struct ABP_ScriptActor_C_BP_ResumeChange_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_OnStart
	 */
	struct ABP_ScriptActor_C_BP_OnStart_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.ShowTextAllDelegate_Event_1
	 */
	struct ABP_ScriptActor_C_ShowTextAllDelegate_Event_1_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.TurnTextDelegate_Event_1
	 */
	struct ABP_ScriptActor_C_TurnTextDelegate_Event_1_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_SetSpeaker
	 */
	struct ABP_ScriptActor_C_BP_SetSpeaker_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateContentsOnComplete
	 */
	struct ABP_ScriptActor_C_BP_ActivateContentsOnComplete_Params
	{
	public:
		bool                                                       bAll;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.ContentsActivated
	 */
	struct ABP_ScriptActor_C_ContentsActivated_Params
	{
	public:
		class FName                                                DungeonId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_InteractNappo
	 */
	struct ABP_ScriptActor_C_BP_InteractNappo_Params
	{
	public:
		class FString                                              NappoId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_CloseNappoUIAndCheckComplete
	 */
	struct ABP_ScriptActor_C_BP_CloseNappoUIAndCheckComplete_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.EndnappoUI
	 */
	struct ABP_ScriptActor_C_EndnappoUI_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnInteractAPI
	 */
	struct ABP_ScriptActor_C_OnInteractAPI_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       is_new;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DXDW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            gained_achievement_ids;                                  // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.ReRequest
	 */
	struct ABP_ScriptActor_C_ReRequest_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TLGG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      NappoIds;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTextWindowHigh
	 */
	struct ABP_ScriptActor_C_BP_ShowTextWindowHigh_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EUIZOrder                                                  InZOrder;                                                // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UAGI[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InYOffset;                                               // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.OnTurnText_High
	 */
	struct ABP_ScriptActor_C_OnTurnText_High_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.BP_CloseTextWindowHigh
	 */
	struct ABP_ScriptActor_C_BP_CloseTextWindowHigh_Params
	{	};

	/**
	 * Function BP_ScriptActor.BP_ScriptActor_C.ExecuteUbergraph_BP_ScriptActor
	 */
	struct ABP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_74C7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
