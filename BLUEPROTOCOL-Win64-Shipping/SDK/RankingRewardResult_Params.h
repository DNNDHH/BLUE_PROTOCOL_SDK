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
	 * Function RankingRewardResult.RankingRewardResult_C.GetIdRewardsList
	 */
	struct URankingRewardResult_C_GetIdRewardsList_Params
	{
	public:
		struct FRankingRewardData                                  RankingRewardData;                                       // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FName>                                        List;                                                    // 0x0030(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function RankingRewardResult.RankingRewardResult_C.Construct
	 */
	struct URankingRewardResult_C_Construct_Params
	{	};

	/**
	 * Function RankingRewardResult.RankingRewardResult_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct URankingRewardResult_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function RankingRewardResult.RankingRewardResult_C.StartResult
	 */
	struct URankingRewardResult_C_StartResult_Params
	{	};

	/**
	 * Function RankingRewardResult.RankingRewardResult_C.CustomEvent_2
	 */
	struct URankingRewardResult_C_CustomEvent_2_Params
	{	};

	/**
	 * Function RankingRewardResult.RankingRewardResult_C.SetRankingRewardData
	 */
	struct URankingRewardResult_C_SetRankingRewardData_Params
	{
	public:
		TArray<struct FSBRankingRewardData>                        InRankingReward;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RankingRewardResult.RankingRewardResult_C.TryShowReward
	 */
	struct URankingRewardResult_C_TryShowReward_Params
	{	};

	/**
	 * Function RankingRewardResult.RankingRewardResult_C.StartEnd
	 */
	struct URankingRewardResult_C_StartEnd_Params
	{	};

	/**
	 * Function RankingRewardResult.RankingRewardResult_C.Destruct
	 */
	struct URankingRewardResult_C_Destruct_Params
	{	};

	/**
	 * Function RankingRewardResult.RankingRewardResult_C.ExecuteUbergraph_RankingRewardResult
	 */
	struct URankingRewardResult_C_ExecuteUbergraph_RankingRewardResult_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingRewardResult.RankingRewardResult_C.OnClose__DelegateSignature
	 */
	struct URankingRewardResult_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
