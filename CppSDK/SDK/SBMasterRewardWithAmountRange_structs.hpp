#pragma once

 

// Package: SBMasterRewardWithAmountRange

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct SBMasterRewardWithAmountRange.SBMasterRewardWithAmountRange
// 0x002C (0x002C - 0x0000)
struct FSBMasterRewardWithAmountRange final
{
public:
	struct FSBMasterReward                        MasterReward_2_FBAE58CC47C6344D19739CA5941D09C4;   // 0x0000(0x0014)(Edit, BlueprintVisible, NoDestructor)
	int32                                         AmountFixed_6_64623062404EBF0A11540AAF429C1D78;    // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountLottery_8_93598D8742C68751DECAE3BC6A1C4FD9;  // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LotteryGroup_11_3FE67A004E6BAEDB33E9D48D0B99BE59;  // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GroupAmountMax_19_A69E193A4F5CA0A04EA14393511DF671; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GroupAmountMin_23_CFFE08094A2698864469AD869E82C8A1; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalProbability_28_D00711C14882E5D019C4809046895EB1; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSBMasterRewardWithAmountRange) == 0x000004, "Wrong alignment on FSBMasterRewardWithAmountRange");
static_assert(sizeof(FSBMasterRewardWithAmountRange) == 0x00002C, "Wrong size on FSBMasterRewardWithAmountRange");
static_assert(offsetof(FSBMasterRewardWithAmountRange, MasterReward_2_FBAE58CC47C6344D19739CA5941D09C4) == 0x000000, "Member 'FSBMasterRewardWithAmountRange::MasterReward_2_FBAE58CC47C6344D19739CA5941D09C4' has a wrong offset!");
static_assert(offsetof(FSBMasterRewardWithAmountRange, AmountFixed_6_64623062404EBF0A11540AAF429C1D78) == 0x000014, "Member 'FSBMasterRewardWithAmountRange::AmountFixed_6_64623062404EBF0A11540AAF429C1D78' has a wrong offset!");
static_assert(offsetof(FSBMasterRewardWithAmountRange, AmountLottery_8_93598D8742C68751DECAE3BC6A1C4FD9) == 0x000018, "Member 'FSBMasterRewardWithAmountRange::AmountLottery_8_93598D8742C68751DECAE3BC6A1C4FD9' has a wrong offset!");
static_assert(offsetof(FSBMasterRewardWithAmountRange, LotteryGroup_11_3FE67A004E6BAEDB33E9D48D0B99BE59) == 0x00001C, "Member 'FSBMasterRewardWithAmountRange::LotteryGroup_11_3FE67A004E6BAEDB33E9D48D0B99BE59' has a wrong offset!");
static_assert(offsetof(FSBMasterRewardWithAmountRange, GroupAmountMax_19_A69E193A4F5CA0A04EA14393511DF671) == 0x000020, "Member 'FSBMasterRewardWithAmountRange::GroupAmountMax_19_A69E193A4F5CA0A04EA14393511DF671' has a wrong offset!");
static_assert(offsetof(FSBMasterRewardWithAmountRange, GroupAmountMin_23_CFFE08094A2698864469AD869E82C8A1) == 0x000024, "Member 'FSBMasterRewardWithAmountRange::GroupAmountMin_23_CFFE08094A2698864469AD869E82C8A1' has a wrong offset!");
static_assert(offsetof(FSBMasterRewardWithAmountRange, TotalProbability_28_D00711C14882E5D019C4809046895EB1) == 0x000028, "Member 'FSBMasterRewardWithAmountRange::TotalProbability_28_D00711C14882E5D019C4809046895EB1' has a wrong offset!");

}

