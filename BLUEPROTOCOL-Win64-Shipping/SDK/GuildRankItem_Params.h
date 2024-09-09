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
	 * Function GuildRankItem.GuildRankItem_C.SetRankUnlockData
	 */
	struct UGuildRankItem_C_SetRankUnlockData_Params
	{
	public:
		struct FGuildRankUnlockMaster                              UnlockData;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildRankItem.GuildRankItem_C.ExecuteUbergraph_GuildRankItem
	 */
	struct UGuildRankItem_C_ExecuteUbergraph_GuildRankItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
