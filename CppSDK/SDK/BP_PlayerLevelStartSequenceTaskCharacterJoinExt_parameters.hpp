#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskCharacterJoinExt

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt
// 0x0088 (0x0088 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91A3[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestAPI_Internal_bResult;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91A4[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0018(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91A5[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt) == 0x000088, "Wrong size on BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, CallFunc_IsStandalone_ReturnValue) == 0x000006, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, CallFunc_RequestAPI_Internal_bResult) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::CallFunc_RequestAPI_Internal_bResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, K2Node_CustomEvent_InRetCode) == 0x000014, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, CallFunc_GetSBRetMessage_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000060, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000068, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x000070, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt, K2Node_CreateDelegate_OutputDelegate_1) == 0x000078, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.OnAPICompleted
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_OnAPICompleted final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_OnAPICompleted) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_OnAPICompleted");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_OnAPICompleted) == 0x000004, "Wrong size on BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_OnAPICompleted");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_OnAPICompleted, InRetCode) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_OnAPICompleted::InRetCode' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.RequestAPI_Internal
// 0x0028 (0x0028 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91A6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91A7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestCharacterJoinExt_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal) == 0x000028, "Wrong size on BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal, bResult) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal::bResult' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal, CallFunc_RequestCharacterJoinExt_ReturnValue) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal::CallFunc_RequestCharacterJoinExt_ReturnValue' has a wrong offset!");

}

