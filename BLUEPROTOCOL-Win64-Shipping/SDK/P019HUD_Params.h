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
	 * Function P019HUD.P019HUD_C.VisibleCartridge
	 */
	struct UP019HUD_C_VisibleCartridge_Params
	{
	public:
		int32_t                                                    CartridgeNum;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PowerBulletActive;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HealBulletActive;                                        // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_26A5[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function P019HUD.P019HUD_C.OnSetEditMode
	 */
	struct UP019HUD_C_OnSetEditMode_Params
	{
	public:
		bool                                                       InIsEdit;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P019HUD.P019HUD_C.OnTerminate
	 */
	struct UP019HUD_C_OnTerminate_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.OnInitialize
	 */
	struct UP019HUD_C_OnInitialize_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.OnUnbind
	 */
	struct UP019HUD_C_OnUnbind_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.OnBind
	 */
	struct UP019HUD_C_OnBind_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.PlayAnimReverseInOut
	 */
	struct UP019HUD_C_PlayAnimReverseInOut_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.PlayAnimForwardInOut
	 */
	struct UP019HUD_C_PlayAnimForwardInOut_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.DebugPrintFunc
	 */
	struct UP019HUD_C_DebugPrintFunc_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.OnSetMaxCartridge
	 */
	struct UP019HUD_C_OnSetMaxCartridge_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.OnUpdateAdditionalCartridge
	 */
	struct UP019HUD_C_OnUpdateAdditionalCartridge_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.OnInitAdditionalCartridgeList
	 */
	struct UP019HUD_C_OnInitAdditionalCartridgeList_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.OnInitCartridgeList
	 */
	struct UP019HUD_C_OnInitCartridgeList_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.OnSaveEquippedPassiveArtsDelegate
	 */
	struct UP019HUD_C_OnSaveEquippedPassiveArtsDelegate_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P019HUD.P019HUD_C.BindOnSaveEquippedPassiveArts
	 */
	struct UP019HUD_C_BindOnSaveEquippedPassiveArts_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.UnbindOnSaveEquippedPassiveArts
	 */
	struct UP019HUD_C_UnbindOnSaveEquippedPassiveArts_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.OnChangeUIVisibleSetting
	 */
	struct UP019HUD_C_OnChangeUIVisibleSetting_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P019HUD.P019HUD_C.BindVisibleSetting
	 */
	struct UP019HUD_C_BindVisibleSetting_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.UnbindVisibleSetting
	 */
	struct UP019HUD_C_UnbindVisibleSetting_Params
	{	};

	/**
	 * Function P019HUD.P019HUD_C.ExecuteUbergraph_P019HUD
	 */
	struct UP019HUD_C_ExecuteUbergraph_P019HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OB6V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
