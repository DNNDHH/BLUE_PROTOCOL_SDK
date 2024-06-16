#pragma once

 

// Package: QuestList_RepeatCountIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function QuestList_RepeatCountIcon.QuestList_RepeatCountIcon_C.SetRepeatCount
// 0x0030 (0x0030 - 0x0000)
struct QuestList_RepeatCountIcon_C_SetRepeatCount final
{
public:
	int32                                         Param_CountNum;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(QuestList_RepeatCountIcon_C_SetRepeatCount) == 0x000008, "Wrong alignment on QuestList_RepeatCountIcon_C_SetRepeatCount");
static_assert(sizeof(QuestList_RepeatCountIcon_C_SetRepeatCount) == 0x000030, "Wrong size on QuestList_RepeatCountIcon_C_SetRepeatCount");
static_assert(offsetof(QuestList_RepeatCountIcon_C_SetRepeatCount, Param_CountNum) == 0x000000, "Member 'QuestList_RepeatCountIcon_C_SetRepeatCount::Param_CountNum' has a wrong offset!");
static_assert(offsetof(QuestList_RepeatCountIcon_C_SetRepeatCount, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'QuestList_RepeatCountIcon_C_SetRepeatCount::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestList_RepeatCountIcon_C_SetRepeatCount, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'QuestList_RepeatCountIcon_C_SetRepeatCount::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestList_RepeatCountIcon_C_SetRepeatCount, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'QuestList_RepeatCountIcon_C_SetRepeatCount::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

