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
	 * Function GuildTimeCBIcon.GuildTimeCBIcon_C.Set Checked
	 */
	struct UGuildTimeCBIcon_C_SetChecked_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildTimeCBIcon.GuildTimeCBIcon_C.GetTime
	 */
	struct UGuildTimeCBIcon_C_GetTime_Params
	{
	public:
		ESBGuildActivityTime                                       Time;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildTimeCBIcon.GuildTimeCBIcon_C.IsCheck
	 */
	struct UGuildTimeCBIcon_C_IsCheck_Params
	{
	public:
		bool                                                       IsCheck;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildTimeCBIcon.GuildTimeCBIcon_C.OnLoaded_C91D83624D7160623CFFE1942693BDF3
	 */
	struct UGuildTimeCBIcon_C_OnLoaded_C91D83624D7160623CFFE1942693BDF3_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildTimeCBIcon.GuildTimeCBIcon_C.PreConstruct
	 */
	struct UGuildTimeCBIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildTimeCBIcon.GuildTimeCBIcon_C.Construct
	 */
	struct UGuildTimeCBIcon_C_Construct_Params
	{	};

	/**
	 * Function GuildTimeCBIcon.GuildTimeCBIcon_C.InitializeTime
	 */
	struct UGuildTimeCBIcon_C_InitializeTime_Params
	{	};

	/**
	 * Function GuildTimeCBIcon.GuildTimeCBIcon_C.ExecuteUbergraph_GuildTimeCBIcon
	 */
	struct UGuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_807V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
