#pragma once

 

// Package: StepListItem_Title

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function StepListItem_Title.StepListItem_Title_C.SetTextDebug
// 0x0018 (0x0018 - 0x0000)
struct StepListItem_Title_C_SetTextDebug final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(StepListItem_Title_C_SetTextDebug) == 0x000008, "Wrong alignment on StepListItem_Title_C_SetTextDebug");
static_assert(sizeof(StepListItem_Title_C_SetTextDebug) == 0x000018, "Wrong size on StepListItem_Title_C_SetTextDebug");
static_assert(offsetof(StepListItem_Title_C_SetTextDebug, InText) == 0x000000, "Member 'StepListItem_Title_C_SetTextDebug::InText' has a wrong offset!");

// Function StepListItem_Title.StepListItem_Title_C.SetTextDebugVisible
// 0x0005 (0x0005 - 0x0000)
struct StepListItem_Title_C_SetTextDebugVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepListItem_Title_C_SetTextDebugVisible) == 0x000001, "Wrong alignment on StepListItem_Title_C_SetTextDebugVisible");
static_assert(sizeof(StepListItem_Title_C_SetTextDebugVisible) == 0x000005, "Wrong size on StepListItem_Title_C_SetTextDebugVisible");
static_assert(offsetof(StepListItem_Title_C_SetTextDebugVisible, Param_IsVisible) == 0x000000, "Member 'StepListItem_Title_C_SetTextDebugVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(StepListItem_Title_C_SetTextDebugVisible, Temp_bool_Variable) == 0x000001, "Member 'StepListItem_Title_C_SetTextDebugVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StepListItem_Title_C_SetTextDebugVisible, Temp_byte_Variable) == 0x000002, "Member 'StepListItem_Title_C_SetTextDebugVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StepListItem_Title_C_SetTextDebugVisible, Temp_byte_Variable_1) == 0x000003, "Member 'StepListItem_Title_C_SetTextDebugVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StepListItem_Title_C_SetTextDebugVisible, K2Node_Select_Default) == 0x000004, "Member 'StepListItem_Title_C_SetTextDebugVisible::K2Node_Select_Default' has a wrong offset!");

// Function StepListItem_Title.StepListItem_Title_C.OnSetIconQuest
// 0x0004 (0x0004 - 0x0000)
struct StepListItem_Title_C_OnSetIconQuest final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepListItem_Title_C_OnSetIconQuest) == 0x000004, "Wrong alignment on StepListItem_Title_C_OnSetIconQuest");
static_assert(sizeof(StepListItem_Title_C_OnSetIconQuest) == 0x000004, "Wrong size on StepListItem_Title_C_OnSetIconQuest");
static_assert(offsetof(StepListItem_Title_C_OnSetIconQuest, InQuestIndex) == 0x000000, "Member 'StepListItem_Title_C_OnSetIconQuest::InQuestIndex' has a wrong offset!");

// Function StepListItem_Title.StepListItem_Title_C.OnSetIconWishList
// 0x0001 (0x0001 - 0x0000)
struct StepListItem_Title_C_OnSetIconWishList final
{
public:
	EQuestStatus                                  InQuestStatus;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepListItem_Title_C_OnSetIconWishList) == 0x000001, "Wrong alignment on StepListItem_Title_C_OnSetIconWishList");
static_assert(sizeof(StepListItem_Title_C_OnSetIconWishList) == 0x000001, "Wrong size on StepListItem_Title_C_OnSetIconWishList");
static_assert(offsetof(StepListItem_Title_C_OnSetIconWishList, InQuestStatus) == 0x000000, "Member 'StepListItem_Title_C_OnSetIconWishList::InQuestStatus' has a wrong offset!");

}

