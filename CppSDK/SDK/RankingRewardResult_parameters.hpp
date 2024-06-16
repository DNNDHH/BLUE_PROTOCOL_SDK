#pragma once

 

// Package: RankingRewardResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function RankingRewardResult.RankingRewardResult_C.ExecuteUbergraph_RankingRewardResult
// 0x00E0 (0x00E0 - 0x0000)
struct RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_90F4[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90F5[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URewardIconListDialog_C*                CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBRankingRewardData>           K2Node_CustomEvent_InRankingReward;                // 0x0038(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90F6[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	TArray<class FName>                           CallFunc_GetIdRewardsList_List;                    // 0x0070(0x0010)(ReferenceParm)
	struct FRankingRewardData                     CallFunc_FindRankingRewardData_ReturnValue;        // 0x0080(0x0030)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90F7[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C8(0x0018)()
};
static_assert(alignof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult) == 0x000008, "Wrong alignment on RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult");
static_assert(sizeof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult) == 0x0000E0, "Wrong size on RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, EntryPoint) == 0x000000, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::EntryPoint' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, Temp_int_Variable) == 0x000020, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_Create_ReturnValue) == 0x000030, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, K2Node_CustomEvent_InRankingReward) == 0x000038, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::K2Node_CustomEvent_InRankingReward' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_Greater_IntInt_ReturnValue) == 0x00004C, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_GetMasterDataManager_IsValid) == 0x00004D, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_GetMasterDataManager_ReturnValue) == 0x000050, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_GetIdRewardsList_List) == 0x000070, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_GetIdRewardsList_List' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_FindRankingRewardData_ReturnValue) == 0x000080, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_FindRankingRewardData_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000B8, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C8, "Member 'RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function RankingRewardResult.RankingRewardResult_C.SetRankingRewardData
// 0x0010 (0x0010 - 0x0000)
struct RankingRewardResult_C_SetRankingRewardData final
{
public:
	TArray<struct FSBRankingRewardData>           InRankingReward;                                   // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(RankingRewardResult_C_SetRankingRewardData) == 0x000008, "Wrong alignment on RankingRewardResult_C_SetRankingRewardData");
static_assert(sizeof(RankingRewardResult_C_SetRankingRewardData) == 0x000010, "Wrong size on RankingRewardResult_C_SetRankingRewardData");
static_assert(offsetof(RankingRewardResult_C_SetRankingRewardData, InRankingReward) == 0x000000, "Member 'RankingRewardResult_C_SetRankingRewardData::InRankingReward' has a wrong offset!");

// Function RankingRewardResult.RankingRewardResult_C.GetIdRewardsList
// 0x0078 (0x0078 - 0x0000)
struct RankingRewardResult_C_GetIdRewardsList final
{
public:
	struct FRankingRewardData                     Param_RankingRewardData;                           // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                           List;                                              // 0x0030(0x0010)(Parm, OutParm)
	TArray<class FName>                           Swap;                                              // 0x0040(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRankingTablereRewardData              CallFunc_Array_Get_Item;                           // 0x0058(0x000C)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90F8[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingRewardResult_C_GetIdRewardsList) == 0x000008, "Wrong alignment on RankingRewardResult_C_GetIdRewardsList");
static_assert(sizeof(RankingRewardResult_C_GetIdRewardsList) == 0x000078, "Wrong size on RankingRewardResult_C_GetIdRewardsList");
static_assert(offsetof(RankingRewardResult_C_GetIdRewardsList, Param_RankingRewardData) == 0x000000, "Member 'RankingRewardResult_C_GetIdRewardsList::Param_RankingRewardData' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_GetIdRewardsList, List) == 0x000030, "Member 'RankingRewardResult_C_GetIdRewardsList::List' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_GetIdRewardsList, Swap) == 0x000040, "Member 'RankingRewardResult_C_GetIdRewardsList::Swap' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_GetIdRewardsList, Temp_int_Array_Index_Variable) == 0x000050, "Member 'RankingRewardResult_C_GetIdRewardsList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_GetIdRewardsList, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'RankingRewardResult_C_GetIdRewardsList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_GetIdRewardsList, CallFunc_Array_Get_Item) == 0x000058, "Member 'RankingRewardResult_C_GetIdRewardsList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_GetIdRewardsList, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'RankingRewardResult_C_GetIdRewardsList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_GetIdRewardsList, CallFunc_Array_Add_ReturnValue) == 0x000068, "Member 'RankingRewardResult_C_GetIdRewardsList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_GetIdRewardsList, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'RankingRewardResult_C_GetIdRewardsList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardResult_C_GetIdRewardsList, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'RankingRewardResult_C_GetIdRewardsList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

