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
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UnSheathe
	 */
	struct UBP_PlayerAimHUDComponent_C_UnSheathe_Params
	{	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.Sheathe
	 */
	struct UBP_PlayerAimHUDComponent_C_Sheathe_Params
	{	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.IsControll
	 */
	struct UBP_PlayerAimHUDComponent_C_IsControll_Params
	{
	public:
		bool                                                       OutIsControll;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QD2X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.GetClassType
	 */
	struct UBP_PlayerAimHUDComponent_C_GetClassType_Params
	{
	public:
		ESBClassType                                               OutIsClassType;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B7XZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UpdateAimMarkerVisibility
	 */
	struct UBP_PlayerAimHUDComponent_C_UpdateAimMarkerVisibility_Params
	{	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.SetAimUIVisibility
	 */
	struct UBP_PlayerAimHUDComponent_C_SetAimUIVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.RemoveUI
	 */
	struct UBP_PlayerAimHUDComponent_C_RemoveUI_Params
	{	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.CreateUI
	 */
	struct UBP_PlayerAimHUDComponent_C_CreateUI_Params
	{	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveBeginPlay
	 */
	struct UBP_PlayerAimHUDComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveTick
	 */
	struct UBP_PlayerAimHUDComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ReceiveEndPlay
	 */
	struct UBP_PlayerAimHUDComponent_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.OnChangeVisibleSetting
	 */
	struct UBP_PlayerAimHUDComponent_C_OnChangeVisibleSetting_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InVisibility;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UBP_PlayerAimHUDComponent_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C.ExecuteUbergraph_BP_PlayerAimHUDComponent
	 */
	struct UBP_PlayerAimHUDComponent_C_ExecuteUbergraph_BP_PlayerAimHUDComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
