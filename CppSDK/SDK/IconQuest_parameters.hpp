#pragma once

 

// Package: IconQuest

#include "Basic.hpp"


namespace SDK::Params
{

// Function IconQuest.IconQuest_C.ExecuteUbergraph_IconQuest
// 0x0068 (0x0068 - 0x0000)
struct IconQuest_C_ExecuteUbergraph_IconQuest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7096[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7097[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7098[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(IconQuest_C_ExecuteUbergraph_IconQuest) == 0x000008, "Wrong alignment on IconQuest_C_ExecuteUbergraph_IconQuest");
static_assert(sizeof(IconQuest_C_ExecuteUbergraph_IconQuest) == 0x000068, "Wrong size on IconQuest_C_ExecuteUbergraph_IconQuest");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, EntryPoint) == 0x000000, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::EntryPoint' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, K2Node_CustomEvent_InRetCode) == 0x000014, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000018, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000020, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000028, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000038, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, K2Node_DynamicCast_AsSBPlayer_State) == 0x000048, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x000058, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(IconQuest_C_ExecuteUbergraph_IconQuest, K2Node_DynamicCast_bSuccess_3) == 0x000060, "Member 'IconQuest_C_ExecuteUbergraph_IconQuest::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function IconQuest.IconQuest_C.OnAdventurerRankDelegate_Event_0
// 0x0004 (0x0004 - 0x0000)
struct IconQuest_C_OnAdventurerRankDelegate_Event_0 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconQuest_C_OnAdventurerRankDelegate_Event_0) == 0x000004, "Wrong alignment on IconQuest_C_OnAdventurerRankDelegate_Event_0");
static_assert(sizeof(IconQuest_C_OnAdventurerRankDelegate_Event_0) == 0x000004, "Wrong size on IconQuest_C_OnAdventurerRankDelegate_Event_0");
static_assert(offsetof(IconQuest_C_OnAdventurerRankDelegate_Event_0, InRetCode) == 0x000000, "Member 'IconQuest_C_OnAdventurerRankDelegate_Event_0::InRetCode' has a wrong offset!");

// Function IconQuest.IconQuest_C.UpdateStatus
// 0x0038 (0x0038 - 0x0000)
struct IconQuest_C_UpdateStatus final
{
public:
	TArray<int32>                                 CallFunc_GetQuestIndexList_ReturnValue;            // 0x0000(0x0010)(ConstParm, ReferenceParm)
	TArray<int32>                                 CallFunc_GetQuestIndexList_ReturnValue_1;          // 0x0010(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7099[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_709A[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(IconQuest_C_UpdateStatus) == 0x000008, "Wrong alignment on IconQuest_C_UpdateStatus");
static_assert(sizeof(IconQuest_C_UpdateStatus) == 0x000038, "Wrong size on IconQuest_C_UpdateStatus");
static_assert(offsetof(IconQuest_C_UpdateStatus, CallFunc_GetQuestIndexList_ReturnValue) == 0x000000, "Member 'IconQuest_C_UpdateStatus::CallFunc_GetQuestIndexList_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconQuest_C_UpdateStatus, CallFunc_GetQuestIndexList_ReturnValue_1) == 0x000010, "Member 'IconQuest_C_UpdateStatus::CallFunc_GetQuestIndexList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconQuest_C_UpdateStatus, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'IconQuest_C_UpdateStatus::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconQuest_C_UpdateStatus, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'IconQuest_C_UpdateStatus::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconQuest_C_UpdateStatus, CallFunc_Array_Length_ReturnValue_1) == 0x000028, "Member 'IconQuest_C_UpdateStatus::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconQuest_C_UpdateStatus, CallFunc_Less_IntInt_ReturnValue_1) == 0x00002C, "Member 'IconQuest_C_UpdateStatus::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconQuest_C_UpdateStatus, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000030, "Member 'IconQuest_C_UpdateStatus::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconQuest_C_UpdateStatus, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000034, "Member 'IconQuest_C_UpdateStatus::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function IconQuest.IconQuest_C.Setup
// 0x0004 (0x0004 - 0x0000)
struct IconQuest_C_Setup final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconQuest_C_Setup) == 0x000004, "Wrong alignment on IconQuest_C_Setup");
static_assert(sizeof(IconQuest_C_Setup) == 0x000004, "Wrong size on IconQuest_C_Setup");
static_assert(offsetof(IconQuest_C_Setup, QuestIndex) == 0x000000, "Member 'IconQuest_C_Setup::QuestIndex' has a wrong offset!");

// Function IconQuest.IconQuest_C.OnSetInside
// 0x0018 (0x0018 - 0x0000)
struct IconQuest_C_OnSetInside final
{
public:
	bool                                          IsInSide;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_709B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_709C[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(IconQuest_C_OnSetInside) == 0x000004, "Wrong alignment on IconQuest_C_OnSetInside");
static_assert(sizeof(IconQuest_C_OnSetInside) == 0x000018, "Wrong size on IconQuest_C_OnSetInside");
static_assert(offsetof(IconQuest_C_OnSetInside, IsInSide) == 0x000000, "Member 'IconQuest_C_OnSetInside::IsInSide' has a wrong offset!");
static_assert(offsetof(IconQuest_C_OnSetInside, Temp_int_Variable) == 0x000004, "Member 'IconQuest_C_OnSetInside::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(IconQuest_C_OnSetInside, Temp_int_Variable_1) == 0x000008, "Member 'IconQuest_C_OnSetInside::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(IconQuest_C_OnSetInside, Temp_bool_Variable) == 0x00000C, "Member 'IconQuest_C_OnSetInside::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconQuest_C_OnSetInside, K2Node_Select_Default) == 0x000010, "Member 'IconQuest_C_OnSetInside::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(IconQuest_C_OnSetInside, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000014, "Member 'IconQuest_C_OnSetInside::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}

