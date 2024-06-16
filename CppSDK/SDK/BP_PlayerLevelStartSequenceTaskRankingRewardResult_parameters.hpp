#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskRankingRewardResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult
// 0x0100 (0x0100 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C12[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C13[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, TArray<struct FSBRankingRewardData>& RankingRewardDataList)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class UClass*                                 K2Node_ClassDynamicCast_AsRanking_Reward_Result;   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C14[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URankingRewardResult_C*                 CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0058(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C15[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBRankingRewardData>           K2Node_CustomEvent_RankingRewardDataList;          // 0x0060(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C16[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface;   // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRankingRewardDebug_ReturnValue;         // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C17[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x00A8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C18[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C0(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C19[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00DC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6C1A[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue_1;  // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult) == 0x000100, "Wrong size on BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_IsStandalone_ReturnValue) == 0x000011, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, Temp_class_Variable) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, K2Node_ClassDynamicCast_AsRanking_Reward_Result) == 0x000030, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::K2Node_ClassDynamicCast_AsRanking_Reward_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, K2Node_ClassDynamicCast_bSuccess) == 0x000038, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_Create_ReturnValue) == 0x000040, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, K2Node_CustomEvent_InRetCode) == 0x000058, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, K2Node_CustomEvent_RankingRewardDataList) == 0x000060, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::K2Node_CustomEvent_RankingRewardDataList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_Greater_IntInt_ReturnValue) == 0x000074, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_GetSBPlayerController_ReturnValue) == 0x000078, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_GetHUD_ReturnValue) == 0x000080, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, K2Node_CustomEvent_Loaded) == 0x000088, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, K2Node_DynamicCast_AsSBNotify_Message_Interface) == 0x000090, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::K2Node_DynamicCast_AsSBNotify_Message_Interface' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_IsValid_ReturnValue) == 0x0000A1, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_IsRankingRewardDebug_ReturnValue) == 0x0000A2, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_IsRankingRewardDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_GetSBRetMessage_ReturnValue) == 0x0000A8, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C0, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_BooleanAND_ReturnValue) == 0x0000D8, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000DC, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_GetPlayerStorageComponent_ReturnValue_1) == 0x0000F0, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_GetPlayerStorageComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult, CallFunc_IsValid_ReturnValue_1) == 0x0000F8, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.CustomEvent_0
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_0 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C1B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBRankingRewardData>           RankingRewardDataList;                             // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_0) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_0");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_0) == 0x000018, "Wrong size on BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_0");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_0, InRetCode) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_0::InRetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_0, RankingRewardDataList) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_0::RankingRewardDataList' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.OnLoaded_581557924E9E2085AFE4E7A014C633C1
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_OnLoaded_581557924E9E2085AFE4E7A014C633C1 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_OnLoaded_581557924E9E2085AFE4E7A014C633C1) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_OnLoaded_581557924E9E2085AFE4E7A014C633C1");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_OnLoaded_581557924E9E2085AFE4E7A014C633C1) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_OnLoaded_581557924E9E2085AFE4E7A014C633C1");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_OnLoaded_581557924E9E2085AFE4E7A014C633C1, Loaded) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_OnLoaded_581557924E9E2085AFE4E7A014C633C1::Loaded' has a wrong offset!");

}

