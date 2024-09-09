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
	 * Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.UserConstructionScript
	 */
	struct ABP_IndoorLightSchedule_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ReceiveBeginPlay
	 */
	struct ABP_IndoorLightSchedule_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ReceiveTick
	 */
	struct ABP_IndoorLightSchedule_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.PreviewTest
	 */
	struct ABP_IndoorLightSchedule_C_PreviewTest_Params
	{	};

	/**
	 * Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InitEditorPreview
	 */
	struct ABP_IndoorLightSchedule_C_InitEditorPreview_Params
	{
	public:
		bool                                                       Sw;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InDoorTickIntervalSet
	 */
	struct ABP_IndoorLightSchedule_C_InDoorTickIntervalSet_Params
	{
	public:
		ESBDebugMenuType                                           MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M23T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                RowName;                                                 // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InitTickInterval
	 */
	struct ABP_IndoorLightSchedule_C_InitTickInterval_Params
	{	};

	/**
	 * Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ExecuteUbergraph_BP_IndoorLightSchedule
	 */
	struct ABP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
