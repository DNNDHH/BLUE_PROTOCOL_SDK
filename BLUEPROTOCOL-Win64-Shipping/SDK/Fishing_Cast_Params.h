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
	 * Function Fishing_Cast.Fishing_Cast_C.Reset
	 */
	struct UFishing_Cast_C_Reset_Params
	{	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.Init
	 */
	struct UFishing_Cast_C_Init_Params
	{	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.HookSuccess
	 */
	struct UFishing_Cast_C_HookSuccess_Params
	{	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.AnimFail
	 */
	struct UFishing_Cast_C_AnimFail_Params
	{	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.AnimSuccess
	 */
	struct UFishing_Cast_C_AnimSuccess_Params
	{	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.AnimHookSuccess
	 */
	struct UFishing_Cast_C_AnimHookSuccess_Params
	{	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.UpdateLineColor
	 */
	struct UFishing_Cast_C_UpdateLineColor_Params
	{
	public:
		float                                                      LineTensionPercentage;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NewParam;                                                // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.InitLineTensionColorData
	 */
	struct UFishing_Cast_C_InitLineTensionColorData_Params
	{	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.InitFishIconPos
	 */
	struct UFishing_Cast_C_InitFishIconPos_Params
	{	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.Get_FishStaminaGauge_Brush_1
	 */
	struct UFishing_Cast_C_Get_FishStaminaGauge_Brush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.SetTensionGauge
	 */
	struct UFishing_Cast_C_SetTensionGauge_Params
	{
	public:
		float                                                      TensionValue;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.SetStaminaGauge
	 */
	struct UFishing_Cast_C_SetStaminaGauge_Params
	{
	public:
		float                                                      CurentStamina;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxStamina;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.PreConstruct
	 */
	struct UFishing_Cast_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.Construct
	 */
	struct UFishing_Cast_C_Construct_Params
	{	};

	/**
	 * Function Fishing_Cast.Fishing_Cast_C.ExecuteUbergraph_Fishing_Cast
	 */
	struct UFishing_Cast_C_ExecuteUbergraph_Fishing_Cast_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
