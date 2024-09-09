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
	 * Function RankingRewardMenu.RankingRewardMenu_C.TryGetItem
	 */
	struct URankingRewardMenu_C_TryGetItem_Params
	{
	public:
		class URankingRewardItem_C*                                RankingRewardItem;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingRewardMenu.RankingRewardMenu_C.ListInitialize
	 */
	struct URankingRewardMenu_C_ListInitialize_Params
	{	};

	/**
	 * Function RankingRewardMenu.RankingRewardMenu_C.SetRankingRewardData
	 */
	struct URankingRewardMenu_C_SetRankingRewardData_Params
	{
	public:
		struct FRankingHistoryData                                 RankingHistoryData;                                      // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBClassType                                               InClassType;                                             // 0x00A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTotallingEnd;                                          // 0x00A9(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LEYD[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InMyRank;                                                // 0x00AC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingRewardMenu.RankingRewardMenu_C.Construct
	 */
	struct URankingRewardMenu_C_Construct_Params
	{	};

	/**
	 * Function RankingRewardMenu.RankingRewardMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct URankingRewardMenu_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RankingRewardMenu.RankingRewardMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct URankingRewardMenu_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function RankingRewardMenu.RankingRewardMenu_C.CustomEvent_1
	 */
	struct URankingRewardMenu_C_CustomEvent_1_Params
	{	};

	/**
	 * Function RankingRewardMenu.RankingRewardMenu_C.ExecuteUbergraph_RankingRewardMenu
	 */
	struct URankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingRewardMenu.RankingRewardMenu_C.OnClose__DelegateSignature
	 */
	struct URankingRewardMenu_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
