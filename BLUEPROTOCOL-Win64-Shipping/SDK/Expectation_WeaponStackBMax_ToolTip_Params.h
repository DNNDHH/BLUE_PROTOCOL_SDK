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
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetLotteryGroupsId
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_SetLotteryGroupsId_Params
	{
	public:
		int32_t                                                    InLotteryGroupsId;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetSpecialMainSabInfo
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_SetSpecialMainSabInfo_Params
	{	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetRecipiId
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_SetRecipiId_Params
	{
	public:
		int32_t                                                    InRecipiId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetEffectSocketInfo
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_SetEffectSocketInfo_Params
	{	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetAttributeIcon
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_SetAttributeIcon_Params
	{	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetWeaponBaseParamsByMaster
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_SetWeaponBaseParamsByMaster_Params
	{	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetWeaponBattleScore
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_SetWeaponBattleScore_Params
	{
	public:
		int32_t                                                    WeaponBattleScore;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C48I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetWeaponLevel
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_SetWeaponLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1VK3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetTitle
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_SetTitle_Params
	{	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetStackBMaxInfoByRecepiId
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByRecepiId_Params
	{
	public:
		int32_t                                                    RecipeId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetStackBMaxInfoByOwnItem
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByOwnItem_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.PreConstruct
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.Construct
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_Construct_Params
	{	};

	/**
	 * Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip
	 */
	struct UExpectation_WeaponStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
