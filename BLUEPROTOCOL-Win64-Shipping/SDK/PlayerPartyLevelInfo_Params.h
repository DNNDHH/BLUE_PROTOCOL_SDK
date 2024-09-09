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
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.ResetSyncParam
	 */
	struct UPlayerPartyLevelInfo_C_ResetSyncParam_Params
	{	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.RequestGetEquipItemsForCharacters
	 */
	struct UPlayerPartyLevelInfo_C_RequestGetEquipItemsForCharacters_Params
	{	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.UpdateEquipItemsForCharacters
	 */
	struct UPlayerPartyLevelInfo_C_UpdateEquipItemsForCharacters_Params
	{	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Set Battle Score Core
	 */
	struct UPlayerPartyLevelInfo_C_SetBattleScoreCore_Params
	{
	public:
		int32_t                                                    LevelSyncTarget;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBStackBEnableType                                        StackBEnableType;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPlayerMode;                                            // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U2OX[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetBattleScore
	 */
	struct UPlayerPartyLevelInfo_C_SetBattleScore_Params
	{
	public:
		int32_t                                                    LevelSyncTarget;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBStackBEnableType                                        StackBEnableType;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPlayerMode;                                            // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetTextColorBySync
	 */
	struct UPlayerPartyLevelInfo_C_SetTextColorBySync_Params
	{
	public:
		bool                                                       SyncIsValid;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UK70[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextBlock*                                          Text;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.GetLevelSyncInfo
	 */
	struct UPlayerPartyLevelInfo_C_GetLevelSyncInfo_Params
	{
	public:
		int32_t                                                    LevelSyncValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MemberIndex;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutLevelSyncIsValid;                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UH5Q[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutClassLevel;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.UpdateLevelBySync
	 */
	struct UPlayerPartyLevelInfo_C_UpdateLevelBySync_Params
	{
	public:
		int32_t                                                    LevelSyncValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MemberIndex;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextBlock*                                          Text;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutLevelSyncIsValid;                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelText
	 */
	struct UPlayerPartyLevelInfo_C_SetLevelText_Params
	{
	public:
		class UTextBlock*                                          Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YRZ0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueMember
	 */
	struct UPlayerPartyLevelInfo_C_SetLevelSyncValueMember_Params
	{
	public:
		int32_t                                                    LevelSyncValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MemberIndex;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextBlock*                                          Text;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueMe
	 */
	struct UPlayerPartyLevelInfo_C_SetLevelSyncValueMe_Params
	{
	public:
		int32_t                                                    LevelSyncValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8LG5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextBlock*                                          Text;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              Image;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueParty
	 */
	struct UPlayerPartyLevelInfo_C_SetLevelSyncValueParty_Params
	{
	public:
		int32_t                                                    LevelSyncValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValuePlayer
	 */
	struct UPlayerPartyLevelInfo_C_SetLevelSyncValuePlayer_Params
	{
	public:
		int32_t                                                    LevelSyncValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValue
	 */
	struct UPlayerPartyLevelInfo_C_SetLevelSyncValue_Params
	{
	public:
		int32_t                                                    LevelSyncValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBStackBEnableType                                        StackBEnableType;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W3YN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMapInfo                                          MapInfo;                                                 // 0x0008(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bNeedCorrection;                                         // 0x0200(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K9GX[0x7];                                   // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.HideAdventurerRank
	 */
	struct UPlayerPartyLevelInfo_C_HideAdventurerRank_Params
	{	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeClassInfo
	 */
	struct UPlayerPartyLevelInfo_C_InitializeClassInfo_Params
	{
	public:
		int32_t                                                    MemberIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DAPT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBRuntimeTextBlock*                                 RuntimeText;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClassIconL_C*                                       ClassIcon;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCaptureImageMatching_C*                             CaptureImage;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeCommon
	 */
	struct UPlayerPartyLevelInfo_C_InitializeCommon_Params
	{	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeParty
	 */
	struct UPlayerPartyLevelInfo_C_InitializeParty_Params
	{	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializePlayer
	 */
	struct UPlayerPartyLevelInfo_C_InitializePlayer_Params
	{	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Initialize
	 */
	struct UPlayerPartyLevelInfo_C_Initialize_Params
	{	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.DownloadAndSetFaceImage
	 */
	struct UPlayerPartyLevelInfo_C_DownloadAndSetFaceImage_Params
	{
	public:
		class UCaptureImageMatching_C*                             CaptureImage;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Construct
	 */
	struct UPlayerPartyLevelInfo_C_Construct_Params
	{	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Event_OnChangedPartyMemberCount
	 */
	struct UPlayerPartyLevelInfo_C_Event_OnChangedPartyMemberCount_Params
	{	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Destruct
	 */
	struct UPlayerPartyLevelInfo_C_Destruct_Params
	{	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.CompleteEvent_OnGetEquipItemsForCharactersDelegate
	 */
	struct UPlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1WSW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FBattleMemberLevelSyncInfo>                  BattleMemberLevelSyncInfos;                              // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.ExecuteUbergraph_PlayerPartyLevelInfo
	 */
	struct UPlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WY1O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
