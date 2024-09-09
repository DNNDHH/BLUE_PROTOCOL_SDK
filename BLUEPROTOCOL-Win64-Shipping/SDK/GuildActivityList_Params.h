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
	 * Function GuildActivityList.GuildActivityList_C.CreateWidgets
	 */
	struct UGuildActivityList_C_CreateWidgets_Params
	{
	public:
		struct FGuildActivity                                      Activity;                                                // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USBUIGuildActivityUMGBase*                           AsSBUIGuildActivityUMGBase;                              // 0x00E0(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildActivityList.GuildActivityList_C.GenerateGuildActivities
	 */
	struct UGuildActivityList_C_GenerateGuildActivities_Params
	{	};

	/**
	 * Function GuildActivityList.GuildActivityList_C.GetGuildComp
	 */
	struct UGuildActivityList_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildActivityList.GuildActivityList_C.Construct
	 */
	struct UGuildActivityList_C_Construct_Params
	{	};

	/**
	 * Function GuildActivityList.GuildActivityList_C.BindInit
	 */
	struct UGuildActivityList_C_BindInit_Params
	{	};

	/**
	 * Function GuildActivityList.GuildActivityList_C.OnComplete RequestGetGuildActivity
	 */
	struct UGuildActivityList_C_OnCompleteRequestGetGuildActivity_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildActivityList.GuildActivityList_C.GenerateActivities
	 */
	struct UGuildActivityList_C_GenerateActivities_Params
	{	};

	/**
	 * Function GuildActivityList.GuildActivityList_C.OnRequestPlayerCard
	 */
	struct UGuildActivityList_C_OnRequestPlayerCard_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              CharacterId;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildActivityList.GuildActivityList_C.OnCompleteProfileLoaded
	 */
	struct UGuildActivityList_C_OnCompleteProfileLoaded_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9H88[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildActivityList.GuildActivityList_C.OnClosePlayerCard
	 */
	struct UGuildActivityList_C_OnClosePlayerCard_Params
	{	};

	/**
	 * Function GuildActivityList.GuildActivityList_C.ExecuteUbergraph_GuildActivityList
	 */
	struct UGuildActivityList_C_ExecuteUbergraph_GuildActivityList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
