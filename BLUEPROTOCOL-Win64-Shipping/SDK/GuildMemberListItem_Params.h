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
	 * Function GuildMemberListItem.GuildMemberListItem_C.InitChangeTypeBtn
	 */
	struct UGuildMemberListItem_C_InitChangeTypeBtn_Params
	{	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.SetInviteMemberData
	 */
	struct UGuildMemberListItem_C_SetInviteMemberData_Params
	{
	public:
		struct FGuildMemberData                                    GuildMemberData;                                         // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.GetMemberData
	 */
	struct UGuildMemberListItem_C_GetMemberData_Params
	{
	public:
		struct FGuildMemberData                                    Data;                                                    // 0x0000(0x00D8)  (Parm, OutParm)
	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.SetSelected
	 */
	struct UGuildMemberListItem_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.InitializeMemberData
	 */
	struct UGuildMemberListItem_C_InitializeMemberData_Params
	{	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.Set MemberData
	 */
	struct UGuildMemberListItem_C_SetMemberData_Params
	{
	public:
		struct FGuildMemberData                                    GuildMemberData;                                         // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.PreConstruct
	 */
	struct UGuildMemberListItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.Construct
	 */
	struct UGuildMemberListItem_C_Construct_Params
	{	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.BndEvt__Btn_ChangeType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildMemberListItem_C_BndEvt__Btn_ChangeType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.OnClosed
	 */
	struct UGuildMemberListItem_C_OnClosed_Params
	{	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.Destruct
	 */
	struct UGuildMemberListItem_C_Destruct_Params
	{	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.OnSelectedMemberListPannel
	 */
	struct UGuildMemberListItem_C_OnSelectedMemberListPannel_Params
	{
	public:
		class UCommonPlayerListPannel_C*                           TargetPlayerListPannel;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.OnRequestGuildMemberInviteCancel_Event
	 */
	struct UGuildMemberListItem_C_OnRequestGuildMemberInviteCancel_Event_Params
	{	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.ExecuteUbergraph_GuildMemberListItem
	 */
	struct UGuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.OnRequestGuildMemberButtonClicked__DelegateSignature
	 */
	struct UGuildMemberListItem_C_OnRequestGuildMemberButtonClicked__DelegateSignature_Params
	{
	public:
		class UCommonPlayerListPannel_C*                           TargetPlayerListPannel;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.OnClickedCancelInvite__DelegateSignature
	 */
	struct UGuildMemberListItem_C_OnClickedCancelInvite__DelegateSignature_Params
	{
	public:
		class UGuildMemberListItem_C*                              MemberData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberListItem.GuildMemberListItem_C.OnSelectedMember__DelegateSignature
	 */
	struct UGuildMemberListItem_C_OnSelectedMember__DelegateSignature_Params
	{
	public:
		class UGuildMemberListItem_C*                              MemberData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
