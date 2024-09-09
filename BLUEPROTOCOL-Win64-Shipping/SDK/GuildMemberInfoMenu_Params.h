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
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.UpdateSubMenuButtonStateByIndex
	 */
	struct UGuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex_Params
	{
	public:
		int32_t                                                    SubButtonIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.GetGuildComp
	 */
	struct UGuildMemberInfoMenu_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Construct
	 */
	struct UGuildMemberInfoMenu_C_Construct_Params
	{	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.SelectTab
	 */
	struct UGuildMemberInfoMenu_C_SelectTab_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 */
	struct UGuildMemberInfoMenu_C_BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.UpdateCommandMenuBG
	 */
	struct UGuildMemberInfoMenu_C_UpdateCommandMenuBG_Params
	{
	public:
		int32_t                                                    SubPage;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Destruct
	 */
	struct UGuildMemberInfoMenu_C_Destruct_Params
	{	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedGGetEntryList
	 */
	struct UGuildMemberInfoMenu_C_CompletedGGetEntryList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedAcceptMember
	 */
	struct UGuildMemberInfoMenu_C_CompletedAcceptMember_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedDenyMember
	 */
	struct UGuildMemberInfoMenu_C_CompletedDenyMember_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.OnAddedNewMember
	 */
	struct UGuildMemberInfoMenu_C_OnAddedNewMember_Params
	{	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Event_CloseFromChildren
	 */
	struct UGuildMemberInfoMenu_C_Event_CloseFromChildren_Params
	{	};

	/**
	 * Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.ExecuteUbergraph_GuildMemberInfoMenu
	 */
	struct UGuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
