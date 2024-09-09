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
	 * Function P020_Desire.P020_Desire_C.SetEdit Mode
	 */
	struct UP020_Desire_C_SetEditMode_Params
	{
	public:
		bool                                                       TrueIsEditMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P020_Desire.P020_Desire_C.ChangeVisible
	 */
	struct UP020_Desire_C_ChangeVisible_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P020_Desire.P020_Desire_C.BindOnStartintervalDesire
	 */
	struct UP020_Desire_C_BindOnStartintervalDesire_Params
	{	};

	/**
	 * Function P020_Desire.P020_Desire_C.OnStartIntervalDesire
	 */
	struct UP020_Desire_C_OnStartIntervalDesire_Params
	{	};

	/**
	 * Function P020_Desire.P020_Desire_C.UnBindOnStartintervalDesire
	 */
	struct UP020_Desire_C_UnBindOnStartintervalDesire_Params
	{	};

	/**
	 * Function P020_Desire.P020_Desire_C.OnEndIntervalDesire
	 */
	struct UP020_Desire_C_OnEndIntervalDesire_Params
	{	};

	/**
	 * Function P020_Desire.P020_Desire_C.BindOnEndIntervalDesire
	 */
	struct UP020_Desire_C_BindOnEndIntervalDesire_Params
	{	};

	/**
	 * Function P020_Desire.P020_Desire_C.UnBindOnEndIntervalDesire
	 */
	struct UP020_Desire_C_UnBindOnEndIntervalDesire_Params
	{	};

	/**
	 * Function P020_Desire.P020_Desire_C.Construct
	 */
	struct UP020_Desire_C_Construct_Params
	{	};

	/**
	 * Function P020_Desire.P020_Desire_C.Destruct
	 */
	struct UP020_Desire_C_Destruct_Params
	{	};

	/**
	 * Function P020_Desire.P020_Desire_C.UpdateGauge
	 */
	struct UP020_Desire_C_UpdateGauge_Params
	{	};

	/**
	 * Function P020_Desire.P020_Desire_C.ExecuteUbergraph_P020_Desire
	 */
	struct UP020_Desire_C_ExecuteUbergraph_P020_Desire_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
