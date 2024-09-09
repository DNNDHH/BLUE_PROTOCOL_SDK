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
	 * Function PlayerName.PlayerName_C.UpdatePartyLeaderIcon
	 */
	struct UPlayerName_C_UpdatePartyLeaderIcon_Params
	{	};

	/**
	 * Function PlayerName.PlayerName_C.UpdateAutoDeliveryQuest
	 */
	struct UPlayerName_C_UpdateAutoDeliveryQuest_Params
	{	};

	/**
	 * Function PlayerName.PlayerName_C.UpdateLevelText
	 */
	struct UPlayerName_C_UpdateLevelText_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DZPI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerName.PlayerName_C.SetClassData
	 */
	struct UPlayerName_C_SetClassData_Params
	{
	public:
		ESBClassType                                               ClassType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BSCF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerName.PlayerName_C.SetAchievementNameVisibility
	 */
	struct UPlayerName_C_SetAchievementNameVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerName.PlayerName_C.SetAchievementName
	 */
	struct UPlayerName_C_SetAchievementName_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PlayerName.PlayerName_C.SetPlayerNameVisibility
	 */
	struct UPlayerName_C_SetPlayerNameVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerName.PlayerName_C.SetBgVisibility
	 */
	struct UPlayerName_C_SetBgVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerName.PlayerName_C.SetPlayerName
	 */
	struct UPlayerName_C_SetPlayerName_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PlayerName.PlayerName_C.LevelUpLevelUpdate
	 */
	struct UPlayerName_C_LevelUpLevelUpdate_Params
	{
	public:
		int32_t                                                    InPrevLevel;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InCurLevel;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBExtraExpParse                                    InExtraExpParse;                                         // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PlayerName.PlayerName_C.ClassChangeLevelUpdate
	 */
	struct UPlayerName_C_ClassChangeLevelUpdate_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YZKZ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InDirtyExpiredEquipmentData;                             // 0x0018(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerName.PlayerName_C.Destruct
	 */
	struct UPlayerName_C_Destruct_Params
	{	};

	/**
	 * Function PlayerName.PlayerName_C.OnChangeTensionTag
	 */
	struct UPlayerName_C_OnChangeTensionTag_Params
	{
	public:
		ESBTensionTagType                                          TensionTag;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerName.PlayerName_C.SetTensionIcon
	 */
	struct UPlayerName_C_SetTensionIcon_Params
	{
	public:
		class ASBPlayerCharacter*                                  PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerName.PlayerName_C.LoadCharacterInfo
	 */
	struct UPlayerName_C_LoadCharacterInfo_Params
	{
	public:
		class ASBPlayerCharacter*                                  PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerName.PlayerName_C.UnbindTensionTagChanged
	 */
	struct UPlayerName_C_UnbindTensionTagChanged_Params
	{	};

	/**
	 * Function PlayerName.PlayerName_C.Tick
	 */
	struct UPlayerName_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerName.PlayerName_C.Construct
	 */
	struct UPlayerName_C_Construct_Params
	{	};

	/**
	 * Function PlayerName.PlayerName_C.ExecuteUbergraph_PlayerName
	 */
	struct UPlayerName_C_ExecuteUbergraph_PlayerName_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
