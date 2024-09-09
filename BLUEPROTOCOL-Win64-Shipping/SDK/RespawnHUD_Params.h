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
	 * Function RespawnHUD.RespawnHUD_C.UpdateRespawnGauge
	 */
	struct URespawnHUD_C_UpdateRespawnGauge_Params
	{	};

	/**
	 * Function RespawnHUD.RespawnHUD_C.GetResurrectionRemainTimeRate
	 */
	struct URespawnHUD_C_GetResurrectionRemainTimeRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TUWK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RespawnHUD.RespawnHUD_C.BattleAreaDisableMessage
	 */
	struct URespawnHUD_C_BattleAreaDisableMessage_Params
	{	};

	/**
	 * Function RespawnHUD.RespawnHUD_C.ShowRespawn
	 */
	struct URespawnHUD_C_ShowRespawn_Params
	{
	public:
		float                                                      InTime;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RespawnHUD.RespawnHUD_C.ShowCountDownDialog_Event
	 */
	struct URespawnHUD_C_ShowCountDownDialog_Event_Params
	{	};

	/**
	 * Function RespawnHUD.RespawnHUD_C.EndCounddownDynamicDlegate_Event
	 */
	struct URespawnHUD_C_EndCounddownDynamicDlegate_Event_Params
	{
	public:
		ECountdownResult                                           Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RespawnHUD.RespawnHUD_C.ShowBattleAreaDialog_Event
	 */
	struct URespawnHUD_C_ShowBattleAreaDialog_Event_Params
	{	};

	/**
	 * Function RespawnHUD.RespawnHUD_C.Construct
	 */
	struct URespawnHUD_C_Construct_Params
	{	};

	/**
	 * Function RespawnHUD.RespawnHUD_C.OnUpdateGauge
	 */
	struct URespawnHUD_C_OnUpdateGauge_Params
	{	};

	/**
	 * Function RespawnHUD.RespawnHUD_C.ExecuteUbergraph_RespawnHUD
	 */
	struct URespawnHUD_C_ExecuteUbergraph_RespawnHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BRSS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
