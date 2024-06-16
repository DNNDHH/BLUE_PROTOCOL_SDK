#pragma once

 

// Package: QuestBoard_ListItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function QuestBoard_ListItem.QuestBoard_ListItem_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct QuestBoard_ListItem_C_OnClick__DelegateSignature final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestBoard_ListItem_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on QuestBoard_ListItem_C_OnClick__DelegateSignature");
static_assert(sizeof(QuestBoard_ListItem_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on QuestBoard_ListItem_C_OnClick__DelegateSignature");
static_assert(offsetof(QuestBoard_ListItem_C_OnClick__DelegateSignature, QuestIndex) == 0x000000, "Member 'QuestBoard_ListItem_C_OnClick__DelegateSignature::QuestIndex' has a wrong offset!");

// Function QuestBoard_ListItem.QuestBoard_ListItem_C.OnBtnSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct QuestBoard_ListItem_C_OnBtnSelected__DelegateSignature final
{
public:
	class UQuestBoard_ListItem_C*                 Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestBoard_ListItem_C_OnBtnSelected__DelegateSignature) == 0x000008, "Wrong alignment on QuestBoard_ListItem_C_OnBtnSelected__DelegateSignature");
static_assert(sizeof(QuestBoard_ListItem_C_OnBtnSelected__DelegateSignature) == 0x000008, "Wrong size on QuestBoard_ListItem_C_OnBtnSelected__DelegateSignature");
static_assert(offsetof(QuestBoard_ListItem_C_OnBtnSelected__DelegateSignature, Item) == 0x000000, "Member 'QuestBoard_ListItem_C_OnBtnSelected__DelegateSignature::Item' has a wrong offset!");

// Function QuestBoard_ListItem.QuestBoard_ListItem_C.ExecuteUbergraph_QuestBoard_ListItem
// 0x0008 (0x0008 - 0x0000)
struct QuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuestIndex_QuestIndex;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem) == 0x000004, "Wrong alignment on QuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem");
static_assert(sizeof(QuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem) == 0x000008, "Wrong size on QuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem");
static_assert(offsetof(QuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem, EntryPoint) == 0x000000, "Member 'QuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem, CallFunc_GetQuestIndex_QuestIndex) == 0x000004, "Member 'QuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem::CallFunc_GetQuestIndex_QuestIndex' has a wrong offset!");

// Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetInfo
// 0x0298 (0x0298 - 0x0000)
struct QuestBoard_ListItem_C_SetInfo final
{
public:
	struct FQuestMasterData                       TmpQuestMasterData;                                // 0x0000(0x0118)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7636[0x2];                                     // 0x011E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetQuestIndex_QuestIndex;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuestIndex_QuestIndex_1;               // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuestAcceptableCount_OutNum;           // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuestAcceptableCount_OutMaxNum;        // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestAcceptableCount_ReturnValue;      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7637[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetQuestDeadlineOfUnlockCondition_OutDeadline; // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestDeadlineOfUnlockCondition_ReturnValue; // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0143(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuestIndex_QuestIndex_2;               // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7638[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0150(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestDisplayStatus_OutQuestStatus;     // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7639[0x6];                                     // 0x026A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetQuestNameByTextId_ReturnValue;         // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0280(0x0018)()
};
static_assert(alignof(QuestBoard_ListItem_C_SetInfo) == 0x000008, "Wrong alignment on QuestBoard_ListItem_C_SetInfo");
static_assert(sizeof(QuestBoard_ListItem_C_SetInfo) == 0x000298, "Wrong size on QuestBoard_ListItem_C_SetInfo");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, TmpQuestMasterData) == 0x000000, "Member 'QuestBoard_ListItem_C_SetInfo::TmpQuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, Temp_bool_Variable) == 0x000118, "Member 'QuestBoard_ListItem_C_SetInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, Temp_byte_Variable) == 0x000119, "Member 'QuestBoard_ListItem_C_SetInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, Temp_byte_Variable_1) == 0x00011A, "Member 'QuestBoard_ListItem_C_SetInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, Temp_byte_Variable_2) == 0x00011B, "Member 'QuestBoard_ListItem_C_SetInfo::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, Temp_byte_Variable_3) == 0x00011C, "Member 'QuestBoard_ListItem_C_SetInfo::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, Temp_bool_Variable_1) == 0x00011D, "Member 'QuestBoard_ListItem_C_SetInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_GetQuestIndex_QuestIndex) == 0x000120, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_GetQuestIndex_QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_GetQuestIndex_QuestIndex_1) == 0x000124, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_GetQuestIndex_QuestIndex_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_GetQuestAcceptableCount_OutNum) == 0x000128, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_GetQuestAcceptableCount_OutNum' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_GetQuestAcceptableCount_OutMaxNum) == 0x00012C, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_GetQuestAcceptableCount_OutMaxNum' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_GetQuestAcceptableCount_ReturnValue) == 0x000130, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_GetQuestAcceptableCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_GetQuestDeadlineOfUnlockCondition_OutDeadline) == 0x000138, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_GetQuestDeadlineOfUnlockCondition_OutDeadline' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_GetQuestDeadlineOfUnlockCondition_ReturnValue) == 0x000140, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_GetQuestDeadlineOfUnlockCondition_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_BooleanAND_ReturnValue) == 0x000141, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, K2Node_Select_Default) == 0x000142, "Member 'QuestBoard_ListItem_C_SetInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, K2Node_Select_Default_1) == 0x000143, "Member 'QuestBoard_ListItem_C_SetInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_GetQuestIndex_QuestIndex_2) == 0x000144, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_GetQuestIndex_QuestIndex_2' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_SetDateTime_ReturnValue) == 0x000148, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000150, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_FindQuestMasterData_Exist) == 0x000268, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_GetQuestDisplayStatus_OutQuestStatus) == 0x000269, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_GetQuestDisplayStatus_OutQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_GetQuestNameByTextId_ReturnValue) == 0x000270, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_GetQuestNameByTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000280, "Member 'QuestBoard_ListItem_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetQuestStatus
// 0x0260 (0x0260 - 0x0000)
struct QuestBoard_ListItem_C_SetQuestStatus final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalQuestIndex;                                   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  TmpQuestStatus;                                    // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_763A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       TmpQuestMasterData;                                // 0x0010(0x0118)(Edit, BlueprintVisible)
	int32                                         CallFunc_GetQuestIndex_QuestIndex;                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuestIndex_QuestIndex_1;               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_763B[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0140(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckPreconditionByIndex_ReturnValue;     // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_QuestStatus;               // 0x025A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x025B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestBoard_ListItem_C_SetQuestStatus) == 0x000008, "Wrong alignment on QuestBoard_ListItem_C_SetQuestStatus");
static_assert(sizeof(QuestBoard_ListItem_C_SetQuestStatus) == 0x000260, "Wrong size on QuestBoard_ListItem_C_SetQuestStatus");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, InQuestIndex) == 0x000000, "Member 'QuestBoard_ListItem_C_SetQuestStatus::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, LocalQuestIndex) == 0x000004, "Member 'QuestBoard_ListItem_C_SetQuestStatus::LocalQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, TmpQuestStatus) == 0x000008, "Member 'QuestBoard_ListItem_C_SetQuestStatus::TmpQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, TmpQuestMasterData) == 0x000010, "Member 'QuestBoard_ListItem_C_SetQuestStatus::TmpQuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, CallFunc_GetQuestIndex_QuestIndex) == 0x000128, "Member 'QuestBoard_ListItem_C_SetQuestStatus::CallFunc_GetQuestIndex_QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, CallFunc_GetQuestIndex_QuestIndex_1) == 0x00012C, "Member 'QuestBoard_ListItem_C_SetQuestStatus::CallFunc_GetQuestIndex_QuestIndex_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, CallFunc_GetNetworkDataCache_IsValid) == 0x000130, "Member 'QuestBoard_ListItem_C_SetQuestStatus::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000138, "Member 'QuestBoard_ListItem_C_SetQuestStatus::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000140, "Member 'QuestBoard_ListItem_C_SetQuestStatus::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, CallFunc_FindQuestMasterData_Exist) == 0x000258, "Member 'QuestBoard_ListItem_C_SetQuestStatus::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, CallFunc_CheckPreconditionByIndex_ReturnValue) == 0x000259, "Member 'QuestBoard_ListItem_C_SetQuestStatus::CallFunc_CheckPreconditionByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, CallFunc_GetQuestStatus_QuestStatus) == 0x00025A, "Member 'QuestBoard_ListItem_C_SetQuestStatus::CallFunc_GetQuestStatus_QuestStatus' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetQuestStatus, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00025B, "Member 'QuestBoard_ListItem_C_SetQuestStatus::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetBtnSelected
// 0x0778 (0x0778 - 0x0000)
struct QuestBoard_ListItem_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_763C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_763D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0018(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00A0(0x0088)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0128(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0150(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0178(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x0200(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0288(0x0278)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0500(0x0278)()
};
static_assert(alignof(QuestBoard_ListItem_C_SetBtnSelected) == 0x000008, "Wrong alignment on QuestBoard_ListItem_C_SetBtnSelected");
static_assert(sizeof(QuestBoard_ListItem_C_SetBtnSelected) == 0x000778, "Wrong size on QuestBoard_ListItem_C_SetBtnSelected");
static_assert(offsetof(QuestBoard_ListItem_C_SetBtnSelected, bSelected) == 0x000000, "Member 'QuestBoard_ListItem_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetBtnSelected, K2Node_MakeStruct_Margin) == 0x000004, "Member 'QuestBoard_ListItem_C_SetBtnSelected::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush) == 0x000018, "Member 'QuestBoard_ListItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_1) == 0x0000A0, "Member 'QuestBoard_ListItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000128, "Member 'QuestBoard_ListItem_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x000150, "Member 'QuestBoard_ListItem_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_2) == 0x000178, "Member 'QuestBoard_ListItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetBtnSelected, K2Node_MakeStruct_SlateBrush_3) == 0x000200, "Member 'QuestBoard_ListItem_C_SetBtnSelected::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle) == 0x000288, "Member 'QuestBoard_ListItem_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetBtnSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x000500, "Member 'QuestBoard_ListItem_C_SetBtnSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function QuestBoard_ListItem.QuestBoard_ListItem_C.HideNewIcon
// 0x0018 (0x0018 - 0x0000)
struct QuestBoard_ListItem_C_HideNewIcon final
{
public:
	struct FQuestBoardQuestData                   K2Node_MakeStruct_QuestBoardQuestData;             // 0x0000(0x0018)(NoDestructor)
};
static_assert(alignof(QuestBoard_ListItem_C_HideNewIcon) == 0x000004, "Wrong alignment on QuestBoard_ListItem_C_HideNewIcon");
static_assert(sizeof(QuestBoard_ListItem_C_HideNewIcon) == 0x000018, "Wrong size on QuestBoard_ListItem_C_HideNewIcon");
static_assert(offsetof(QuestBoard_ListItem_C_HideNewIcon, K2Node_MakeStruct_QuestBoardQuestData) == 0x000000, "Member 'QuestBoard_ListItem_C_HideNewIcon::K2Node_MakeStruct_QuestBoardQuestData' has a wrong offset!");

// Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetVisibleNewIcon
// 0x0005 (0x0005 - 0x0000)
struct QuestBoard_ListItem_C_SetVisibleNewIcon final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestBoard_ListItem_C_SetVisibleNewIcon) == 0x000001, "Wrong alignment on QuestBoard_ListItem_C_SetVisibleNewIcon");
static_assert(sizeof(QuestBoard_ListItem_C_SetVisibleNewIcon) == 0x000005, "Wrong size on QuestBoard_ListItem_C_SetVisibleNewIcon");
static_assert(offsetof(QuestBoard_ListItem_C_SetVisibleNewIcon, bVisible) == 0x000000, "Member 'QuestBoard_ListItem_C_SetVisibleNewIcon::bVisible' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetVisibleNewIcon, Temp_bool_Variable) == 0x000001, "Member 'QuestBoard_ListItem_C_SetVisibleNewIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetVisibleNewIcon, Temp_byte_Variable) == 0x000002, "Member 'QuestBoard_ListItem_C_SetVisibleNewIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetVisibleNewIcon, Temp_byte_Variable_1) == 0x000003, "Member 'QuestBoard_ListItem_C_SetVisibleNewIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestBoard_ListItem_C_SetVisibleNewIcon, K2Node_Select_Default) == 0x000004, "Member 'QuestBoard_ListItem_C_SetVisibleNewIcon::K2Node_Select_Default' has a wrong offset!");

// Function QuestBoard_ListItem.QuestBoard_ListItem_C.GetQuestIndex
// 0x0004 (0x0004 - 0x0000)
struct QuestBoard_ListItem_C_GetQuestIndex final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestBoard_ListItem_C_GetQuestIndex) == 0x000004, "Wrong alignment on QuestBoard_ListItem_C_GetQuestIndex");
static_assert(sizeof(QuestBoard_ListItem_C_GetQuestIndex) == 0x000004, "Wrong size on QuestBoard_ListItem_C_GetQuestIndex");
static_assert(offsetof(QuestBoard_ListItem_C_GetQuestIndex, QuestIndex) == 0x000000, "Member 'QuestBoard_ListItem_C_GetQuestIndex::QuestIndex' has a wrong offset!");

}

