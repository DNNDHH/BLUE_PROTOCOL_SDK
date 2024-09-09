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
	 * Function GuildMemberList.GuildMemberList_C.GetGuildComp
	 */
	struct UGuildMemberList_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberList.GuildMemberList_C.GenerateMemberData
	 */
	struct UGuildMemberList_C_GenerateMemberData_Params
	{	};

	/**
	 * Function GuildMemberList.GuildMemberList_C.PreConstruct
	 */
	struct UGuildMemberList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberList.GuildMemberList_C.Construct
	 */
	struct UGuildMemberList_C_Construct_Params
	{	};

	/**
	 * Function GuildMemberList.GuildMemberList_C.Destruct
	 */
	struct UGuildMemberList_C_Destruct_Params
	{	};

	/**
	 * Function GuildMemberList.GuildMemberList_C.OnMemberListGetted
	 */
	struct UGuildMemberList_C_OnMemberListGetted_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberList.GuildMemberList_C.OnGuildMemberSelected
	 */
	struct UGuildMemberList_C_OnGuildMemberSelected_Params
	{
	public:
		class UGuildMemberListItem_C*                              MemberData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberList.GuildMemberList_C.CompletedAcceptMember
	 */
	struct UGuildMemberList_C_CompletedAcceptMember_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberList.GuildMemberList_C.ExecuteUbergraph_GuildMemberList
	 */
	struct UGuildMemberList_C_ExecuteUbergraph_GuildMemberList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F55W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildMemberList.GuildMemberList_C.OnSelectedMemberData__DelegateSignature
	 */
	struct UGuildMemberList_C_OnSelectedMemberData__DelegateSignature_Params
	{
	public:
		struct FGuildMemberData                                    Data;                                                    // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
