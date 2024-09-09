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
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.SetIndoorLightWithCurrentValue
	 */
	struct UBP_IndoorLightScheduleComponent_C_SetIndoorLightWithCurrentValue_Params
	{	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.CalcFadeColorAndTime
	 */
	struct UBP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime_Params
	{
	public:
		int32_t                                                    CurrentTimeOfDay;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentId;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentFadeId;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rate;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        CurrentColor;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentIntensity;                                        // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentEmmisiveScale;                                    // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.GetNowMinOfDay
	 */
	struct UBP_IndoorLightScheduleComponent_C_GetNowMinOfDay_Params
	{
	public:
		int32_t                                                    MinOfday;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.GetNewFadeParam
	 */
	struct UBP_IndoorLightScheduleComponent_C_GetNewFadeParam_Params
	{
	public:
		int32_t                                                    Start;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    End;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ReceiveTick
	 */
	struct UBP_IndoorLightScheduleComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.InitMaterialSchedule
	 */
	struct UBP_IndoorLightScheduleComponent_C_InitMaterialSchedule_Params
	{
	public:
		TArray<class UMeshComponent*>                              MeshComponents;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       Sw;                                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.UpdateLightSchedule
	 */
	struct UBP_IndoorLightScheduleComponent_C_UpdateLightSchedule_Params
	{	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.FadeStart
	 */
	struct UBP_IndoorLightScheduleComponent_C_FadeStart_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NowRate;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ReceiveBeginPlay
	 */
	struct UBP_IndoorLightScheduleComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ClearArrays
	 */
	struct UBP_IndoorLightScheduleComponent_C_ClearArrays_Params
	{	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.UpdateEditorPreview
	 */
	struct UBP_IndoorLightScheduleComponent_C_UpdateEditorPreview_Params
	{
	public:
		float                                                      TimeRate;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Sw;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.SetLightValueByMinOfDay
	 */
	struct UBP_IndoorLightScheduleComponent_C_SetLightValueByMinOfDay_Params
	{
	public:
		int32_t                                                    MinOfday;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ExecuteUbergraph_BP_IndoorLightScheduleComponent
	 */
	struct UBP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
