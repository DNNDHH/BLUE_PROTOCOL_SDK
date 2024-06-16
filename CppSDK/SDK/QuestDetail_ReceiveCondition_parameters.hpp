#pragma once

 

// Package: QuestDetail_ReceiveCondition

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.ExecuteUbergraph_QuestDetail_ReceiveCondition
// 0x0004 (0x0004 - 0x0000)
struct QuestDetail_ReceiveCondition_C_ExecuteUbergraph_QuestDetail_ReceiveCondition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_ReceiveCondition_C_ExecuteUbergraph_QuestDetail_ReceiveCondition) == 0x000004, "Wrong alignment on QuestDetail_ReceiveCondition_C_ExecuteUbergraph_QuestDetail_ReceiveCondition");
static_assert(sizeof(QuestDetail_ReceiveCondition_C_ExecuteUbergraph_QuestDetail_ReceiveCondition) == 0x000004, "Wrong size on QuestDetail_ReceiveCondition_C_ExecuteUbergraph_QuestDetail_ReceiveCondition");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_ExecuteUbergraph_QuestDetail_ReceiveCondition, EntryPoint) == 0x000000, "Member 'QuestDetail_ReceiveCondition_C_ExecuteUbergraph_QuestDetail_ReceiveCondition::EntryPoint' has a wrong offset!");

// Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SetCondition
// 0x0070 (0x0070 - 0x0000)
struct QuestDetail_ReceiveCondition_C_SetCondition final
{
public:
	TArray<struct FSBQuestPreconditionUIInfo>     InConditions;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8396[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBQuestPreconditionUIInfo             CallFunc_Array_Get_Item;                           // 0x0020(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8397[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8398[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestDetail_ReceiveConditionItem_C*    CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_ReceiveCondition_C_SetCondition) == 0x000008, "Wrong alignment on QuestDetail_ReceiveCondition_C_SetCondition");
static_assert(sizeof(QuestDetail_ReceiveCondition_C_SetCondition) == 0x000070, "Wrong size on QuestDetail_ReceiveCondition_C_SetCondition");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetCondition, InConditions) == 0x000000, "Member 'QuestDetail_ReceiveCondition_C_SetCondition::InConditions' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetCondition, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'QuestDetail_ReceiveCondition_C_SetCondition::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetCondition, Temp_int_Array_Index_Variable) == 0x000014, "Member 'QuestDetail_ReceiveCondition_C_SetCondition::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetCondition, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'QuestDetail_ReceiveCondition_C_SetCondition::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetCondition, CallFunc_Array_Get_Item) == 0x000020, "Member 'QuestDetail_ReceiveCondition_C_SetCondition::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetCondition, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'QuestDetail_ReceiveCondition_C_SetCondition::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetCondition, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'QuestDetail_ReceiveCondition_C_SetCondition::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetCondition, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'QuestDetail_ReceiveCondition_C_SetCondition::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetCondition, CallFunc_Create_ReturnValue) == 0x000060, "Member 'QuestDetail_ReceiveCondition_C_SetCondition::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetCondition, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000068, "Member 'QuestDetail_ReceiveCondition_C_SetCondition::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SelectCautionText
// 0x0010 (0x0010 - 0x0000)
struct QuestDetail_ReceiveCondition_C_SelectCautionText final
{
public:
	bool                                          IsProceeding;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8399[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_ReceiveCondition_C_SelectCautionText) == 0x000004, "Wrong alignment on QuestDetail_ReceiveCondition_C_SelectCautionText");
static_assert(sizeof(QuestDetail_ReceiveCondition_C_SelectCautionText) == 0x000010, "Wrong size on QuestDetail_ReceiveCondition_C_SelectCautionText");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SelectCautionText, IsProceeding) == 0x000000, "Member 'QuestDetail_ReceiveCondition_C_SelectCautionText::IsProceeding' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SelectCautionText, Temp_bool_Variable) == 0x000001, "Member 'QuestDetail_ReceiveCondition_C_SelectCautionText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SelectCautionText, Temp_int_Variable) == 0x000004, "Member 'QuestDetail_ReceiveCondition_C_SelectCautionText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SelectCautionText, Temp_int_Variable_1) == 0x000008, "Member 'QuestDetail_ReceiveCondition_C_SelectCautionText::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SelectCautionText, K2Node_Select_Default) == 0x00000C, "Member 'QuestDetail_ReceiveCondition_C_SelectCautionText::K2Node_Select_Default' has a wrong offset!");

// Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SetConditionForNextMainQuest
// 0x0040 (0x0040 - 0x0000)
struct QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest final
{
public:
	struct FSBQuestPreconditionUIInfo             InInfo;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UQuestDetail_ReceiveConditionItem_C*    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest) == 0x000008, "Wrong alignment on QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest");
static_assert(sizeof(QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest) == 0x000040, "Wrong size on QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest, InInfo) == 0x000000, "Member 'QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest::InInfo' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest, CallFunc_Create_ReturnValue) == 0x000018, "Member 'QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000038, "Member 'QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

}

