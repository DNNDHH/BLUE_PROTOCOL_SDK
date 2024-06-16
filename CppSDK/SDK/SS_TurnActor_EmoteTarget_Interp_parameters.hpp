#pragma once

 

// Package: SS_TurnActor_EmoteTarget_Interp

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_TurnActor_EmoteTarget_Interp.SS_TurnActor_EmoteTarget_Interp_C.ReceiveGetInterpSpeed
// 0x0004 (0x0004 - 0x0000)
struct SS_TurnActor_EmoteTarget_Interp_C_ReceiveGetInterpSpeed final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_TurnActor_EmoteTarget_Interp_C_ReceiveGetInterpSpeed) == 0x000004, "Wrong alignment on SS_TurnActor_EmoteTarget_Interp_C_ReceiveGetInterpSpeed");
static_assert(sizeof(SS_TurnActor_EmoteTarget_Interp_C_ReceiveGetInterpSpeed) == 0x000004, "Wrong size on SS_TurnActor_EmoteTarget_Interp_C_ReceiveGetInterpSpeed");
static_assert(offsetof(SS_TurnActor_EmoteTarget_Interp_C_ReceiveGetInterpSpeed, ReturnValue) == 0x000000, "Member 'SS_TurnActor_EmoteTarget_Interp_C_ReceiveGetInterpSpeed::ReturnValue' has a wrong offset!");

}

