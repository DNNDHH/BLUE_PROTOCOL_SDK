#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskMailFlagUpdate

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskMailFlagUpdate.BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_915B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerMailComponent*                 CallFunc_GetMailComponent_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate) == 0x000018, "Wrong size on BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate, CallFunc_IsStandalone_ReturnValue) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate, CallFunc_GetMailComponent_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate::CallFunc_GetMailComponent_ReturnValue' has a wrong offset!");

}

