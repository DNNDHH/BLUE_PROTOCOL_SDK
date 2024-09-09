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
	 * Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.GetPartyType
	 */
	struct UUMG_PartyMemberList_Union_C_GetPartyType_Params
	{
	public:
		E_PartyListPartyType                                       PartyType;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KB6M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.ResetMemberListVisibility
	 */
	struct UUMG_PartyMemberList_Union_C_ResetMemberListVisibility_Params
	{	};

	/**
	 * Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.CreateMemberListWidget
	 */
	struct UUMG_PartyMemberList_Union_C_CreateMemberListWidget_Params
	{
	public:
		class UUMG_PartyMemberList_UnionList_C*                    OutMemberListWidget;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class USBPartyMemberState*>                         InMemberList;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InStart;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLimitCount;                                            // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NextMemberIndex;                                         // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K6AV[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUMG_PartyMemberList_UnionList_C*                    OutListWidget;                                           // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.Update Member List
	 */
	struct UUMG_PartyMemberList_Union_C_UpdateMemberList_Params
	{	};

	/**
	 * Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.Construct
	 */
	struct UUMG_PartyMemberList_Union_C_Construct_Params
	{	};

	/**
	 * Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.ExecuteUbergraph_UMG_PartyMemberList_Union
	 */
	struct UUMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A5ML[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
