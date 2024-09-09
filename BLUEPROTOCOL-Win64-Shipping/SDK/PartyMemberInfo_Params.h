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
	 * Function PartyMemberInfo.PartyMemberInfo_C.ResetBuffIcon
	 */
	struct UPartyMemberInfo_C_ResetBuffIcon_Params
	{	};

	/**
	 * Function PartyMemberInfo.PartyMemberInfo_C.OnSetBufIcon
	 */
	struct UPartyMemberInfo_C_OnSetBufIcon_Params
	{	};

	/**
	 * Function PartyMemberInfo.PartyMemberInfo_C.GetBattleStatusComponent
	 */
	struct UPartyMemberInfo_C_GetBattleStatusComponent_Params
	{
	public:
		class USBBattleStatusComponent*                            OutBattleStatus;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo.PartyMemberInfo_C.UpdatePartyIcon
	 */
	struct UPartyMemberInfo_C_UpdatePartyIcon_Params
	{	};

	/**
	 * Function PartyMemberInfo.PartyMemberInfo_C.Update Follow Icon
	 */
	struct UPartyMemberInfo_C_UpdateFollowIcon_Params
	{
	public:
		TArray<struct FPlayerProfileSummaryData>                   InFriendList;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PartyMemberInfo.PartyMemberInfo_C.SetHPMPGaugeVisibility
	 */
	struct UPartyMemberInfo_C_SetHPMPGaugeVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyMemberInfo.PartyMemberInfo_C.Construct
	 */
	struct UPartyMemberInfo_C_Construct_Params
	{	};

	/**
	 * Function PartyMemberInfo.PartyMemberInfo_C.Destruct
	 */
	struct UPartyMemberInfo_C_Destruct_Params
	{	};

	/**
	 * Function PartyMemberInfo.PartyMemberInfo_C.CustomEvent_3
	 */
	struct UPartyMemberInfo_C_CustomEvent_3_Params
	{
	public:
		TArray<struct FPlayerProfileSummaryData>                   PlayerProfileSummaryData;                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PartyMemberInfo.PartyMemberInfo_C.OnChangeSameMap
	 */
	struct UPartyMemberInfo_C_OnChangeSameMap_Params
	{
	public:
		bool                                                       InSameMap;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyMemberInfo.PartyMemberInfo_C.ExecuteUbergraph_PartyMemberInfo
	 */
	struct UPartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
