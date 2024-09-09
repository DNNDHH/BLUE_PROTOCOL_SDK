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
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.GetGuildComp
	 */
	struct UGuildRecruitmentList_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.PreConstruct
	 */
	struct UGuildRecruitmentList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.Construct
	 */
	struct UGuildRecruitmentList_C_Construct_Params
	{	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGetInviteList_Event
	 */
	struct UGuildRecruitmentList_C_OnCompletedGetInviteList_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.Initialize
	 */
	struct UGuildRecruitmentList_C_Initialize_Params
	{	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGetSendedEntries_Event
	 */
	struct UGuildRecruitmentList_C_OnCompletedGetSendedEntries_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGuildEntry_Event
	 */
	struct UGuildRecruitmentList_C_OnCompletedGuildEntry_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.Generate Entries
	 */
	struct UGuildRecruitmentList_C_GenerateEntries_Params
	{	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.GenerateInvites
	 */
	struct UGuildRecruitmentList_C_GenerateInvites_Params
	{	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompleteCancelEntry_Event
	 */
	struct UGuildRecruitmentList_C_OnCompleteCancelEntry_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.Event_OnCompletedInviteArraignment
	 */
	struct UGuildRecruitmentList_C_Event_OnCompletedInviteArraignment_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAccept;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9BPQ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InEntryId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.OnInviteArrived_Event
	 */
	struct UGuildRecruitmentList_C_OnInviteArrived_Event_Params
	{	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.Complete_OnClickedRecruitmentListItem
	 */
	struct UGuildRecruitmentList_C_Complete_OnClickedRecruitmentListItem_Params
	{
	public:
		struct FGuildEntryData                                     GuildEntry;                                              // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.ExecuteUbergraph_GuildRecruitmentList
	 */
	struct UGuildRecruitmentList_C_ExecuteUbergraph_GuildRecruitmentList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentList.GuildRecruitmentList_C.OnClickedGuildEntry__DelegateSignature
	 */
	struct UGuildRecruitmentList_C_OnClickedGuildEntry__DelegateSignature_Params
	{
	public:
		struct FGuildEntryData                                     GuildEntryData;                                          // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
