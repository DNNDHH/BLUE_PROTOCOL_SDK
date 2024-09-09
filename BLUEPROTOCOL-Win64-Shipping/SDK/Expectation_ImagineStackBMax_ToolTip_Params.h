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
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.SetImagineBattleScore
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_SetImagineBattleScore_Params
	{	};

	/**
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.SetImagineTypeViewInfos
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_SetImagineTypeViewInfos_Params
	{	};

	/**
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.SetAbilityName
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_SetAbilityName_Params
	{	};

	/**
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.SetImagineBaseParamsByOwnItemInfo
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_SetImagineBaseParamsByOwnItemInfo_Params
	{	};

	/**
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.SetImagineBaseParamsByMaster
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_SetImagineBaseParamsByMaster_Params
	{	};

	/**
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.SetImagineLevel
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_SetImagineLevel_Params
	{
	public:
		int32_t                                                    ImagineLevel;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_85CQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.SetStackBMaxInfoByRecepiId
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_SetStackBMaxInfoByRecepiId_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.SetTitle
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_SetTitle_Params
	{	};

	/**
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.SetStackBMaxInfoByOwnItem
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_SetStackBMaxInfoByOwnItem_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.PreConstruct
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.Construct
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_Construct_Params
	{	};

	/**
	 * Function Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C.ExecuteUbergraph_Expectation_ImagineStackBMax_ToolTip
	 */
	struct UExpectation_ImagineStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_ImagineStackBMax_ToolTip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
