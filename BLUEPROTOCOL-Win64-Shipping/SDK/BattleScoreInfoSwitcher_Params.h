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
	 * Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.SearchBattleScoreInfo
	 */
	struct UBattleScoreInfoSwitcher_C_SearchBattleScoreInfo_Params
	{	};

	/**
	 * Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.Construct
	 */
	struct UBattleScoreInfoSwitcher_C_Construct_Params
	{	};

	/**
	 * Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.Destruct
	 */
	struct UBattleScoreInfoSwitcher_C_Destruct_Params
	{	};

	/**
	 * Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.OnSwitchTiming
	 */
	struct UBattleScoreInfoSwitcher_C_OnSwitchTiming_Params
	{	};

	/**
	 * Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.ExecuteUbergraph_BattleScoreInfoSwitcher
	 */
	struct UBattleScoreInfoSwitcher_C_ExecuteUbergraph_BattleScoreInfoSwitcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.OnSwitching__DelegateSignature
	 */
	struct UBattleScoreInfoSwitcher_C_OnSwitching__DelegateSignature_Params
	{
	public:
		bool                                                       ToBattleScore;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
