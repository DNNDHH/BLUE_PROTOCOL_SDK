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
	 * Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.GetPartyType
	 */
	struct UUMG_PartyMemberList_UnionList_C_GetPartyType_Params
	{
	public:
		E_PartyListPartyType                                       PartyType;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.SetPartyTypeLabelEnable
	 */
	struct UUMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable_Params
	{
	public:
		bool                                                       bInEnable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.SetPartyTypeLabel
	 */
	struct UUMG_PartyMemberList_UnionList_C_SetPartyTypeLabel_Params
	{
	public:
		E_PartyListPartyType                                       InPartyType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.ClearMember
	 */
	struct UUMG_PartyMemberList_UnionList_C_ClearMember_Params
	{	};

	/**
	 * Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.AddMember
	 */
	struct UUMG_PartyMemberList_UnionList_C_AddMember_Params
	{
	public:
		class UUserWidget*                                         InMemberWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.CreateMember
	 */
	struct UUMG_PartyMemberList_UnionList_C_CreateMember_Params
	{
	public:
		class USBPartyMemberState*                                 PartyMemberState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShowBattleStatus;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RUC3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.Construct
	 */
	struct UUMG_PartyMemberList_UnionList_C_Construct_Params
	{	};

	/**
	 * Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.ExecuteUbergraph_UMG_PartyMemberList_UnionList
	 */
	struct UUMG_PartyMemberList_UnionList_C_ExecuteUbergraph_UMG_PartyMemberList_UnionList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
