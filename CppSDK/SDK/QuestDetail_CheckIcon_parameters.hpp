#pragma once

 

// Package: QuestDetail_CheckIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function QuestDetail_CheckIcon.QuestDetail_CheckIcon_C.SetCheck
// 0x0002 (0x0002 - 0x0000)
struct QuestDetail_CheckIcon_C_SetCheck final
{
public:
	bool                                          bFlag;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_CheckIcon_C_SetCheck) == 0x000001, "Wrong alignment on QuestDetail_CheckIcon_C_SetCheck");
static_assert(sizeof(QuestDetail_CheckIcon_C_SetCheck) == 0x000002, "Wrong size on QuestDetail_CheckIcon_C_SetCheck");
static_assert(offsetof(QuestDetail_CheckIcon_C_SetCheck, bFlag) == 0x000000, "Member 'QuestDetail_CheckIcon_C_SetCheck::bFlag' has a wrong offset!");
static_assert(offsetof(QuestDetail_CheckIcon_C_SetCheck, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000001, "Member 'QuestDetail_CheckIcon_C_SetCheck::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}

