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
	 * Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.ResetBenefitList 
	 */
	struct UAdventurerRank_BenefitList_C_ResetBenefitList_Params
	{	};

	/**
	 * Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.AddTextBenefitList 
	 */
	struct UAdventurerRank_BenefitList_C_AddTextBenefitList_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.SetTxtRankUpBenefits
	 */
	struct UAdventurerRank_BenefitList_C_SetTxtRankUpBenefits_Params
	{
	public:
		int32_t                                                    InRank;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRankup;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G6FE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
