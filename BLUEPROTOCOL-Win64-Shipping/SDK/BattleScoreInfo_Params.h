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
	 * Function BattleScoreInfo.BattleScoreInfo_C.SetFirstState
	 */
	struct UBattleScoreInfo_C_SetFirstState_Params
	{	};

	/**
	 * Function BattleScoreInfo.BattleScoreInfo_C.SetBattleScore
	 */
	struct UBattleScoreInfo_C_SetBattleScore_Params
	{
	public:
		int32_t                                                    InBattleScore;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KMFX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleScoreInfo.BattleScoreInfo_C.SetImagineLevelSync
	 */
	struct UBattleScoreInfo_C_SetImagineLevelSync_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBClassType                                               InClassType;                                             // 0x0150(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InForceLevelSyncOff;                                     // 0x0151(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BB4E[0x2];                                   // 0x0152(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleScoreInfo.BattleScoreInfo_C.SetLevel
	 */
	struct UBattleScoreInfo_C_SetLevel_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R4KB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleScoreInfo.BattleScoreInfo_C.SetSwitcher
	 */
	struct UBattleScoreInfo_C_SetSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          InSwitcher;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleScoreInfo.BattleScoreInfo_C.SetUseText
	 */
	struct UBattleScoreInfo_C_SetUseText_Params
	{
	public:
		bool                                                       UseBattleScore;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseLevel;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L9Z7[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBattleScoreInfoSwitcher_C*                          InSwitcher;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleScoreInfo.BattleScoreInfo_C.OnChange
	 */
	struct UBattleScoreInfo_C_OnChange_Params
	{
	public:
		bool                                                       ToBattleScore;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleScoreInfo.BattleScoreInfo_C.Destruct
	 */
	struct UBattleScoreInfo_C_Destruct_Params
	{	};

	/**
	 * Function BattleScoreInfo.BattleScoreInfo_C.PreConstruct
	 */
	struct UBattleScoreInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleScoreInfo.BattleScoreInfo_C.ExecuteUbergraph_BattleScoreInfo
	 */
	struct UBattleScoreInfo_C_ExecuteUbergraph_BattleScoreInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
