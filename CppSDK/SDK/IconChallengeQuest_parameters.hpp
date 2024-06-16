#pragma once

 

// Package: IconChallengeQuest

#include "Basic.hpp"


namespace SDK::Params
{

// Function IconChallengeQuest.IconChallengeQuest_C.Setup
// 0x0004 (0x0004 - 0x0000)
struct IconChallengeQuest_C_Setup final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconChallengeQuest_C_Setup) == 0x000004, "Wrong alignment on IconChallengeQuest_C_Setup");
static_assert(sizeof(IconChallengeQuest_C_Setup) == 0x000004, "Wrong size on IconChallengeQuest_C_Setup");
static_assert(offsetof(IconChallengeQuest_C_Setup, QuestIndex) == 0x000000, "Member 'IconChallengeQuest_C_Setup::QuestIndex' has a wrong offset!");

// Function IconChallengeQuest.IconChallengeQuest_C.OnSetInside
// 0x0010 (0x0010 - 0x0000)
struct IconChallengeQuest_C_OnSetInside final
{
public:
	bool                                          IsInSide;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7058[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconChallengeQuest_C_OnSetInside) == 0x000004, "Wrong alignment on IconChallengeQuest_C_OnSetInside");
static_assert(sizeof(IconChallengeQuest_C_OnSetInside) == 0x000010, "Wrong size on IconChallengeQuest_C_OnSetInside");
static_assert(offsetof(IconChallengeQuest_C_OnSetInside, IsInSide) == 0x000000, "Member 'IconChallengeQuest_C_OnSetInside::IsInSide' has a wrong offset!");
static_assert(offsetof(IconChallengeQuest_C_OnSetInside, Temp_bool_Variable) == 0x000001, "Member 'IconChallengeQuest_C_OnSetInside::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconChallengeQuest_C_OnSetInside, Temp_int_Variable) == 0x000004, "Member 'IconChallengeQuest_C_OnSetInside::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(IconChallengeQuest_C_OnSetInside, Temp_int_Variable_1) == 0x000008, "Member 'IconChallengeQuest_C_OnSetInside::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(IconChallengeQuest_C_OnSetInside, K2Node_Select_Default) == 0x00000C, "Member 'IconChallengeQuest_C_OnSetInside::K2Node_Select_Default' has a wrong offset!");

}

