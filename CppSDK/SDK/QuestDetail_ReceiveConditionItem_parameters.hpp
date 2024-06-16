#pragma once

 

// Package: QuestDetail_ReceiveConditionItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function QuestDetail_ReceiveConditionItem.QuestDetail_ReceiveConditionItem_C.SetCondition
// 0x00A0 (0x00A0 - 0x0000)
struct QuestDetail_ReceiveConditionItem_C_SetCondition final
{
public:
	class FText                                   InCondition;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIsSatisfied;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_882A[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0048(0x0028)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_882B[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0078(0x0028)()
};
static_assert(alignof(QuestDetail_ReceiveConditionItem_C_SetCondition) == 0x000008, "Wrong alignment on QuestDetail_ReceiveConditionItem_C_SetCondition");
static_assert(sizeof(QuestDetail_ReceiveConditionItem_C_SetCondition) == 0x0000A0, "Wrong size on QuestDetail_ReceiveConditionItem_C_SetCondition");
static_assert(offsetof(QuestDetail_ReceiveConditionItem_C_SetCondition, InCondition) == 0x000000, "Member 'QuestDetail_ReceiveConditionItem_C_SetCondition::InCondition' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveConditionItem_C_SetCondition, bIsSatisfied) == 0x000018, "Member 'QuestDetail_ReceiveConditionItem_C_SetCondition::bIsSatisfied' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveConditionItem_C_SetCondition, Temp_byte_Variable) == 0x000019, "Member 'QuestDetail_ReceiveConditionItem_C_SetCondition::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveConditionItem_C_SetCondition, Temp_byte_Variable_1) == 0x00001A, "Member 'QuestDetail_ReceiveConditionItem_C_SetCondition::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveConditionItem_C_SetCondition, Temp_bool_Variable) == 0x00001B, "Member 'QuestDetail_ReceiveConditionItem_C_SetCondition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveConditionItem_C_SetCondition, Temp_bool_Variable_1) == 0x00001C, "Member 'QuestDetail_ReceiveConditionItem_C_SetCondition::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveConditionItem_C_SetCondition, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'QuestDetail_ReceiveConditionItem_C_SetCondition::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveConditionItem_C_SetCondition, K2Node_MakeStruct_SlateColor_1) == 0x000048, "Member 'QuestDetail_ReceiveConditionItem_C_SetCondition::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveConditionItem_C_SetCondition, K2Node_Select_Default) == 0x000070, "Member 'QuestDetail_ReceiveConditionItem_C_SetCondition::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveConditionItem_C_SetCondition, K2Node_Select_Default_1) == 0x000078, "Member 'QuestDetail_ReceiveConditionItem_C_SetCondition::K2Node_Select_Default_1' has a wrong offset!");

}

