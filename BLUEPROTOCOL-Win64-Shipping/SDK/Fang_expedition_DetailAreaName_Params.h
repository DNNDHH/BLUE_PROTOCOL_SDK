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
	 * Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.SetMasteryVisible
	 */
	struct UFang_expedition_DetailAreaName_C_SetMasteryVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.SetData
	 */
	struct UFang_expedition_DetailAreaName_C_SetData_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBFang_expeditionStatus                                   Status;                                                  // 0x00A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A2Z9[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.Construct
	 */
	struct UFang_expedition_DetailAreaName_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.Destruct
	 */
	struct UFang_expedition_DetailAreaName_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.ExecuteUbergraph_Fang_expedition_DetailAreaName
	 */
	struct UFang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J0EX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
