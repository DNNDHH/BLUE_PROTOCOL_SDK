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
	 * Function BP_ExtraFoothold.BP_ExtraFoothold_C.BadFallingSurvey
	 */
	struct ABP_ExtraFoothold_C_BadFallingSurvey_Params
	{
	public:
		bool                                                       SetStep;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T2YB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ExtraFoothold.BP_ExtraFoothold_C.GetLocalPlayer
	 */
	struct ABP_ExtraFoothold_C_GetLocalPlayer_Params
	{
	public:
		class ABP_PlayerCharacter_C*                               LocalPlayerCharacter;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExtraFoothold.BP_ExtraFoothold_C.HideStep
	 */
	struct ABP_ExtraFoothold_C_HideStep_Params
	{	};

	/**
	 * Function BP_ExtraFoothold.BP_ExtraFoothold_C.SetStep
	 */
	struct ABP_ExtraFoothold_C_SetStep_Params
	{	};

	/**
	 * Function BP_ExtraFoothold.BP_ExtraFoothold_C.CheckWarning
	 */
	struct ABP_ExtraFoothold_C_CheckWarning_Params
	{	};

	/**
	 * Function BP_ExtraFoothold.BP_ExtraFoothold_C.ReceiveTick
	 */
	struct ABP_ExtraFoothold_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExtraFoothold.BP_ExtraFoothold_C.DebugFlyinStatusChange
	 */
	struct ABP_ExtraFoothold_C_DebugFlyinStatusChange_Params
	{	};

	/**
	 * Function BP_ExtraFoothold.BP_ExtraFoothold_C.ReceiveBeginPlay
	 */
	struct ABP_ExtraFoothold_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ExtraFoothold.BP_ExtraFoothold_C.ExecuteUbergraph_BP_ExtraFoothold
	 */
	struct ABP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ULZP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
