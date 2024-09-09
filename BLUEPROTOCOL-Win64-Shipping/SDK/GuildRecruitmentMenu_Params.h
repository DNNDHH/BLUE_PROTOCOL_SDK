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
	 * Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.UpdateSelectGuideText
	 */
	struct UGuildRecruitmentMenu_C_UpdateSelectGuideText_Params
	{	};

	/**
	 * Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.GetGuildComp
	 */
	struct UGuildRecruitmentMenu_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.Construct
	 */
	struct UGuildRecruitmentMenu_C_Construct_Params
	{	};

	/**
	 * Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature
	 */
	struct UGuildRecruitmentMenu_C_BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature_Params
	{
	public:
		struct FGuildEntryData                                     GuildEntryData;                                          // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnCompletedGetInviteList_Event
	 */
	struct UGuildRecruitmentMenu_C_OnCompletedGetInviteList_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnCompletedGetSendedEntries_Event
	 */
	struct UGuildRecruitmentMenu_C_OnCompletedGetSendedEntries_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.Event_OnGetedGuildDatail
	 */
	struct UGuildRecruitmentMenu_C_Event_OnGetedGuildDatail_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JUAK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuildData                                          InGuildData;                                             // 0x0008(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.ExecuteUbergraph_GuildRecruitmentMenu
	 */
	struct UGuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AC9H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnSelectRecruitmentEntryItem__DelegateSignature
	 */
	struct UGuildRecruitmentMenu_C_OnSelectRecruitmentEntryItem__DelegateSignature_Params
	{
	public:
		struct FGuildEntryData                                     GuildEntry;                                              // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
