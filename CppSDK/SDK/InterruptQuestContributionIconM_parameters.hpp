#pragma once

 

// Package: InterruptQuestContributionIconM

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function InterruptQuestContributionIconM.InterruptQuestContributionIconM_C.SetRank
// 0x0003 (0x0003 - 0x0000)
struct InterruptQuestContributionIconM_C_SetRank final
{
public:
	EQuestContributionRank                        InRank;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InterruptQuestContributionIconM_C_SetRank) == 0x000001, "Wrong alignment on InterruptQuestContributionIconM_C_SetRank");
static_assert(sizeof(InterruptQuestContributionIconM_C_SetRank) == 0x000003, "Wrong size on InterruptQuestContributionIconM_C_SetRank");
static_assert(offsetof(InterruptQuestContributionIconM_C_SetRank, InRank) == 0x000000, "Member 'InterruptQuestContributionIconM_C_SetRank::InRank' has a wrong offset!");
static_assert(offsetof(InterruptQuestContributionIconM_C_SetRank, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'InterruptQuestContributionIconM_C_SetRank::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(InterruptQuestContributionIconM_C_SetRank, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000002, "Member 'InterruptQuestContributionIconM_C_SetRank::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

}

