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
	 * Function RankingPartyMenu_Players.RankingPartyMenu_Players_C.SetRankingData
	 */
	struct URankingPartyMenu_Players_C_SetRankingData_Params
	{
	public:
		int32_t                                                    CategoryRank;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6V0O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRankingData                                        RankingData;                                             // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsTimeAttack;                                            // 0x0090(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsOutOfRank;                                             // 0x0091(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RankingPartyMenu_Players.RankingPartyMenu_Players_C.SetEmptyMyRank
	 */
	struct URankingPartyMenu_Players_C_SetEmptyMyRank_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
