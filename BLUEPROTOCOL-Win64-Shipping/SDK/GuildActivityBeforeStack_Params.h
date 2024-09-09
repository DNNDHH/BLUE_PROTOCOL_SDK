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
	 * Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.Construct
	 */
	struct UGuildActivityBeforeStack_C_Construct_Params
	{	};

	/**
	 * Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.Add Data
	 */
	struct UGuildActivityBeforeStack_C_AddData_Params
	{
	public:
		class USBUIGuildActivityUMGBase*                           Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.SetDateTime
	 */
	struct UGuildActivityBeforeStack_C_SetDateTime_Params
	{
	public:
		struct FDateTime                                           Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.ExecuteUbergraph_GuildActivityBeforeStack
	 */
	struct UGuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XYWS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
