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
	 * UserDefinedStruct SBMasterRewardWithAmountRange.SBMasterRewardWithAmountRange
	 * Size -> 0x002C
	 */
	struct FSBMasterRewardWithAmountRange
	{
	public:
		struct FSBMasterReward                                     MasterReward_2_FBAE58CC47C6344D19739CA5941D09C4;         // 0x0000(0x0014) Edit, BlueprintVisible, NoDestructor
		int32_t                                                    AmountFixed_6_64623062404EBF0A11540AAF429C1D78;          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmountLottery_8_93598D8742C68751DECAE3BC6A1C4FD9;        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LotteryGroup_11_3FE67A004E6BAEDB33E9D48D0B99BE59;        // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GroupAmountMax_19_A69E193A4F5CA0A04EA14393511DF671;      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GroupAmountMin_23_CFFE08094A2698864469AD869E82C8A1;      // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalProbability_28_D00711C14882E5D019C4809046895EB1;    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
