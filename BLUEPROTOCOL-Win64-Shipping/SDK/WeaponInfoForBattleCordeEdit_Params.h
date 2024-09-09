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
	 * Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.GetScoreInfoSwitcher
	 */
	struct UWeaponInfoForBattleCordeEdit_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          OutSwitcher;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Get_BtnForPadCursorMove_ToolTipWidget_1
	 */
	struct UWeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.CreateToolTipWidgetifNeeded
	 */
	struct UWeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded_Params
	{
	public:
		class UCommonIconToolTip_C*                                OutWidget;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetStackBIconByOwnItemInfo
	 */
	struct UWeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.GetIsWeaponLost
	 */
	struct UWeaponInfoForBattleCordeEdit_C_GetIsWeaponLost_Params
	{
	public:
		bool                                                       OutIsLost;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetStorageMode
	 */
	struct UWeaponInfoForBattleCordeEdit_C_SetStorageMode_Params
	{
	public:
		bool                                                       InIsStorageMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetAlertIconVisibility
	 */
	struct UWeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsLost;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Setup
	 */
	struct UWeaponInfoForBattleCordeEdit_C_Setup_Params
	{
	public:
		int32_t                                                    InWeaponID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LXJP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InWeaponUniqueId;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InSetupByCurrEquip;                                      // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassType;                                             // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GMWO[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InBImagineUniqueIds;                                     // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Construct
	 */
	struct UWeaponInfoForBattleCordeEdit_C_Construct_Params
	{	};

	/**
	 * Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.PreConstruct
	 */
	struct UWeaponInfoForBattleCordeEdit_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.ExecuteUbergraph_WeaponInfoForBattleCordeEdit
	 */
	struct UWeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZ1A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
