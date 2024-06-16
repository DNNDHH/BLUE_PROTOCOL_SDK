#pragma once

 

// Package: QuestDetail_ProgressItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function QuestDetail_ProgressItem.QuestDetail_ProgressItem_C.SetProgress
// 0x0288 (0x0288 - 0x0000)
struct QuestDetail_ProgressItem_C_SetProgress final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInCompleted;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bQuestCompleted;                                   // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BC2[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTextTableHash                       DoneTextIndex;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  QuestStatus;                                       // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAutoReport;                                       // 0x000D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BC3[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurStep;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBQuestProgressItemUIInfo>     ProgressItemList;                                  // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BC4[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestDetail_ProgressListItem_C*        CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BC5[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestDetail_ProgressListItem_C*        CallFunc_Create_ReturnValue_1;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BC6[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BC7[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBQuestProgressItemUIInfo             CallFunc_Array_Get_Item;                           // 0x0060(0x0030)()
	bool                                          CallFunc_Enable_SBTextTableHash_ReturnValue;       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BC8[0x5];                                     // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0098(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BC9[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BCA[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetReportableStatusText_ReturnValue;      // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestDoneText_ReturnValue;             // 0x01D8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x01E8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BCB[0x5];                                     // 0x01FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_FindAcceptedQuestData_AcceptedQuestInfo;  // 0x0200(0x0060)()
	bool                                          CallFunc_FindAcceptedQuestData_Exist;              // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BCC[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBQuestProgressItemUIInfo>     CallFunc_GetQuestProgressUIInfo_OutProgressItemList; // 0x0268(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetQuestProgressUIInfo_ReturnValue;       // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BCD[0x2];                                     // 0x027A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_ProgressItem_C_SetProgress) == 0x000008, "Wrong alignment on QuestDetail_ProgressItem_C_SetProgress");
static_assert(sizeof(QuestDetail_ProgressItem_C_SetProgress) == 0x000288, "Wrong size on QuestDetail_ProgressItem_C_SetProgress");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, InQuestIndex) == 0x000000, "Member 'QuestDetail_ProgressItem_C_SetProgress::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, bInCompleted) == 0x000004, "Member 'QuestDetail_ProgressItem_C_SetProgress::bInCompleted' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, bQuestCompleted) == 0x000005, "Member 'QuestDetail_ProgressItem_C_SetProgress::bQuestCompleted' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, DoneTextIndex) == 0x000008, "Member 'QuestDetail_ProgressItem_C_SetProgress::DoneTextIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, QuestStatus) == 0x00000C, "Member 'QuestDetail_ProgressItem_C_SetProgress::QuestStatus' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, bAutoReport) == 0x00000D, "Member 'QuestDetail_ProgressItem_C_SetProgress::bAutoReport' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, QuestIndex) == 0x000010, "Member 'QuestDetail_ProgressItem_C_SetProgress::QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CurStep) == 0x000014, "Member 'QuestDetail_ProgressItem_C_SetProgress::CurStep' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, ProgressItemList) == 0x000018, "Member 'QuestDetail_ProgressItem_C_SetProgress::ProgressItemList' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, Temp_int_Variable) == 0x000028, "Member 'QuestDetail_ProgressItem_C_SetProgress::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_Create_ReturnValue) == 0x000030, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_Create_ReturnValue_1) == 0x000040, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'QuestDetail_ProgressItem_C_SetProgress::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, Temp_int_Array_Index_Variable) == 0x000054, "Member 'QuestDetail_ProgressItem_C_SetProgress::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, Temp_int_Variable_1) == 0x000058, "Member 'QuestDetail_ProgressItem_C_SetProgress::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_Array_Get_Item) == 0x000060, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_Enable_SBTextTableHash_ReturnValue) == 0x000090, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_Enable_SBTextTableHash_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_Not_PreBool_ReturnValue) == 0x000091, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, Temp_bool_Variable) == 0x000092, "Member 'QuestDetail_ProgressItem_C_SetProgress::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000098, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_FindQuestMasterData_Exist) == 0x0001B0, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, K2Node_Select_Default) == 0x0001B4, "Member 'QuestDetail_ProgressItem_C_SetProgress::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0001B8, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, Temp_bool_Variable_1) == 0x0001C0, "Member 'QuestDetail_ProgressItem_C_SetProgress::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_GetReportableStatusText_ReturnValue) == 0x0001C8, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_GetReportableStatusText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_GetQuestDoneText_ReturnValue) == 0x0001D8, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_GetQuestDoneText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, K2Node_Select_Default_1) == 0x0001E8, "Member 'QuestDetail_ProgressItem_C_SetProgress::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001F8, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_BooleanOR_ReturnValue) == 0x0001F9, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_BooleanAND_ReturnValue) == 0x0001FA, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_FindAcceptedQuestData_AcceptedQuestInfo) == 0x000200, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_FindAcceptedQuestData_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_FindAcceptedQuestData_Exist) == 0x000260, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_FindAcceptedQuestData_Exist' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, Temp_int_Variable_2) == 0x000264, "Member 'QuestDetail_ProgressItem_C_SetProgress::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_GetQuestProgressUIInfo_OutProgressItemList) == 0x000268, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_GetQuestProgressUIInfo_OutProgressItemList' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_GetQuestProgressUIInfo_ReturnValue) == 0x000278, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_GetQuestProgressUIInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000279, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_Add_IntInt_ReturnValue_1) == 0x00027C, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_ProgressItem_C_SetProgress, CallFunc_AddChildToVerticalBox_ReturnValue_1) == 0x000280, "Member 'QuestDetail_ProgressItem_C_SetProgress::CallFunc_AddChildToVerticalBox_ReturnValue_1' has a wrong offset!");

}

