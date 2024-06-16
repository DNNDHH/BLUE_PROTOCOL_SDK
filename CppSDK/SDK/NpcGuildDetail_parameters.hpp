#pragma once

 

// Package: NpcGuildDetail

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function NpcGuildDetail.NpcGuildDetail_C.ExecuteUbergraph_NpcGuildDetail
// 0x0130 (0x0130 - 0x0000)
struct NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6A3D[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildDissolutionCheckDialog_C*         CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGiuldComp_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_GuildDissolution_ReturnValue;     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A3E[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildRenameDialog_C*                   CallFunc_Create_ReturnValue_1;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A3F[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGiuldComp_ReturnValue_1;               // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0068(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A40[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGiuldComp_ReturnValue_2;               // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x0078(0x00B8)()
};
static_assert(alignof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail) == 0x000008, "Wrong alignment on NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail");
static_assert(sizeof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail) == 0x000130, "Wrong size on NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, EntryPoint) == 0x000000, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::EntryPoint' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, CallFunc_Create_ReturnValue) == 0x000038, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, CallFunc_GetGiuldComp_ReturnValue) == 0x000040, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::CallFunc_GetGiuldComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, CallFunc_Request_GuildDissolution_ReturnValue) == 0x000048, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::CallFunc_Request_GuildDissolution_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, CallFunc_Create_ReturnValue_1) == 0x000050, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, CallFunc_GetGiuldComp_ReturnValue_1) == 0x000060, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::CallFunc_GetGiuldComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, K2Node_CustomEvent_RetCode) == 0x000068, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00006C, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, CallFunc_GetGiuldComp_ReturnValue_2) == 0x000070, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::CallFunc_GetGiuldComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail, CallFunc_GetGuildData_ReturnValue) == 0x000078, "Member 'NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");

// Function NpcGuildDetail.NpcGuildDetail_C.OnChangeName
// 0x0004 (0x0004 - 0x0000)
struct NpcGuildDetail_C_OnChangeName final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuildDetail_C_OnChangeName) == 0x000004, "Wrong alignment on NpcGuildDetail_C_OnChangeName");
static_assert(sizeof(NpcGuildDetail_C_OnChangeName) == 0x000004, "Wrong size on NpcGuildDetail_C_OnChangeName");
static_assert(offsetof(NpcGuildDetail_C_OnChangeName, RetCode) == 0x000000, "Member 'NpcGuildDetail_C_OnChangeName::RetCode' has a wrong offset!");

// Function NpcGuildDetail.NpcGuildDetail_C.SetGuildData
// 0x00F8 (0x00F8 - 0x0000)
struct NpcGuildDetail_C_SetGuildData final
{
public:
	struct FGuildData                             Param_GuildData;                                   // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class USBPlayerGuildComponent*                CallFunc_GetGiuldComp_ReturnValue;                 // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildGrandMaster_ReturnValue;           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A41[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGuildId_ReturnValue;                   // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00D8(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcGuildDetail_C_SetGuildData) == 0x000008, "Wrong alignment on NpcGuildDetail_C_SetGuildData");
static_assert(sizeof(NpcGuildDetail_C_SetGuildData) == 0x0000F8, "Wrong size on NpcGuildDetail_C_SetGuildData");
static_assert(offsetof(NpcGuildDetail_C_SetGuildData, Param_GuildData) == 0x000000, "Member 'NpcGuildDetail_C_SetGuildData::Param_GuildData' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_SetGuildData, CallFunc_GetGiuldComp_ReturnValue) == 0x0000B8, "Member 'NpcGuildDetail_C_SetGuildData::CallFunc_GetGiuldComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_SetGuildData, CallFunc_IsGuildGrandMaster_ReturnValue) == 0x0000C0, "Member 'NpcGuildDetail_C_SetGuildData::CallFunc_IsGuildGrandMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_SetGuildData, CallFunc_GetGuildId_ReturnValue) == 0x0000C8, "Member 'NpcGuildDetail_C_SetGuildData::CallFunc_GetGuildId_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_SetGuildData, CallFunc_Conv_IntToText_ReturnValue) == 0x0000D8, "Member 'NpcGuildDetail_C_SetGuildData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_SetGuildData, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000F0, "Member 'NpcGuildDetail_C_SetGuildData::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_SetGuildData, CallFunc_BooleanAND_ReturnValue) == 0x0000F1, "Member 'NpcGuildDetail_C_SetGuildData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function NpcGuildDetail.NpcGuildDetail_C.GetGiuldComp
// 0x0018 (0x0018 - 0x0000)
struct NpcGuildDetail_C_GetGiuldComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuildDetail_C_GetGiuldComp) == 0x000008, "Wrong alignment on NpcGuildDetail_C_GetGiuldComp");
static_assert(sizeof(NpcGuildDetail_C_GetGiuldComp) == 0x000018, "Wrong size on NpcGuildDetail_C_GetGiuldComp");
static_assert(offsetof(NpcGuildDetail_C_GetGiuldComp, ReturnValue) == 0x000000, "Member 'NpcGuildDetail_C_GetGiuldComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_GetGiuldComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'NpcGuildDetail_C_GetGiuldComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuildDetail_C_GetGiuldComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'NpcGuildDetail_C_GetGiuldComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

}

