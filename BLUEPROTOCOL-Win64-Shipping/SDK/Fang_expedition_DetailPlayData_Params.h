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
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.GetEtcTime
	 */
	struct UFang_expedition_DetailPlayData_C_GetEtcTime_Params
	{
	public:
		int32_t                                                    selectType;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    EtcTime;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetShortTimeEx
	 */
	struct UFang_expedition_DetailPlayData_C_SetShortTimeEx_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UpdateRandomFixedReward
	 */
	struct UFang_expedition_DetailPlayData_C_UpdateRandomFixedReward_Params
	{
	public:
		TArray<struct FSBMasterReward>                             RewardData;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetBaseTime
	 */
	struct UFang_expedition_DetailPlayData_C_SetBaseTime_Params
	{
	public:
		int32_t                                                    TimeData;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetShortTime
	 */
	struct UFang_expedition_DetailPlayData_C_SetShortTime_Params
	{
	public:
		int32_t                                                    TimeIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetUseTokenData
	 */
	struct UFang_expedition_DetailPlayData_C_SetUseTokenData_Params
	{
	public:
		TArray<int32_t>                                            TokenList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UsableTokenCheck
	 */
	struct UFang_expedition_DetailPlayData_C_UsableTokenCheck_Params
	{
	public:
		bool                                                       WasUseToken;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UpdateTokenIconVisibility
	 */
	struct UFang_expedition_DetailPlayData_C_UpdateTokenIconVisibility_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetSelectFangIds
	 */
	struct UFang_expedition_DetailPlayData_C_SetSelectFangIds_Params
	{
	public:
		TArray<class FString>                                      UniqueIds;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       AnimationSkip;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GQ0G[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetFangSelectMode
	 */
	struct UFang_expedition_DetailPlayData_C_SetFangSelectMode_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    TimeIndex;                                               // 0x00A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YU71[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetPlayData
	 */
	struct UFang_expedition_DetailPlayData_C_SetPlayData_Params
	{
	public:
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    CancelCount;                                             // 0x0120(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.Construct
	 */
	struct UFang_expedition_DetailPlayData_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.CB_OnExpeditionCancelClick
	 */
	struct UFang_expedition_DetailPlayData_C_CB_OnExpeditionCancelClick_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.CB_OnExpeditionTicketClick
	 */
	struct UFang_expedition_DetailPlayData_C_CB_OnExpeditionTicketClick_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.Destruct
	 */
	struct UFang_expedition_DetailPlayData_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailPlayData_C_BndEvt__Fang_expedition_DetailPlayData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_FinishButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailPlayData_C_BndEvt__Fang_expedition_DetailPlayData_FinishButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_TicketSelect_Btn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailPlayData_C_BndEvt__Fang_expedition_DetailPlayData_TicketSelect_Btn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_ExpeditionStartButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailPlayData_C_BndEvt__Fang_expedition_DetailPlayData_ExpeditionStartButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnFastFinish
	 */
	struct UFang_expedition_DetailPlayData_C_OnFastFinish_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.ExecuteUbergraph_Fang_expedition_DetailPlayData
	 */
	struct UFang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickRandomRewardListView_PlayData__DelegateSignature
	 */
	struct UFang_expedition_DetailPlayData_C_OnClickRandomRewardListView_PlayData__DelegateSignature_Params
	{
	public:
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickExpeditionStart__DelegateSignature
	 */
	struct UFang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<int32_t>                                            TokenIds;                                                // 0x00A8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickTicketWindowOpen__DelegateSignature
	 */
	struct UFang_expedition_DetailPlayData_C_OnClickTicketWindowOpen__DelegateSignature_Params
	{
	public:
		TArray<int32_t>                                            SelectedTokenIds;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickExpeditionFinish__DelegateSignature
	 */
	struct UFang_expedition_DetailPlayData_C_OnClickExpeditionFinish__DelegateSignature_Params
	{
	public:
		class FString                                              ExpeditionId;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickRandomRewardListView__DelegateSignature
	 */
	struct UFang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    TimeIndex;                                               // 0x00A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FangValue;                                               // 0x00AC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnExpeditionUseTicketClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailPlayData_C_OnExpeditionUseTicketClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnExpeditionCancelClicked__DelegateSignature
	 */
	struct UFang_expedition_DetailPlayData_C_OnExpeditionCancelClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
