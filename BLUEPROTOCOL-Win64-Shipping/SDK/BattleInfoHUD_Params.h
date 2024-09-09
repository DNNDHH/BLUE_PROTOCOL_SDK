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
	 * Function BattleInfoHUD.BattleInfoHUD_C.GetRespawnHUD
	 */
	struct UBattleInfoHUD_C_GetRespawnHUD_Params
	{
	public:
		class URespawnHUD_C*                                       RespawnHUD;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.GetHitIndicator
	 */
	struct UBattleInfoHUD_C_GetHitIndicator_Params
	{
	public:
		class UHitIndicator_C*                                     HitIndicator;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.Get_Countdown_Visibility_1
	 */
	struct UBattleInfoHUD_C_Get_Countdown_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.IsAllHUDCreated
	 */
	struct UBattleInfoHUD_C_IsAllHUDCreated_Params
	{
	public:
		bool                                                       OutIsCreated;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.Get_CombinationTimer_Text_1
	 */
	struct UBattleInfoHUD_C_Get_CombinationTimer_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.Get_CombinationNumber_Text_1
	 */
	struct UBattleInfoHUD_C_Get_CombinationNumber_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.Get_Combination_Visibility_1
	 */
	struct UBattleInfoHUD_C_Get_Combination_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.Get_PartyLevel
	 */
	struct UBattleInfoHUD_C_Get_PartyLevel_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.Get_NextValue
	 */
	struct UBattleInfoHUD_C_Get_NextValue_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.Get_PartyEngram
	 */
	struct UBattleInfoHUD_C_Get_PartyEngram_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.InitTutorialHelp_Event
	 */
	struct UBattleInfoHUD_C_InitTutorialHelp_Event_Params
	{	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.JingleTutorialHelp_Events
	 */
	struct UBattleInfoHUD_C_JingleTutorialHelp_Events_Params
	{
	public:
		class FName                                                TutorialHelpId;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.OnTutorialHelp_Close
	 */
	struct UBattleInfoHUD_C_OnTutorialHelp_Close_Params
	{	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.UnbindTutorialHelpJingleDelegate
	 */
	struct UBattleInfoHUD_C_UnbindTutorialHelpJingleDelegate_Params
	{	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.InitWeaponEvents
	 */
	struct UBattleInfoHUD_C_InitWeaponEvents_Params
	{	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.Construct
	 */
	struct UBattleInfoHUD_C_Construct_Params
	{	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UBattleInfoHUD_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.OnShowCombo_Event
	 */
	struct UBattleInfoHUD_C_OnShowCombo_Event_Params
	{
	public:
		int32_t                                                    Combo;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.OnShowRespawn_Event
	 */
	struct UBattleInfoHUD_C_OnShowRespawn_Event_Params
	{
	public:
		float                                                      InRespawnTime;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.OnDisableRespawn_Event
	 */
	struct UBattleInfoHUD_C_OnDisableRespawn_Event_Params
	{	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.UpdateInteractionNotice
	 */
	struct UBattleInfoHUD_C_UpdateInteractionNotice_Params
	{	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.OnShowRespawnBattleArea_Event
	 */
	struct UBattleInfoHUD_C_OnShowRespawnBattleArea_Event_Params
	{	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.BattleAreaDisableMessage
	 */
	struct UBattleInfoHUD_C_BattleAreaDisableMessage_Params
	{	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.Destruct
	 */
	struct UBattleInfoHUD_C_Destruct_Params
	{	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.OnUpdateRespawnGauge
	 */
	struct UBattleInfoHUD_C_OnUpdateRespawnGauge_Params
	{	};

	/**
	 * Function BattleInfoHUD.BattleInfoHUD_C.ExecuteUbergraph_BattleInfoHUD
	 */
	struct UBattleInfoHUD_C_ExecuteUbergraph_BattleInfoHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
