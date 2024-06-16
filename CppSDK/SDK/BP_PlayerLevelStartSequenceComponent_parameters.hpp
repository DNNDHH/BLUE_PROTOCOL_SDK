#pragma once

 

// Package: BP_PlayerLevelStartSequenceComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceComponent.BP_PlayerLevelStartSequenceComponent_C.CreateTaskList
// 0x0006 (0x0006 - 0x0000)
struct BP_PlayerLevelStartSequenceComponent_C_CreateTaskList final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidFangExpedition_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceComponent_C_CreateTaskList) == 0x000001, "Wrong alignment on BP_PlayerLevelStartSequenceComponent_C_CreateTaskList");
static_assert(sizeof(BP_PlayerLevelStartSequenceComponent_C_CreateTaskList) == 0x000006, "Wrong size on BP_PlayerLevelStartSequenceComponent_C_CreateTaskList");
static_assert(offsetof(BP_PlayerLevelStartSequenceComponent_C_CreateTaskList, ReturnValue) == 0x000000, "Member 'BP_PlayerLevelStartSequenceComponent_C_CreateTaskList::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceComponent_C_CreateTaskList, CallFunc_ValidFangExpedition_ReturnValue) == 0x000001, "Member 'BP_PlayerLevelStartSequenceComponent_C_CreateTaskList::CallFunc_ValidFangExpedition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceComponent_C_CreateTaskList, CallFunc_IsStandalone_ReturnValue) == 0x000002, "Member 'BP_PlayerLevelStartSequenceComponent_C_CreateTaskList::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceComponent_C_CreateTaskList, CallFunc_IsDedicatedServer_ReturnValue) == 0x000003, "Member 'BP_PlayerLevelStartSequenceComponent_C_CreateTaskList::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceComponent_C_CreateTaskList, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'BP_PlayerLevelStartSequenceComponent_C_CreateTaskList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceComponent_C_CreateTaskList, CallFunc_BooleanOR_ReturnValue) == 0x000005, "Member 'BP_PlayerLevelStartSequenceComponent_C_CreateTaskList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

