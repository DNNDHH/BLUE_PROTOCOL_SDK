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
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.GetGuildComp
	 */
	struct UGuildInviteMemberList_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.GenerateInviteMemberData
	 */
	struct UGuildInviteMemberList_C_GenerateInviteMemberData_Params
	{	};

	/**
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.PreConstruct
	 */
	struct UGuildInviteMemberList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.Construct
	 */
	struct UGuildInviteMemberList_C_Construct_Params
	{	};

	/**
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.Destruct
	 */
	struct UGuildInviteMemberList_C_Destruct_Params
	{	};

	/**
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.OnCompletedInviteMemberList_Event
	 */
	struct UGuildInviteMemberList_C_OnCompletedInviteMemberList_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.OnGuildMemberSelected
	 */
	struct UGuildInviteMemberList_C_OnGuildMemberSelected_Params
	{
	public:
		class UGuildMemberListItem_C*                              MemberData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.OnClickedCancelInvite_Event
	 */
	struct UGuildInviteMemberList_C_OnClickedCancelInvite_Event_Params
	{
	public:
		class UGuildMemberListItem_C*                              MemberData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.ExecuteUbergraph_GuildInviteMemberList
	 */
	struct UGuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.OnRequestGuildMemberButtonClicked__DelegateSignature
	 */
	struct UGuildInviteMemberList_C_OnRequestGuildMemberButtonClicked__DelegateSignature_Params
	{
	public:
		struct FGuildMemberData                                    Data;                                                    // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.OnClickedCancelInvite__DelegateSignature
	 */
	struct UGuildInviteMemberList_C_OnClickedCancelInvite__DelegateSignature_Params
	{
	public:
		struct FGuildMemberData                                    Data;                                                    // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildInviteMemberList.GuildInviteMemberList_C.OnSelectedMemberData__DelegateSignature
	 */
	struct UGuildInviteMemberList_C_OnSelectedMemberData__DelegateSignature_Params
	{
	public:
		struct FGuildMemberData                                    Data;                                                    // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
