#pragma once

 

// Package: CmnImageThrobber

#include "Basic.hpp"


namespace SDK::Params
{

// Function CmnImageThrobber.CmnImageThrobber_C.ExecuteUbergraph_CmnImageThrobber
// 0x0018 (0x0018 - 0x0000)
struct CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_934B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber) == 0x000008, "Wrong alignment on CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber");
static_assert(sizeof(CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber) == 0x000018, "Wrong size on CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber");
static_assert(offsetof(CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber, EntryPoint) == 0x000000, "Member 'CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

