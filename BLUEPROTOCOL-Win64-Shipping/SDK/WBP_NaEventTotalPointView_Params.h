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
	 * Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.UpdatePoint
	 */
	struct UWBP_NaEventTotalPointView_C_UpdatePoint_Params
	{	};

	/**
	 * Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.SetData
	 */
	struct UWBP_NaEventTotalPointView_C_SetData_Params
	{
	public:
		class USBNaEventData*                                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.PreConstruct
	 */
	struct UWBP_NaEventTotalPointView_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.Construct
	 */
	struct UWBP_NaEventTotalPointView_C_Construct_Params
	{	};

	/**
	 * Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.Destruct
	 */
	struct UWBP_NaEventTotalPointView_C_Destruct_Params
	{	};

	/**
	 * Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.OnUpdateEventInfo
	 */
	struct UWBP_NaEventTotalPointView_C_OnUpdateEventInfo_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.ExecuteUbergraph_WBP_NaEventTotalPointView
	 */
	struct UWBP_NaEventTotalPointView_C_ExecuteUbergraph_WBP_NaEventTotalPointView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
