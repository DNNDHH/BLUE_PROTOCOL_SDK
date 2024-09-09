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
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetIsMaxHpDecreaseExpressionValid
	 */
	struct UPlayerGaugeCommandMenu_C_SetIsMaxHpDecreaseExpressionValid_Params
	{
	public:
		bool                                                       bInIsValid;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.GetDefaultHpGaugeWidth
	 */
	struct UPlayerGaugeCommandMenu_C_GetDefaultHpGaugeWidth_Params
	{
	public:
		float                                                      OutHpGaugeWidth;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetDhcBattleTopMenuMode
	 */
	struct UPlayerGaugeCommandMenu_C_SetDhcBattleTopMenuMode_Params
	{
	public:
		bool                                                       InIsDhcBattleTopMenuMode;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateStGauge
	 */
	struct UPlayerGaugeCommandMenu_C_UpdateStGauge_Params
	{
	public:
		int32_t                                                    InCurrSt;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxSt;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateHpGauge
	 */
	struct UPlayerGaugeCommandMenu_C_UpdateHpGauge_Params
	{
	public:
		int32_t                                                    InCurrHp;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxHp;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateHPLossGaunge
	 */
	struct UPlayerGaugeCommandMenu_C_UpdateHPLossGaunge_Params
	{	};

	/**
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetCurrHpGaugeWidth
	 */
	struct UPlayerGaugeCommandMenu_C_SetCurrHpGaugeWidth_Params
	{
	public:
		float                                                      InHpGaugeWidth;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.AdjustHPGaugeSize
	 */
	struct UPlayerGaugeCommandMenu_C_AdjustHPGaugeSize_Params
	{	};

	/**
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.Construct
	 */
	struct UPlayerGaugeCommandMenu_C_Construct_Params
	{	};

	/**
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.Tick
	 */
	struct UPlayerGaugeCommandMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.PreConstruct
	 */
	struct UPlayerGaugeCommandMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.ExecuteUbergraph_PlayerGaugeCommandMenu
	 */
	struct UPlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
