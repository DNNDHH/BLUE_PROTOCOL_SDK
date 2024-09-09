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
	 * Function GuildEntriesList.GuildEntriesList_C.GetGuildComp
	 */
	struct UGuildEntriesList_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.PreConstruct
	 */
	struct UGuildEntriesList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.Construct
	 */
	struct UGuildEntriesList_C_Construct_Params
	{	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.OnCompletedOnClickedGuildEntry
	 */
	struct UGuildEntriesList_C_OnCompletedOnClickedGuildEntry_Params
	{
	public:
		struct FGuildEntryData                                     GuildEntry;                                              // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UGuildEntryItem_C*                                   SelectedBtn;                                             // 0x00E0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.OnCompletedGetInviteList
	 */
	struct UGuildEntriesList_C_OnCompletedGetInviteList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.Initialize
	 */
	struct UGuildEntriesList_C_Initialize_Params
	{	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.OnCompletedGetSendedEntries
	 */
	struct UGuildEntriesList_C_OnCompletedGetSendedEntries_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.OnCompletedGuildEntry
	 */
	struct UGuildEntriesList_C_OnCompletedGuildEntry_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.Generate Entries
	 */
	struct UGuildEntriesList_C_GenerateEntries_Params
	{	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.GenerateInvites
	 */
	struct UGuildEntriesList_C_GenerateInvites_Params
	{	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.OnCompleteCancelEntry
	 */
	struct UGuildEntriesList_C_OnCompleteCancelEntry_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.OnInviteArraiment
	 */
	struct UGuildEntriesList_C_OnInviteArraiment_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAccept;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_116Y[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InEntryId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.OnInviteArrived_Event
	 */
	struct UGuildEntriesList_C_OnInviteArrived_Event_Params
	{	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.ExecuteUbergraph_GuildEntriesList
	 */
	struct UGuildEntriesList_C_ExecuteUbergraph_GuildEntriesList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JKDP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildEntriesList.GuildEntriesList_C.OnClickedGuildEntry__DelegateSignature
	 */
	struct UGuildEntriesList_C_OnClickedGuildEntry__DelegateSignature_Params
	{
	public:
		struct FGuildEntryData                                     GuildEntryData;                                          // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
