#pragma once

 

// Package: BP_NowLoading

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NowLoading.BP_NowLoading_C.ExecuteUbergraph_BP_NowLoading
// 0x0010 (0x0010 - 0x0000)
struct BP_NowLoading_C_ExecuteUbergraph_BP_NowLoading final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FDF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NowLoading_C_ExecuteUbergraph_BP_NowLoading) == 0x000008, "Wrong alignment on BP_NowLoading_C_ExecuteUbergraph_BP_NowLoading");
static_assert(sizeof(BP_NowLoading_C_ExecuteUbergraph_BP_NowLoading) == 0x000010, "Wrong size on BP_NowLoading_C_ExecuteUbergraph_BP_NowLoading");
static_assert(offsetof(BP_NowLoading_C_ExecuteUbergraph_BP_NowLoading, EntryPoint) == 0x000000, "Member 'BP_NowLoading_C_ExecuteUbergraph_BP_NowLoading::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NowLoading_C_ExecuteUbergraph_BP_NowLoading, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_NowLoading_C_ExecuteUbergraph_BP_NowLoading::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

