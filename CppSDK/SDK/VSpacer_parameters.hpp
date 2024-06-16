#pragma once

 

// Package: VSpacer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function VSpacer.VSpacer_C.SetSpace
// 0x0014 (0x0014 - 0x0000)
struct VSpacer_C_SetSpace final
{
public:
	float                                         YOffset;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VSpacer_C_SetSpace) == 0x000004, "Wrong alignment on VSpacer_C_SetSpace");
static_assert(sizeof(VSpacer_C_SetSpace) == 0x000014, "Wrong size on VSpacer_C_SetSpace");
static_assert(offsetof(VSpacer_C_SetSpace, YOffset) == 0x000000, "Member 'VSpacer_C_SetSpace::YOffset' has a wrong offset!");
static_assert(offsetof(VSpacer_C_SetSpace, CallFunc_BreakVector2D_X) == 0x000004, "Member 'VSpacer_C_SetSpace::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(VSpacer_C_SetSpace, CallFunc_BreakVector2D_Y) == 0x000008, "Member 'VSpacer_C_SetSpace::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(VSpacer_C_SetSpace, CallFunc_MakeVector2D_ReturnValue) == 0x00000C, "Member 'VSpacer_C_SetSpace::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}

