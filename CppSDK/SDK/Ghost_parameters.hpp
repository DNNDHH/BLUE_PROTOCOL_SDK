#pragma once

 

// Package: Ghost

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Ghost.Ghost_C.ExecuteUbergraph_Ghost
// 0x0018 (0x0018 - 0x0000)
struct Ghost_C_ExecuteUbergraph_Ghost final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DA0[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ghost_C_ExecuteUbergraph_Ghost) == 0x000004, "Wrong alignment on Ghost_C_ExecuteUbergraph_Ghost");
static_assert(sizeof(Ghost_C_ExecuteUbergraph_Ghost) == 0x000018, "Wrong size on Ghost_C_ExecuteUbergraph_Ghost");
static_assert(offsetof(Ghost_C_ExecuteUbergraph_Ghost, EntryPoint) == 0x000000, "Member 'Ghost_C_ExecuteUbergraph_Ghost::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ghost_C_ExecuteUbergraph_Ghost, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'Ghost_C_ExecuteUbergraph_Ghost::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ghost_C_ExecuteUbergraph_Ghost, CallFunc_GetDesiredSize_ReturnValue) == 0x000008, "Member 'Ghost_C_ExecuteUbergraph_Ghost::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ghost_C_ExecuteUbergraph_Ghost, CallFunc_BreakVector2D_X) == 0x000010, "Member 'Ghost_C_ExecuteUbergraph_Ghost::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Ghost_C_ExecuteUbergraph_Ghost, CallFunc_BreakVector2D_Y) == 0x000014, "Member 'Ghost_C_ExecuteUbergraph_Ghost::CallFunc_BreakVector2D_Y' has a wrong offset!");

}

