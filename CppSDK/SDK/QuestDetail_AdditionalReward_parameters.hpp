#pragma once

 

// Package: QuestDetail_AdditionalReward

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function QuestDetail_AdditionalReward.QuestDetail_AdditionalReward_C.ExecuteUbergraph_QuestDetail_AdditionalReward
// 0x0014 (0x0014 - 0x0000)
struct QuestDetail_AdditionalReward_C_ExecuteUbergraph_QuestDetail_AdditionalReward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(QuestDetail_AdditionalReward_C_ExecuteUbergraph_QuestDetail_AdditionalReward) == 0x000004, "Wrong alignment on QuestDetail_AdditionalReward_C_ExecuteUbergraph_QuestDetail_AdditionalReward");
static_assert(sizeof(QuestDetail_AdditionalReward_C_ExecuteUbergraph_QuestDetail_AdditionalReward) == 0x000014, "Wrong size on QuestDetail_AdditionalReward_C_ExecuteUbergraph_QuestDetail_AdditionalReward");
static_assert(offsetof(QuestDetail_AdditionalReward_C_ExecuteUbergraph_QuestDetail_AdditionalReward, EntryPoint) == 0x000000, "Member 'QuestDetail_AdditionalReward_C_ExecuteUbergraph_QuestDetail_AdditionalReward::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_ExecuteUbergraph_QuestDetail_AdditionalReward, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'QuestDetail_AdditionalReward_C_ExecuteUbergraph_QuestDetail_AdditionalReward::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function QuestDetail_AdditionalReward.QuestDetail_AdditionalReward_C.InitializeAdditionalRewards
// 0x0138 (0x0138 - 0x0000)
struct QuestDetail_AdditionalReward_C_InitializeAdditionalRewards final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C0B[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C0C[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class UQuestDetail_RewardList_C*              CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C0D[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBQuestAdditionalRewardUIInfo> CallFunc_GetQuestAdditionalRewardInfo_OutInfos;    // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C0E[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBQuestAdditionalRewardUIInfo         CallFunc_Array_Get_Item;                           // 0x0080(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRewardInfo                            CallFunc_Array_Get_Item_1;                         // 0x009C(0x0018)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C0F[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_AddReward_OutWidget;                      // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C10[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C11[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0110(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0120(0x0018)()
};
static_assert(alignof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards) == 0x000008, "Wrong alignment on QuestDetail_AdditionalReward_C_InitializeAdditionalRewards");
static_assert(sizeof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards) == 0x000138, "Wrong size on QuestDetail_AdditionalReward_C_InitializeAdditionalRewards");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, Temp_int_Array_Index_Variable) == 0x000008, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, K2Node_MakeStruct_Margin) == 0x00000C, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000020, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, Temp_int_Array_Index_Variable_1) == 0x000030, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_Create_ReturnValue) == 0x000050, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_AddChild_ReturnValue) == 0x000058, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, Temp_int_Loop_Counter_Variable_1) == 0x000060, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_GetQuestAdditionalRewardInfo_OutInfos) == 0x000068, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_GetQuestAdditionalRewardInfo_OutInfos' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_Add_IntInt_ReturnValue_1) == 0x000078, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_Array_Get_Item) == 0x000080, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_Array_Get_Item_1) == 0x00009C, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_Less_IntInt_ReturnValue) == 0x0000B4, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_AddReward_OutWidget) == 0x0000B8, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_AddReward_OutWidget' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_Array_Length_ReturnValue_1) == 0x0000C0, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_Less_IntInt_ReturnValue_1) == 0x000108, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, K2Node_MakeArray_Array) == 0x000110, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(QuestDetail_AdditionalReward_C_InitializeAdditionalRewards, CallFunc_Format_ReturnValue) == 0x000120, "Member 'QuestDetail_AdditionalReward_C_InitializeAdditionalRewards::CallFunc_Format_ReturnValue' has a wrong offset!");

}

