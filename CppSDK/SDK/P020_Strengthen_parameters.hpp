#pragma once

 

// Package: P020_Strengthen

#include "Basic.hpp"


namespace SDK::Params
{

// Function P020_Strengthen.P020_Strengthen_C.ExecuteUbergraph_P020_Strengthen
// 0x0004 (0x0004 - 0x0000)
struct P020_Strengthen_C_ExecuteUbergraph_P020_Strengthen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P020_Strengthen_C_ExecuteUbergraph_P020_Strengthen) == 0x000004, "Wrong alignment on P020_Strengthen_C_ExecuteUbergraph_P020_Strengthen");
static_assert(sizeof(P020_Strengthen_C_ExecuteUbergraph_P020_Strengthen) == 0x000004, "Wrong size on P020_Strengthen_C_ExecuteUbergraph_P020_Strengthen");
static_assert(offsetof(P020_Strengthen_C_ExecuteUbergraph_P020_Strengthen, EntryPoint) == 0x000000, "Member 'P020_Strengthen_C_ExecuteUbergraph_P020_Strengthen::EntryPoint' has a wrong offset!");

// Function P020_Strengthen.P020_Strengthen_C.SetStNum
// 0x0018 (0x0018 - 0x0000)
struct P020_Strengthen_C_SetStNum final
{
public:
	int32                                         InNum;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81BC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P020_Strengthen_C_SetStNum) == 0x000008, "Wrong alignment on P020_Strengthen_C_SetStNum");
static_assert(sizeof(P020_Strengthen_C_SetStNum) == 0x000018, "Wrong size on P020_Strengthen_C_SetStNum");
static_assert(offsetof(P020_Strengthen_C_SetStNum, InNum) == 0x000000, "Member 'P020_Strengthen_C_SetStNum::InNum' has a wrong offset!");
static_assert(offsetof(P020_Strengthen_C_SetStNum, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'P020_Strengthen_C_SetStNum::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020_Strengthen_C_SetStNum, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'P020_Strengthen_C_SetStNum::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020_Strengthen_C_SetStNum, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'P020_Strengthen_C_SetStNum::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

}

