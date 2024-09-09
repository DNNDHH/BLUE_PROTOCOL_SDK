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
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.DeleteSwapBlocker
	 */
	struct UGuildMemberEntryMenu_C_DeleteSwapBlocker_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CreateSwapBlocker
	 */
	struct UGuildMemberEntryMenu_C_CreateSwapBlocker_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GetEntryCount
	 */
	struct UGuildMemberEntryMenu_C_GetEntryCount_Params
	{
	public:
		int32_t                                                    EntryCount;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GenerateEntries
	 */
	struct UGuildMemberEntryMenu_C_GenerateEntries_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GetGuildComp
	 */
	struct UGuildMemberEntryMenu_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Construct
	 */
	struct UGuildMemberEntryMenu_C_Construct_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.UpdateButtons
	 */
	struct UGuildMemberEntryMenu_C_UpdateButtons_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Destruct
	 */
	struct UGuildMemberEntryMenu_C_Destruct_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedAcceptMember
	 */
	struct UGuildMemberEntryMenu_C_CompletedAcceptMember_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Remove Selected
	 */
	struct UGuildMemberEntryMenu_C_RemoveSelected_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedDenyMember
	 */
	struct UGuildMemberEntryMenu_C_CompletedDenyMember_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedGGetEntryList
	 */
	struct UGuildMemberEntryMenu_C_CompletedGGetEntryList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.UpdateEntries
	 */
	struct UGuildMemberEntryMenu_C_UpdateEntries_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UGuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompleteOnIsGetPlayerProfileDetailMenuDataDelegate
	 */
	struct UGuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LDX9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OnEntryDeny
	 */
	struct UGuildMemberEntryMenu_C_OnEntryDeny_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OnEntryAccept
	 */
	struct UGuildMemberEntryMenu_C_OnEntryAccept_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_ShowProfile_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UGuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_Btn_ShowProfile_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Accept_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UGuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_Btn_Accept_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 */
	struct UGuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UGuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OpenReportUI_Event
	 */
	struct UGuildMemberEntryMenu_C_OpenReportUI_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D2TH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Event_PlayerReportChangeVisibility
	 */
	struct UGuildMemberEntryMenu_C_Event_PlayerReportChangeVisibility_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Event_CancelKeyPushed
	 */
	struct UGuildMemberEntryMenu_C_Event_CancelKeyPushed_Params
	{	};

	/**
	 * Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.ExecuteUbergraph_GuildMemberEntryMenu
	 */
	struct UGuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X88R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
