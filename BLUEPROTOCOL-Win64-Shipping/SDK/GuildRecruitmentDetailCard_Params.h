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
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Send Answer To Invited Guild
	 */
	struct UGuildRecruitmentDetailCard_C_SendAnswerToInvitedGuild_Params
	{
	public:
		bool                                                       bIsAccept;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DLAN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Entry Refuse
	 */
	struct UGuildRecruitmentDetailCard_C_GuildEntryRefuse_Params
	{	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Invite Refuse
	 */
	struct UGuildRecruitmentDetailCard_C_GuildInviteRefuse_Params
	{	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Invite Accept
	 */
	struct UGuildRecruitmentDetailCard_C_GuildInviteAccept_Params
	{	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Initialize
	 */
	struct UGuildRecruitmentDetailCard_C_Initialize_Params
	{
	public:
		struct FGuildData                                          GuildData;                                               // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FGuildEntryData                                     GuildEntryData;                                          // 0x00B8(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bInvite;                                                 // 0x0198(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ULRX[0x3];                                   // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.GetGuildComp
	 */
	struct UGuildRecruitmentDetailCard_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildInviteAccept
	 */
	struct UGuildRecruitmentDetailCard_C_Event_GuildInviteAccept_Params
	{	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildEntryRefuse
	 */
	struct UGuildRecruitmentDetailCard_C_Event_GuildEntryRefuse_Params
	{	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildInviteRefuse
	 */
	struct UGuildRecruitmentDetailCard_C_Event_GuildInviteRefuse_Params
	{	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnCompletedInviteArraignment
	 */
	struct UGuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAccept;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NIUN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InEntryId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnClose
	 */
	struct UGuildRecruitmentDetailCard_C_Event_OnClose_Params
	{	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.BndEvt__GuildRecruitmentDetailCard_btn_space_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildRecruitmentDetailCard_C_BndEvt__GuildRecruitmentDetailCard_btn_space_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Construct
	 */
	struct UGuildRecruitmentDetailCard_C_Construct_Params
	{	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnCompletedCancelEntry
	 */
	struct UGuildRecruitmentDetailCard_C_Event_OnCompletedCancelEntry_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.BndEvt__GuildRecruitmentDetailCard_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 */
	struct UGuildRecruitmentDetailCard_C_BndEvt__GuildRecruitmentDetailCard_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnEscape
	 */
	struct UGuildRecruitmentDetailCard_C_Event_OnEscape_Params
	{	};

	/**
	 * Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.ExecuteUbergraph_GuildRecruitmentDetailCard
	 */
	struct UGuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZI82[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
