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
	 * Function RelationshipIconSets.RelationshipIconSets_C.InitFriendState
	 */
	struct URelationshipIconSets_C_InitFriendState_Params
	{
	public:
		bool                                                       bFriend;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RelationshipIconSets.RelationshipIconSets_C.InitFollowState
	 */
	struct URelationshipIconSets_C_InitFollowState_Params
	{
	public:
		bool                                                       InIsFriend;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RelationshipIconSets.RelationshipIconSets_C.InitPartyIcons
	 */
	struct URelationshipIconSets_C_InitPartyIcons_Params
	{
	public:
		bool                                                       IsMember;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isLeader;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RelationshipIconSets.RelationshipIconSets_C.InitFromParty
	 */
	struct URelationshipIconSets_C_InitFromParty_Params
	{
	public:
		class USBPartyMemberState*                                 InPartyMemberState;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RelationshipIconSets.RelationshipIconSets_C.InitFromGuild
	 */
	struct URelationshipIconSets_C_InitFromGuild_Params
	{	};

	/**
	 * Function RelationshipIconSets.RelationshipIconSets_C.Construct
	 */
	struct URelationshipIconSets_C_Construct_Params
	{	};

	/**
	 * Function RelationshipIconSets.RelationshipIconSets_C.ExecuteUbergraph_RelationshipIconSets
	 */
	struct URelationshipIconSets_C_ExecuteUbergraph_RelationshipIconSets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
