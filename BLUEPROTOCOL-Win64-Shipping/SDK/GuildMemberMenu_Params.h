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
	 * Function GuildMemberMenu.GuildMemberMenu_C.Initialize
	 */
	struct UGuildMemberMenu_C_Initialize_Params
	{	};

	/**
	 * Function GuildMemberMenu.GuildMemberMenu_C.GetGuildComp
	 */
	struct UGuildMemberMenu_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberMenu.GuildMemberMenu_C.Construct
	 */
	struct UGuildMemberMenu_C_Construct_Params
	{	};

	/**
	 * Function GuildMemberMenu.GuildMemberMenu_C.BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature
	 */
	struct UGuildMemberMenu_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature_Params
	{
	public:
		struct FGuildMemberData                                    Data;                                                    // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildMemberMenu.GuildMemberMenu_C.OnConpletedGetProfile
	 */
	struct UGuildMemberMenu_C_OnConpletedGetProfile_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_07FH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberMenu.GuildMemberMenu_C.PlayerProfileClose_Event
	 */
	struct UGuildMemberMenu_C_PlayerProfileClose_Event_Params
	{	};

	/**
	 * Function GuildMemberMenu.GuildMemberMenu_C.OnCompletedGuildMemberList_Event
	 */
	struct UGuildMemberMenu_C_OnCompletedGuildMemberList_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberMenu.GuildMemberMenu_C.ExecuteUbergraph_GuildMemberMenu
	 */
	struct UGuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HI3I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
