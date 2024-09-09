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
	 * Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.GetScoreInfoSwitcher
	 */
	struct UWeaponInfoForBattleSetTop_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.SetStackBIconByOwnItemInfo
	 */
	struct UWeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.Setup
	 */
	struct UWeaponInfoForBattleSetTop_C_Setup_Params
	{	};

	/**
	 * Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.Construct
	 */
	struct UWeaponInfoForBattleSetTop_C_Construct_Params
	{	};

	/**
	 * Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature
	 */
	struct UWeaponInfoForBattleSetTop_C_BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.ExecuteUbergraph_WeaponInfoForBattleSetTop
	 */
	struct UWeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GJK3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.OnWeaponIconClicked__DelegateSignature
	 */
	struct UWeaponInfoForBattleSetTop_C_OnWeaponIconClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
