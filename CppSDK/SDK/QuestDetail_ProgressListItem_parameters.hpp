#pragma once

 

// Package: QuestDetail_ProgressListItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function QuestDetail_ProgressListItem.QuestDetail_ProgressListItem_C.SetInfo
// 0x0058 (0x0058 - 0x0000)
struct QuestDetail_ProgressListItem_C_SetInfo final
{
public:
	class FString                                 ConditionText;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ProgressText;                                      // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bClear;                                            // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8829[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(QuestDetail_ProgressListItem_C_SetInfo) == 0x000008, "Wrong alignment on QuestDetail_ProgressListItem_C_SetInfo");
static_assert(sizeof(QuestDetail_ProgressListItem_C_SetInfo) == 0x000058, "Wrong size on QuestDetail_ProgressListItem_C_SetInfo");
static_assert(offsetof(QuestDetail_ProgressListItem_C_SetInfo, ConditionText) == 0x000000, "Member 'QuestDetail_ProgressListItem_C_SetInfo::ConditionText' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressListItem_C_SetInfo, ProgressText) == 0x000010, "Member 'QuestDetail_ProgressListItem_C_SetInfo::ProgressText' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressListItem_C_SetInfo, bClear) == 0x000020, "Member 'QuestDetail_ProgressListItem_C_SetInfo::bClear' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressListItem_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'QuestDetail_ProgressListItem_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressListItem_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'QuestDetail_ProgressListItem_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

