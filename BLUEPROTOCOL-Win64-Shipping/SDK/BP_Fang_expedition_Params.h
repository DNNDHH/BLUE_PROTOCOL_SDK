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
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.SetLoading
	 */
	struct UBP_Fang_expedition_C_SetLoading_Params
	{
	public:
		bool                                                       Loading;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnItemDetailListClose
	 */
	struct UBP_Fang_expedition_C_OnItemDetailListClose_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.MapIconClickWork
	 */
	struct UBP_Fang_expedition_C_MapIconClickWork_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       AnimationSkip;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5UW1[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ReloadPlayDataDetail
	 */
	struct UBP_Fang_expedition_C_ReloadPlayDataDetail_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressDungeonListClose
	 */
	struct UBP_Fang_expedition_C_OnPressDungeonListClose_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnDetailAreaListClick
	 */
	struct UBP_Fang_expedition_C_OnDetailAreaListClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnMapIconGroupClick
	 */
	struct UBP_Fang_expedition_C_OnMapIconGroupClick_Params
	{
	public:
		struct FSBFang_expeditionIconData                          IconData;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListView_PlayData
	 */
	struct UBP_Fang_expedition_C_OnProbabilityListView_PlayData_Params
	{
	public:
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonArea
	 */
	struct UBP_Fang_expedition_C_OnListSelect_DungeonArea_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SSJZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0008(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnMapIconClick
	 */
	struct UBP_Fang_expedition_C_OnMapIconClick_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.SetupFieldMap
	 */
	struct UBP_Fang_expedition_C_SetupFieldMap_Params
	{
	public:
		class FString                                              FieldId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.GetTokenUseDialogMessage
	 */
	struct UBP_Fang_expedition_C_GetTokenUseDialogMessage_Params
	{
	public:
		TArray<int32_t>                                            TokenIds;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              Message;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionPlayDetailOpen
	 */
	struct UBP_Fang_expedition_C_ExpeditionPlayDetailOpen_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.FangSelectClose
	 */
	struct UBP_Fang_expedition_C_FangSelectClose_Params
	{
	public:
		bool                                                       AnimationSkip;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.DisplayTargetPlayDetail
	 */
	struct UBP_Fang_expedition_C_DisplayTargetPlayDetail_Params
	{
	public:
		class FString                                              AreaId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionStartRequest
	 */
	struct UBP_Fang_expedition_C_ExpeditionStartRequest_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnTokenWindowClose
	 */
	struct UBP_Fang_expedition_C_OnTokenWindowClose_Params
	{
	public:
		TArray<int32_t>                                            TokenList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnFangListSelectChange
	 */
	struct UBP_Fang_expedition_C_OnFangListSelectChange_Params
	{
	public:
		TArray<class FString>                                      UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.FindPlayData
	 */
	struct UBP_Fang_expedition_C_FindPlayData_Params
	{
	public:
		class FString                                              ExpeditionId;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBFang_expeditionPlayData                          FindData;                                                // 0x0010(0x0120)  (Parm, OutParm)
		bool                                                       Valid;                                                   // 0x0130(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3XJU[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionRewardView
	 */
	struct UBP_Fang_expedition_C_ExpeditionRewardView_Params
	{
	public:
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       LotterySkip;                                             // 0x0120(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P3P8[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.UpdateExpeditionData
	 */
	struct UBP_Fang_expedition_C_UpdateExpeditionData_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnComplete_Immediate
	 */
	struct UBP_Fang_expedition_C_OnComplete_Immediate_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GXIX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.FangSelectOpen
	 */
	struct UBP_Fang_expedition_C_FangSelectOpen_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListClose
	 */
	struct UBP_Fang_expedition_C_OnProbabilityListClose_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListView
	 */
	struct UBP_Fang_expedition_C_OnProbabilityListView_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    TimeIndex;                                               // 0x00A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FangValue;                                               // 0x00AC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.SetPlayListVisibility
	 */
	struct UBP_Fang_expedition_C_SetPlayListVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7QDC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonTicket
	 */
	struct UBP_Fang_expedition_C_OnListSelect_DungeonTicket_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CPI7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonStandby
	 */
	struct UBP_Fang_expedition_C_OnListSelect_DungeonStandby_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonPlay
	 */
	struct UBP_Fang_expedition_C_OnListSelect_DungeonPlay_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8XFE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_Field
	 */
	struct UBP_Fang_expedition_C_OnListSelect_Field_Params
	{
	public:
		class FString                                              Field;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_08AG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_Town
	 */
	struct UBP_Fang_expedition_C_OnListSelect_Town_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MNCA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.Initialize
	 */
	struct UBP_Fang_expedition_C_Initialize_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.UnBindEvent
	 */
	struct UBP_Fang_expedition_C_UnBindEvent_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.BindEvent
	 */
	struct UBP_Fang_expedition_C_BindEvent_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.RandomPlayAnimation2
	 */
	struct UBP_Fang_expedition_C_RandomPlayAnimation2_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.RandomPlayAnimation
	 */
	struct UBP_Fang_expedition_C_RandomPlayAnimation_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.InitializeAreaListData
	 */
	struct UBP_Fang_expedition_C_InitializeAreaListData_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.VisibilityChange
	 */
	struct UBP_Fang_expedition_C_VisibilityChange_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AnimationSkip;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.BackButtonPress
	 */
	struct UBP_Fang_expedition_C_BackButtonPress_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptWindow_OnRequesting
	 */
	struct UBP_Fang_expedition_C_AcceptWindow_OnRequesting_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptWindow_OnClose
	 */
	struct UBP_Fang_expedition_C_AcceptWindow_OnClose_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptResultOpen
	 */
	struct UBP_Fang_expedition_C_AcceptResultOpen_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnAcceptResultClose
	 */
	struct UBP_Fang_expedition_C_OnAcceptResultClose_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnComplete_GetReward
	 */
	struct UBP_Fang_expedition_C_OnComplete_GetReward_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DO03[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnExpeditionStart_Complete
	 */
	struct UBP_Fang_expedition_C_OnExpeditionStart_Complete_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q9QW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnOpenRareRequest_Complete
	 */
	struct UBP_Fang_expedition_C_OnOpenRareRequest_Complete_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4RVG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.DungeonSlotAnimationFinish
	 */
	struct UBP_Fang_expedition_C_DungeonSlotAnimationFinish_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorWork
	 */
	struct UBP_Fang_expedition_C_ImmediateErrorWork_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UMSC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorDialogWork
	 */
	struct UBP_Fang_expedition_C_ImmediateErrorDialogWork_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorReload
	 */
	struct UBP_Fang_expedition_C_ImmediateErrorReload_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GF25[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionDataUpdate
	 */
	struct UBP_Fang_expedition_C_ExpeditionDataUpdate_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.DataUpdateWork
	 */
	struct UBP_Fang_expedition_C_DataUpdateWork_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X0I8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnCheckReward_Complete
	 */
	struct UBP_Fang_expedition_C_OnCheckReward_Complete_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z195[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnGetListEnd_1
	 */
	struct UBP_Fang_expedition_C_OnGetListEnd_1_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WYXN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnGetListEnd_2
	 */
	struct UBP_Fang_expedition_C_OnGetListEnd_2_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JAGE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnGetListEnd_3
	 */
	struct UBP_Fang_expedition_C_OnGetListEnd_3_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0SQ3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionCancelButtonWork
	 */
	struct UBP_Fang_expedition_C_ExpeditionCancelButtonWork_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.CancelDialogSelect
	 */
	struct UBP_Fang_expedition_C_CancelDialogSelect_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionImmediateWork
	 */
	struct UBP_Fang_expedition_C_ExpeditionImmediateWork_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateDialogSelect
	 */
	struct UBP_Fang_expedition_C_ImmediateDialogSelect_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionFinishButtonWork
	 */
	struct UBP_Fang_expedition_C_ExpeditionFinishButtonWork_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.TicketSelectWindowOpen
	 */
	struct UBP_Fang_expedition_C_TicketSelectWindowOpen_Params
	{
	public:
		TArray<int32_t>                                            TokenIds;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0010(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_TicketWindowCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Fang_expedition_C_BndEvt__BP_Fang_expedition_TicketWindowCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionStartButtonWork
	 */
	struct UBP_Fang_expedition_C_ExpeditionStartButtonWork_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<int32_t>                                            TokenIds;                                                // 0x00A8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.StartDialogSelect
	 */
	struct UBP_Fang_expedition_C_StartDialogSelect_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.DetailClose
	 */
	struct UBP_Fang_expedition_C_DetailClose_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.UseCheckDialogWork
	 */
	struct UBP_Fang_expedition_C_UseCheckDialogWork_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmDetailAreaSelect_K2Node_WidgetAnimationEvent_1
	 */
	struct UBP_Fang_expedition_C_WidgetAnimationEvt_AnmDetailAreaSelect_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmTicketSelect_InOut_K2Node_WidgetAnimationEvent_3
	 */
	struct UBP_Fang_expedition_C_WidgetAnimationEvt_AnmTicketSelect_InOut_K2Node_WidgetAnimationEvent_3_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_Detail_Out_K2Node_WidgetAnimationEvent_2
	 */
	struct UBP_Fang_expedition_C_WidgetAnimationEvt_Detail_Out_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_StartAnimPanelCloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Fang_expedition_C_BndEvt__BP_Fang_expedition_StartAnimPanelCloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistOpenButton
	 */
	struct UBP_Fang_expedition_C_OnPressPlaylistOpenButton_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistDetailButton
	 */
	struct UBP_Fang_expedition_C_OnPressPlaylistDetailButton_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistFinishButton
	 */
	struct UBP_Fang_expedition_C_OnPressPlaylistFinishButton_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnDungeonOpenTicketDialogSelect
	 */
	struct UBP_Fang_expedition_C_OnDungeonOpenTicketDialogSelect_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_PlayListCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Fang_expedition_C_BndEvt__BP_Fang_expedition_PlayListCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.PlayListUpdate
	 */
	struct UBP_Fang_expedition_C_PlayListUpdate_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R82M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.PlayListDetailUpdateWork
	 */
	struct UBP_Fang_expedition_C_PlayListDetailUpdateWork_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.Construct
	 */
	struct UBP_Fang_expedition_C_Construct_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnPress_Cancel
	 */
	struct UBP_Fang_expedition_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.SceneFinish
	 */
	struct UBP_Fang_expedition_C_SceneFinish_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_3
	 */
	struct UBP_Fang_expedition_C_WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_3_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.onAnimTimer
	 */
	struct UBP_Fang_expedition_C_onAnimTimer_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressBackButton
	 */
	struct UBP_Fang_expedition_C_OnPressBackButton_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_Anm_PlayStart_K2Node_WidgetAnimationEvent_2
	 */
	struct UBP_Fang_expedition_C_WidgetAnimationEvt_Anm_PlayStart_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_MapIconListFullScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_Fang_expedition_C_BndEvt__BP_Fang_expedition_MapIconListFullScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UBP_Fang_expedition_C_WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_DetailFullScreenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Fang_expedition_C_BndEvt__BP_Fang_expedition_DetailFullScreenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.Complete_GetRewardBoost
	 */
	struct UBP_Fang_expedition_C_Complete_GetRewardBoost_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmPlayList_InOut_K2Node_WidgetAnimationEvent_4
	 */
	struct UBP_Fang_expedition_C_WidgetAnimationEvt_AnmPlayList_InOut_K2Node_WidgetAnimationEvent_4_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.Destruct
	 */
	struct UBP_Fang_expedition_C_Destruct_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.CustomEvent_1
	 */
	struct UBP_Fang_expedition_C_CustomEvent_1_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UR4V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.Event_NotifyCompletionExpedition
	 */
	struct UBP_Fang_expedition_C_Event_NotifyCompletionExpedition_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.EventAnimSkip
	 */
	struct UBP_Fang_expedition_C_EventAnimSkip_Params
	{	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.ExecuteUbergraph_BP_Fang_expedition
	 */
	struct UBP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnExpeditionDataUpdate__DelegateSignature
	 */
	struct UBP_Fang_expedition_C_OnExpeditionDataUpdate__DelegateSignature_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Fang_expedition.BP_Fang_expedition_C.OnSceneFinish__DelegateSignature
	 */
	struct UBP_Fang_expedition_C_OnSceneFinish__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
