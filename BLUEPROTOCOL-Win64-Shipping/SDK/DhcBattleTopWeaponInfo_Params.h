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
	 * Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.GetScoreInfoSwitcher
	 */
	struct UDhcBattleTopWeaponInfo_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          OutSwitcher;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.Get_BtnForPadCursorMove_ToolTipWidget_1
	 */
	struct UDhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.CreateToolTipWidgetifNeeded
	 */
	struct UDhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded_Params
	{
	public:
		class UCommonIconToolTipContent_Weapon_C*                  OutWidget;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.SetStackBIcon
	 */
	struct UDhcBattleTopWeaponInfo_C_SetStackBIcon_Params
	{
	public:
		int32_t                                                    InStackBNum;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStackBMax;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.GetIsWeaponLost
	 */
	struct UDhcBattleTopWeaponInfo_C_GetIsWeaponLost_Params
	{
	public:
		bool                                                       OutIsLost;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.SetAlertIconVisibility
	 */
	struct UDhcBattleTopWeaponInfo_C_SetAlertIconVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsLost;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.Setup
	 */
	struct UDhcBattleTopWeaponInfo_C_Setup_Params
	{
	public:
		struct FSBDhcBattlePlayerEquipWeaponInfo                   InEquipWeaponInfo;                                       // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FSBDhcBattlePlayerEquipImagineInfo>          InEquipBImagineInfos;                                    // 0x0060(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.PreConstruct
	 */
	struct UDhcBattleTopWeaponInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.ExecuteUbergraph_DhcBattleTopWeaponInfo
	 */
	struct UDhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
