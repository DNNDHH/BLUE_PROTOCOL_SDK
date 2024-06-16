#pragma once

 

// Package: BP_QuestBPFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestCategory2
// 0x0138 (0x0138 - 0x0000)
struct BP_QuestBPFunctionLibrary_C_GetQuestCategory2 final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_934C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               Category2;                                         // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_934D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0018(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_QuestBPFunctionLibrary_C_GetQuestCategory2) == 0x000008, "Wrong alignment on BP_QuestBPFunctionLibrary_C_GetQuestCategory2");
static_assert(sizeof(BP_QuestBPFunctionLibrary_C_GetQuestCategory2) == 0x000138, "Wrong size on BP_QuestBPFunctionLibrary_C_GetQuestCategory2");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestCategory2, QuestIndex) == 0x000000, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestCategory2::QuestIndex' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestCategory2, __WorldContext) == 0x000008, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestCategory2::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestCategory2, Category2) == 0x000010, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestCategory2::Category2' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestCategory2, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000018, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestCategory2::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestCategory2, CallFunc_FindQuestMasterData_Exist) == 0x000130, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestCategory2::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");

// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindRewardMasterData
// 0x0048 (0x0048 - 0x0000)
struct BP_QuestBPFunctionLibrary_C_FindRewardMasterData final
{
public:
	class FName                                   InRewardId;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterReward                        ReturnValue;                                       // 0x0010(0x0014)(Parm, OutParm, ReturnParm, NoDestructor)
	bool                                          IsExist;                                           // 0x0024(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_934E[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterReward_IsExists;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_934F[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindMasterReward_ReturnValue;             // 0x0034(0x0014)(NoDestructor)
};
static_assert(alignof(BP_QuestBPFunctionLibrary_C_FindRewardMasterData) == 0x000008, "Wrong alignment on BP_QuestBPFunctionLibrary_C_FindRewardMasterData");
static_assert(sizeof(BP_QuestBPFunctionLibrary_C_FindRewardMasterData) == 0x000048, "Wrong size on BP_QuestBPFunctionLibrary_C_FindRewardMasterData");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindRewardMasterData, InRewardId) == 0x000000, "Member 'BP_QuestBPFunctionLibrary_C_FindRewardMasterData::InRewardId' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindRewardMasterData, __WorldContext) == 0x000008, "Member 'BP_QuestBPFunctionLibrary_C_FindRewardMasterData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindRewardMasterData, ReturnValue) == 0x000010, "Member 'BP_QuestBPFunctionLibrary_C_FindRewardMasterData::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindRewardMasterData, IsExist) == 0x000024, "Member 'BP_QuestBPFunctionLibrary_C_FindRewardMasterData::IsExist' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindRewardMasterData, CallFunc_GetMasterDataManager_IsValid) == 0x000025, "Member 'BP_QuestBPFunctionLibrary_C_FindRewardMasterData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindRewardMasterData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'BP_QuestBPFunctionLibrary_C_FindRewardMasterData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindRewardMasterData, CallFunc_FindMasterReward_IsExists) == 0x000030, "Member 'BP_QuestBPFunctionLibrary_C_FindRewardMasterData::CallFunc_FindMasterReward_IsExists' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindRewardMasterData, CallFunc_FindMasterReward_ReturnValue) == 0x000034, "Member 'BP_QuestBPFunctionLibrary_C_FindRewardMasterData::CallFunc_FindMasterReward_ReturnValue' has a wrong offset!");

// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.IsQuestMultipleCompletable
// 0x01A0 (0x01A0 - 0x0000)
struct BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9350[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRet;                                              // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9351[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_FindAcceptedQuestData_AcceptedQuestInfo;  // 0x0018(0x0060)()
	bool                                          CallFunc_FindAcceptedQuestData_Exist;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9352[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0080(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x019B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x019D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x019E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable) == 0x000008, "Wrong alignment on BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable");
static_assert(sizeof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable) == 0x0001A0, "Wrong size on BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, InQuestIndex) == 0x000000, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::InQuestIndex' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, __WorldContext) == 0x000008, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, bRet) == 0x000010, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::bRet' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, CallFunc_FindAcceptedQuestData_AcceptedQuestInfo) == 0x000018, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::CallFunc_FindAcceptedQuestData_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, CallFunc_FindAcceptedQuestData_Exist) == 0x000078, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::CallFunc_FindAcceptedQuestData_Exist' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000080, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, CallFunc_FindQuestMasterData_Exist) == 0x000198, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, CallFunc_BooleanAND_ReturnValue) == 0x000199, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, CallFunc_Less_IntInt_ReturnValue) == 0x00019A, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, CallFunc_Greater_IntInt_ReturnValue) == 0x00019B, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00019C, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, CallFunc_BooleanAND_ReturnValue_1) == 0x00019D, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable, CallFunc_BooleanOR_ReturnValue) == 0x00019E, "Member 'BP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestDisplayStatus
// 0x0048 (0x0048 - 0x0000)
struct BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9353[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  OutQuestStatus;                                    // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPreCondition;                                     // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bMultipleCompletableCondition;                     // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9354[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpQuestIndex;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  TmpQuestStatus;                                    // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9355[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  Temp_byte_Variable_1;                              // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  Temp_byte_Variable_2;                              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  CallFunc_GetQuestStatus_QuestStatus;               // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FDateTime                              CallFunc_CheckQuestRevivalCondition_OutRevivalDate; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckQuestRevivalCondition_ReturnValue;   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  K2Node_Select_Default;                             // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  K2Node_Select_Default_1;                           // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPreconditionByIndex_ReturnValue;     // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  K2Node_Select_Default_2;                           // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsQuestMultipleCompletable_bRet;          // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_3;                           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus) == 0x000008, "Wrong alignment on BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus");
static_assert(sizeof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus) == 0x000048, "Wrong size on BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, InQuestIndex) == 0x000000, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::InQuestIndex' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, __WorldContext) == 0x000008, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, OutQuestStatus) == 0x000010, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::OutQuestStatus' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, bPreCondition) == 0x000011, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::bPreCondition' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, bMultipleCompletableCondition) == 0x000012, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::bMultipleCompletableCondition' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, TmpQuestIndex) == 0x000014, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::TmpQuestIndex' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, TmpQuestStatus) == 0x000018, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::TmpQuestStatus' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, Temp_byte_Variable) == 0x000019, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, CallFunc_GetNetworkDataCache_IsValid) == 0x00001A, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000020, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, Temp_bool_Variable) == 0x000028, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, Temp_bool_Variable_1) == 0x000029, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, Temp_bool_Variable_2) == 0x00002A, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, Temp_byte_Variable_1) == 0x00002B, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, Temp_bool_Variable_3) == 0x00002C, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, Temp_byte_Variable_2) == 0x00002D, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, CallFunc_GetQuestStatus_QuestStatus) == 0x00002E, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::CallFunc_GetQuestStatus_QuestStatus' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, CallFunc_BooleanAND_ReturnValue) == 0x00002F, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, CallFunc_CheckQuestRevivalCondition_OutRevivalDate) == 0x000030, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::CallFunc_CheckQuestRevivalCondition_OutRevivalDate' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, CallFunc_CheckQuestRevivalCondition_ReturnValue) == 0x000038, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::CallFunc_CheckQuestRevivalCondition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, Temp_bool_Variable_4) == 0x000039, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, K2Node_Select_Default) == 0x00003A, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, K2Node_Select_Default_1) == 0x00003B, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, CallFunc_CheckPreconditionByIndex_ReturnValue) == 0x00003C, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::CallFunc_CheckPreconditionByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, K2Node_Select_Default_2) == 0x00003D, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, K2Node_SwitchEnum_CmpSuccess) == 0x00003E, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, CallFunc_IsQuestMultipleCompletable_bRet) == 0x00003F, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::CallFunc_IsQuestMultipleCompletable_bRet' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus, K2Node_Select_Default_3) == 0x000040, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus::K2Node_Select_Default_3' has a wrong offset!");

// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetAcceptableQuestNum
// 0x0028 (0x0028 - 0x0000)
struct BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9356[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetProceedingSubQuestNum_ReturnValue;     // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetProceedingSubQuestMax_ReturnValue;     // 0x001C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum) == 0x000008, "Wrong alignment on BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum");
static_assert(sizeof(BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum) == 0x000028, "Wrong size on BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum, __WorldContext) == 0x000000, "Member 'BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum, Num) == 0x000008, "Member 'BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum::Num' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum, CallFunc_GetNetworkDataCache_IsValid) == 0x00000C, "Member 'BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000010, "Member 'BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum, CallFunc_GetProceedingSubQuestNum_ReturnValue) == 0x000018, "Member 'BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum::CallFunc_GetProceedingSubQuestNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum, CallFunc_GetProceedingSubQuestMax_ReturnValue) == 0x00001C, "Member 'BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum::CallFunc_GetProceedingSubQuestMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'BP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestStatus
// 0x0028 (0x0028 - 0x0000)
struct BP_QuestBPFunctionLibrary_C_GetQuestStatus final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9357[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  QuestStatus;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9358[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  CallFunc_GetQuestStatus_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_QuestBPFunctionLibrary_C_GetQuestStatus) == 0x000008, "Wrong alignment on BP_QuestBPFunctionLibrary_C_GetQuestStatus");
static_assert(sizeof(BP_QuestBPFunctionLibrary_C_GetQuestStatus) == 0x000028, "Wrong size on BP_QuestBPFunctionLibrary_C_GetQuestStatus");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestStatus, QuestIndex) == 0x000000, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestStatus::QuestIndex' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestStatus, __WorldContext) == 0x000008, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestStatus::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestStatus, QuestStatus) == 0x000010, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestStatus::QuestStatus' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestStatus, CallFunc_GetNetworkDataCache_IsValid) == 0x000011, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestStatus::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestStatus, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000018, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestStatus::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_GetQuestStatus, CallFunc_GetQuestStatus_ReturnValue) == 0x000020, "Member 'BP_QuestBPFunctionLibrary_C_GetQuestStatus::CallFunc_GetQuestStatus_ReturnValue' has a wrong offset!");

// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindQuestMasterData
// 0x0258 (0x0258 - 0x0000)
struct BP_QuestBPFunctionLibrary_C_FindQuestMasterData final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9359[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestMasterData                       QuestMasterData;                                   // 0x0010(0x0118)(Parm, OutParm)
	bool                                          Exist;                                             // 0x0128(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_935A[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestMasterData_IsExists;              // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_935B[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_GetQuestMasterData_ReturnValue;           // 0x0140(0x0118)()
};
static_assert(alignof(BP_QuestBPFunctionLibrary_C_FindQuestMasterData) == 0x000008, "Wrong alignment on BP_QuestBPFunctionLibrary_C_FindQuestMasterData");
static_assert(sizeof(BP_QuestBPFunctionLibrary_C_FindQuestMasterData) == 0x000258, "Wrong size on BP_QuestBPFunctionLibrary_C_FindQuestMasterData");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterData, QuestIndex) == 0x000000, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterData::QuestIndex' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterData, __WorldContext) == 0x000008, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterData, QuestMasterData) == 0x000010, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterData::QuestMasterData' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterData, Exist) == 0x000128, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterData::Exist' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterData, CallFunc_GetMasterDataManager_IsValid) == 0x000129, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000130, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterData, CallFunc_GetQuestMasterData_IsExists) == 0x000138, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterData::CallFunc_GetQuestMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterData, CallFunc_GetQuestMasterData_ReturnValue) == 0x000140, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterData::CallFunc_GetQuestMasterData_ReturnValue' has a wrong offset!");

// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindAcceptedQuestData
// 0x0150 (0x0150 - 0x0000)
struct BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_935C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     AcceptedQuestInfo;                                 // 0x0010(0x0060)(Parm, OutParm)
	bool                                          Exist;                                             // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_935D[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     K2Node_MakeStruct_AcceptedQuestInfo;               // 0x0078(0x0060)()
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_935E[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAcceptedQuestData_bExist;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_935F[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_FindAcceptedQuestData_ReturnValue;        // 0x00F0(0x0060)()
};
static_assert(alignof(BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData) == 0x000008, "Wrong alignment on BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData");
static_assert(sizeof(BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData) == 0x000150, "Wrong size on BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData, QuestIndex) == 0x000000, "Member 'BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData::QuestIndex' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData, __WorldContext) == 0x000008, "Member 'BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData, AcceptedQuestInfo) == 0x000010, "Member 'BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData::AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData, Exist) == 0x000070, "Member 'BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData::Exist' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData, K2Node_MakeStruct_AcceptedQuestInfo) == 0x000078, "Member 'BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData::K2Node_MakeStruct_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData, CallFunc_GetNetworkDataCache_IsValid) == 0x0000D8, "Member 'BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000E0, "Member 'BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData, CallFunc_FindAcceptedQuestData_bExist) == 0x0000E8, "Member 'BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData::CallFunc_FindAcceptedQuestData_bExist' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData, CallFunc_FindAcceptedQuestData_ReturnValue) == 0x0000F0, "Member 'BP_QuestBPFunctionLibrary_C_FindAcceptedQuestData::CallFunc_FindAcceptedQuestData_ReturnValue' has a wrong offset!");

// Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindQuestMasterDataByLongId
// 0x0258 (0x0258 - 0x0000)
struct BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId final
{
public:
	class FName                                   InLongId;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestMasterData                       QuestMasterData;                                   // 0x0010(0x0118)(Parm, OutParm)
	bool                                          bExist;                                            // 0x0128(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9360[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestMasterDataByLongId_IsExists;      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9361[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_GetQuestMasterDataByLongId_ReturnValue;   // 0x0140(0x0118)()
};
static_assert(alignof(BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId) == 0x000008, "Wrong alignment on BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId");
static_assert(sizeof(BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId) == 0x000258, "Wrong size on BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId, InLongId) == 0x000000, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId::InLongId' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId, __WorldContext) == 0x000008, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId, QuestMasterData) == 0x000010, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId::QuestMasterData' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId, bExist) == 0x000128, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId::bExist' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId, CallFunc_GetMasterDataManager_IsValid) == 0x000129, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000130, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId, CallFunc_GetQuestMasterDataByLongId_IsExists) == 0x000138, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId::CallFunc_GetQuestMasterDataByLongId_IsExists' has a wrong offset!");
static_assert(offsetof(BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId, CallFunc_GetQuestMasterDataByLongId_ReturnValue) == 0x000140, "Member 'BP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId::CallFunc_GetQuestMasterDataByLongId_ReturnValue' has a wrong offset!");

}

