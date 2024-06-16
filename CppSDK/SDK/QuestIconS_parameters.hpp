#pragma once

 

// Package: QuestIconS

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function QuestIconS.QuestIconS_C.SetIcon
// 0x02D8 (0x02D8 - 0x0000)
struct QuestIconS_C_SetIcon final
{
public:
	EQuestStatus                                  InQuestStatus;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               InQuestCategory2;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInAllowProceed;                                   // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8856[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EQuestStatus, class UTexture2D*>         KeyCharacterQuestIcons;                            // 0x0008(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, class UTexture2D*>         ReleaseFunctionsQuestIcons;                        // 0x0058(0x0050)(Edit, BlueprintVisible)
	EQuestStatus                                  TmpQuestStatus;                                    // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8857[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EQuestStatus, class UTexture2D*>         SubQuestIcons;                                     // 0x00B0(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, class UTexture2D*>         MainQuestIcons;                                    // 0x0100(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput;            // 0x0150(0x0050)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8858[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EQuestStatus, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput_1;          // 0x01A8(0x0050)()
	TMap<EQuestStatus, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput_2;          // 0x01F8(0x0050)()
	TMap<EQuestStatus, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput_3;          // 0x0248(0x0050)()
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  Temp_byte_Variable;                                // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8859[0x5];                                     // 0x02A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_1;                         // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  K2Node_Select_Default;                             // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_885A[0x6];                                     // 0x02B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_2;                         // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_885B[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_3;                         // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_3;                   // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestIconS_C_SetIcon) == 0x000008, "Wrong alignment on QuestIconS_C_SetIcon");
static_assert(sizeof(QuestIconS_C_SetIcon) == 0x0002D8, "Wrong size on QuestIconS_C_SetIcon");
static_assert(offsetof(QuestIconS_C_SetIcon, InQuestStatus) == 0x000000, "Member 'QuestIconS_C_SetIcon::InQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, InQuestCategory2) == 0x000001, "Member 'QuestIconS_C_SetIcon::InQuestCategory2' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, bInAllowProceed) == 0x000002, "Member 'QuestIconS_C_SetIcon::bInAllowProceed' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, KeyCharacterQuestIcons) == 0x000008, "Member 'QuestIconS_C_SetIcon::KeyCharacterQuestIcons' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, ReleaseFunctionsQuestIcons) == 0x000058, "Member 'QuestIconS_C_SetIcon::ReleaseFunctionsQuestIcons' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, TmpQuestStatus) == 0x0000A8, "Member 'QuestIconS_C_SetIcon::TmpQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, SubQuestIcons) == 0x0000B0, "Member 'QuestIconS_C_SetIcon::SubQuestIcons' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, MainQuestIcons) == 0x000100, "Member 'QuestIconS_C_SetIcon::MainQuestIcons' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, K2Node_MakeVariable_MakeVariableOutput) == 0x000150, "Member 'QuestIconS_C_SetIcon::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, K2Node_SwitchEnum_CmpSuccess) == 0x0001A0, "Member 'QuestIconS_C_SetIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, K2Node_MakeVariable_MakeVariableOutput_1) == 0x0001A8, "Member 'QuestIconS_C_SetIcon::K2Node_MakeVariable_MakeVariableOutput_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, K2Node_MakeVariable_MakeVariableOutput_2) == 0x0001F8, "Member 'QuestIconS_C_SetIcon::K2Node_MakeVariable_MakeVariableOutput_2' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, K2Node_MakeVariable_MakeVariableOutput_3) == 0x000248, "Member 'QuestIconS_C_SetIcon::K2Node_MakeVariable_MakeVariableOutput_3' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, CallFunc_Map_Find_Value) == 0x000298, "Member 'QuestIconS_C_SetIcon::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, CallFunc_Map_Find_ReturnValue) == 0x0002A0, "Member 'QuestIconS_C_SetIcon::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, Temp_byte_Variable) == 0x0002A1, "Member 'QuestIconS_C_SetIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, Temp_bool_Variable) == 0x0002A2, "Member 'QuestIconS_C_SetIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, CallFunc_Map_Find_Value_1) == 0x0002A8, "Member 'QuestIconS_C_SetIcon::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, CallFunc_Map_Find_ReturnValue_1) == 0x0002B0, "Member 'QuestIconS_C_SetIcon::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, K2Node_Select_Default) == 0x0002B1, "Member 'QuestIconS_C_SetIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, CallFunc_Map_Find_Value_2) == 0x0002B8, "Member 'QuestIconS_C_SetIcon::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, CallFunc_Map_Find_ReturnValue_2) == 0x0002C0, "Member 'QuestIconS_C_SetIcon::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, CallFunc_Map_Find_Value_3) == 0x0002C8, "Member 'QuestIconS_C_SetIcon::CallFunc_Map_Find_Value_3' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIcon, CallFunc_Map_Find_ReturnValue_3) == 0x0002D0, "Member 'QuestIconS_C_SetIcon::CallFunc_Map_Find_ReturnValue_3' has a wrong offset!");

// Function QuestIconS.QuestIconS_C.Set Icon by Quest Index
// 0x0128 (0x0128 - 0x0000)
struct QuestIconS_C_Set_Icon_by_Quest_Index final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_885C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       LocalQuestMasterData;                              // 0x0008(0x0118)(Edit, BlueprintVisible)
	EQuestStatus                                  CallFunc_GetQuestStatusForSetIcon_OutQuestStatus;  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               CallFunc_GetQuestStatusForSetIcon_OutCategory2;    // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed; // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestIconS_C_Set_Icon_by_Quest_Index) == 0x000008, "Wrong alignment on QuestIconS_C_Set_Icon_by_Quest_Index");
static_assert(sizeof(QuestIconS_C_Set_Icon_by_Quest_Index) == 0x000128, "Wrong size on QuestIconS_C_Set_Icon_by_Quest_Index");
static_assert(offsetof(QuestIconS_C_Set_Icon_by_Quest_Index, InQuestIndex) == 0x000000, "Member 'QuestIconS_C_Set_Icon_by_Quest_Index::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_Set_Icon_by_Quest_Index, LocalQuestMasterData) == 0x000008, "Member 'QuestIconS_C_Set_Icon_by_Quest_Index::LocalQuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_Set_Icon_by_Quest_Index, CallFunc_GetQuestStatusForSetIcon_OutQuestStatus) == 0x000120, "Member 'QuestIconS_C_Set_Icon_by_Quest_Index::CallFunc_GetQuestStatusForSetIcon_OutQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_Set_Icon_by_Quest_Index, CallFunc_GetQuestStatusForSetIcon_OutCategory2) == 0x000121, "Member 'QuestIconS_C_Set_Icon_by_Quest_Index::CallFunc_GetQuestStatusForSetIcon_OutCategory2' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_Set_Icon_by_Quest_Index, CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed) == 0x000122, "Member 'QuestIconS_C_Set_Icon_by_Quest_Index::CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed' has a wrong offset!");

// Function QuestIconS.QuestIconS_C.SetIconForStepList
// 0x0018 (0x0018 - 0x0000)
struct QuestIconS_C_SetIconForStepList final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               CallFunc_GetQuestCategory2_Category2;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_885D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNextMainQuestIndex_NextMainQuest;      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatusForSetIcon_OutQuestStatus;  // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               CallFunc_GetQuestStatusForSetIcon_OutCategory2;    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed; // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatusForSetIcon_OutQuestStatus_1; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               CallFunc_GetQuestStatusForSetIcon_OutCategory2_1;  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed_1; // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue;               // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestIconS_C_SetIconForStepList) == 0x000004, "Wrong alignment on QuestIconS_C_SetIconForStepList");
static_assert(sizeof(QuestIconS_C_SetIconForStepList) == 0x000018, "Wrong size on QuestIconS_C_SetIconForStepList");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, InQuestIndex) == 0x000000, "Member 'QuestIconS_C_SetIconForStepList::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_GetQuestCategory2_Category2) == 0x000004, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_GetQuestCategory2_Category2' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_GetNextMainQuestIndex_NextMainQuest) == 0x000008, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_GetNextMainQuestIndex_NextMainQuest' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000C, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_GetQuestStatusForSetIcon_OutQuestStatus) == 0x00000D, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_GetQuestStatusForSetIcon_OutQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_GetQuestStatusForSetIcon_OutCategory2) == 0x00000E, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_GetQuestStatusForSetIcon_OutCategory2' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed) == 0x00000F, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_GetQuestStatusForSetIcon_OutQuestStatus_1) == 0x000010, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_GetQuestStatusForSetIcon_OutQuestStatus_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_GetQuestStatusForSetIcon_OutCategory2_1) == 0x000011, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_GetQuestStatusForSetIcon_OutCategory2_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed_1) == 0x000012, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_GetQuestStatus_ReturnValue) == 0x000013, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_GetQuestStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000014, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForStepList, CallFunc_BooleanAND_ReturnValue) == 0x000015, "Member 'QuestIconS_C_SetIconForStepList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function QuestIconS.QuestIconS_C.SetIconForQuestHistory
// 0x0008 (0x0008 - 0x0000)
struct QuestIconS_C_SetIconForQuestHistory final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  CallFunc_GetQuestStatusForSetIcon_OutQuestStatus;  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               CallFunc_GetQuestStatusForSetIcon_OutCategory2;    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed; // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestIconS_C_SetIconForQuestHistory) == 0x000004, "Wrong alignment on QuestIconS_C_SetIconForQuestHistory");
static_assert(sizeof(QuestIconS_C_SetIconForQuestHistory) == 0x000008, "Wrong size on QuestIconS_C_SetIconForQuestHistory");
static_assert(offsetof(QuestIconS_C_SetIconForQuestHistory, InQuestIndex) == 0x000000, "Member 'QuestIconS_C_SetIconForQuestHistory::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForQuestHistory, CallFunc_GetQuestStatusForSetIcon_OutQuestStatus) == 0x000004, "Member 'QuestIconS_C_SetIconForQuestHistory::CallFunc_GetQuestStatusForSetIcon_OutQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForQuestHistory, CallFunc_GetQuestStatusForSetIcon_OutCategory2) == 0x000005, "Member 'QuestIconS_C_SetIconForQuestHistory::CallFunc_GetQuestStatusForSetIcon_OutCategory2' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetIconForQuestHistory, CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed) == 0x000006, "Member 'QuestIconS_C_SetIconForQuestHistory::CallFunc_GetQuestStatusForSetIcon_OutIsAllowProceed' has a wrong offset!");

// Function QuestIconS.QuestIconS_C.GetQuestStatusForSetIcon
// 0x0128 (0x0128 - 0x0000)
struct QuestIconS_C_GetQuestStatusForSetIcon final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  OutQuestStatus;                                    // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               OutCategory2;                                      // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsAllowProceed;                                 // 0x0006(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_885E[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0008(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestDisplayStatus_OutQuestStatus;     // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestIconS_C_GetQuestStatusForSetIcon) == 0x000008, "Wrong alignment on QuestIconS_C_GetQuestStatusForSetIcon");
static_assert(sizeof(QuestIconS_C_GetQuestStatusForSetIcon) == 0x000128, "Wrong size on QuestIconS_C_GetQuestStatusForSetIcon");
static_assert(offsetof(QuestIconS_C_GetQuestStatusForSetIcon, InQuestIndex) == 0x000000, "Member 'QuestIconS_C_GetQuestStatusForSetIcon::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetQuestStatusForSetIcon, OutQuestStatus) == 0x000004, "Member 'QuestIconS_C_GetQuestStatusForSetIcon::OutQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetQuestStatusForSetIcon, OutCategory2) == 0x000005, "Member 'QuestIconS_C_GetQuestStatusForSetIcon::OutCategory2' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetQuestStatusForSetIcon, OutIsAllowProceed) == 0x000006, "Member 'QuestIconS_C_GetQuestStatusForSetIcon::OutIsAllowProceed' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetQuestStatusForSetIcon, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000008, "Member 'QuestIconS_C_GetQuestStatusForSetIcon::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetQuestStatusForSetIcon, CallFunc_FindQuestMasterData_Exist) == 0x000120, "Member 'QuestIconS_C_GetQuestStatusForSetIcon::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetQuestStatusForSetIcon, CallFunc_GetQuestDisplayStatus_OutQuestStatus) == 0x000121, "Member 'QuestIconS_C_GetQuestStatusForSetIcon::CallFunc_GetQuestDisplayStatus_OutQuestStatus' has a wrong offset!");

// Function QuestIconS.QuestIconS_C.GetNextMainQuestIndex
// 0x0228 (0x0228 - 0x0000)
struct QuestIconS_C_GetNextMainQuestIndex final
{
public:
	int32                                         CurrentQuestIndex;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextMainQuest;                                     // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpCurrentQuestIndex;                              // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_885F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 MainQuestList;                                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_SortArray_ReturnValue;                    // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     CallFunc_FindAcceptedQuestData_AcceptedQuestInfo;  // 0x0058(0x0060)()
	bool                                          CallFunc_FindAcceptedQuestData_Exist;              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8860[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8861[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8862[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8863[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUnlockedQuestInfo                     CallFunc_Array_Get_Item_1;                         // 0x00F4(0x0008)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8864[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0100(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8865[0x2];                                     // 0x021A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestIconS_C_GetNextMainQuestIndex) == 0x000008, "Wrong alignment on QuestIconS_C_GetNextMainQuestIndex");
static_assert(sizeof(QuestIconS_C_GetNextMainQuestIndex) == 0x000228, "Wrong size on QuestIconS_C_GetNextMainQuestIndex");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CurrentQuestIndex) == 0x000000, "Member 'QuestIconS_C_GetNextMainQuestIndex::CurrentQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, NextMainQuest) == 0x000004, "Member 'QuestIconS_C_GetNextMainQuestIndex::NextMainQuest' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, TmpCurrentQuestIndex) == 0x000008, "Member 'QuestIconS_C_GetNextMainQuestIndex::TmpCurrentQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, MainQuestList) == 0x000010, "Member 'QuestIconS_C_GetNextMainQuestIndex::MainQuestList' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'QuestIconS_C_GetNextMainQuestIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, Temp_int_Array_Index_Variable) == 0x000028, "Member 'QuestIconS_C_GetNextMainQuestIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'QuestIconS_C_GetNextMainQuestIndex::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_SortArray_ReturnValue) == 0x000030, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_SortArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Array_Get_Item) == 0x000040, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Conv_IntToString_ReturnValue) == 0x000048, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_FindAcceptedQuestData_AcceptedQuestInfo) == 0x000058, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_FindAcceptedQuestData_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_FindAcceptedQuestData_Exist) == 0x0000B8, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_FindAcceptedQuestData_Exist' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Concat_StrStr_ReturnValue) == 0x0000C0, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Not_PreBool_ReturnValue) == 0x0000D0, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, Temp_int_Loop_Counter_Variable_1) == 0x0000D4, "Member 'QuestIconS_C_GetNextMainQuestIndex::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000DC, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_GetNetworkDataCache_IsValid) == 0x0000E0, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000E8, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Array_Length_ReturnValue_1) == 0x0000F0, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Array_Get_Item_1) == 0x0000F4, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000FC, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000100, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_FindQuestMasterData_Exist) == 0x000218, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000219, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Array_Add_ReturnValue) == 0x00021C, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_Greater_IntInt_ReturnValue) == 0x000220, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_GetNextMainQuestIndex, CallFunc_BooleanAND_ReturnValue) == 0x000221, "Member 'QuestIconS_C_GetNextMainQuestIndex::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function QuestIconS.QuestIconS_C.SetWishListIcon
// 0x0002 (0x0002 - 0x0000)
struct QuestIconS_C_SetWishListIcon final
{
public:
	EQuestStatus                                  InQuestStatus;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestIconS_C_SetWishListIcon) == 0x000001, "Wrong alignment on QuestIconS_C_SetWishListIcon");
static_assert(sizeof(QuestIconS_C_SetWishListIcon) == 0x000002, "Wrong size on QuestIconS_C_SetWishListIcon");
static_assert(offsetof(QuestIconS_C_SetWishListIcon, InQuestStatus) == 0x000000, "Member 'QuestIconS_C_SetWishListIcon::InQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestIconS_C_SetWishListIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'QuestIconS_C_SetWishListIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

