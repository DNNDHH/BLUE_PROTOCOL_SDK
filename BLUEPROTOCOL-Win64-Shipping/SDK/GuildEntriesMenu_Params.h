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
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.DeleteSwapBlocker
	 */
	struct UGuildEntriesMenu_C_DeleteSwapBlocker_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.CreateSwapBlocker
	 */
	struct UGuildEntriesMenu_C_CreateSwapBlocker_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.PSonlyDiffCheck
	 */
	struct UGuildEntriesMenu_C_PSonlyDiffCheck_Params
	{
	public:
		bool                                                       PSOnlyDiff;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.Get Guild Comp
	 */
	struct UGuildEntriesMenu_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.GenerateEntries
	 */
	struct UGuildEntriesMenu_C_GenerateEntries_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.Construct
	 */
	struct UGuildEntriesMenu_C_Construct_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UGuildEntriesMenu_C_BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.UpdateButtons
	 */
	struct UGuildEntriesMenu_C_UpdateButtons_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.Initialize
	 */
	struct UGuildEntriesMenu_C_Initialize_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.BindInitailize
	 */
	struct UGuildEntriesMenu_C_BindInitailize_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.OnMemberAccepted
	 */
	struct UGuildEntriesMenu_C_OnMemberAccepted_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.Remove Selected
	 */
	struct UGuildEntriesMenu_C_RemoveSelected_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.OnMember Denied
	 */
	struct UGuildEntriesMenu_C_OnMemberDenied_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.On Update Guild Member List
	 */
	struct UGuildEntriesMenu_C_OnUpdateGuildMemberList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.EntryUpdate
	 */
	struct UGuildEntriesMenu_C_EntryUpdate_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.OnConpletedGetProfile
	 */
	struct UGuildEntriesMenu_C_OnConpletedGetProfile_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XHDD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Accept_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UGuildEntriesMenu_C_BndEvt__GuildEntriesMenu_Btn_Accept_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_ShowCharacter_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UGuildEntriesMenu_C_BndEvt__GuildEntriesMenu_Btn_ShowCharacter_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 */
	struct UGuildEntriesMenu_C_BndEvt__GuildEntriesMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UGuildEntriesMenu_C_BndEvt__GuildEntriesMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.OpenReportUI_Event
	 */
	struct UGuildEntriesMenu_C_OpenReportUI_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6CS4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesMenu.GuildEntriesMenu_C.ExecuteUbergraph_GuildEntriesMenu
	 */
	struct UGuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
