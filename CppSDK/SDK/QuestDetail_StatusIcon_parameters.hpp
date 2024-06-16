#pragma once

 

// Package: QuestDetail_StatusIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function QuestDetail_StatusIcon.QuestDetail_StatusIcon_C.SetStatus
// 0x0002 (0x0002 - 0x0000)
struct QuestDetail_StatusIcon_C_SetStatus final
{
public:
	EQuestStatus                                  InStatus;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_StatusIcon_C_SetStatus) == 0x000001, "Wrong alignment on QuestDetail_StatusIcon_C_SetStatus");
static_assert(sizeof(QuestDetail_StatusIcon_C_SetStatus) == 0x000002, "Wrong size on QuestDetail_StatusIcon_C_SetStatus");
static_assert(offsetof(QuestDetail_StatusIcon_C_SetStatus, InStatus) == 0x000000, "Member 'QuestDetail_StatusIcon_C_SetStatus::InStatus' has a wrong offset!");
static_assert(offsetof(QuestDetail_StatusIcon_C_SetStatus, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'QuestDetail_StatusIcon_C_SetStatus::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

