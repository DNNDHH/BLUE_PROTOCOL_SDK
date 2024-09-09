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
	 * Function P020HUD.P020HUD_C.OnChangeVisibleSetting
	 */
	struct UP020HUD_C_OnChangeVisibleSetting_Params
	{
	public:
		bool                                                       InIsVisibleSetting;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P020HUD.P020HUD_C.OnSetEditMode
	 */
	struct UP020HUD_C_OnSetEditMode_Params
	{
	public:
		bool                                                       InIsEdit;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P020HUD.P020HUD_C.OnTerminate
	 */
	struct UP020HUD_C_OnTerminate_Params
	{	};

	/**
	 * Function P020HUD.P020HUD_C.OnInitialize
	 */
	struct UP020HUD_C_OnInitialize_Params
	{	};

	/**
	 * Function P020HUD.P020HUD_C.OnUnbind
	 */
	struct UP020HUD_C_OnUnbind_Params
	{	};

	/**
	 * Function P020HUD.P020HUD_C.OnBind
	 */
	struct UP020HUD_C_OnBind_Params
	{	};

	/**
	 * Function P020HUD.P020HUD_C.PlayAnimReverseInOut
	 */
	struct UP020HUD_C_PlayAnimReverseInOut_Params
	{	};

	/**
	 * Function P020HUD.P020HUD_C.PlayAnimForwardInOut
	 */
	struct UP020HUD_C_PlayAnimForwardInOut_Params
	{	};

	/**
	 * Function P020HUD.P020HUD_C.GetAttackUpRank
	 */
	struct UP020HUD_C_GetAttackUpRank_Params
	{
	public:
		int32_t                                                    Rank;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MPG0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
