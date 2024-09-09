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
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetFastFinish
	 */
	struct UFang_expedition_Detail_C_SetFastFinish_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetCloseBtnVisible
	 */
	struct UFang_expedition_Detail_C_SetCloseBtnVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.UpdateRandomRewardData
	 */
	struct UFang_expedition_Detail_C_UpdateRandomRewardData_Params
	{
	public:
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.AreaListOpenButtonVisibility
	 */
	struct UFang_expedition_Detail_C_AreaListOpenButtonVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.ResetFangData
	 */
	struct UFang_expedition_Detail_C_ResetFangData_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetSelectedTimeIndex
	 */
	struct UFang_expedition_Detail_C_GetSelectedTimeIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetSelectTokenData
	 */
	struct UFang_expedition_Detail_C_SetSelectTokenData_Params
	{
	public:
		TArray<int32_t>                                            TokenList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetFangSelectMode
	 */
	struct UFang_expedition_Detail_C_SetFangSelectMode_Params
	{
	public:
		bool                                                       SelectMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OKIF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetSelectedAreaData
	 */
	struct UFang_expedition_Detail_C_GetSelectedAreaData_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          Data;                                                    // 0x0000(0x00A8)  (Parm, OutParm)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetSelectFangData
	 */
	struct UFang_expedition_Detail_C_SetSelectFangData_Params
	{
	public:
		TArray<class FString>                                      UniqueIds;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.GetPlayAreaId
	 */
	struct UFang_expedition_Detail_C_GetPlayAreaId_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.UnbindFunction
	 */
	struct UFang_expedition_Detail_C_UnbindFunction_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.BindFunction
	 */
	struct UFang_expedition_Detail_C_BindFunction_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetPlayData
	 */
	struct UFang_expedition_Detail_C_SetPlayData_Params
	{
	public:
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    CancelCount;                                             // 0x0120(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H4PP[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetAreaData
	 */
	struct UFang_expedition_Detail_C_SetAreaData_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ButtonDisable;                                           // 0x00A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.SetViewType
	 */
	struct UFang_expedition_Detail_C_SetViewType_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.PreConstruct
	 */
	struct UFang_expedition_Detail_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.Construct
	 */
	struct UFang_expedition_Detail_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickRandomRewardView
	 */
	struct UFang_expedition_Detail_C_CB_OnClickRandomRewardView_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    TimeIndex;                                               // 0x00A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FangValue;                                               // 0x00AC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.Destruct
	 */
	struct UFang_expedition_Detail_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickExpeditionCancel
	 */
	struct UFang_expedition_Detail_C_CB_OnClickExpeditionCancel_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickUseTicket
	 */
	struct UFang_expedition_Detail_C_CB_OnClickUseTicket_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickExpeditionFinish
	 */
	struct UFang_expedition_Detail_C_CB_OnClickExpeditionFinish_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickFangSelectOpen
	 */
	struct UFang_expedition_Detail_C_CB_OnClickFangSelectOpen_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnTokenWindowOpen
	 */
	struct UFang_expedition_Detail_C_CB_OnTokenWindowOpen_Params
	{
	public:
		TArray<int32_t>                                            SelectTokenIds;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnExpeditionStart
	 */
	struct UFang_expedition_Detail_C_CB_OnExpeditionStart_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<int32_t>                                            TokenData;                                               // 0x00A8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickCloseButton
	 */
	struct UFang_expedition_Detail_C_CB_OnClickCloseButton_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.CB_OnClickRandomRewardView_PlayData
	 */
	struct UFang_expedition_Detail_C_CB_OnClickRandomRewardView_PlayData_Params
	{
	public:
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.ExecuteUbergraph_Fang_expedition_Detail
	 */
	struct UFang_expedition_Detail_C_ExecuteUbergraph_Fang_expedition_Detail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickRandomRewardListView_PlayData__DelegateSignature
	 */
	struct UFang_expedition_Detail_C_OnClickRandomRewardListView_PlayData__DelegateSignature_Params
	{
	public:
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickCloseButton__DelegateSignature
	 */
	struct UFang_expedition_Detail_C_OnClickCloseButton__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionStart__DelegateSignature
	 */
	struct UFang_expedition_Detail_C_OnClickExpeditionStart__DelegateSignature_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<int32_t>                                            TokenIds;                                                // 0x00A8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickTokenWindowOpen__DelegateSignature
	 */
	struct UFang_expedition_Detail_C_OnClickTokenWindowOpen__DelegateSignature_Params
	{
	public:
		TArray<int32_t>                                            TokenIds;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0010(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickFangSelect__DelegateSignature
	 */
	struct UFang_expedition_Detail_C_OnClickFangSelect__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionFinish__DelegateSignature
	 */
	struct UFang_expedition_Detail_C_OnClickExpeditionFinish__DelegateSignature_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickUseTicket__DelegateSignature
	 */
	struct UFang_expedition_Detail_C_OnClickUseTicket__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickExpeditionCancel__DelegateSignature
	 */
	struct UFang_expedition_Detail_C_OnClickExpeditionCancel__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_Detail.Fang_expedition_Detail_C.OnClickRandomRewardListView__DelegateSignature
	 */
	struct UFang_expedition_Detail_C_OnClickRandomRewardListView__DelegateSignature_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    TimeIndex;                                               // 0x00A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FangValue;                                               // 0x00AC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
