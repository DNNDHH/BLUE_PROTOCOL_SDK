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
	 * Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.EffectAnim
	 */
	struct UP020_CountIcon_Parts_C_EffectAnim_Params
	{	};

	/**
	 * Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.SetONOFF
	 */
	struct UP020_CountIcon_Parts_C_SetONOFF_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6W7Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.Construct
	 */
	struct UP020_CountIcon_Parts_C_Construct_Params
	{	};

	/**
	 * Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.OnSetONOFF
	 */
	struct UP020_CountIcon_Parts_C_OnSetONOFF_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.ExecuteUbergraph_P020_CountIcon_Parts
	 */
	struct UP020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
