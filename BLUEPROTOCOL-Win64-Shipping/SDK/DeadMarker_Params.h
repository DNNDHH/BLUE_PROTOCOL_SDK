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
	 * Function DeadMarker.DeadMarker_C.Dead Marker Visibility Internal
	 */
	struct UDeadMarker_C_DeadMarkerVisibilityInternal_Params
	{
	public:
		bool                                                       bVisibility;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MM6F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DeadMarker.DeadMarker_C.Set Auto Respawn Remain Time Internal
	 */
	struct UDeadMarker_C_SetAutoRespawnRemainTimeInternal_Params
	{
	public:
		float                                                      RemainTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DeadMarker.DeadMarker_C.Construct
	 */
	struct UDeadMarker_C_Construct_Params
	{	};

	/**
	 * Function DeadMarker.DeadMarker_C.DeadMarkerVisibility
	 */
	struct UDeadMarker_C_DeadMarkerVisibility_Params
	{
	public:
		bool                                                       bVisibility;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DeadMarker.DeadMarker_C.SetAutoRespawnRemainTime
	 */
	struct UDeadMarker_C_SetAutoRespawnRemainTime_Params
	{
	public:
		float                                                      RemainTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DeadMarker.DeadMarker_C.ExecuteUbergraph_DeadMarker
	 */
	struct UDeadMarker_C_ExecuteUbergraph_DeadMarker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
