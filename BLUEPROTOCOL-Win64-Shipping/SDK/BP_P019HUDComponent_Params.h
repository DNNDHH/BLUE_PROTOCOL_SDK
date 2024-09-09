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
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.GetUIType
	 */
	struct UBP_P019HUDComponent_C_GetUIType_Params
	{
	public:
		ESBUIType                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.OnUpdateLayoutView
	 */
	struct UBP_P019HUDComponent_C_OnUpdateLayoutView_Params
	{	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.OnRemoveUI
	 */
	struct UBP_P019HUDComponent_C_OnRemoveUI_Params
	{	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.OnCreateUI
	 */
	struct UBP_P019HUDComponent_C_OnCreateUI_Params
	{	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.OnUnbind
	 */
	struct UBP_P019HUDComponent_C_OnUnbind_Params
	{	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.OnBind
	 */
	struct UBP_P019HUDComponent_C_OnBind_Params
	{	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UBP_P019HUDComponent_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.BindUIVisibleSettingChange
	 */
	struct UBP_P019HUDComponent_C_BindUIVisibleSettingChange_Params
	{	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.UnbindUIVisibleSettingChange
	 */
	struct UBP_P019HUDComponent_C_UnbindUIVisibleSettingChange_Params
	{	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.OnChangeShowAlwaysHUD_event
	 */
	struct UBP_P019HUDComponent_C_OnChangeShowAlwaysHUD_event_Params
	{
	public:
		bool                                                       bIsShow;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.BindOnChangeShowAlwaysHUD
	 */
	struct UBP_P019HUDComponent_C_BindOnChangeShowAlwaysHUD_Params
	{	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.UnbindOnChangeShowAlwaysHUD
	 */
	struct UBP_P019HUDComponent_C_UnbindOnChangeShowAlwaysHUD_Params
	{	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.ReceiveTick
	 */
	struct UBP_P019HUDComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_P019HUDComponent.BP_P019HUDComponent_C.ExecuteUbergraph_BP_P019HUDComponent
	 */
	struct UBP_P019HUDComponent_C_ExecuteUbergraph_BP_P019HUDComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_53MU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
