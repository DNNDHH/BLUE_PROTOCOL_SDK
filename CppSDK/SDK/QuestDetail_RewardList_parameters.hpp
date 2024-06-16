#pragma once

 

// Package: QuestDetail_RewardList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function QuestDetail_RewardList.QuestDetail_RewardList_C.ExecuteUbergraph_QuestDetail_RewardList
// 0x0028 (0x0028 - 0x0000)
struct QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8850[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestDetail_AdditionalReward_C*        CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8851[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList) == 0x000008, "Wrong alignment on QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList");
static_assert(sizeof(QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList) == 0x000028, "Wrong size on QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList");
static_assert(offsetof(QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList, EntryPoint) == 0x000000, "Member 'QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList, CallFunc_Create_ReturnValue) == 0x000008, "Member 'QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function QuestDetail_RewardList.QuestDetail_RewardList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct QuestDetail_RewardList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_RewardList_C_PreConstruct) == 0x000001, "Wrong alignment on QuestDetail_RewardList_C_PreConstruct");
static_assert(sizeof(QuestDetail_RewardList_C_PreConstruct) == 0x000001, "Wrong size on QuestDetail_RewardList_C_PreConstruct");
static_assert(offsetof(QuestDetail_RewardList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'QuestDetail_RewardList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function QuestDetail_RewardList.QuestDetail_RewardList_C.AddReward
// 0x0048 (0x0048 - 0x0000)
struct QuestDetail_RewardList_C_AddReward final
{
public:
	struct FRewardInfo                            InRewardInfo;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bInSelectRewardSelectable;                         // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bEnableHiddenReward;                               // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8852[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            OutWidget;                                         // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_Quest_Reward_Icon_OutWidget;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     K2Node_DynamicCast_AsQuest_Reward_Icon;            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8853[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_RewardList_C_AddReward) == 0x000008, "Wrong alignment on QuestDetail_RewardList_C_AddReward");
static_assert(sizeof(QuestDetail_RewardList_C_AddReward) == 0x000048, "Wrong size on QuestDetail_RewardList_C_AddReward");
static_assert(offsetof(QuestDetail_RewardList_C_AddReward, InRewardInfo) == 0x000000, "Member 'QuestDetail_RewardList_C_AddReward::InRewardInfo' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_AddReward, bInSelectRewardSelectable) == 0x000018, "Member 'QuestDetail_RewardList_C_AddReward::bInSelectRewardSelectable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_AddReward, bEnableHiddenReward) == 0x000019, "Member 'QuestDetail_RewardList_C_AddReward::bEnableHiddenReward' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_AddReward, OutWidget) == 0x000020, "Member 'QuestDetail_RewardList_C_AddReward::OutWidget' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_AddReward, CallFunc_Create_Quest_Reward_Icon_OutWidget) == 0x000028, "Member 'QuestDetail_RewardList_C_AddReward::CallFunc_Create_Quest_Reward_Icon_OutWidget' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_AddReward, K2Node_DynamicCast_AsQuest_Reward_Icon) == 0x000030, "Member 'QuestDetail_RewardList_C_AddReward::K2Node_DynamicCast_AsQuest_Reward_Icon' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_AddReward, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'QuestDetail_RewardList_C_AddReward::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_AddReward, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'QuestDetail_RewardList_C_AddReward::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_AddReward, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000040, "Member 'QuestDetail_RewardList_C_AddReward::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function QuestDetail_RewardList.QuestDetail_RewardList_C.GetRewardNum
// 0x0008 (0x0008 - 0x0000)
struct QuestDetail_RewardList_C_GetRewardNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_RewardList_C_GetRewardNum) == 0x000004, "Wrong alignment on QuestDetail_RewardList_C_GetRewardNum");
static_assert(sizeof(QuestDetail_RewardList_C_GetRewardNum) == 0x000008, "Wrong size on QuestDetail_RewardList_C_GetRewardNum");
static_assert(offsetof(QuestDetail_RewardList_C_GetRewardNum, Num) == 0x000000, "Member 'QuestDetail_RewardList_C_GetRewardNum::Num' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_GetRewardNum, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'QuestDetail_RewardList_C_GetRewardNum::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");

// Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetEnableAdditionalButton
// 0x0005 (0x0005 - 0x0000)
struct QuestDetail_RewardList_C_SetEnableAdditionalButton final
{
public:
	bool                                          Flag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_RewardList_C_SetEnableAdditionalButton) == 0x000001, "Wrong alignment on QuestDetail_RewardList_C_SetEnableAdditionalButton");
static_assert(sizeof(QuestDetail_RewardList_C_SetEnableAdditionalButton) == 0x000005, "Wrong size on QuestDetail_RewardList_C_SetEnableAdditionalButton");
static_assert(offsetof(QuestDetail_RewardList_C_SetEnableAdditionalButton, Flag) == 0x000000, "Member 'QuestDetail_RewardList_C_SetEnableAdditionalButton::Flag' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetEnableAdditionalButton, Temp_bool_Variable) == 0x000001, "Member 'QuestDetail_RewardList_C_SetEnableAdditionalButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetEnableAdditionalButton, Temp_byte_Variable) == 0x000002, "Member 'QuestDetail_RewardList_C_SetEnableAdditionalButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetEnableAdditionalButton, Temp_byte_Variable_1) == 0x000003, "Member 'QuestDetail_RewardList_C_SetEnableAdditionalButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetEnableAdditionalButton, K2Node_Select_Default) == 0x000004, "Member 'QuestDetail_RewardList_C_SetEnableAdditionalButton::K2Node_Select_Default' has a wrong offset!");

// Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetQuestIndex
// 0x0004 (0x0004 - 0x0000)
struct QuestDetail_RewardList_C_SetQuestIndex final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_RewardList_C_SetQuestIndex) == 0x000004, "Wrong alignment on QuestDetail_RewardList_C_SetQuestIndex");
static_assert(sizeof(QuestDetail_RewardList_C_SetQuestIndex) == 0x000004, "Wrong size on QuestDetail_RewardList_C_SetQuestIndex");
static_assert(offsetof(QuestDetail_RewardList_C_SetQuestIndex, InQuestIndex) == 0x000000, "Member 'QuestDetail_RewardList_C_SetQuestIndex::InQuestIndex' has a wrong offset!");

// Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetAdditionalRewardNotice
// 0x00C0 (0x00C0 - 0x0000)
struct QuestDetail_RewardList_C_SetAdditionalRewardNotice final
{
public:
	int32                                         InClearCount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8854[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     K2Node_DynamicCast_AsQuest_Reward_Icon;            // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8855[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_RewardList_C_SetAdditionalRewardNotice) == 0x000008, "Wrong alignment on QuestDetail_RewardList_C_SetAdditionalRewardNotice");
static_assert(sizeof(QuestDetail_RewardList_C_SetAdditionalRewardNotice) == 0x0000C0, "Wrong size on QuestDetail_RewardList_C_SetAdditionalRewardNotice");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, InClearCount) == 0x000000, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::InClearCount' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, Temp_int_Variable) == 0x000004, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, K2Node_MakeArray_Array) == 0x000048, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000060, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, CallFunc_Format_ReturnValue) == 0x000088, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, CallFunc_GetChildAt_ReturnValue) == 0x0000A0, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, K2Node_DynamicCast_AsQuest_Reward_Icon) == 0x0000A8, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::K2Node_DynamicCast_AsQuest_Reward_Icon' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, CallFunc_GetChildrenCount_ReturnValue) == 0x0000B4, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000B8, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, CallFunc_IsValid_ReturnValue) == 0x0000BC, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000BD, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetAdditionalRewardNotice, CallFunc_IsValid_ReturnValue_1) == 0x0000BE, "Member 'QuestDetail_RewardList_C_SetAdditionalRewardNotice::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetRewardTypeName
// 0x0028 (0x0028 - 0x0000)
struct QuestDetail_RewardList_C_SetRewardTypeName final
{
public:
	class FString                                 InLabelString;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(QuestDetail_RewardList_C_SetRewardTypeName) == 0x000008, "Wrong alignment on QuestDetail_RewardList_C_SetRewardTypeName");
static_assert(sizeof(QuestDetail_RewardList_C_SetRewardTypeName) == 0x000028, "Wrong size on QuestDetail_RewardList_C_SetRewardTypeName");
static_assert(offsetof(QuestDetail_RewardList_C_SetRewardTypeName, InLabelString) == 0x000000, "Member 'QuestDetail_RewardList_C_SetRewardTypeName::InLabelString' has a wrong offset!");
static_assert(offsetof(QuestDetail_RewardList_C_SetRewardTypeName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'QuestDetail_RewardList_C_SetRewardTypeName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

