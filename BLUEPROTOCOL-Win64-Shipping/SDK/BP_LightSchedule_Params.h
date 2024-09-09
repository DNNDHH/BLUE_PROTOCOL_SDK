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
	 * Function BP_LightSchedule.BP_LightSchedule_C.IsRandomLightMaterialCompInitialized
	 */
	struct ABP_LightSchedule_C_IsRandomLightMaterialCompInitialized_Params
	{	};

	/**
	 * Function BP_LightSchedule.BP_LightSchedule_C.UserConstructionScript
	 */
	struct ABP_LightSchedule_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_LightSchedule.BP_LightSchedule_C.ReceiveBeginPlay
	 */
	struct ABP_LightSchedule_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_LightSchedule.BP_LightSchedule_C.SetLightSchedule
	 */
	struct ABP_LightSchedule_C_SetLightSchedule_Params
	{	};

	/**
	 * Function BP_LightSchedule.BP_LightSchedule_C.ReceiveTick
	 */
	struct ABP_LightSchedule_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LightSchedule.BP_LightSchedule_C.LightScheduleCompInitialize
	 */
	struct ABP_LightSchedule_C_LightScheduleCompInitialize_Params
	{	};

	/**
	 * Function BP_LightSchedule.BP_LightSchedule_C.InitEditorPreview
	 */
	struct ABP_LightSchedule_C_InitEditorPreview_Params
	{
	public:
		bool                                                       Sw;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LightSchedule.BP_LightSchedule_C.ExecuteUbergraph_BP_LightSchedule
	 */
	struct ABP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
