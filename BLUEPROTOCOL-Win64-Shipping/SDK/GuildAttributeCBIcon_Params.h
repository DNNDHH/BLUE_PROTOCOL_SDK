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
	 * Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.SetChecked
	 */
	struct UGuildAttributeCBIcon_C_SetChecked_Params
	{
	public:
		bool                                                       bIsCheck;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.GetAttrib
	 */
	struct UGuildAttributeCBIcon_C_GetAttrib_Params
	{
	public:
		EGuildAttribute                                            Attribute;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.IsCheck
	 */
	struct UGuildAttributeCBIcon_C_IsCheck_Params
	{
	public:
		bool                                                       IsCheck;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1
	 */
	struct UGuildAttributeCBIcon_C_OnLoaded_FA8C3F374483DA5CB9615188B9CDF8D1_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.PreConstruct
	 */
	struct UGuildAttributeCBIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.Construct
	 */
	struct UGuildAttributeCBIcon_C_Construct_Params
	{	};

	/**
	 * Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.Initialize Attribute
	 */
	struct UGuildAttributeCBIcon_C_InitializeAttribute_Params
	{	};

	/**
	 * Function GuildAttributeCBIcon.GuildAttributeCBIcon_C.ExecuteUbergraph_GuildAttributeCBIcon
	 */
	struct UGuildAttributeCBIcon_C_ExecuteUbergraph_GuildAttributeCBIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SP54[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
