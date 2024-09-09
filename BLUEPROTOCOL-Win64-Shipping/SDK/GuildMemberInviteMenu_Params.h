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
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.DeleteSwapBlocker
	 */
	struct UGuildMemberInviteMenu_C_DeleteSwapBlocker_Params
	{	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.CreateSwapBlocker
	 */
	struct UGuildMemberInviteMenu_C_CreateSwapBlocker_Params
	{	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.UpdateButtons
	 */
	struct UGuildMemberInviteMenu_C_UpdateButtons_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DUBP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.GetGuildComp
	 */
	struct UGuildMemberInviteMenu_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.Construct
	 */
	struct UGuildMemberInviteMenu_C_Construct_Params
	{	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedGetProfile_Event
	 */
	struct UGuildMemberInviteMenu_C_OnCompletedGetProfile_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IEGW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.PlayerProfileClose_Event
	 */
	struct UGuildMemberInviteMenu_C_PlayerProfileClose_Event_Params
	{	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature
	 */
	struct UGuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature_Params
	{
	public:
		struct FGuildMemberData                                    Data;                                                    // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.Destruct
	 */
	struct UGuildMemberInviteMenu_C_Destruct_Params
	{	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedInviteMemberList_Event
	 */
	struct UGuildMemberInviteMenu_C_OnCompletedInviteMemberList_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnInviteCancel
	 */
	struct UGuildMemberInviteMenu_C_OnInviteCancel_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedGuildCancelInvitation_Event
	 */
	struct UGuildMemberInviteMenu_C_OnCompletedGuildCancelInvitation_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature
	 */
	struct UGuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature_Params
	{
	public:
		struct FGuildMemberData                                    Data;                                                    // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_OpenProfileButton_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UGuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_OpenProfileButton_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_Btn_Report_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UGuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_Btn_Report_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OpenReportUI_Event
	 */
	struct UGuildMemberInviteMenu_C_OpenReportUI_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1H45[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.ExecuteUbergraph_GuildMemberInviteMenu
	 */
	struct UGuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
