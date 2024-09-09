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
	 * Function GuildRankMenu.GuildRankMenu_C.GenerateRankItems
	 */
	struct UGuildRankMenu_C_GenerateRankItems_Params
	{	};

	/**
	 * Function GuildRankMenu.GuildRankMenu_C.Initialize
	 */
	struct UGuildRankMenu_C_Initialize_Params
	{	};

	/**
	 * Function GuildRankMenu.GuildRankMenu_C.GetGuildComp
	 */
	struct UGuildRankMenu_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRankMenu.GuildRankMenu_C.Construct
	 */
	struct UGuildRankMenu_C_Construct_Params
	{	};

	/**
	 * Function GuildRankMenu.GuildRankMenu_C.ExecuteUbergraph_GuildRankMenu
	 */
	struct UGuildRankMenu_C_ExecuteUbergraph_GuildRankMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
