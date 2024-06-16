#pragma once

 

// Package: CmnAnim_LiquidMemoryActive

#include "Basic.hpp"


namespace SDK::Params
{

// Function CmnAnim_LiquidMemoryActive.CmnAnim_LiquidMemoryActive_C.ExecuteUbergraph_CmnAnim_LiquidMemoryActive
// 0x0010 (0x0010 - 0x0000)
struct CmnAnim_LiquidMemoryActive_C_ExecuteUbergraph_CmnAnim_LiquidMemoryActive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C74[0x4];                                      // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnAnim_LiquidMemoryActive_C_ExecuteUbergraph_CmnAnim_LiquidMemoryActive) == 0x000008, "Wrong alignment on CmnAnim_LiquidMemoryActive_C_ExecuteUbergraph_CmnAnim_LiquidMemoryActive");
static_assert(sizeof(CmnAnim_LiquidMemoryActive_C_ExecuteUbergraph_CmnAnim_LiquidMemoryActive) == 0x000010, "Wrong size on CmnAnim_LiquidMemoryActive_C_ExecuteUbergraph_CmnAnim_LiquidMemoryActive");
static_assert(offsetof(CmnAnim_LiquidMemoryActive_C_ExecuteUbergraph_CmnAnim_LiquidMemoryActive, EntryPoint) == 0x000000, "Member 'CmnAnim_LiquidMemoryActive_C_ExecuteUbergraph_CmnAnim_LiquidMemoryActive::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnAnim_LiquidMemoryActive_C_ExecuteUbergraph_CmnAnim_LiquidMemoryActive, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CmnAnim_LiquidMemoryActive_C_ExecuteUbergraph_CmnAnim_LiquidMemoryActive::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

