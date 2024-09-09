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
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetIsSoloPlay
	 */
	struct ABP_DHCMeasurer_C_GetIsSoloPlay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetScore
	 */
	struct ABP_DHCMeasurer_C_GetScore_Params
	{
	public:
		class APlayerState*                                        InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_MesuringStartDate
	 */
	struct ABP_DHCMeasurer_C_OnRep_MesuringStartDate_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_ExitIntervalDate
	 */
	struct ABP_DHCMeasurer_C_OnRep_ExitIntervalDate_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.ResetLocalPlayerStatusForEnter
	 */
	struct ABP_DHCMeasurer_C_ResetLocalPlayerStatusForEnter_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.RequestBGM
	 */
	struct ABP_DHCMeasurer_C_RequestBGM_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetCurrentPartyId
	 */
	struct ABP_DHCMeasurer_C_GetCurrentPartyId_Params
	{
	public:
		class FString                                              PartyId;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_DHCStatus
	 */
	struct ABP_DHCMeasurer_C_OnRep_DHCStatus_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCRemainTime
	 */
	struct ABP_DHCMeasurer_C_GetDHCRemainTime_Params
	{
	public:
		float                                                      LeftTimeSec;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCPlayerInfo
	 */
	struct ABP_DHCMeasurer_C_GetDHCPlayerInfo_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9LWH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PlayerState;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      TotalDamage;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamagePerSec;                                            // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCPlayerNum
	 */
	struct ABP_DHCMeasurer_C_GetDHCPlayerNum_Params
	{
	public:
		int32_t                                                    PlayerNum;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetPlayerStatusRef
	 */
	struct ABP_DHCMeasurer_C_GetPlayerStatusRef_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.IsInUse
	 */
	struct ABP_DHCMeasurer_C_IsInUse_Params
	{
	public:
		bool                                                       IsUse;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O0NN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.RegisterPlayers
	 */
	struct ABP_DHCMeasurer_C_RegisterPlayers_Params
	{
	public:
		class AController*                                         UserController;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Initialized;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VSJ2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.TimeOutWarp
	 */
	struct ABP_DHCMeasurer_C_TimeOutWarp_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCInitalize
	 */
	struct ABP_DHCMeasurer_C_DHCInitalize_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.CheckStart
	 */
	struct ABP_DHCMeasurer_C_CheckStart_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_InWarp
	 */
	struct ABP_DHCMeasurer_C_CE_InWarp_Params
	{
	public:
		class ASBPlayerCharacter*                                  OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_BurstCount
	 */
	struct ABP_DHCMeasurer_C_CE_BurstCount_Params
	{
	public:
		ESBAttribute                                               ElementType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.Init
	 */
	struct ABP_DHCMeasurer_C_Init_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_OutWarp
	 */
	struct ABP_DHCMeasurer_C_CE_OutWarp_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.AddDamage
	 */
	struct ABP_DHCMeasurer_C_AddDamage_Params
	{
	public:
		class AActor*                                              CuaseCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.AddDamageEnemy
	 */
	struct ABP_DHCMeasurer_C_AddDamageEnemy_Params
	{
	public:
		class ASBEnemyCharacter*                                   DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UQ65[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBDamageEvent                                      DamageEvent;                                             // 0x0010(0x01A0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class AController*                                         InstigatedBy;                                            // 0x01B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x01B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.ReceiveTick
	 */
	struct ABP_DHCMeasurer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.InitPartyPlayerList
	 */
	struct ABP_DHCMeasurer_C_InitPartyPlayerList_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.ShowMessage
	 */
	struct ABP_DHCMeasurer_C_ShowMessage_Params
	{
	public:
		EN_DHCMessage                                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCClientInit
	 */
	struct ABP_DHCMeasurer_C_DHCClientInit_Params
	{
	public:
		TArray<class APlayerController*>                           RegisterPlayers;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCClientExit
	 */
	struct ABP_DHCMeasurer_C_DHCClientExit_Params
	{
	public:
		TArray<class APlayerController*>                           ExitMembers;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.InittedHUD
	 */
	struct ABP_DHCMeasurer_C_InittedHUD_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.SetMokujinInvincible
	 */
	struct ABP_DHCMeasurer_C_SetMokujinInvincible_Params
	{
	public:
		bool                                                       Invincible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.SetCurrentMesurerForPlayer
	 */
	struct ABP_DHCMeasurer_C_SetCurrentMesurerForPlayer_Params
	{
	public:
		class APawn*                                               PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Clear;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.LocalWarpIntoMeasurer
	 */
	struct ABP_DHCMeasurer_C_LocalWarpIntoMeasurer_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.ExecuteUbergraph_BP_DHCMeasurer
	 */
	struct ABP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NLD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_LocalPlayerQuit__DelegateSignature
	 */
	struct ABP_DHCMeasurer_C_DHC_LocalPlayerQuit__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_LocalPlayerJoined__DelegateSignature
	 */
	struct ABP_DHCMeasurer_C_DHC_LocalPlayerJoined__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_StateChanged__DelegateSignature
	 */
	struct ABP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature_Params
	{
	public:
		EN_DHCStatus                                               DHCState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LocalPlayerJoined;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
