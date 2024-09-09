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
	 * Function GuildActivity.GuildActivity_C.IsRequested
	 */
	struct UGuildActivity_C_IsRequested_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildActivity.GuildActivity_C.GetGuildComp
	 */
	struct UGuildActivity_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             Component;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildActivity.GuildActivity_C.OnCompleteGuildActivity_Event
	 */
	struct UGuildActivity_C_OnCompleteGuildActivity_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildActivity.GuildActivity_C.RequestGetGuildActivity
	 */
	struct UGuildActivity_C_RequestGetGuildActivity_Params
	{	};

	/**
	 * Function GuildActivity.GuildActivity_C.Construct
	 */
	struct UGuildActivity_C_Construct_Params
	{	};

	/**
	 * Function GuildActivity.GuildActivity_C.OnCompleteProfileLoaded
	 */
	struct UGuildActivity_C_OnCompleteProfileLoaded_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KDN6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildActivity.GuildActivity_C.ExecuteUbergraph_GuildActivity
	 */
	struct UGuildActivity_C_ExecuteUbergraph_GuildActivity_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
