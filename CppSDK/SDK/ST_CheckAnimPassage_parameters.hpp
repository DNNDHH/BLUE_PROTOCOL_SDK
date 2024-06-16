#pragma once

 

// Package: ST_CheckAnimPassage

#include "Basic.hpp"


namespace SDK::Params
{

// Function ST_CheckAnimPassage.ST_CheckAnimPassage_C.ReceiveCanEnter
// 0x0020 (0x0020 - 0x0000)
struct ST_CheckAnimPassage_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49F4[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimTimeLength_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimTime_ReturnValue;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49F5[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_CheckAnimPassage_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_CheckAnimPassage_C_ReceiveCanEnter");
static_assert(sizeof(ST_CheckAnimPassage_C_ReceiveCanEnter) == 0x000020, "Wrong size on ST_CheckAnimPassage_C_ReceiveCanEnter");
static_assert(offsetof(ST_CheckAnimPassage_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_CheckAnimPassage_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_CheckAnimPassage_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_CheckAnimPassage_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckAnimPassage_C_ReceiveCanEnter, CallFunc_GetAnimTimeLength_ReturnValue) == 0x00000C, "Member 'ST_CheckAnimPassage_C_ReceiveCanEnter::CallFunc_GetAnimTimeLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckAnimPassage_C_ReceiveCanEnter, CallFunc_GetAnimTime_ReturnValue) == 0x000010, "Member 'ST_CheckAnimPassage_C_ReceiveCanEnter::CallFunc_GetAnimTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckAnimPassage_C_ReceiveCanEnter, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000014, "Member 'ST_CheckAnimPassage_C_ReceiveCanEnter::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckAnimPassage_C_ReceiveCanEnter, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000018, "Member 'ST_CheckAnimPassage_C_ReceiveCanEnter::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckAnimPassage_C_ReceiveCanEnter, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00001C, "Member 'ST_CheckAnimPassage_C_ReceiveCanEnter::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}

