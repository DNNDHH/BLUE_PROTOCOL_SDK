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
	 * Function WBP_StackB_L.WBP_StackB_L_C.UpdateStackBView
	 */
	struct UWBP_StackB_L_C_UpdateStackBView_Params
	{	};

	/**
	 * Function WBP_StackB_L.WBP_StackB_L_C.SetVisibleStackBMax
	 */
	struct UWBP_StackB_L_C_SetVisibleStackBMax_Params
	{
	public:
		bool                                                       VisibleStackBMax;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StackB_L.WBP_StackB_L_C.SetStackBMax
	 */
	struct UWBP_StackB_L_C_SetStackBMax_Params
	{
	public:
		int32_t                                                    StackBMax;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StackB_L.WBP_StackB_L_C.UpdateStackBMax
	 */
	struct UWBP_StackB_L_C_UpdateStackBMax_Params
	{	};

	/**
	 * Function WBP_StackB_L.WBP_StackB_L_C.SetStackBNum
	 */
	struct UWBP_StackB_L_C_SetStackBNum_Params
	{
	public:
		int32_t                                                    StackBNum;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1LIL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_StackB_L.WBP_StackB_L_C.SetStackBNumByItemInfo
	 */
	struct UWBP_StackB_L_C_SetStackBNumByItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_StackB_L.WBP_StackB_L_C.Construct
	 */
	struct UWBP_StackB_L_C_Construct_Params
	{	};

	/**
	 * Function WBP_StackB_L.WBP_StackB_L_C.ExecuteUbergraph_WBP_StackB_L
	 */
	struct UWBP_StackB_L_C_ExecuteUbergraph_WBP_StackB_L_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
