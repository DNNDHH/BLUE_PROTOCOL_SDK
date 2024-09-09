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
	 * Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.SetIconVisibility
	 */
	struct UFang_expedition_ExpeditionHeartAnm_C_SetIconVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H47N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.Construct
	 */
	struct UFang_expedition_ExpeditionHeartAnm_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm
	 */
	struct UFang_expedition_ExpeditionHeartAnm_C_ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
