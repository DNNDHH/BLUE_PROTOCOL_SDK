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
	 * Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.SetShotChargeGrpVisible
	 */
	struct UUI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.SetRootVisible
	 */
	struct UUI_Reticle_ChargeLevel_C_SetRootVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.BindUIVisibleSetting
	 */
	struct UUI_Reticle_ChargeLevel_C_BindUIVisibleSetting_Params
	{	};

	/**
	 * Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.UnbindUIVisibleSetting
	 */
	struct UUI_Reticle_ChargeLevel_C_UnbindUIVisibleSetting_Params
	{	};

	/**
	 * Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UUI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.Construct
	 */
	struct UUI_Reticle_ChargeLevel_C_Construct_Params
	{	};

	/**
	 * Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.Destruct
	 */
	struct UUI_Reticle_ChargeLevel_C_Destruct_Params
	{	};

	/**
	 * Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.ExecuteUbergraph_UI_Reticle_ChargeLevel
	 */
	struct UUI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6QZZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
