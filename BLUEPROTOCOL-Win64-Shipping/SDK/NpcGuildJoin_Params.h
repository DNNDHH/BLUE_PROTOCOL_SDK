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
	 * Function NpcGuildJoin.NpcGuildJoin_C.InVisitorInitialize
	 */
	struct UNpcGuildJoin_C_InVisitorInitialize_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.GetGuildComp
	 */
	struct UNpcGuildJoin_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_3_OnGuildOrganize__DelegateSignature
	 */
	struct UNpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_3_OnGuildOrganize__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature
	 */
	struct UNpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature_Params
	{
	public:
		struct FGuildEntryData                                     GuildEntry;                                              // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteFindGuildShortID
	 */
	struct UNpcGuildJoin_C_OnCompleteFindGuildShortID_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.Initialize
	 */
	struct UNpcGuildJoin_C_Initialize_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.Construct
	 */
	struct UNpcGuildJoin_C_Construct_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.bindInitialize
	 */
	struct UNpcGuildJoin_C_bindInitialize_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.Destruct
	 */
	struct UNpcGuildJoin_C_Destruct_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
	 */
	struct UNpcGuildJoin_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.Listen Action Close
	 */
	struct UNpcGuildJoin_C_ListenActionClose_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.OnClosePressed
	 */
	struct UNpcGuildJoin_C_OnClosePressed_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.OnCompletedChangeName
	 */
	struct UNpcGuildJoin_C_OnCompletedChangeName_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.OnOrganized
	 */
	struct UNpcGuildJoin_C_OnOrganized_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.Request_Close
	 */
	struct UNpcGuildJoin_C_Request_Close_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.OnComplete_GuildDetail
	 */
	struct UNpcGuildJoin_C_OnComplete_GuildDetail_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AZOX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuildData                                          InGuildData;                                             // 0x0008(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteCancelEntry
	 */
	struct UNpcGuildJoin_C_OnCompleteCancelEntry_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.OnInviteArraimented
	 */
	struct UNpcGuildJoin_C_OnInviteArraimented_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAccept;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ORYC[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InEntryId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNpcGuildJoin_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__NpcGuildJoin_GuildData_K2Node_ComponentBoundEvent_1_OnRefreshRightMenu__DelegateSignature
	 */
	struct UNpcGuildJoin_C_BndEvt__NpcGuildJoin_GuildData_K2Node_ComponentBoundEvent_1_OnRefreshRightMenu__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__NpcGuildJoin_GuildFindEntry_K2Node_ComponentBoundEvent_2_OnResearchGuild__DelegateSignature
	 */
	struct UNpcGuildJoin_C_BndEvt__NpcGuildJoin_GuildFindEntry_K2Node_ComponentBoundEvent_2_OnResearchGuild__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteGetGuildData_Event
	 */
	struct UNpcGuildJoin_C_OnCompleteGetGuildData_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.Event_SetNowTurorialHelpId
	 */
	struct UNpcGuildJoin_C_Event_SetNowTurorialHelpId_Params
	{
	public:
		class FName                                                TutorialHelpId;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.ExecuteUbergraph_NpcGuildJoin
	 */
	struct UNpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SHU5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NpcGuildJoin.NpcGuildJoin_C.OnClose__DelegateSignature
	 */
	struct UNpcGuildJoin_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
