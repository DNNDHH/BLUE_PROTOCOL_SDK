#pragma once

 

// Package: GashaLever

#include "Basic.hpp"


namespace SDK::Params
{

// Function GashaLever.GashaLever_C.ExecuteUbergraph_GashaLever
// 0x0010 (0x0010 - 0x0000)
struct GashaLever_C_ExecuteUbergraph_GashaLever final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaLever_C_ExecuteUbergraph_GashaLever) == 0x000008, "Wrong alignment on GashaLever_C_ExecuteUbergraph_GashaLever");
static_assert(sizeof(GashaLever_C_ExecuteUbergraph_GashaLever) == 0x000010, "Wrong size on GashaLever_C_ExecuteUbergraph_GashaLever");
static_assert(offsetof(GashaLever_C_ExecuteUbergraph_GashaLever, EntryPoint) == 0x000000, "Member 'GashaLever_C_ExecuteUbergraph_GashaLever::EntryPoint' has a wrong offset!");
static_assert(offsetof(GashaLever_C_ExecuteUbergraph_GashaLever, CallFunc_PostAkEvent_ReturnValue) == 0x000004, "Member 'GashaLever_C_ExecuteUbergraph_GashaLever::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaLever_C_ExecuteUbergraph_GashaLever, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'GashaLever_C_ExecuteUbergraph_GashaLever::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

